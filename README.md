# Nova FiveM External Hack

This project is an external hack software developed for the game FiveM. This software includes several features designed to provide various in-game advantages. These features include aimbot, ESP (extra-sensory perception), rapid fire, no recoil and more. The code is developed to run on the Windows platform and works by modifying the game's memory management.

## Features

- **Aimbot**: Automatically aims at the target.
- **ESP**: Makes opponents appear on the screen.
- **Rapid Fire**: Allows weapons to fire very fast.
- **No Recoil**: Eliminates weapon recoil.
- **No Spread**: Prevents bullets from scattering.
- **Visibility Check**: Checks if the opponent is visible.

## Setup and Use

1. **Requirements**:
   - Visual Studio (C++ compiler)
   - DirectX SDK
   - Related dependencies: ImGui, d3dx9, ect.

2. **Installation**:
   - Clone the project on your computer:
   - Install the necessary dependencies and compile the project.

   **Note:** Compile the project in `Debug` mode. To Avoid Error

3. **Usage**:
   - Make sure the game is running before launching the hack program.
   - The menu will automatically load and appear in the top left corner of the screen.
   - Run the program The menu will automatically load and appear in the top left corner of the screen.
   - Activate the features you want.
   - Press the Insert (INS) key to hide the menu.

## Preview
![Visuals](https://github.com/user-attachments/assets/b67fe243-b14a-40b0-86d0-db0c8bc5d836)

![aimsettings](https://github.com/user-attachments/assets/d5866f04-4e8e-4ad3-9df6-db01979ce63f)

![exploits](https://github.com/user-attachments/assets/cca922a7-99fd-4cc8-a140-7619d2b667a2)


### Configuration

You can edit the ImGui settings in the `menu::InitMenu` function to change the appearance and functionality of the menu. This function contains various style settings such as menu colors, fonts, border sizes, etc.

<!---
## How It Works

### AimBot
The code is split across multiple files, with the main logic located in `aim.cpp` and the class definition in `aim.h`. The AimBot is designed to move the mouse cursor toward a target on the screen, aiming automatically when the right mouse button is held down.

#### `aim.cpp`

### Dependencies

The code relies on several external libraries and modules:

- **Windows API**: Specifically, the `INPUT` structure and `SendInput` function are used to simulate mouse movement.
- **ImGui**: A graphical user interface library used for rendering custom UI components within applications.

The header files for these dependencies are included in the project:

- `#include "../../Libs/Public/imgui.h"`
- `#include "../../Libs/Public/imgui_impl_win32.h"`
- `#include "../../Libs/Public/imgui_impl_dx9.h"`

Additionally, the project depends on custom modules for engine management, cache handling, and configuration:

- `#include "engine.h"`
- `#include "cache.h"`
- `#include "cfg.h"`

### Function Explanation

#### MoveMouse

```cpp
inline void aim::MoveMouse(int deltaX, int deltaY)
{
    INPUT input;
    input.type = INPUT_MOUSE;
    input.mi.dx = deltaX;
    input.mi.dy = deltaY;
    input.mi.dwFlags = MOUSEEVENTF_MOVE;
    SendInput(1, &input, sizeof(INPUT));
}
```

##### Purpose

The `MoveMouse` method simulates mouse movement by sending input commands to the operating system. It takes two parameters, `deltaX` and `deltaY`, which represent the change in the X and Y positions of the mouse cursor, respectively.

#### Explanation

- **INPUT Structure**: The `INPUT` structure is part of the Windows API and is used to store information about simulated input events, such as mouse and keyboard actions.
- **MOUSEEVENTF_MOVE**: This flag specifies that the mouse should move.
- **SendInput**: This function sends the input command to the system, causing the mouse to move by the specified `deltaX` and `deltaY`.


### Tick

```cpp
bool aim::Tick()
{
    if (!GetAsyncKeyState(VK_RBUTTON) || !cfg::Aimbot)
        return false;

    float x = cache::AimData.ClosestAimPos2D.x;
    float y = cache::AimData.ClosestAimPos2D.y;

    float TargetX = 0;
    if (x != 0) {
        TargetX = (x > engine::ScreenCenter.x) ? -(engine::ScreenCenter.x - x) : x - engine::ScreenCenter.x;
        TargetX /= cfg::AimSmoothness;
        if ((TargetX + engine::ScreenCenter.x) > (engine::ScreenCenter.x * 2.f) || (TargetX + engine::ScreenCenter.x) < 0)
            TargetX = 0;
    }

    float TargetY = 0;
    if (y != 0) {
        TargetY = (y > engine::ScreenCenter.y) ? -(engine::ScreenCenter.y - y) : y - engine::ScreenCenter.y;
        TargetY /= cfg::AimSmoothness;
        if ((TargetY + engine::ScreenCenter.y) > (engine::ScreenCenter.y * 2.f) || (TargetY + engine::ScreenCenter.y) < 0)
            TargetY = 0;
    }

    MoveMouse(static_cast<int>(TargetX), static_cast<int>(TargetY));
    return true;
}
```

#### Purpose

The `Tick` method is the heart of the AimBot. It checks whether the AimBot should be active, calculates the necessary adjustments to aim at the closest target, and moves the mouse accordingly.

#### Explanation

- **Key State Check**: `GetAsyncKeyState(VK_RBUTTON)` checks if the right mouse button is currently pressed. If not, or if the AimBot is disabled (`!cfg::Aimbot`), the method returns `false`, meaning no aiming will occur.
  
- **Target Position Calculation**:
  - The method retrieves the closest target's 2D position from the `cache::AimData`.
  - It calculates `TargetX` and `TargetY`, which are the differences between the target's position and the screen center (`engine::ScreenCenter`), adjusted by the configured `AimSmoothness`.
  - If the calculated target position would move the cursor outside the screen boundaries, it resets `TargetX` and `TargetY` to `0`, ensuring the cursor remains within the visible screen area.
  
- **MoveMouse Call**: The method then calls `MoveMouse`, passing in the calculated `TargetX` and `TargetY` as the cursor movement deltas.

#### Return Value

- The method returns `true` if the AimBot successfully processes the input and moves the mouse. 


--->


## Disclaimer

This project is provided for educational and training purposes only. All liability arising from the misuse of the code belongs to the user. Cheating in FiveM or other online games violates the terms of service of these games and may result in your user account being suspended or permanently banned. Also, such activities may lead to legal issues. Neither I nor the contributors of this project shall be held responsible for any consequences arising from using this software.

## Contribution

If you wish to contribute, please leave a star to this repo. All kinds of contributions are welcome.

## License

This project is licensed under the MIT license. For more information, see the `LICENSE` file.
