_object = _this select 0;
_engines = _this select 1;
_i=500;
_dir = getDir _object;
_height = -1.3;
_direction = 1;
_dif = -0.001;
_speed = 0;
_adddir = 0;

if (isEngineOn _object) then
{
	sleep 0.49;
	if (not (1 in _engines)) then
	{
		_object animate ["vrtule2",1];
	};
	if (not (2 in _engines)) then
	{
		_object animate ["vrtule1",1];
	};
	if (not (3 in _engines)) then
	{
		_object animate ["vrtule3",1];
	};
	if (not (4 in _engines)) then
	{
		_object animate ["vrtule0",1];
	};
};
_vel = velocity _object;

	_dir = direction _object;
	if ((1 in _engines) and ((_object animationPhase "engine1") < 1)) then
	{
		drop ["\Ca\data\cl_basic", "", "Billboard", .01, 4, [-6.3,-4,4.5], [0,0,0], 0, 0.001, 0.001, 1, [1,8], [[0,0,0,0],[0,0,0,1],[0,0,0,0.5], [0,0,0,0]], [0,1], 1, 0.1, "", "",_object ];
		if ((speed _object)>0) then
		{
			_speed = _speed + (speed _object)*_dif;
			_adddir = _adddir + (speed _object)*_dif;
		};
	};
	_dir = direction _object;
	if ((2 in _engines) and ((_object animationPhase "engine2") < 1)) then
	{
		drop ["\Ca\data\cl_basic", "", "Billboard", .01, 4, [6.3,-4,4.5], [0,0,0], 0, 0.001, 0.001, 1, [1,8], [[0,0,0,0],[0,0,0,1],[0,0,0,0.5], [0,0,0,0]], [0,1], 1, 0.1, "", "",_object ];
		if ((speed _object)>0) then
		{
			_speed = _speed + (speed _object)*_dif;
			_adddir = _adddir - (speed _object)*_dif;
		};
	};
	_dir = direction _object;
	if ((3 in _engines) and ((_object animationPhase "engine3") < 1)) then
	{
		drop ["\Ca\data\cl_basic", "", "Billboard", .01, 4, [-10.9,-4,4.5], [0,0,0], 0, 0.001, 0.001, 1, [1,8], [[0,0,0,0],[0,0,0,1],[0,0,0,0.5], [0,0,0,0]], [0,1], 1, 0.1, "", "",_object ];
		if ((speed _object)>0) then
		{
			_speed = _speed + (speed _object)*_dif;
			_adddir = _adddir + (speed _object)*_dif;
		};
	};
	_dir = direction _object;
	if ((4 in _engines) and ((_object animationPhase "engine4") < 1)) then
	{
		drop ["\Ca\data\cl_basic", "", "Billboard", .01, 4, [10.9,-4,4.5], [0,0,0], 0, 0.001, 0.001, 1, [1,8], [[0,0,0,0],[0,0,0,1],[0,0,0,0.5], [0,0,0,0]], [0,1], 1, 0.1, "", "",_object ];
		if ((speed _object)>0) then
		{
			_speed = _speed + (speed _object)*_dif;
			_adddir = _adddir - (speed _object)*_dif;
		};
	};
	if (_speed < 0) then
	{
		_object setVelocity [(_vel select 0)+(sin _dir*_speed),(_vel select 1)+ (cos _dir*_speed),(_vel select 2)];
	};
	_dir = direction _object;
if (1 in _engines) then
{
	_object setHit["vrtule 1",1];
};
if (2 in _engines) then
{
	_object setHit["vrtule 2",1];
};
if (3 in _engines) then
{
	_object setHit["vrtule 0",1];
};
if (4 in _engines) then
{
	_object setHit["vrtule 3",1];
};
