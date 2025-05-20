#pragma once


class cfg
{
public:
	// visuals
	inline static bool EspBox = true;
	inline static bool Snaplines = false;
	inline static bool ShowDistance = true;

	inline static bool Crosshair = true;
	inline static float CrosshairLength = 8.f;

	// aim
	inline static bool Aimbot = true;

	inline static float AimBotFOV = 45.f;
	inline static float AimSmoothness = 1.f;

	// exploits
    inline static bool Exploits = true;
	inline static bool RapidFire = true;
	inline static bool NoRecoil = true;
	inline static bool NoSpread = true;
	inline static bool ADSAir = false;
	inline static bool fakelag = false;

	inline static bool ChangeWeaponMesh = false;
	inline static bool ChangePlayerMesh = false;

	inline static float WeaponMeshScale = 1.f;
	inline static float PlayerMeshScale = 1.f;
};

