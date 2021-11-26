
scopeName "mavIndex";

if !(params [
	["_string", "", [""]],
	["_array", [], [[]]]
]) exitWith {-1};

if (_string isEqualTo -1 || {_array isEqualTo []}) exitWith {-1};

{
	_x params ["_str"];
	if (_string isEqualTo _str) then {
		_forEachIndex breakOut "mavIndex";
	};
} forEach _array;

-1