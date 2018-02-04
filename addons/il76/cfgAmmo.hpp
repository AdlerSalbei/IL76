class CfgAmmo
{
	class BulletBase;
	class IL76_Bullet: BulletBase
	{
		hit = 250;
		indirectHit = 120;
		indirectHitRange = 5;
		visibleFire = 25;
		audibleFire = 28;
		visibleFireTime = 4;
		cost = 80;
		explosive = 1;
		airlock = 1;
		laserLock = 1;
		irLock = 1;
		tracerColor[] = {0.2,0.8,0.1,0.04};
		tracerColorR[] = {0.2,0.8,0.1,0.04};
	};
	class IL76_BulletTracer: IL76_Bullet
	{
		tracerColor[] = {0,1,0,0.5};
		tracerColorR[] = {0,1,0,0.5};
	};
};
