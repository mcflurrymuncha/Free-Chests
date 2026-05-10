#include <Geode/Geode.hpp>
#include <Geode/modify/GameStatsManager.hpp>

using namespace geode::prelude;

class $modify(GameStatsManager) {
    // This bypasses the "Do you have enough?" check
    bool hasStatEnough(int statID, int amount) {
        if (Mod::get()->getSettingValue<bool>("enabled")) {
            return true;
        }
        return GameStatsManager::hasStatEnough(statID, amount);
    }

    // This makes the game think you have 999 of everything (Keys, Diamonds, etc.)
    int getStat(int statID) {
        if (Mod::get()->getSettingValue<bool>("enabled")) {
            // Stat 14 = Demon Keys, Stat 29 = Diamonds
            if (statID == 14 || statID == 29) {
                return 9999;
            }
        }
        return GameStatsManager::getStat(statID);
    }
};
