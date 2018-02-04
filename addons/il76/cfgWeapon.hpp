class CfgWeapons
{
	class Default{};
	class MGun: Default{};
	class MachineGun7_6: MGun{};
	class CannonCore;
	class GSH_306: MachineGun7_6
	{
		flashSize = 0.2;
		maxLeadSpeed = 3000;
		optics = 1;
		burst = 5;
		ammo = "Bullet30";
		count = 150;
		reloadTime = 0.05;
		autoFire = 1;
	};
	class IL76_Gun: CannonCore
	{
		scope = 2;
		displayName = "GSh-23 Cannon";
		ammo = "IL76_Bullet";
		flashSize = 0.001;
		initSpeed = 2000;
		maxLeadSpeed = 1800;
		modes[] = {"normal","tracer"};
		magazines[] = {"IL76_Gun"};
		class normal
		{
			begin1[] = {"il76\sounds\mg51.wav",1.77828,1,1000};
			begin2[] = {"il76\sounds\mg51.wav",1.77828,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			recoilprone = "Empty";
			multiplier = 1;
			burst = 1;
			autofire = 1;
			dispersion = 0.02;
			ammo = "IL76_Bullet";
			reloadTime = 0.1;
			displayName = "23mm MG";
			ffCount = 300;
			sound[] = {"weapons\m2-50-loop",10.0,1};
			soundContinuous = 0;
			showtoplayer = 1;
			soundBurst = 0;
			recoil = "Empty";
			aiRateOfFire = 0.05;
			aiRateOfFireDistance = 2000;
			useAction = 0;
			useActionTitle = "";
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 1400;
			midRangeProbab = 0.58;
			maxRange = 3000;
			maxRangeProbab = 0.04;
			maxLeadSpeed = 2000;
		};
		class tracer
		{
			begin1[] = {"il76\sounds\mg51.wav",1.77828,1,1000};
			begin2[] = {"il76\sounds\mg51.wav",1.77828,1,1000};
			soundBurst = 0;
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			recoilprone = "Empty";
			multiplier = 1;
			burst = 1;
			autofire = 1;
			showtoplayer = 1;
			dispersion = 0.02;
			ammo = "IL76_BulletTracer";
			reloadTime = 0.1;
			displayName = "23mm MG tracer";
			ffCount = 300;
			sound[] = {"weapons\m2-50-loop",10.0,1};
			soundContinuous = 0;
			recoil = "Empty";
			aiRateOfFire = 0.05;
			aiRateOfFireDistance = 2000;
			useAction = 0;
			useActionTitle = "";
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 1400;
			midRangeProbab = 0.58;
			maxRange = 3000;
			maxRangeProbab = 0.04;
			maxLeadSpeed = 2000;
		};
	};
};
