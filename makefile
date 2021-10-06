Include := "C:\SDL2-2.0.16\i686-w64-mingw32\include\SDL2"
Lib := "C:\SDL2-2.0.16\i686-w64-mingw32\lib"
DLL := "-lmingw32" "-lSDL2main" "-lSDL2"

all := build

build:
	g++ -o fungame main.cpp Game.cpp -L${Lib} -I${Include} ${DLL}