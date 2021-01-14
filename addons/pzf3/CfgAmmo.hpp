class CfgAmmo
{
	class RocketBase;
	class R_PZF3_HEAT_DM12A1: RocketBase
	{
		model = QPATHTOF(data\p3d\ammo\rocket_pzf3_heat_dm12a1);
		submunitionAmmo = "ammo_Penetrator_PG7";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,-0.2};
		typicalSpeed = 160;
		maxSpeed = 243;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 13;
		indirectHitRange = 3.6;
		warheadName = "HEAT";
		explosive = 0.8;
		cost = 200;
		airFriction = 0.65;
		sideAirFriction = 0.15;
		initTime = 0.1;
		thrustTime = 0.05;
		thrust = 4000;
		fuseDistance = 5;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 512";
		irLock = 0;
		timeToLive = 6.1;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.5118864,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.5118864,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.5118864,1,1800};
		multiSoundHit[] = {"soundHit1",0.34,"soundHit2",0.33,"soundHit3",0.33};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.31622776,1.5,900};
		class CamShakeExplode
		{
			power = 7;
			duration = 1.2;
			frequency = 20;
			distance = 79.3286;
		};
		class CamShakeHit
		{
			power = 85;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 1.96799;
			duration = 0.8;
			frequency = 20;
			distance = 30.9839;
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
	class R_PZF3_DM32: RocketBase
	{
		model = QPATHTOF(data\p3d\ammo\rocket_pzf3_dm32);
		submunitionAmmo = "ammo_Penetrator_PG7";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,-0.2};
		typicalSpeed = 152;
		maxSpeed = 220;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 13;
		indirectHitRange = 3.6;
		warheadName = "AP";
		explosive = 0.8;
		cost = 200;
		airFriction = 0.65;
		sideAirFriction = 0.15;
		initTime = 0.1;
		thrustTime = 0.05;
		thrust = 4000;
		fuseDistance = 5;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 512";
		irLock = 0;
		timeToLive = 6.1;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.5118864,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.5118864,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.5118864,1,1800};
		multiSoundHit[] = {"soundHit1",0.34,"soundHit2",0.33,"soundHit3",0.33};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.31622776,1.5,900};
		class CamShakeExplode
		{
			power = 7;
			duration = 1.2;
			frequency = 20;
			distance = 79.3286;
		};
		class CamShakeHit
		{
			power = 85;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 1.96799;
			duration = 0.8;
			frequency = 20;
			distance = 30.9839;
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
	class R_PZF3_HEAT_DM22: RocketBase
	{
		model = QPATHTOF(data\p3d\ammo\rocket_pzf3_heat_dm22);
		submunitionAmmo = "ammo_Penetrator_PG7";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,-0.2};
		typicalSpeed = 149;
		maxSpeed = 212;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 13;
		indirectHitRange = 3.6;
		warheadName = "TandemHEAT";
		explosive = 0.8;
		cost = 200;
		airFriction = 0.65;
		sideAirFriction = 0.15;
		initTime = 0.1;
		thrustTime = 0.05;
		thrust = 4000;
		fuseDistance = 5;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 512";
		irLock = 0;
		timeToLive = 6.1;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.5118864,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.5118864,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.5118864,1,1800};
		multiSoundHit[] = {"soundHit1",0.34,"soundHit2",0.33,"soundHit3",0.33};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.31622776,1.5,900};
		class CamShakeExplode
		{
			power = 7;
			duration = 1.2;
			frequency = 20;
			distance = 79.3286;
		};
		class CamShakeHit
		{
			power = 85;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 1.96799;
			duration = 0.8;
			frequency = 20;
			distance = 30.9839;
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
};