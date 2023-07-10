// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SmartDoorLock

#ifndef _UI_EVENTS_H
#define _UI_EVENTS_H

#ifdef __cplusplus
extern "C" {
#endif

void userScreen_init(lv_event_t * e);
void userScreen_Deinit(lv_event_t * e);
void userScreen_inputPassword_button(lv_event_t * e);
void click_camera_open(lv_event_t * e);
void passwordScreen_init(lv_event_t * e);
void submit_password(lv_event_t * e);
void CancelPasswordInput(lv_event_t * e);
void adminScreen_init(lv_event_t * e);
void add_fingerprint(lv_event_t * e);
void ChangePasswordButton(lv_event_t * e);
void empty_all_fingerprint(lv_event_t * e);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
