# WolfensteinRPG-RE

![Imagen1](https://github.com/user-attachments/assets/cbfab4c2-5310-45cf-a694-7a74e0a299bd)<br>

https://www.doomworld.com/forum/topic/151475

## Español
Wolfenstein RPG ingeniería inversa por [GEC]<br />
Creado por Erick Vásquez García.

Versión actual 0.1

### **Requisitos**
Requiere CMake para crear el proyecto.<br />
Requisitos para el projecto:
  * SDL2
  * Zlib
  * OpenAL

### 🔹 **Ubuntu**
Antes de compilar, asegúrate de instalar las siguientes dependencias:  
```sh
sudo apt update && sudo apt install -y cmake g++ libsdl2-dev zlib1g-dev libopenal-dev libgl1-mesa-dev
```

#### ⚙️ **Compilación**
Clona el repositorio y compila el proyecto con CMake:
```sh
git clone https://github.com/Erick194/WolfensteinRPG-RE.git
cd WolfensteinRPG-RE
mkdir build && cd build
cmake ..
make -j$(nproc)
```

#### 🚀 **Ejecución**
Después de compilar, ejecuta el juego con:
```sh
./build/src/WolfensteinRPG
```

#### 📦 **Creación del AppImage**
🔹 1. Descarga las herramientas necesarias
```sh
wget -O appimagetool https://github.com/AppImage/AppImageKit/releases/latest/download/appimagetool-x86_64.AppImage
wget -O linuxdeploy https://github.com/linuxdeploy/linuxdeploy/releases/latest/download/linuxdeploy-x86_64.AppImage
chmod +x appimagetool linuxdeploy
```
🔹 2. Generar el AppImage con el script
```sh
chmod +x make-wolfenstein-rpg-linux-appimage.sh
./make-wolfenstein-rpg-linux-appimage.sh ./appimagetool ./linuxdeploy $(pwd) ./build/src/WolfensteinRPG
```

### 🎮 **Configuración por defecto de las teclas.**

Adelante: W, Up<br />
Atras: S, Down<br />
Mover Izquierda: A<br />
Mover Derecha: D<br />
Girar Izquierda: Left<br />
Girar Derecha: Right<br />
Atq/Habl/Usar: Return<br />
Arma Siguiente: Z<br />
Arma Anteriror: X<br />
Pasar Turno: C<br />
Automapa: Tab<br />
Menú: Escape<br />
Artículos/Info: I<br />
Jeringas: O<br />
Diario: P<br />

### 🔑 **Trucos originales del juego:**

Versión J2ME/BREW:<br />
Abres menu e ingresa los siguientes numeros.<br />
3666 -> Abre el menú debug.<br />
1666 -> Reinicia el nivel.<br />
4332 -> Da al jugador todas las llaves, items y armas.<br />
3366 -> Inicia el testeo de velocidad, "Benchmark".<br />

Versión iOS:<br />
Toca las esquinas en pantalla en el siguente orden:<br />
Superior izquerda, superior derecha, inferior izquerda, inferior derecha, inferior izquerda, inferior derecha -> Abre el menu debug.<br />
Superior izquerda, superior derecha, inferior izquerda, inferior derecha, superior izquerda, inferior derecha -> Reinicia el nivel.<br />
Superior izquerda, superior derecha, inferior izquerda, inferior derecha, superior derecha, inferior derecha -> Da al jugador todas las armas, items y las llaves.<br />
Superior izquerda, superior derecha, inferior izquerda, inferior derecha, inferior izquerda, superior derecha -> Inicia el testeo de velocidad, "Benchmark".<br />

## English
Wolfenstein RPG Reverse Engineering By [GEC]<br />
Created by Erick Vásquez García.

Current version 0.1

### **Requirements**
You need CMake to make the project.<br />
What you need for the project is:
  * SDL2
  * Zlib
  * OpenAL

### 🔹 **Ubuntu**
Before compiling, make sure to install the following dependencies:
```sh
sudo apt update && sudo apt install -y cmake g++ libsdl2-dev zlib1g-dev libopenal-dev libgl1-mesa-dev
```

#### ⚙️ **Compilation**
Clone the repository and compile the project using CMake:
```sh
git clone https://github.com/Erick194/WolfensteinRPG-RE.git
cd WolfensteinRPG-RE
mkdir build && cd build
cmake ..
make -j$(nproc)
```

#### 🚀 **Execution**
After compiling, run the game with:
```sh
./build/src/WolfensteinRPG
```

#### 📦 **Creating the AppImage**
🔹 1. Download required tools
```sh
wget -O appimagetool https://github.com/AppImage/AppImageKit/releases/latest/download/appimagetool-x86_64.AppImage
wget -O linuxdeploy https://github.com/linuxdeploy/linuxdeploy/releases/latest/download/linuxdeploy-x86_64.AppImage
chmod +x appimagetool linuxdeploy
```
🔹 2. Generate the AppImage using the script
```sh
chmod +x make-wolfenstein-rpg-linux-appimage.sh
./make-wolfenstein-rpg-linux-appimage.sh ./appimagetool ./linuxdeploy $(pwd) ./build/src/WolfensteinRPG
```

### 🔹 **Windows**

Windows prerequisites:
* Visual Studio with the **Desktop development with C++** workload
* CMake
* vcpkg

The included `vcpkg.json` manifest will install the required SDL2, zlib, and OpenAL dependencies.

Run the compilation commands below from **Developer PowerShell for Visual Studio**, which configures the environment so CMake can find the relevant build tools. To open it:

1. Open the Windows **Start** menu by clicking the Windows icon or pressing the Windows key.
1. Type **Developer PowerShell for VS** in the search bar.
1. Open **Developer PowerShell for VS**.

If you don't see `Developer PowerShell for VS`, open Visual Studio and select **Tools -> Get Tools and Features...** to open the Visual Studio Installer. In the installer, select the **Workloads** tab, enable **Desktop development with C++**, and click **Modify**.

Now search the Start menu again for **Developer PowerShell for VS**. When you have it open, verify that the C++ compiler, CMake, and vcpkg are available by running:

```powershell
cl
cmake --version
vcpkg version
```

If `cl`, `cmake`, or `vcpkg` is still unavailable, go back to the Visual Studio Installer, open the **Individual components** tab, and make sure **C++ CMake tools for Windows** and **vcpkg package manager** are installed.

#### ⚙️ **Compilation**

Clone the repository:

```powershell
git clone https://github.com/Erick194/WolfensteinRPG-RE.git
cd WolfensteinRPG-RE
```

Locate the vcpkg CMake toolchain file:

```powershell
$vcpkgRoot = Split-Path (Get-Command vcpkg).Source
$toolchain = Join-Path $vcpkgRoot "scripts\buildsystems\vcpkg.cmake"
```

Configure:

```powershell
cmake -S . -B build -A x64 -DCMAKE_TOOLCHAIN_FILE="$toolchain"
```

Build:

```powershell
cmake --build build --config Release
```

The executable should now exist at:

```text
build\src\Release\WolfensteinRPG.exe
```

#### 🚀 **Execution**

From the repository root, run:

```powershell
.\build\src\Release\WolfensteinRPG.exe
```

### 🎮 **Default key configuration:**

Move Forward: W, Up<br />
Move Backward: S, Down<br />
Move Left: A<br />
Move Right: D<br />
Turn Left: Left<br />
Turn Right: Right<br />
Atk/Talk/Use: Return<br />
Next Weapon: Z<br />
Prev Weapon: X<br />
Pass Turn: C<br />
Automap: Tab<br />
Menu Open/Back: Escape<br />
Items/Info: I<br />
Syringes: O<br />
Journal: P<br />

### 🔑 **Original game cheat codes:**

J2ME/BREW Version:<br />
3666 -> Opens debug menu.<br />
1666 -> Restarts level.<br />
4332 -> Gives all keys, items and weapons to the player.<br />
3366 -> Starts speed test "Benchmark".<br />

iOS Version:<br />
Tap the screen corners in the following order:<br />
Top left, top right, bottom left, bottom right, bottom left, bottom right -> Opens debug menu.<br />
Top left, top right, bottom left, bottom right, top left, bottom right -> Restarts level.<br />
Top left, top right, bottom left, bottom right, top right, bottom right -> Gives all keys, items and weapons to the player.<br />
Top left, top right, bottom left, bottom right, bottom left, top right -> Starts speed test "Benchmark".<br />
