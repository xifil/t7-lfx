#pragma once
#include <std_include.hpp>
#include <utils/string.hpp>

namespace protection {
	inline bool remove_evil_keywords_from_string(const UNICODE_STRING& string) {
		static const std::wstring evil_keywords[] = {
			L"IDA",
			L"ida",
			L"HxD",
			L"cheatengine",
			L"Cheat Engine",
			L"x96dbg",
			L"x32dbg",
			L"x64dbg",
			L"Wireshark",
			L"Debug",
			L"DEBUG",
			L"msvsmon",
		};

		if (!string.Buffer || !string.Length) {
			return false;
		}

		const std::wstring_view path(string.Buffer, string.Length / sizeof(string.Buffer[0]));

		bool modified = false;
		for (const auto& keyword : evil_keywords) {
			while (true) {
				const auto pos = path.find(keyword);
				if (pos == std::wstring::npos) {
					break;
				}

				modified = true;

				for (size_t i = 0; i < keyword.size(); ++i) {
					string.Buffer[pos + i] = L'a';
				}
			}
		}

		return modified;
	}

	inline bool remove_evil_keywords_from_string(wchar_t* str, const size_t length) {
		UNICODE_STRING unicode_string{};
		unicode_string.Buffer = str;
		unicode_string.Length = static_cast<uint16_t>(length);
		unicode_string.MaximumLength = unicode_string.Length;

		return remove_evil_keywords_from_string(unicode_string);
	}

	inline bool remove_evil_keywords_from_string(char* str, const size_t length) {
		std::string_view str_view(str, length);
		std::wstring wstr(str_view.begin(), str_view.end());

		if (!remove_evil_keywords_from_string(wstr.data(), wstr.size())) {
			return false;
		}

		const std::string regular_str(wstr.begin(), wstr.end());
		memcpy(str, regular_str.data(), length);

		return true;
	}
}
