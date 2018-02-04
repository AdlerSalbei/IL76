class CfgMagazines
{
	class VehicleMagazine;
	class IL76_Gun: VehicleMagazine
	{
		scope = 2;
		displayName = "GSh-23 Cannon";
		ammo = "IL76_Bullet";
		count = 1000;
		flashSize = 0.001;
		initSpeed = 2000;
		maxLeadSpeed = 1800;
		modes[] = {"normal","tracer"};
		class normal
		{
			multiplier = 1;
			burst = 1;
			soundBurst = 0;
			autofire = 1;
			dispersion = 0.02;
			ammo = "IL76_Bullet";
			reloadTime = 0.1;
			displayName = "23mm MG";
			ffCount = 3000;
			sound[] = {"\il76\data\sounds\il76_canon.wav",1.1220185,1};
			soundContinuous = 0;
			recoil = "Empty";
			aiRateOfFire = 0.05;
			aiRateOfFireDistance = 2000;
			useAction = 0;
			useActionTitle = "";
		};
		class tracer
		{
			multiplier = 1;
			burst = 1;
			soundBurst = 0;
			autofire = 1;
			dispersion = 0.02;
			ammo = "IL76_BulletTracer";
			reloadTime = 0.1;
			displayName = "23mm MG tracer";
			ffCount = 3000;
			sound[] = {"\il76\data\sounds\il76_canon.wav",1.1220185,1};
			soundContinuous = 0;
			recoil = "Empty";
			aiRateOfFire = 0.05;
			aiRateOfFireDistance = 2000;
			useAction = 0;
			useActionTitle = "";
		};
	};
};
