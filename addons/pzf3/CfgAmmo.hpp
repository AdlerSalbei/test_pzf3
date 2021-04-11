class CfgAmmo
{
	class ammo_Penetrator_Base;
	class R_PzF3_ammo_Penetrator_DM12A1: ammo_Penetrator_Base 
	{
        caliber = 50;
        warheadName = "TandemHEAT";
        hit = 600;
    };

    class R_PzF3_ammo_Penetrator_DM22: ammo_Penetrator_Base 
	{
        caliber = 60;
        warheadName = "TandemHEAT";
        hit = 650;
    };

	class R_PzF3_ammo_Penetrator_DM32: ammo_Penetrator_Base 
	{
        caliber = 33.3333;
        warheadName = "TandemHEAT";
        indirectHit = 600;
        indirectHitRange = 5;
        explosive = 1;
        hit = 600;
        explosionEffects = "MineNondirectionalExplosion";
        craterEffects = "MineNondirectionalCrater";
    };

	class RocketBase;
	class R_PZF3_HEAT_DM12A1: RocketBase
	{
		//model = QPATHTOF(data\p3d\ammo\rocket_pzf3_heat_dm12a1);
		model = QPATHTOF(data\p3d\rocket_pzf3_heat_dm12a1);
		displayName = "DM12 Monohohlladung";
		warheadName = "TandemHEAT";
		submunitionAmmo = "R_PzF3_ammo_Penetrator_DM12A1";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 150;
		indirectHit = 14;
		indirectHitRange = 3;
		explosive = 0.8;
		cost = 100;
		airFriction = 0;
		sideAirFriction = 0;
		maxSpeed = 248;
		initTime = 0;
		thrustTime = 0.01;
		thrust = 2000;
		fuseDistance = 5;
		simulationStep = 0.02;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 512";
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		CraterEffects = "ATMissileCrater";
        explosionEffects = "ATMissileExplosion";
        effectsMissileInit = "";
        effectsMissile = "EmptyEffect";
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 99.3296;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.11474;
			duration = 0.8;
			frequency = 20;
			distance = 35.7771;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		ACE_caliber = 110;
		ACE_bulletLength = 1200;
		ACE_bulletMass = 3900;
	};
	class R_PZF3_DM32: R_PZF3_HEAT_DM12A1
	{
		//model = QPATHTOF(data\p3d\ammo\rocket_pzf3_dm32);
		model = QPATHTOF(data\p3d\rocket_pzf3_dm32);
		displayName = "DM32 Bunkerfaust";
		warheadName = "TandemHEAT";
        submunitionAmmo = "R_PzF3_ammo_Penetrator_DM32";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0.0;
        submunitionInitialOffset[] = {0,0,0.3};
        triggerOnImpact = 1;
		hit = 200;
		indirectHit = 50;
		indirectHitRange = 6;
		explosive = 1;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 123.905;
		};
		ACE_caliber = 110;
		ACE_bulletLength = 1200;
		ACE_bulletMass = 3900;
	};
	class R_PZF3_HEAT_DM22: R_PZF3_HEAT_DM12A1
	{
		//model = QPATHTOF(data\p3d\ammo\rocket_pzf3_heat_dm22);
		model = QPATHTOF(data\p3d\rocket_pzf3_heat_dm22);
		displayName = "DM22 Tandemhohlladung";
		submunitionAmmo = "R_PzF3_ammo_Penetrator_DM22";
		hit = 650;
		ACE_caliber = 110;
		ACE_bulletLength = 1200;
		ACE_bulletMass = 3900;
	};
};