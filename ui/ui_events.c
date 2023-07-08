// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SmartDoorLock

#include "ui.h"
// #include "task.h"
// #include "FreeRTOS.h"
void screen1_init(lv_event_t * e)
{
	lv_group_remove_all_objs(lv_group_get_default());
    lv_group_add_obj(lv_group_get_default(),ui_Keyboard2);
}

void submit_password(lv_event_t * e)
{
	if (strcmp(lv_textarea_get_text(ui_TextArea2),"123")==0)
    {
        lv_label_set_text(ui_Label2,"密码正确");
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 500);
        
    }else{
        lv_label_set_text(ui_Label2,"密码错误");
    }
    
}
uint8_t my_img_data[128];
lv_img_dsc_t my_img_dsc = {
        .header.always_zero = 0,
        .header.w = 8,
        .header.h = 8,
        .data_size = 8 * 8 * LV_COLOR_DEPTH / 8,
        .header.cf = LV_IMG_CF_TRUE_COLOR,          /*Set the color format*/
        .data = my_img_data,
};
void screen2_init(lv_event_t * e)
{
    
	lv_group_remove_all_objs(lv_group_get_default());
    lv_group_add_obj(lv_group_get_default(),ui_Switch2);
    
    for (int i = 0; i < 128; i++)
    {
        my_img_data[i]=31;
    }
    
    
    
    lv_img_set_src(ui_Image2,&my_img_dsc);
}
