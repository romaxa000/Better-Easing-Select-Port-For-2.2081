#pragma once

#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>
#include <Geode/modify/SetupTriggerPopup.hpp>

using namespace geode::prelude;

class EasingSelectPopup : public Popup {
protected:
    cocos2d::CCArray* m_easingButtonArray = nullptr;
    SetupTriggerPopup* m_triggerPopup = nullptr;
    float m_exponent = 0.f;
    int m_steps = 0;
    int m_type = 0;
    float m_thickness = 0.f;
    cocos2d::ccColor4F m_col = { 1.f, 1.f, 1.f, 1.f };

    void onTogglePreviewMode(cocos2d::CCObject* sender);

public:
    static EasingSelectPopup* create(SetupTriggerPopup* triggerPopup, float exponent);
    bool init(SetupTriggerPopup* triggerPopup, float exponent);
    void onClose(cocos2d::CCObject* sender) override;
};

