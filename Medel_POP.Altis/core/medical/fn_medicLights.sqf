
Private ["_vehicle","_lightYellow","_lightleft","_lightright","_leftRed"];
_vehicle = _this select 0;

if (isNil "_vehicle" || isNull _vehicle || !(_vehicle getVariable "lights")) exitWith {};
_lightYellow = [0.1, 0.1, 20];
_lightYellow = [0.1, 0.1, 20];

_lightleft = "#lightpoint" createVehicle getPos _vehicle;
sleep 0.2;
_lightleft setLightColor _lightYellow;
_lightleft setLightBrightness 0.4;
_lightleft setLightAmbient [0.1,0.1,1];

switch (typeOf _vehicle) do
{
    case "C_Offroad_01_F":
    {
        _lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
    };

    case "B_MRAP_01_F":
    {
        _lightleft lightAttachObject [_vehicle, [-0.37, -1.9, 0.7]];
    };

    case "C_SUV_01_F":
    {
        _lightleft lightAttachObject [_vehicle, [-0.37,-1.2,0.42]];
    };
    case "C_Hatchback_01_F":
    {
        _lightleft lightAttachObject [_vehicle, [-0.35,-0.2,0.25]];
    };
    case "C_Hatchback_01_sport_F":
    {
        _lightleft lightAttachObject [_vehicle, [-0.35,-0.2,0.25]];
    };
    case "B_GEN_Van_02_vehicle_F":
    {
        _lightleft lightAttachObject [_vehicle, [-0.4, 1.6, 1.15]];
    };
    case "B_GEN_Van_02_transport_F":
    {
        _lightleft lightAttachObject [_vehicle, [-0.4, 1.6, 1.15]];
    };
    case "C_Van_02_medevac_F":
    {
        _lightleft lightAttachObject [_vehicle, [-0.4, 1.6, 1.15]];
    };
    case "B_GEN_Offroad_01_gen_F":
    {
        _lightleft lightAttachObject [_vehicle, [-0.4,0.003,0.5]];
    };
};

_lightleft setLightAttenuation [0.181, 0, 1000, 130];
_lightleft setLightIntensity 10;
_lightleft setLightFlareSize 0.38;
_lightleft setLightFlareMaxDistance 150;
_lightleft setLightUseFlare true;

_lightright = "#lightpoint" createVehicle getPos _vehicle;
sleep 0.2;
_lightright setLightColor _lightYellow;
_lightright setLightBrightness 0.4;
_lightright setLightAmbient [0.1,0.1,1];

switch (typeOf _vehicle) do
{
    case "C_Offroad_01_F":
    {
        _lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
    };

    case "B_MRAP_01_F":
    {
        _lightright lightAttachObject [_vehicle, [0.37, -1.9, 0.7]];
    };

    case "C_SUV_01_F":
    {
        _lightright lightAttachObject [_vehicle, [0.37,-1.2,0.42]];
    };

    case "C_Hatchback_01_sport_F":
    {
        _lightright lightAttachObject [_vehicle, [0.35,-0.2,0.25]];
    };

    case "B_GEN_Van_02_vehicle_F":
    {
        _lightright lightAttachObject [_vehicle, [0.4, 1.6, 1.15]];
    };
    case "B_GEN_Van_02_transport_F":
    {
        _lightright lightAttachObject [_vehicle, [0.4, 1.6, 1.15]];
    };
    case "C_Van_02_medevac_F":
    {
        _lightright lightAttachObject [_vehicle, [0.4, 1.6, 1.15]];
    };
    case "C_Hatchback_01_F":
    {
        _lightright lightAttachObject [_vehicle, [0.35,-0.2,0.25]];
    };
    case "B_GEN_Offroad_01_gen_F":
    {
        _lightright lightAttachObject [_vehicle, [0.4,0.003,0.5]];
    };
};


_lightright setLightAttenuation [0.181, 0, 1000, 130];
_lightright setLightIntensity 10;
_lightright setLightFlareSize 0.4;
_lightright setLightFlareMaxDistance 150;
_lightright setLightUseFlare true;

_lightleft setLightDayLight true;
_lightright setLightDayLight true;

_leftRed = true;
while{ (alive _vehicle)} do
{
    if (!(_vehicle getVariable "lights")) exitWith {};
    if (_leftRed) then
    {
        _leftRed = false;
        _lightright setLightBrightness 0.0;
        sleep 0.05;
        _lightleft setLightBrightness 6;
    }
        else
    {
        _leftRed = true;
        _lightleft setLightBrightness 0.0;
        sleep 0.05;
        _lightright setLightBrightness 6;
    };
    sleep (_this select 1);
};
deleteVehicle _lightleft;
deleteVehicle _lightright;
