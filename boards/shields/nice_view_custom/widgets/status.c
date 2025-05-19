sike
sike024
Invisible

newdarkworld — 5/18/2025 7:45 PM
seguro que la han liado con alguna mierda y los han parado
sike — 5/18/2025 7:45 PM
jajajaja algun moro carterista o algo
newdarkworld — 5/18/2025 7:45 PM
encima han intentado huir
nah chavales de 10 o asi
sike — 5/18/2025 7:45 PM
newdarkworld — 5/18/2025 7:45 PM
el poli le estaba metiendo la bronca porque se habia puesto a correr
jajajaja
sike — 5/18/2025 7:45 PM
jajajajaajaja
con 10 años y huyendo de la poli
newdarkworld — 5/18/2025 7:45 PM
le dice: que te estas cachondeando de mi o que?
y el niño asi
sike — 5/18/2025 7:46 PM
jajajan
sike — 5/18/2025 7:55 PM
https://www.youtube.com/shorts/SWeFFmhTyXY
YouTube
KarenVsWorld
Karen Vs Trash Truck - Walmart Karen Clucks Like a Chicken
Image
newdarkworld — 5/18/2025 7:56 PM
jajajajajajaja wtf
se le tiene que meter musica del skyrim a esta mierda
no jodas
es la tia esa del wallmarkt?
sike — 5/18/2025 7:59 PM
yes
legendary karen
newdarkworld — 5/18/2025 7:59 PM
jajajajaja
sike — 5/18/2025 7:59 PM
https://www.youtube.com/watch?v=Fs1gRlsftiY
YouTube
SHALAWAM ISRAEL777
Super Christian Karen flips out at the grocery store 😂 Christian...
Image
jajajaja
https://www.youtube.com/watch?v=XSYni-aAUnU
YouTube
NaStilOnited Games
The Walmart Repent Lady: The Saga
Image
newdarkworld — 5/18/2025 8:01 PM
buah yo le vacio la garrafa de leche esa entera
esta tia tiene que estar en el GTA VI 100%
you moooothaaafaaaakaaa
sike — 5/18/2025 8:03 PM
accuser of the brethren
newdarkworld — 5/18/2025 8:05 PM
jajajajajajajajajajaajaja
pues el otro dia habia un tio asi en el MC Bar
que le estaba pidiendo de cenar a los de la Dida
y despues nos vino a pedir una cerveza
un portugues que estaba fatal
sike — 5/18/2025 8:09 PM
Dios jajaja
Vaya fauna
Que dices tio del rak
newdarkworld — 5/18/2025 8:10 PM
jajajaja nah
sike — 5/18/2025 8:10 PM
La dida
Jajajaja
newdarkworld — 5/18/2025 8:11 PM
que va loco, hoy me toca healty
full ensalada con proteina
sike — 5/18/2025 8:11 PM
Jajajaja que dices tío del coronel sanders?
newdarkworld — 5/18/2025 8:12 PM
sike — Yesterday at 4:47 PM
Image
ahora me falta arreglar un mini bug que tengo
y modificar las imagenes
y hacer el slideshow random porque ahora es secuencial jajaja
newdarkworld — Yesterday at 8:24 PM
mola
sike — Yesterday at 11:10 PM
la que he tenido que liar para hacer el slideshow random
menos mal que me carrea el copilot jajaja
pero igual no se si se podra
newdarkworld — Yesterday at 11:34 PM
Avera nai
Fai faia gui faia
sike — Yesterday at 11:35 PM
tiendeonoo
newdarkworld — Yesterday at 11:35 PM
Que tio, lo conseguiste?
sike — Yesterday at 11:35 PM
estoy probando
pero no creo, esta jodido
newdarkworld — Yesterday at 11:36 PM
Tienes que reflashearlo todo el rato?
sike — Yesterday at 11:36 PM
y todo porque los pendejos de lvgl quitaron una funcion para llegar a un frame especifico
sep
porque compila bien
newdarkworld — Yesterday at 11:36 PM
Omegailul
sike — Yesterday at 11:36 PM
pero cuando pasa 1 min y tiene que cambiar se va al pijo
newdarkworld — Yesterday at 11:37 PM
F
A ver el codigo
Pasalo a ver si hay algun quickfix
sike — Yesterday at 11:37 PM
/*
 *
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */
Expand
status.c
9 KB
linea 240 es cuando se me va al pijo
pero creo que es porque el array de imagenes esta fuera del scope
newdarkworld — Yesterday at 11:39 PM
Buah, espera que con el iPhone se mete en la app de notas
💀
Tu, esto funciona con un pubsub he visto?
Osea interno
O es que hay mas info a lo mejor? Para subscribirse a un evento de usb o bt?
sike — Yesterday at 11:41 PM
buah es que cada vez quie crashea se me va a la mierda el teclado jajaja
newdarkworld — Yesterday at 11:41 PM
:lmFao:
sike — Yesterday at 11:41 PM
eso lo hace con el zmk_subscribe
zmk_su
subscription
newdarkworld — Yesterday at 11:42 PM
zmk_suka
Ara me meto en el pc
newdarkworld
 started a call. — Yesterday at 11:47 PM
sike — Yesterday at 11:50 PM
/*
 *
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */
Expand
status.h
1 KB
newdarkworld — 12:02 AM
Image
sike — 12:06 AM
(A) Widget struct is on the stack

    If you define struct zmk_widget_status widget; as a local variable (inside a function, not static), it will be freed after the function returns.
    The timer then tries to access freed memory → crash.
newdarkworld — 12:24 AM
https://docs.zephyrproject.org/apidoc/latest/group__timer__apis.html#ga19a7d99a01a83828efd7f0d3bf2dd358
sike — 12:36 AM
https://www.tibia.com/charactertrade/?subtopic=currentcharactertrades&page=details&auctionid=1870490
// At the top of your .c file:
static struct zmk_widget_status status_widget;

// In your setup/init code:
zmk_widget_status_init(&status_widget, parent_lv_obj);
#if IS_ENABLED(CONFIG_NICE_VIEW_WIDGET_STATUS)
static struct zmk_widget_status status_widget;
#endif
sike — 12:43 AM
Found it: 

/*
 *
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include "widgets/status.h"

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#if IS_ENABLED(CONFIG_NICE_VIEW_WIDGET_STATUS)
static struct zmk_widget_status status_widget;
#endif

lv_obj_t *zmk_display_status_screen() {

    lv_obj_t *screen;
    screen = lv_obj_create(NULL);

#if IS_ENABLED(CONFIG_NICE_VIEW_WIDGET_STATUS)
    zmk_widget_status_init(&status_widget, screen);
    lv_obj_align(zmk_widget_status_obj(&status_widget), LV_ALIGN_TOP_LEFT, 0, 0);
#endif

    return screen;
}
newdarkworld — 12:47 AM
/*
 *
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */
Expand
message.txt
10 KB
﻿
/*
 *
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include <zephyr/kernel.h>
#include <zephyr/random/random.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/battery.h>
#include <zmk/display.h>
#include <zmk/events/usb_conn_state_changed.h>
#include <zmk/event_manager.h>
#include <zmk/events/battery_state_changed.h>
#include <zmk/events/ble_active_profile_changed.h>
#include <zmk/events/endpoint_changed.h>
#include <zmk/usb.h>
#include <zmk/ble.h>
#include <zmk/endpoints.h>

#include "status.h"

LV_IMG_DECLARE(hammerbeam1);
LV_IMG_DECLARE(hammerbeam2);
LV_IMG_DECLARE(hammerbeam3);
LV_IMG_DECLARE(hammerbeam4);
LV_IMG_DECLARE(hammerbeam5);
LV_IMG_DECLARE(hammerbeam6);
LV_IMG_DECLARE(hammerbeam7);
LV_IMG_DECLARE(hammerbeam8);
LV_IMG_DECLARE(hammerbeam9);
LV_IMG_DECLARE(hammerbeam10);
LV_IMG_DECLARE(hammerbeam11);
LV_IMG_DECLARE(hammerbeam12);
LV_IMG_DECLARE(hammerbeam13);
LV_IMG_DECLARE(hammerbeam14);
LV_IMG_DECLARE(hammerbeam15);
LV_IMG_DECLARE(hammerbeam16);
LV_IMG_DECLARE(hammerbeam17);
LV_IMG_DECLARE(hammerbeam18);
LV_IMG_DECLARE(hammerbeam19);
LV_IMG_DECLARE(hammerbeam20);
LV_IMG_DECLARE(hammerbeam21);
LV_IMG_DECLARE(hammerbeam22);
LV_IMG_DECLARE(hammerbeam23);
LV_IMG_DECLARE(hammerbeam24);
LV_IMG_DECLARE(hammerbeam25);
LV_IMG_DECLARE(hammerbeam26);
LV_IMG_DECLARE(hammerbeam27);
LV_IMG_DECLARE(hammerbeam28);
LV_IMG_DECLARE(hammerbeam29);
LV_IMG_DECLARE(hammerbeam30);

const lv_img_dsc_t *anim_imgs[] = {
    &hammerbeam1,
    &hammerbeam2,
    &hammerbeam3,
    &hammerbeam4,
    &hammerbeam5,
    &hammerbeam6,
    &hammerbeam7,
    &hammerbeam8,
    &hammerbeam9,
    &hammerbeam10,
    &hammerbeam11,
    &hammerbeam12,
    &hammerbeam13,
    &hammerbeam14,
    &hammerbeam15,
    &hammerbeam16,
    &hammerbeam17,
    &hammerbeam18,
    &hammerbeam19,
    &hammerbeam20,
    &hammerbeam21,
    &hammerbeam22,
    &hammerbeam23,
    &hammerbeam24,
    &hammerbeam25,
    &hammerbeam26,
    &hammerbeam27,
    &hammerbeam28,
    &hammerbeam29,
    &hammerbeam30,
};

static void img_update_cb(void *param) {
    struct zmk_widget_status *widget = param;
    
    if (widget == NULL || widget->art == NULL) {
        // Log error or handle the case when widget is NULL
        return;
    }
    
    uint32_t idx = widget->next_img_idx;
    if (idx < ARRAY_SIZE(anim_imgs) && anim_imgs[idx] != NULL) {
        lv_img_set_src(widget->art, anim_imgs[idx]);
    }
}

static void img_update_work_handler(struct k_work *work) {
    struct zmk_widget_status *widget = CONTAINER_OF(work, struct zmk_widget_status, img_update_work);
    lv_async_call(img_update_cb, widget);
}

static void random_frame_timer_handler(struct k_timer *timer) {
    struct zmk_widget_status *widget = (struct zmk_widget_status *)k_timer_user_data_get(timer);
    
    if (widget == NULL) {
        // Log error or handle the case when widget is NULL
        return;
    }
    
    uint32_t array_size = ARRAY_SIZE(anim_imgs);
    if (array_size > 0) {
        widget->next_img_idx = sys_rand32_get() % array_size;
        // Ensure index is in bounds even after modulo
        if (widget->next_img_idx >= array_size) {
            widget->next_img_idx = 0;
        }
        k_work_submit(&widget->img_update_work);
    }
}

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

struct output_status_state {
    struct zmk_endpoint_instance selected_endpoint;
    int active_profile_index;
    bool active_profile_connected;
    bool active_profile_bonded;
};

static void draw_top(lv_obj_t *widget, lv_color_t cbuf[], const struct status_state *state) {
    lv_obj_t *canvas = lv_obj_get_child(widget, 0);

    lv_draw_label_dsc_t label_dsc;
    init_label_dsc(&label_dsc, LVGL_FOREGROUND, &lv_font_montserrat_16, LV_TEXT_ALIGN_RIGHT);
    lv_draw_rect_dsc_t rect_black_dsc;
    init_rect_dsc(&rect_black_dsc, LVGL_BACKGROUND);

    // Fill background
    lv_canvas_draw_rect(canvas, 0, 0, CANVAS_SIZE, CANVAS_SIZE, &rect_black_dsc);

    // Draw battery
    draw_battery(canvas, state);

    // Draw output status
    char output_text[10] = {};

    switch (state->selected_endpoint.transport) {
    case ZMK_TRANSPORT_USB:
        strcat(output_text, LV_SYMBOL_USB);
        break;
    case ZMK_TRANSPORT_BLE:
        if (state->active_profile_bonded) {
            if (state->active_profile_connected) {
                strcat(output_text, LV_SYMBOL_WIFI);
            } else {
                strcat(output_text, LV_SYMBOL_CLOSE);
            }
        } else {
            strcat(output_text, LV_SYMBOL_SETTINGS);
        }
        break;
    }

    lv_canvas_draw_text(canvas, 0, 0, CANVAS_SIZE, &label_dsc, output_text);

    // Rotate canvas
    rotate_canvas(canvas, cbuf);
}

static void set_battery_status(struct zmk_widget_status *widget,
                               struct battery_status_state state) {
#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
    widget->state.charging = state.usb_present;
#endif /* IS_ENABLED(CONFIG_USB_DEVICE_STACK) */

    widget->state.battery = state.level;

    draw_top(widget->obj, widget->cbuf, &widget->state);
}

static void battery_status_update_cb(struct battery_status_state state) {
    struct zmk_widget_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_battery_status(widget, state); }
}

static struct battery_status_state battery_status_get_state(const zmk_event_t *eh) {
    return (struct battery_status_state) {
        .level = zmk_battery_state_of_charge(),
#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
        .usb_present = zmk_usb_is_powered(),
#endif /* IS_ENABLED(CONFIG_USB_DEVICE_STACK) */
    };
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_battery_status, struct battery_status_state,
                            battery_status_update_cb, battery_status_get_state)

ZMK_SUBSCRIPTION(widget_battery_status, zmk_battery_state_changed);
#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
ZMK_SUBSCRIPTION(widget_battery_status, zmk_usb_conn_state_changed);
#endif /* IS_ENABLED(CONFIG_USB_DEVICE_STACK) */

static void set_output_status(struct zmk_widget_status *widget,
                              const struct output_status_state *state) {
    widget->state.selected_endpoint = state->selected_endpoint;
    widget->state.active_profile_index = state->active_profile_index;
    widget->state.active_profile_connected = state->active_profile_connected;
    widget->state.active_profile_bonded = state->active_profile_bonded;

    draw_top(widget->obj, widget->cbuf, &widget->state);
}

static void output_status_update_cb(struct output_status_state state) {
    struct zmk_widget_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_output_status(widget, &state); }
}

static struct output_status_state output_status_get_state(const zmk_event_t *_eh) {
    return (struct output_status_state){
        .selected_endpoint = zmk_endpoints_selected(),
        .active_profile_index = zmk_ble_active_profile_index(),
        .active_profile_connected = zmk_ble_active_profile_is_connected(),
        .active_profile_bonded = !zmk_ble_active_profile_is_open(),
    };
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_output_status, struct output_status_state,
                            output_status_update_cb, output_status_get_state)
ZMK_SUBSCRIPTION(widget_output_status, zmk_endpoint_changed);

#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
ZMK_SUBSCRIPTION(widget_output_status, zmk_usb_conn_state_changed);
#endif
#if defined(CONFIG_ZMK_BLE)
ZMK_SUBSCRIPTION(widget_output_status, zmk_ble_active_profile_changed);
#endif

int zmk_widget_status_init(struct zmk_widget_status *widget, lv_obj_t *parent) {
    widget->obj = lv_obj_create(parent);
    lv_obj_set_size(widget->obj, 160, 68);
    lv_obj_t *top = lv_canvas_create(widget->obj);
    lv_obj_align(top, LV_ALIGN_TOP_RIGHT, 0, 0);
    lv_canvas_set_buffer(top, widget->cbuf, CANVAS_SIZE, CANVAS_SIZE, LV_IMG_CF_TRUE_COLOR);
    
    // Initialize next_img_idx to 0
    widget->next_img_idx = 0;
    
    /*lv_obj_t * art = lv_animimg_create(widget->obj);
    lv_obj_center(art);
    lv_animimg_set_src(art, (const void **) anim_imgs, 30);
    lv_animimg_set_duration(art, CONFIG_CUSTOM_ANIMATION_SPEED);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);
    */

    widget->art = lv_img_create(widget->obj);
    lv_obj_center(widget->art);
    lv_img_set_src(widget->art, anim_imgs[0]);
 
    k_work_init(&widget->img_update_work, img_update_work_handler);
    k_timer_init(&widget->slideshow_timer, random_frame_timer_handler, NULL);
    k_timer_user_data_set(&widget->slideshow_timer, widget); // Pass the pointer, not the address of the pointer
    k_timer_start(&widget->slideshow_timer, K_MSEC(60000), K_MSEC(60000));
    

    lv_obj_align(widget->art, LV_ALIGN_TOP_LEFT, 0, 0);
    sys_slist_append(&widgets, &widget->node);
    widget_battery_status_init();
    widget_output_status_init();


    return 0;
}

lv_obj_t *zmk_widget_status_obj(struct zmk_widget_status *widget) { return widget->obj; }
message.txt
10 KB
