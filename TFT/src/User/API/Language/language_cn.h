#ifndef _LANGUAGE_CN_H_
#define _LANGUAGE_CN_H_

    // config.ini Parameter Settings - Screen Settings and Feature Settings
    #define STRING_EMULATE_M600           "模拟M600"
    #define STRING_ROTATE_UI              "旋转界面"
    #define STRING_LANGUAGE               "简体中文"
    #define STRING_ACK_NOTIFICATION       "ACK 弹窗类型"
    #define STRING_FILE_SORT_BY           "Sort files by"
    #define STRING_FILE_LIST_MODE         "文件浏览列表模式"
    #define STRING_FAN_SPEED_PERCENT      "百分比显示风扇速度"
    #define STRING_PERSISTENT_INFO        "顶部温度信息"
    #define STRING_TERMINAL_ACK           "在G-code终端中显示温度信息"
    #define STRING_SERIAL_ALWAYS_ON       "串口常开"
    #define STRING_MARLIN_FULLSCREEN      "全屏显示Marlin模式"
    #define STRING_MARLIN_SHOW_TITLE      "Marlin模式显示标题"
    #define STRING_MARLIN_TYPE            "Marlin模式类型"
    #define STRING_MOVE_SPEED             "移动速度(X Y Z)"
    #define STRING_AUTO_LOAD_LEVELING     "自动保存/加载调平数据"
    #define STRING_XY_OFFSET_PROBING      "XY Offset Probing Support"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Z轴多电机自动对齐"
    #define STRING_PS_ON                  "自动关机"
    #define STRING_FIL_RUNOUT             "耗材检测传感器"
    #define STRING_PL_RECOVERY_EN         "断电续打"
    #define STRING_PL_RECOVERY_HOME       "断电续打前归零"
    #define STRING_BTT_MINI_UPS           "启用BTT UPS"
    #define STRING_TOUCH_SOUND            "按钮声音"
    #define STRING_TOAST_SOUND            "Toast 提示声音"
    #define STRING_ALERT_SOUND            "弹窗和提示声音"
    #define STRING_HEATER_SOUND           "加热提示音"
    #define STRING_LCD_BRIGHTNESS         "LCD背光亮度"
    #define STRING_LCD_IDLE_BRIGHTNESS    "LCD睡眠背光亮度"
    #define STRING_LCD_IDLE_TIME          "LCD自动睡眠时间"
    #define STRING_BLOCK_TOUCH_ON_IDLE    "Block touch on idle"
    #define STRING_KNOB_LED_COLOR         "旋钮LED颜色"
    #define STRING_KNOB_LED_IDLE          "旋钮LED自动睡眠"
    #define STRING_START_GCODE_ENABLED    "执行打印前起始Gcode"
    #define STRING_END_GCODE_ENABLED      "执行打印后结束Gcode"
    #define STRING_CANCEL_GCODE_ENABLED   "中断打印Gcode"

    // Machine Parameter Settings - Param Title (ordered by gcode)
    #define STRING_STEPS_SETTING          "电机每毫米脉冲数(Steps/mm)"
    #define STRING_FILAMENT_SETTING       "Filament Diameter"
    #define STRING_MAXACCELERATION        "最大加速度"
    #define STRING_MAXFEEDRATE            "最大移动速度"
    #define STRING_ACCELERATION           "加速度"
    #define STRING_JERK                   "Jerk"
    #define STRING_JUNCTION_DEVIATION     "Junction Deviation"
    #define STRING_HOME_OFFSET            "原点偏移量"
    #define STRING_FWRETRACT              "FW Retraction"
    #define STRING_FWRECOVER              "FW Retraction Recover"
    #define STRING_RETRACT_AUTO           "FW自动回抽"
    #define STRING_HOTEND_OFFSET          "第2个喷头的偏移量"
    #define STRING_STEALTH_CHOP           "TMC StealthChop"
    #define STRING_DELTA_CONFIGURATION    "Delta Configuration"
    #define STRING_DELTA_TOWER_ANGLE      "Tower Angle Trim"
    #define STRING_DELTA_ENDSTOP          "Endstop Adjustments"
    #define STRING_PROBE_OFFSET           "探针偏移量"
    #define STRING_LIN_ADVANCE            "Linear Advance"
    #define STRING_CURRENT_SETTING        "TMC驱动电流设置"
    #define STRING_HYBRID_THRESHOLD       "TMC混合阈值"
    #define STRING_BUMP_SENSITIVITY       "TMC堵转检测灵敏度"
    #define STRING_MBL_OFFSET             "MBL Offset"

    // Machine Parameter Settings - Param Attributes (ordered by gcode)
    #define STRING_PRINT_ACCELERATION     "打印加速度"
    #define STRING_RETRACT_ACCELERATION   "回抽加速度"
    #define STRING_TRAVEL_ACCELERATION    "空载加速度"
    #define STRING_RETRACT_LENGTH         "FW回抽长度"
    #define STRING_RETRACT_SWAP_LENGTH    "换料时回抽的长度"
    #define STRING_RETRACT_FEEDRATE       "FW回抽速度"
    #define STRING_RETRACT_Z_LIFT         "回抽时Z轴抬升的高度"
    #define STRING_RECOVER_LENGTH         "额外挤出的长度"
    #define STRING_SWAP_RECOVER_LENGTH    "换料时额外挤出的长度"
    #define STRING_RECOVER_FEEDRATE       "FW挤出速度"
    #define STRING_SWAP_RECOVER_FEEDRATE  "换料时挤出的速度"

    // Save / Load
    #define STRING_SAVE                   "保存参数"
    #define STRING_RESTORE                "恢复"
    #define STRING_RESET                  "重置"
    #define STRING_EEPROM_SAVE_INFO       "是否保存打印机设置到EEPROM?"
    #define STRING_EEPROM_RESTORE_INFO    "是否从EEPROM加载设置?"
    #define STRING_EEPROM_RESET_INFO      "重置EEPROM到出厂设置?"
    #define STRING_SETTINGS_SAVE          "保存设置"
    #define STRING_SETTINGS_RESTORE       "保存设置"
    #define STRING_SETTINGS_RESET         "重置设置"
    #define STRING_SETTINGS_RESET_INFO    "所有的设置会被重置为默认值, 是否继续?"
    #define STRING_SETTINGS_RESET_DONE    "重置所有参数成功! 重启设备后生效."

    // Navigation Buttons
    #define STRING_PAGE_UP                "上一页"
    #define STRING_PAGE_DOWN              "下一页"
    #define STRING_UP                     "抬升"
    #define STRING_DOWN                   "降低"
    #define STRING_NEXT                   "下一个"
    #define STRING_BACK                   "返回"

    // Value Buttons
    #define STRING_INC                    "增加"
    #define STRING_DEC                    "减少"
    #define STRING_LOAD                   "进料"
    #define STRING_UNLOAD                 "退料"
    #define STRING_ON                     "开启"
    #define STRING_OFF                    "关闭"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "智能"
    #define STRING_SLOW                   "慢速"
    #define STRING_NORMAL                 "常速"
    #define STRING_FAST                   "快速"
    #define STRING_ZERO                   "清零"
    #define STRING_HALF                   "半速"
    #define STRING_FULL                   "全速"
    #define STRING_CUSTOM                 "自定义"
    #define STRING_CLEAR                  "清除"
    #define STRING_DEFAULT                "默认"

    // Action Buttons
    #define STRING_START                  "开始"
    #define STRING_STOP                   "停止"
    #define STRING_PAUSE                  "暂停"
    #define STRING_RESUME                 "继续"
    #define STRING_INIT                   "Init"
    #define STRING_DISCONNECT             "断开连接"
    #define STRING_SHUT_DOWN              "关闭电源"
    #define STRING_FORCE_SHUT_DOWN        "强制关机"
    #define STRING_EMERGENCYSTOP          "紧急停止"
    #define STRING_PREHEAT                "一键预热"
    #define STRING_PREHEAT_BOTH           "全部"
    #define STRING_COOLDOWN               "冷却"

    // Dialog Buttons
    #define STRING_CONFIRM                "确定"
    #define STRING_CANCEL                 "取消"
    #define STRING_WARNING                "警告"
    #define STRING_CONTINUE               "继续"
    #define STRING_CONFIRMATION           "请确认是否执行?"

    // Process Status
    #define STRING_STATUS                 "状态"
    #define STRING_READY                  "准备打印"
    #define STRING_BUSY                   "系统繁忙,请稍候..."
    #define STRING_LOADING                "加载中..."
    #define STRING_UNCONNECTED            "未连接到打印机!"

    // Process Info
    #define STRING_INFO                   "提示"
    #define STRING_INVALID_VALUE          "没有有效的条件!"
    #define STRING_TIMEOUT_REACHED        "已超时!"
    #define STRING_DISCONNECT_INFO        "现在可以用电脑控制打印机"
    #define STRING_SHUTTING_DOWN          "正在关机..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "喷头温度正在降温，等待低于%d℃后自动关机" // 喷头温度正在降温，等待低于50℃后自动关机
    #define STRING_POWER_FAILED           "是否继续打印?"
    #define STRING_PROCESS_RUNNING        "正在运行,请稍后"
    #define STRING_PROCESS_COMPLETED      "处理已完成!"
    #define STRING_PROCESS_ABORTED        "处理已被中断!"

    // TFT SD, U_DISK, Onboard SD, Filament Runout Process Commands / Status / Info
    #define STRING_TFTSD                  "TFT SD"
    #define STRING_READ_TFTSD_ERROR       "读TFT SD卡出错!"
    #define STRING_TFTSD_INSERTED         "SD卡已插入!"
    #define STRING_TFTSD_REMOVED          "SD卡已拔出!"
    #define STRING_U_DISK                 "U盘"
    #define STRING_READ_U_DISK_ERROR      "读U盘出错!"
    #define STRING_U_DISK_INSERTED        "U盘已插入!"
    #define STRING_U_DISK_REMOVED         "U盘已拔出!"
    #define STRING_ONBOARDSD              "板载SD"
    #define STRING_READ_ONBOARDSD_ERROR   "读板载SD卡出错!"
    #define STRING_FILAMENT_RUNOUT        "耗材已用尽,请更换耗材!"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "解锁电机"
    #define STRING_XY_UNLOCK              "解锁XY"

    #define STRING_START_PRINT            "是否开始打印:\n%s?"
    #define STRING_STOP_PRINT             "是否停止打印?"
    #define STRING_IS_PAUSE               "打印中无法挤出耗材, 是否暂停打印?"
    #define STRING_M0_PAUSE               "M0暂停"

    #define STRING_TEST                   "BL自检"
    #define STRING_DEPLOY                 "探针弹出"
    #define STRING_STOW                   "探针收回"
    #define STRING_REPEAT                 "精度测试"

    // Printer Tools
    #define STRING_NOZZLE                 "喷头"
    #define STRING_BED                    "热床"
    #define STRING_CHAMBER                "机箱"
    #define STRING_FAN                    "风扇"

    #define STRING_BLTOUCH                "BLTouch"
    #define STRING_TOUCHMI                "TouchMi"

    // Values
    #define STRING_1_DEGREE               "1℃"
    #define STRING_5_DEGREE               "5℃"
    #define STRING_10_DEGREE              "10℃"

    #define STRING_001_MM                 "0.01mm"
    #define STRING_01_MM                  "0.1mm"
    #define STRING_1_MM                   "1mm"
    #define STRING_5_MM                   "5mm"
    #define STRING_10_MM                  "10mm"
    #define STRING_100_MM                 "100mm"
    #define STRING_200_MM                 "200mm"

    #define STRING_1_PERCENT              "1%"
    #define STRING_5_PERCENT              "5%"
    #define STRING_10_PERCENT             "10%"
    #define STRING_PERCENT_VALUE          "%d%%"

    #define STRING_5_SECONDS              "5秒"
    #define STRING_10_SECONDS             "10秒"
    #define STRING_30_SECONDS             "30秒"
    #define STRING_60_SECONDS             "1分钟"
    #define STRING_120_SECONDS            "2分钟"
    #define STRING_300_SECONDS            "5分钟"

    // Colors
    #define STRING_WHITE                  "白色"
    #define STRING_BLACK                  "黑色"
    #define STRING_BLUE                   "蓝色"
    #define STRING_RED                    "红色"
    #define STRING_GREEN                  "绿色"
    #define STRING_CYAN                   "青色"
    #define STRING_YELLOW                 "黄色"
    #define STRING_BROWN                  "棕色"
    #define STRING_GRAY                   "灰色"
    #define STRING_ORANGE                 "橙色"
    #define STRING_INDIGO                 "靛"
    #define STRING_VIOLET                 "紫罗兰色"
    #define STRING_MAGENTA                "桃红色"
    #define STRING_PURPLE                 "紫色"
    #define STRING_LIME                   "青柠色"
    #define STRING_DARKBLUE               "暗蓝色"
    #define STRING_DARKGREEN              "暗绿色"
    #define STRING_DARKGRAY               "暗灰色"

    // Menus
    #define STRING_HEAT                   "加热"
    #define STRING_MOVE                   "移动"
    #define STRING_HOME                   "回原点"
    #define STRING_PRINT                  "打印"
    #define STRING_EXTRUDE                "挤出"
    #define STRING_SETTINGS               "设置"
    #define STRING_SCREEN_SETTINGS        "屏幕设置"
    #define STRING_UI_SETTINGS            "UI"
    #define STRING_SOUND                  "声音"
    #define STRING_MARLIN_MODE_SETTINGS   "MarlinMode"
    #define STRING_MACHINE_SETTINGS       "机器设置"
    #define STRING_PARAMETER_SETTINGS     "参数设置"
    #define STRING_FEATURE_SETTINGS       "功能设置"
    #define STRING_CONNECTION_SETTINGS    "连接"
    #define STRING_SERIAL_PORTS           "S. Ports"
    #define STRING_BAUDRATE               "波特率"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_RGB_SETTINGS           "灯光颜色"
    #define STRING_RGB_OFF                "熄灭灯光"
    #define STRING_TERMINAL               "Terminal"
    #define STRING_LEVELING               "调平"
    #define STRING_POINT_1                "第一点"
    #define STRING_POINT_2                "第二点"
    #define STRING_POINT_3                "第三点"
    #define STRING_POINT_4                "第四点"
    #define STRING_POINT_5                "第五点"
    #define STRING_BED_LEVELING           "平台调平"
    #define STRING_BL_COMPLETE            "平台调平完成!"
    #define STRING_BL_SMART_FILL          "部分点未探测,已被自动填充, 需要手动保存!"
    #define STRING_BL_ENABLE              "BL:已开启"
    #define STRING_BL_DISABLE             "BL:已关闭"
    #define STRING_ABL                    "自动调平"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"
    #define STRING_MBL_SETTINGS           "Mesh Bed Leveling"
    #define STRING_ABL_SETTINGS           "Auto Bed Leveling"
    #define STRING_ABL_SETTINGS_BBL       "Bilinear Bed Leveling"
    #define STRING_ABL_SETTINGS_UBL       "Unified Bed Leveling"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Save to slot"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Load from slot"
    #define STRING_ABL_SLOT0              "Slot 0"
    #define STRING_ABL_SLOT1              "Slot 1"
    #define STRING_ABL_SLOT2              "Slot 2"
    #define STRING_ABL_SLOT3              "Slot 3"
    #define STRING_ABL_SLOT_EEPROM        "Save the mesh to EEPROM to load after reboot?"
    #define STRING_ABL_Z                  "Z Fade"
    #define STRING_LEVEL_CORNER           "L corner"
    #define STRING_P_OFFSET               "P Offset"
    #define STRING_H_OFFSET               "H Offset"
    #define STRING_DISTANCE               "距离"
    #define STRING_LOAD_UNLOAD            "挤出/回抽耗材"  // needs translation
    #define STRING_LOAD_UNLOAD_SHORT      "进/退料"  // needs translation
    #define STRING_TOUCHSCREEN_ADJUST     "触屏校准"
    #define STRING_MORE                   "更多"
    #define STRING_SCREEN_INFO            "关于"
    #define STRING_BG_COLOR               "背景颜色"
    #define STRING_FONT_COLOR             "字体颜色"
    #define STRING_PERCENTAGE             "百分比"
    #define STRING_PERCENTAGE_SPEED       "速度百分比"
    #define STRING_PERCENTAGE_FLOW        "流量百分比"
    #define STRING_BABYSTEP               "Z-微调"
    #define STRING_X_INC                  "X+"
    #define STRING_Y_INC                  "Y+"
    #define STRING_Z_INC                  "Z+"
    #define STRING_X_DEC                  "X-"
    #define STRING_Y_DEC                  "Y-"
    #define STRING_Z_DEC                  "Z-"
    #define STRING_X                      "X"
    #define STRING_Y                      "Y"
    #define STRING_Z                      "Z"
    #define STRING_ADJUST_TITLE           "触屏校准"
    #define STRING_ADJUST_INFO            "请点击红点中心位置"
    #define STRING_ADJUST_OK              "校准成功"
    #define STRING_ADJUST_FAILED          "校准失败,请重试"
    #define STRING_UNIFIEDMOVE            "运动"
    #define STRING_UNIFIEDHEAT            "温度"
    #define STRING_TOUCH_TO_EXIT          "触摸任意点退出当前界面"
    #define STRING_MAINMENU               "菜单"
    #define STRING_LEVELING_EDGE_DISTANCE "手动调平边沿距离"
    #define STRING_TUNING                 "调整"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "PID自动整定"
    #define STRING_PID_START_INFO         "开始PID自动整定,需要几分钟来完成,是否继续?"
    #define STRING_PID_START_INFO_2       "PID 正在自动整定中!"
    #define STRING_PID_START_INFO_3       "不要操作触控屏直到整定完成!"
    #define STRING_TUNE_EXTRUDER          "微调E-Steps"
    #define STRING_TUNE_EXT_EXTRUDE_100   "挤出100mm"
    #define STRING_TUNE_EXT_TEMP          "挤出机微调 | 加热"
    #define STRING_TUNE_EXT_MARK120MM     "在耗材上标记120mm\n标记完成后点击 '%s'\n挤出完成后测量剩余长度"
    #define STRING_TUNE_EXT_HEATOFF       "关闭加热?"
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "调整E-Steps"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "新的E-Steps已生效,需要手动保存到EEPROM\n新E-Steps: %0.2f"
    #define STRING_TUNE_EXT_MEASURED      "剩余的长度:"
    #define STRING_TUNE_EXT_OLD_ESTEP     "旧的E-Steps: %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "新的E-Steps: %0.2f"
    #define STRING_NOTIFICATIONS          "通知"
    #define STRING_MESH_EDITOR            "Mesh edit"
    #define STRING_MESH_TUNER             "Mesh tuner"
    #define STRING_CASE_LIGHT             "机箱灯光"
    #define STRING_LOAD_STARTED           "正在挤出耗材, 请等待挤出完成."
    #define STRING_UNLOAD_STARTED         "正在回抽耗材, 请等待回抽完成."
    #define STRING_HEATERS_ON             "喷头仍在加热, 是否要停止加热?"
    #define STRING_PRINT_FINISHED         "  打印 完成"
    #define STRING_MAIN_SCREEN            "主界面"
    #define STRING_PREVIOUS_PRINT_DATA    "打印统计"
    #define STRING_PRINT_TIME             "打印耗时: %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\n使用耗材长度: %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\n已使用耗材重量: %1.2fg"
    #define STRING_FILAMENT_COST          "\n已使用耗材成本: %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\n无耗材历史数据"
    #define STRING_CLICK_FOR_MORE         "点击查看详情"
    #define STRING_EXT_TEMPLOW            "喷头温度低于最小挤出温度 (%d℃)."
    #define STRING_HEAT_HOTEND            "加热喷头到%d℃?"
    #define STRING_DESIRED_TEMPLOW        "喷头温度过低\n设置的温度为 (%d℃)."
    #define STRING_WAIT_HEAT_UP           "等待加热完成."
    #define STRING_Z_ALIGN                "Z Align"
    #define STRING_MACROS                 "宏指令"
    #define STRING_MESH_VALID             "调平测试"
    #define STRING_CONNECT_PROBE          "开启此操作前请先连接探头, 操作完成后请断开连接"
    #define STRING_DISCONNECT_PROBE       "Make sure you have disconnected probe before using this feature."
    #define STRING_CALIBRATION            "校准"

#endif
