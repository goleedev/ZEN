[
    QGVAR(autoAddObjects),
    "CHECKBOX",
    [LSTRING(AutoAddObjects), LSTRING(AutoAddObjects_Description)],
    ELSTRING(main,DisplayName),
    false,
    true
] call CBA_settings_fnc_init;

[
    QGVAR(disableGearAnim),
    "CHECKBOX",
    [LSTRING(DisableGearAnim), LSTRING(DisableGearAnim_Description)],
    ELSTRING(main,DisplayName),
    false,
    false
] call CBA_settings_fnc_init;

[
    QGVAR(darkMode),
    "CHECKBOX",
    [LSTRING(DarkMode), LSTRING(DarkMode_Description)],
    ELSTRING(main,DisplayName),
    false,
    false
] call CBA_settings_fnc_init;

[
    QGVAR(preferredArsenal),
    "LIST",
    [LSTRING(PreferredArsenal), LSTRING(PreferredArsenal_Description)],
    ELSTRING(main,DisplayName),
    [[0, 1], [LSTRING(BIVirtualArsenal), LSTRING(AceArsenal)], 1],
    false
] call CBA_settings_fnc_init;

[
    QGVAR(ascensionMessages),
    "CHECKBOX",
    [LSTRING(AscensionMessages), LSTRING(AscensionMessages_Description)],
    ELSTRING(main,DisplayName),
    false,
    true
] call CBA_settings_fnc_init;

[
    QGVAR(cameraBird),
    "CHECKBOX",
    [LSTRING(CameraBird), LSTRING(CameraBird_Description)],
    ELSTRING(main,DisplayName),
    false,
    true
] call CBA_settings_fnc_init;
