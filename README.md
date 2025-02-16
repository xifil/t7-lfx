[![License](https://img.shields.io/github/license/xifil/t7-lfx.svg)](https://github.com/xifil/t7-lfx/-/blob/master/LICENSE)
[![Open Issues](https://img.shields.io/github/issues/xifil/t7-lfx.svg)](https://github.com/xifil/t7-lfx/-/issues)
[![Discord](https://img.shields.io/discord/769966964030046298?color=%237289DA&label=members&logo=discord&logoColor=%23FFFFFF)](https://discord.gg/dPzJajt)

# [xifil](https://github.com/xifil)/[t7-lfx](https://github.com/xifil/t7-lfx)

<!--p align="center">
  <img src="assets/github/banner.png?raw=true" />
</p-->

NOTE: You must legally own [Call of Duty®: Black Ops III](https://store.steampowered.com/app/311210/) to run this mod. Cracked/Pirated versions of the game are **NOT** supported.

## Improvements made

<details>
  <summary>
    Code styling
  </summary>
  <div style="margin-left:16px;">
    Before, the general code style of this project was as follows:
<pre><code class="cpp">
void function_name()
{
    if (condition)
    {
        // ...
    }

    for (auto x = 0; x < etc; x++)
    {
        // ...
    }

    if (single_line_condition) return;

    printf("%s: very long statement!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!",
           "string here")
}
</code></pre>
    For the sake of anyone who wants to dev this (including me), this has been swiftly changed to what (in my opinion) is just a better way to format code.  
    Single line statements have been removed, spacing in long statements trimmed to one tab, brackets don't always go on next line, etc. The same sample code would be as follows:
<pre><code class="cpp">
void function_name() {
    if (condition) {
        // ...
    }

    for (auto x = 0; x < etc; x++) {
        // ...
    }

    if (single_line_condition) {
        return; // no longer single line
    }

    printf("%s: very long statement!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!",
        "string here")
}
</code></pre>
  </div>
</details>

## Compile from source

- Clone the Git repo. Do NOT download it as ZIP, that won't work.
- Update the submodules and run `premake5 vs2022` or simply use the delivered `generate.bat`.
- Build via solution file in `boiii.sln` (located in the `build` folder).

### Premake arguments

| Argument                    | Description                                    |
|:----------------------------|:-----------------------------------------------|
| `--copy-to=PATH`            | Optional, copy the EXE to a custom folder after build, define the path here if wanted. |
| `--dev-build`               | Enable development builds of the client. |

<br/>

## Disclaimer

This software has been created purely for the purposes of
academic research. It is not intended to be used to attack
other systems. Project maintainers are not responsible or
liable for misuse of the software. Use responsibly.

## Credits

- [boiii-free](https://github.com/Ezz-lol/boiii-free) - codebase
- [Likeicareaboutit](https://www.github.com/Likeicareaboutit) - Steam workshop downloader

---

> You can find the dedicated server installer [here](https://github.com/framilano/BlackOps3ServerInstaller).
