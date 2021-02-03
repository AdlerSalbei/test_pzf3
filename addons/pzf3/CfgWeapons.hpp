
class Mode_SemiAuto;
class test_pzf3ScriptedOptic {
    reticleTexture = QPATHTOF(data\images\stp.paa);
    reticleTextureSize = 1;
	minMagnificationReticleScale = 2.5;
	maxMagnificationReticleScale = 2.5;
};


class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class TEST_PZF3: Launcher_Base_F
	{
		author = "";
		_generalMacro = "";
		scope = 2;
		displayName = "Panzerfaust 3";
		descriptionShort = "";
		overviewPicture = "";
		model = QPATHTOF(data\p3d\pzf3.p3d);
		picture = QPATHTOF(data\images\pzf3_icon.paa);
		UiPicture = "";
		cameraDir = "look";

		modelOptics = "\x\cba\addons\optics\cba_optic_big_90.p3d";
		class CBA_ScriptedOptic: test_pzf3ScriptedOptic {};
        weaponInfoType = "CBA_ScriptedOptic";

		magazines[] = {"PZF3_HEAT_DM12A1","PZF3_DM32","PZF3_HEAT_DM22"};
		magazineReloadSwitchPhase = 0.48;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(data\anim\test_pzf3_handanim.rtm)};
		reloadAction = "ReloadRPG";
		recoil = "recoil_rpg";
		maxZeroing = 500;
		shotPos = "muzzlePos";
		shotEnd = "muzzleEnd";
		class GunParticles
		{
			class effect1
			{
				positionName = "muzzleEnd";
				directionName = "muzzlePos";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
		class Library
		{
			libTextDesc = "";
		};
		class OpticsModes {
            class optic {
                opticsID = 1;
                useModelOptics = 1;
                opticsZoomMin = "0.25 / 2.5";
                opticsZoomMax = "0.25 / 2.5";
                opticsZoomInit = "0.25 / 2.5";
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                memoryPointCamera = "eye";
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                cameraDir = "look";
                discreteDistance[] = {200};
                discreteDistanceInitIndex = 0;
                visionMode[] = {"Normal"};
                opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
            };
        };
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",1.9952624,1,1500};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_single_law";
			aiRateOfFire = 7;
			aiRateOfFireDistance = 600;
			minRange = 10;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",0.4466836,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",1,1,10};
		canLock = 0;
		weaponLockDelay = 3;
		lockAcquire = 0;
		inertia = 1;
		aimTransitionSpeed = 0.5;
		dexterity = 1.2;
		ACE_barrelTwist = "16,8";
		ACE_barrelLength = 950;
		ACE_twistDirection = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
		};
	};
};