# 周辺機側（キー配列を持たない側）では PMW3610 ドライバが参照する
# keymap / behavior_queue が存在せずリンクできないため、空のスタブを置く。
if(CONFIG_PMW3610 AND CONFIG_ZMK_SPLIT AND NOT CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
  zephyr_library()
  zephyr_library_sources(src/peripheral_stubs.c)
endif()
