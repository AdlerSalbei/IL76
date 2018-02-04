class CfgVehicleClasses
{
	class wings_of_russia
	{
		displayName = "Wings Of Russia";
	};
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class HitPoints;
		class AnimationSources;
		class NewTurret;
		class ViewPilot;
	};
	class il76: Plane
	{
		scope = 2;
		destrType = "DestructWreck";
		vehicleclass = "wings_of_russia";
		model = "\il76\il762";
		displayName = "$STR_IL76_NAME1";
		side = 0;
		faction = "RU";
		transportSoldier = 70;
		crew = "";
		driverAction = "c130_Pilot";
		cargoAction[] = {"c130_Pilot","Truck_Cargo01","Truck_Cargo01","Truck_Cargo04","Truck_Cargo01","Truck_Cargo01","Truck_Cargo04","Truck_Cargo02","Truck_Cargo02","Truck_Cargo04","Truck_Cargo01","Truck_Cargo01","Truck_Cargo02","Truck_Cargo02","Truck_Cargo04"};
		cargoIsCoDriver[] = {1,1};
		hasGunner = 1;
		driverIsCommander = 1;
		gunnerAction = "Mi17_Pilot";
		gunnerOpticsModel = "\il76\rkt_fencer_optics";
		gunnerOpticsColor[] = {1,1,1,1};
		Icon = "\il76\e\rc_be32_icomap.paa";
		picture = "\il76\e\rcbe32_ca.paa";
		mapSize = 50;
		accuracy = 0.9;
		camouflage = 10;
		audible = 30;
		gearRetracting = 1;
		class Library
		{
			libTextDesc = "$STR_IL_DESCR";
		};
		nameSound = "plane";
		soundEngine[] = {"\il76\XB223.WAV",4,1.2};
		soundEnviron[] = {"Objects\noise",0.001,1.0};
		soundServo[] = {"il76\beargrup.wav",0.31622776,1};
		soundEngineOnInt[] = {"il76\engine_on.wav",0.562341,1.0};
		soundEngineOnExt[] = {"il76\engine_on.wav",0.562341,1.0,900};
		soundEngineOffInt[] = {"il76\xnk8_shut.wav",0.562341,1.0};
		soundEngineOffExt[] = {"il76\xnk8_shut.wav",0.562341,1.0,900};
		airBrake = 1;
		cabinOpening = 1;
		flaps = 1;
		transportVehiclesCount = 1;
		transportVehiclesMass = 50000;
		castCargoShadow = 0;
		castDriverShadow = 0;
		flapsFrictionCoef = 0.3;
		wheelSteeringSensitivity = 5.5;
		noseDownCoef = 1.1;
		maneuvrability = 40.0;
		landingAoa = "rad 2";
		maxSpeed = 950;
		landingSpeed = 270;
		armor = 65;
		ejectSpeed[] = {0,0,0};
		cost = 20000000;
		envelope[] = {0.0,0.1,0.8,2.0,2.2,2.8,3.55,3.55,3.55,3.55,2.6,0.8,1.0};
		type = "VAir";
		threat[] = {0.1,1,0.7};
		aileronSensitivity = 0.4;
		elevatorSensitivity = 2.2;
		steerAheadSimul = 1.0;
		steerAheadPlan = 2.0;
		hiddenSelections[] = {"light","num1","num2"};
		extCameraPosition[] = {0,15,-65};
		class NewTurret;
		class ViewPilot;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				commanding = -1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				weapons[] = {"Laserdesignator","NVGoggles","Binocular"};
				magazines[] = {"Laserbatteries"};
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				opticsZoomMin = 0.01;
				opticsZoomMax = 0.9;
				gunnerAction = "MH6_Cargo01";
				gunnerInAction = "MH6_Cargo01";
			};
		};
		class EventHandlers
		{
			Init = "_this execVM ""\il76\scr\tires.sqf"", _this execVM ""\il76\scr\damage.sqf"", _this execVM ""\il76\scr\common_init.sqf""";
			engine = "_this exec ""\il76\scr\dverclose.sqs""";
			fired = "_this call BIS_Effects_EH_Fired;";
			killed = "_this call BIS_Effects_EH_Killed;";
		};
		class DestructionEffects{};
		class HitPoints: HitPoints
		{
			class HitVrtule
			{
				armor = 0.5;
				material = 52;
				name = "vrtule";
				visual = "vrtule";
				passThrough = 1;
			};
			class HitVrtule0
			{
				armor = 0.5;
				material = 52;
				name = "vrtule 0";
				visual = "vrtule 0";
				passThrough = 1;
			};
			class HitVrtule1
			{
				armor = 0.5;
				material = 52;
				name = "vrtule 1";
				visual = "vrtule 1";
				passThrough = 1;
			};
			class HitVrtule2
			{
				armor = 0.5;
				material = 52;
				name = "vrtule 2";
				visual = "vrtule 2";
				passThrough = 1;
			};
			class HitVrtule3
			{
				armor = 0.5;
				material = 52;
				name = "vrtule 3";
				visual = "vrtule 3";
				passThrough = 1;
			};
			class HitGlass1
			{
				armor = 0.1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			class HitGlass2
			{
				armor = 0.1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			class HitGlass3
			{
				armor = 0.1;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			class HitGlass4
			{
				armor = 0.1;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			class HitGlass5
			{
				armor = 0.1;
				material = -1;
				name = "glass5";
				visual = "glass5";
				passThrough = 0;
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {0.5,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 0.7;
			};
			class Right
			{
				color[] = {0.5,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 0.7;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffect";
			};
		};
		class AnimationSources: AnimationSources
		{
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass5";
			};
			class Doors
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class Doors1
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class Doors2
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Doors3
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class Doors4
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class Doorind
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class dver1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class dver2
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class dverind
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class ladder
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"il76\su34_skla.rvmat","il76\glass_damage.rvmat","il76\glass_damage.rvmat","il76\su34_skla_in.rvmat","il76\glass_in_damage.rvmat","il76\glass_in_damage.rvmat"};
		};
		irTarget = 1;
		irScanRange = 2000;
		irScanGround = 1;
		weapons[] = {};
		magazines[] = {};
		class UserActions
		{
			class opendoor
			{
				displayName = "$STR_IL76_DR";
				position = "dor";
				radius = 19.6;
				showWindow = 0;
				onlyForplayer = 0;
				condition = "this animationPhase ""RC_door"" < 0.5 AND Alive(this)";
				statement = "[this] exec ""\il76\scr\Rampdown.sqs""";
			};
			class closedoor
			{
				displayName = "$STR_IL76_UR";
				position = "dor";
				radius = 19.6;
				showWindow = 0;
				onlyForplayer = 0;
				condition = "this animationPhase ""RC_door"" > 0.5 AND Alive(this)";
				statement = "[this] exec ""\il76\scr\Rampclose.sqs""";
			};
			class opendver
			{
				displayName = "$STR_IL76_OD";
				position = "pos driver";
				radius = 10.6;
				showWindow = 0;
				onlyForplayer = 0;
				condition = "this animationPhase ""RC_dver1"" < 0.5 AND Alive(this)";
				statement = "[this] exec ""\il76\scr\dveropen.sqs""";
			};
			class closedver
			{
				displayName = "$STR_IL76_CD";
				position = "pos driver";
				radius = 10.6;
				showWindow = 0;
				onlyForplayer = 0;
				condition = "this animationPhase ""RC_dver1"" > 0.5 AND Alive(this)";
				statement = "[this] exec ""\il76\scr\dverclose.sqs""";
			};
			class openladder
			{
				displayName = "$STR_IL76_DL";
				position = "pos driver";
				radius = 5.6;
				showWindow = 0;
				onlyForplayer = 0;
				condition = "this animationPhase ""RC_ladder"" < 0.5 AND Alive(this) and this animationPhase ""RC_dver1"" > 0.5";
				statement = "[this] exec ""\il76\scr\ladderdown.sqs""";
			};
			class closeladder
			{
				displayName = "$STR_IL76_UL";
				position = "pos driver";
				radius = 5.6;
				showWindow = 0;
				onlyForplayer = 0;
				condition = "this animationPhase ""RC_ladder"" > 0.5 AND Alive(this)";
				statement = "[this] exec ""\il76\scr\ladderup.sqs""";
			};
			class loadcargo
			{
				onlyforplayer = 0;
				displayName = "$STR_IL76_LC";
				position = "pos driver";
				radius = 16;
				showWindow = 0;
				condition = "((vehicle player != vehicle this) and (vehicle player != player) and (speed vehicle this < 5) AND Alive(this))";
				statement = "[this, vehicle player, player] execVM ""\il76\scr\attach.sqf""";
			};
			class unloadcargo
			{
				onlyforplayer = 0;
				displayName = "$STR_IL76_UC";
				position = "pos driver";
				radius = 30;
				showWindow = 0;
				condition = "(vehicle player != vehicle this) and (vehicle player != player) AND Alive(this)";
				statement = "[this, vehicle player, player] execVM ""\il76\scr\detach.sqf""";
			};
			class unloadcargoall
			{
				onlyforplayer = 0;
				displayName = "$STR_IL76_UCA";
				position = "pos driver";
				radius = 30;
				showWindow = 0;
				condition = "(player in this) and ((count (position this nearEntities 30)) > 1) and (getpos this select 2 > 300) AND Alive(this)";
				statement = "[this, vehicle player, player] execVM ""\il76\scr\detachall.sqf""";
			};
			class parasoldiers
			{
				onlyforplayer = 0;
				displayName = "$STR_IL76_PG";
				position = "pos driver";
				radius = 30;
				showWindow = 0;
				condition = "(player in this) and (count crew (vehicle this) > 6) and (getpos this select 2 > 100) AND Alive(this)";
				statement = "[this, player] execVM ""\il76\scr\paragroup.sqf""";
			};
		};
	};
	class il76loaded: il76
	{
		displayName = "$STR_IL76_NAME2";
		class EventHandlers
		{
			Init = "_this execVM ""\il76\scr\tires.sqf"", _this execVM ""\il76\scr\damage.sqf"", _this execVM ""\il76\scr\common_init_loaded.sqf""";
			engine = "_this exec ""\il76\scr\dverclose.sqs""";
			fired = "_this call BIS_Effects_EH_Fired;";
			killed = "_this call BIS_Effects_EH_Killed;";
		};
	};
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class ViewOptics;
	};
	class Tank: LandVehicle
	{
		class HitPoints;
		class Turrets
		{
			class MainTurret;
		};
		class ViewOptics: ViewOptics{};
	};
	class IL76_TailGun: Tank
	{
		scope = 1;
		faction = "RU";
		displayName = "$STR_IL76_TUR";
		picture = "\il76\data\image\turr_pic";
		outGunnerMayFire = 1;
		icon = "";
		hideProxyInCombat = 1;
		destrType = "DestructNo";
		hasDriver = 0;
		hasGunner = 1;
		hasCommander = 0;
		castGunnerShadow = 0;
		ejectDeadGunner = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 1200;
		irTarget = 0;
		maxSpeed = 500;
		fuelCapacity = 0;
		transportSoldier = 0;
		model = "\il76\data\model\il76_turret_mesh";
		cost = 150000;
		weapons[] = {};
		magazines[] = {};
		side = 0;
		crew = "RU_Soldier_Pilot";
		armor = 100;
		armorStructural = 20.0;
		soundEnviron[] = {"",1,1};
		soundEngine[] = {"",1,1};
		soundCrash[] = {"",1,1};
		soundGear[] = {"",1,1};
		transportAmmo = 0;
		autocenter = 0;
		accuracy = 0.3;
		threat[] = {0,0,1};
		sensitivity = 2;
		class Reflectors{};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -60;
				maxElev = 40;
				minTurn = -80;
				maxTurn = 80;
				gunnerAction = "T72_GunnerOut";
				gunnerInAction = "T72_Gunner";
				soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate2",0.001,1.0};
				weapons[] = {"IL76_Gun"};
				magazines[] = {"IL76_Gun"};
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				class Turrets{};
			};
		};
		class EventHandlers
		{
			fired = "if ((((_this select 0) ammo ""IL76_Gun"")-1) mod 5 == 0) then {(_this select 0) fire [""IL76_Gun"",""tracer""];} else {if((_this select 4) ==""IL76_BulletTracer"") then {(_this select 0) fire [""IL76_Gun"",""normal""];}; };";
		};
	};
	class il76md: il76
	{
		scope = 1;
		displayName = "$STR_IL76_NAME3";
		class EventHandlers
		{
			Init = "_this execVM ""\il76\scr\tires.sqf"", _this execVM ""\il76\scr\damage.sqf"", _this execVM ""\il76\scr\common_init.sqf"", _this exec ""\il76\scr\tailgun.sqs""";
			engine = "_this exec ""\il76\scr\dverclose.sqs""";
			fired = "_this call BIS_Effects_EH_Fired;";
			killed = "_this call BIS_Effects_EH_Killed;";
		};
	};
	class il76moe: il76
	{
		displayName = "$STR_IL76_NAME4";
		model = "\il76\data\model\il762moe";
	};
	class PlaneWreck;
	class il76_MRWreck: PlaneWreck
	{
		scope = 1;
		class Armory
		{
			disabled = 1;
		};
		model = "\il76\data\model\il76Wreck.p3d";
		typicalCargo = "{}";
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 1;
	};
};
