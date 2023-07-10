// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SmartDoorLock

#include "../ui.h"

void ui_adminScreen_screen_init(void)
{
    ui_adminScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_adminScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel2 = lv_obj_create(ui_adminScreen);
    lv_obj_set_width(ui_Panel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Panel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Panel2, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(ui_Panel2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Panel2, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_addfingerprintButton = lv_btn_create(ui_Panel2);
    lv_obj_set_width(ui_addfingerprintButton, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_addfingerprintButton, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_addfingerprintButton, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_addfingerprintButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_addfingerprintButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label1 = lv_label_create(ui_addfingerprintButton);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "录入指纹");
    lv_obj_set_style_text_font(ui_Label1, &ui_font_chinese, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_addfingerprinting = lv_spinner_create(ui_Panel2, 1000, 90);
    lv_obj_set_width(ui_addfingerprinting, 36);
    lv_obj_set_height(ui_addfingerprinting, 35);
    lv_obj_set_align(ui_addfingerprinting, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_addfingerprinting, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_addfingerprinting, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_arc_width(ui_addfingerprinting, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_addfingerprinting, lv_color_hex(0x000000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_addfingerprinting, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_addfingerprinting, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_ChangePasswordButton = lv_btn_create(ui_Panel2);
    lv_obj_set_width(ui_ChangePasswordButton, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChangePasswordButton, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ChangePasswordButton, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_ChangePasswordButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ChangePasswordButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label6 = lv_label_create(ui_ChangePasswordButton);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "修改密码");
    lv_obj_set_style_text_font(ui_Label6, &ui_font_chinese, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_emptyallfingerprintButton = lv_btn_create(ui_adminScreen);
    lv_obj_set_width(ui_emptyallfingerprintButton, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_emptyallfingerprintButton, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_align(ui_emptyallfingerprintButton, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_emptyallfingerprintButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_emptyallfingerprintButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_emptyallfingerprintButton, lv_color_hex(0xFF4F4F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_emptyallfingerprintButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_emptyallfingerprintButton, lv_color_hex(0x85FF64), LV_PART_MAIN | LV_STATE_USER_1);
    lv_obj_set_style_bg_opa(ui_emptyallfingerprintButton, 255, LV_PART_MAIN | LV_STATE_USER_1);
    lv_obj_set_style_shadow_color(ui_emptyallfingerprintButton, lv_color_hex(0x007DFF), LV_PART_MAIN | LV_STATE_USER_1);
    lv_obj_set_style_shadow_opa(ui_emptyallfingerprintButton, 255, LV_PART_MAIN | LV_STATE_USER_1);
    lv_obj_set_style_shadow_width(ui_emptyallfingerprintButton, 20, LV_PART_MAIN | LV_STATE_USER_1);
    lv_obj_set_style_shadow_spread(ui_emptyallfingerprintButton, 0, LV_PART_MAIN | LV_STATE_USER_1);

    ui_Label8 = lv_label_create(ui_emptyallfingerprintButton);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "清空指纹库");
    lv_obj_set_style_text_font(ui_Label8, &ui_font_chinese, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_backButton = lv_btn_create(ui_adminScreen);
    lv_obj_set_width(ui_backButton, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_backButton, LV_SIZE_CONTENT);    /// 1
    lv_obj_add_flag(ui_backButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_backButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_backButton, &ui_font_chinese, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_backButton);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "返回");

    lv_obj_add_event_cb(ui_addfingerprintButton, ui_event_addfingerprintButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ChangePasswordButton, ui_event_ChangePasswordButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_emptyallfingerprintButton, ui_event_emptyallfingerprintButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_backButton, ui_event_backButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_adminScreen, ui_event_adminScreen, LV_EVENT_ALL, NULL);

}
