# raylib-calculator
A graphical calculator built with C using raylib.

### Features
- Grapical calculator interface
- Mouse & Keyboard based
- Four-column calculator keypad
- Custom interface build with Raylib

### Requirements 
Before building this project, you'll need:
- A C compiler (clang)
- GNU Make
- Raylib
- pkg-config
- Git

## Instalation
### MacOS
The easiest way to install Raylib on MacOS is through Homebrew.

1. Install [Homebrew](https://brew.sh/) if you haven't already.
2. Open Terminal.
3. Run:

```bash
brew install raylib pkg-config
```
4. Verify the installation:

```bash
pkg-config --modversion raylib
```

### Linux (Debian/Ubuntu)
1. Install development dependencies
Open your terminal and run
```bash
sudo apt update
sudo apt install build-essential clang cmake git pkg-config libglfw3-dev libgl1-mesa-dev libx11-dev libxcursor-dev libxrandr-dev libxinerama-dev libxi-dev
```
2. Download Raylib
```bash
git clone https://github.com/raysan5/raylib.git
cd raylib
```
3. Configure the build
```bash
mkdir build
cd build
cmake -DBUILD_SHARED_LIBS=ON ..
```
4. Compile Raylib
```bash
make -j2
```
5. Install Raylib
```bash
sudo make install
sudo ldconfig
```
6. Verify the installation
```bash
pkg-config --modverion raylib
```
If a version number appears, Raylib is installed and discoverable

## Building and Running 
1. Clone this repository 
```bash
git clone REPOSITORY_URL
cd raylib-calculator
```
Replace "REPOSITORY_URL" with this repository's GitHub URL.

2. Build and run
```bash
make run
```
To compile without immediately running the program, use:
```bash
make
```
To run an already compiled executable:
```bash
./calculator
```
And your done. Enjoy.
