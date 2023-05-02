[![Stand With Ukraine](https://raw.githubusercontent.com/vshymanskyy/StandWithUkraine/main/banner-personal-page.svg)](https://stand-with-ukraine.pp.ua)

# second_uni

This repo will have a code for my second uni. There's actually right now no interesting stuff, so you shouldn't care about the repo.

## FAQ

**Q:** How to run any code here?

**A:** if in a lab there's `CMakeLists.txt` file, do next stuff:

1. `cd <path_to_a_lab>`
2. `cmake -S. -Bbuild`
3. `cmake --build ./build`
4. `cd ./build`
5. `ctest`

Also such code requires to have been installed next programs:

1. a c++ compiler ( `gcc`, `clang`, `msvc`, intel's compiler, ibm's compiler etc.)
2. `cmake`
3. any generator such as `make`, `ninja`, MSBuild etc.
4. `git`
