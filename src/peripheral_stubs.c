#include <zmk/keymap.h>
#include <zmk/behavior.h>
#include <zmk/behavior_queue.h>

/* 周辺機にはキーマップが無いので、最上位レイヤーは常に 0 として返す */
zmk_keymap_layer_index_t zmk_keymap_highest_layer_active(void) { return 0; }

/* ボールアクション（ボール操作でキー送出）は周辺機では使わないので何もしない */
int zmk_behavior_queue_add(const struct zmk_behavior_binding_event *event,
                           const struct zmk_behavior_binding binding, bool press,
                           uint32_t wait) {
    return 0;
}
