#pragma once

#include <vector>

namespace inst::config {
    static const std::string appDir = "sdmc:/switch/AtmoXL-Titel-Installer";
    static const std::string configPath = appDir + "/config.json";
    static const std::string appVersion = "1.6.2";

    extern std::string gAuthKey;
    extern std::string lastNetUrl;
    extern std::vector<std::string> updateInfo;
    extern int languageSetting;
    extern bool ignoreReqVers;
    extern bool validateNCAs;
    extern bool overClock;
    extern bool deletePrompt;
    extern bool enableSound;
    extern bool enableLightning;
    extern bool autoUpdate;
    extern bool usbAck;

    void setConfig();
    void parseConfig();
}