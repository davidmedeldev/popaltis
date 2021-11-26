
/*
Creador de barras de proceso por Icaruk
Edit By Medel :D
Se invoca con:
	[20, "Reparando..."] spawn ica_fnc_barrita;
*/

_t = _this select 0;
if ((typeName _t) != "SCALAR") then {_t = 1};
if (_t < 1) then {_t = 1};

_texto = param [1];

private ["_barra", "_progreso", "_tx", "_largo", "_t"];

("icapa7" call BIS_fnc_rscLayer) cutRsc ["barrita","PLAIN"];

disableSerialization;
_barra = uiNameSpace getVariable "barrita";
_progreso = _barra displayCtrl 5010;
_tx = _barra displayCtrl 5011;

_tx ctrlSetText _texto;

_largo = ctrlPosition _progreso select 2;
_progreso ctrlSetPosition [ctrlPosition _progreso  select 0, ctrlPosition _progreso  select 1, 0, ctrlPosition _progreso  select 3];
_progreso ctrlCommit 0;
_progreso ctrlSetPosition [ctrlPosition _progreso  select 0, ctrlPosition _progreso  select 1, _largo, ctrlPosition _progreso  select 3];
_progreso ctrlCommit _t;

sleep _t;

_progreso ctrlSetText "Progreso Completado";
_progreso ctrlSetBackgroundColor [0,0.5,1,1];

("icapa7" call BIS_fnc_rscLayer) cutText ["","PLAIN"];
