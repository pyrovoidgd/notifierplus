#include <Geode/Geode.hpp>

using namespace geode::prelude;

// Show a notification only when its category is enabled.
void notifyIfEnabled(
    std::string const& setting,
    std::string const& title,
    std::string const& message
) {
    auto mod = Mod::get();

    if (!mod->getSettingValue<bool>(setting)) {
        return;
    }

    FLAlertLayer::create(
        title.c_str(),
        message.c_str(),
        "OK"
    )->show();
}
