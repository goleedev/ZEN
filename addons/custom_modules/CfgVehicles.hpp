class CfgVehicles {
    class EGVAR(modules,moduleBase);

    #define ADD_CUSTOM_MODULE(id) \
        class DOUBLES(GVAR(module),id): EGVAR(modules,moduleBase) { \
            displayName = CSTRING(DisplayName); \
            function = QFUNC(init); \
            scopeCurator = 1; \
            GVAR(index) = __EVAL(id - 1); \
        }

    ADD_CUSTOM_MODULE(1);
    ADD_CUSTOM_MODULE(2);
    ADD_CUSTOM_MODULE(3);
    ADD_CUSTOM_MODULE(4);
    ADD_CUSTOM_MODULE(5);
    ADD_CUSTOM_MODULE(6);
    ADD_CUSTOM_MODULE(7);
    ADD_CUSTOM_MODULE(8);
    ADD_CUSTOM_MODULE(9);
    ADD_CUSTOM_MODULE(10);
    ADD_CUSTOM_MODULE(11);
    ADD_CUSTOM_MODULE(12);
    ADD_CUSTOM_MODULE(13);
    ADD_CUSTOM_MODULE(14);
    ADD_CUSTOM_MODULE(15);
    ADD_CUSTOM_MODULE(16);
    ADD_CUSTOM_MODULE(17);
    ADD_CUSTOM_MODULE(18);
    ADD_CUSTOM_MODULE(19);
    ADD_CUSTOM_MODULE(20);
    ADD_CUSTOM_MODULE(21);
    ADD_CUSTOM_MODULE(22);
    ADD_CUSTOM_MODULE(23);
    ADD_CUSTOM_MODULE(24);
    ADD_CUSTOM_MODULE(25);
    ADD_CUSTOM_MODULE(26);
    ADD_CUSTOM_MODULE(27);
    ADD_CUSTOM_MODULE(28);
    ADD_CUSTOM_MODULE(29);
    ADD_CUSTOM_MODULE(30);
    ADD_CUSTOM_MODULE(31);
    ADD_CUSTOM_MODULE(32);
    ADD_CUSTOM_MODULE(33);
    ADD_CUSTOM_MODULE(34);
    ADD_CUSTOM_MODULE(35);
    ADD_CUSTOM_MODULE(36);
    ADD_CUSTOM_MODULE(37);
    ADD_CUSTOM_MODULE(38);
    ADD_CUSTOM_MODULE(39);
    ADD_CUSTOM_MODULE(40);
    ADD_CUSTOM_MODULE(41);
    ADD_CUSTOM_MODULE(42);
    ADD_CUSTOM_MODULE(43);
    ADD_CUSTOM_MODULE(44);
    ADD_CUSTOM_MODULE(45);
    ADD_CUSTOM_MODULE(46);
    ADD_CUSTOM_MODULE(47);
    ADD_CUSTOM_MODULE(48);
    ADD_CUSTOM_MODULE(49);
    ADD_CUSTOM_MODULE(50);
    ADD_CUSTOM_MODULE(51);
    ADD_CUSTOM_MODULE(52);
    ADD_CUSTOM_MODULE(53);
    ADD_CUSTOM_MODULE(54);
    ADD_CUSTOM_MODULE(55);
    ADD_CUSTOM_MODULE(56);
    ADD_CUSTOM_MODULE(57);
    ADD_CUSTOM_MODULE(58);
    ADD_CUSTOM_MODULE(59);
    ADD_CUSTOM_MODULE(60);
    ADD_CUSTOM_MODULE(61);
    ADD_CUSTOM_MODULE(62);
    ADD_CUSTOM_MODULE(63);
    ADD_CUSTOM_MODULE(64);
    ADD_CUSTOM_MODULE(65);
    ADD_CUSTOM_MODULE(66);
    ADD_CUSTOM_MODULE(67);
    ADD_CUSTOM_MODULE(68);
    ADD_CUSTOM_MODULE(69);
    ADD_CUSTOM_MODULE(70);
    ADD_CUSTOM_MODULE(71);
    ADD_CUSTOM_MODULE(72);
    ADD_CUSTOM_MODULE(73);
    ADD_CUSTOM_MODULE(74);
    ADD_CUSTOM_MODULE(75);
    ADD_CUSTOM_MODULE(76);
    ADD_CUSTOM_MODULE(77);
    ADD_CUSTOM_MODULE(78);
    ADD_CUSTOM_MODULE(79);
    ADD_CUSTOM_MODULE(80);
    ADD_CUSTOM_MODULE(81);
    ADD_CUSTOM_MODULE(82);
    ADD_CUSTOM_MODULE(83);
    ADD_CUSTOM_MODULE(84);
    ADD_CUSTOM_MODULE(85);
    ADD_CUSTOM_MODULE(86);
    ADD_CUSTOM_MODULE(87);
    ADD_CUSTOM_MODULE(88);
    ADD_CUSTOM_MODULE(89);
    ADD_CUSTOM_MODULE(90);
    ADD_CUSTOM_MODULE(91);
    ADD_CUSTOM_MODULE(92);
    ADD_CUSTOM_MODULE(93);
    ADD_CUSTOM_MODULE(94);
    ADD_CUSTOM_MODULE(95);
    ADD_CUSTOM_MODULE(96);
    ADD_CUSTOM_MODULE(97);
    ADD_CUSTOM_MODULE(98);
    ADD_CUSTOM_MODULE(99);
    ADD_CUSTOM_MODULE(100);
};
