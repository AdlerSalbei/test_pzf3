class CfgSettings {
    class CBA {
        class Versioning {
            class test_pzf3 {
                class dependencies {
                    // Hard exit if cba/ace is missing or is a wrong version
                    CBA[] = {"cba_main", REQUIRED_CBA_VERSION, "(true)"};
                    ACE[] = {"ace_main", REQUIRED_ACE_VERSION, "(true)"};
                };
            };
        };
    };
};