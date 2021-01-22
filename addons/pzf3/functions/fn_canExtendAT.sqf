#include 

/*
* Checks if player can extend the AT

*/

params ["_unit"];

if !(currentWeapon _unit isEqualTo "TEST_PZF3") then { false };
if (_unit getVariable [QGVAR(atExtended), false]) then { false };

true