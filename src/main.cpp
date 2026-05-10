#include <Geode/Geode.hpp>
#include <Geode/modify/GameStatsManager.hpp>
#include <Geode/modify/GJRewardObject.hpp>

using namespace geode::prelude;

// Bypass currency checks in the Stats Manager
class $modify(GameStatsManager) {
    bool hasStatEnough(int statID, int amount) {
        if (Mod::get()->getSettingValue<bool>("enabled")) {
            return true;
        }
        return GameStatsManager::hasStatEnough(statID, amount);
    }

    int getStat(int statID) {
        if (Mod::get()->getSettingValue<bool>("enabled")) {
            // 14: Demon Keys, 29: Diamonds
            if (statID == 14 || statID == 29) return 999;
        }
        return GameStatsManager::getStat(statID);
    }
};

// Force the chest objects to report themselves as "unlocked"
class $modify(GJRewardObject) {
    bool canUnlockWithKey() {
        if (Mod::get()->getSettingValue<bool>("enabled")) {
            return true;
        }
        return GJRewardObject::canUnlockWithKey();
    }
};
