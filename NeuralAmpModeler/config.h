#define PLUG_NAME "NeuralAmpModeler"
#define PLUG_MFR "Steven Atkinson"
#define PLUG_VERSION_HEX 0x00000703
#define PLUG_VERSION_STR "0.7.3"
#define PLUG_UNIQUE_ID '1YEo'
#define PLUG_MFR_ID 'SDAa'
#define PLUG_URL_STR "https://github.com/sdatkinson/NeuralAmpModelerPlugin"
#define PLUG_EMAIL_STR "spam@me.com"
#define PLUG_COPYRIGHT_STR "Copyright 2022 Steven Atkinson"
#define PLUG_CLASS_NAME NeuralAmpModeler
#define BUNDLE_NAME "NeuralAmpModeler"
#define BUNDLE_MFR "StevenAtkinson"
#define BUNDLE_DOMAIN "com"

#define SHARED_RESOURCES_SUBPATH "NeuralAmpModeler"

#ifdef APP_API
  #define PLUG_CHANNEL_IO "1-2"
#else
  #define PLUG_CHANNEL_IO "1-1 1-2 2-2"
#endif

#define PLUG_LATENCY 0
#define PLUG_TYPE 0
#define PLUG_DOES_MIDI_IN 0
#define PLUG_DOES_MIDI_OUT 0
#define PLUG_DOES_MPE 0
#define PLUG_DOES_STATE_CHUNKS 0
#define PLUG_HAS_UI 1
#define PLUG_WIDTH 600
#define PLUG_HEIGHT 400
#define PLUG_FPS 60
#define PLUG_SHARED_RESOURCES 0
#define PLUG_HOST_RESIZE 0
#define PLUG_MAX_WIDTH PLUG_WIDTH * 4
#define PLUG_MAX_HEIGHT PLUG_HEIGHT * 4

#define AUV2_ENTRY NeuralAmpModeler_Entry
#define AUV2_ENTRY_STR "NeuralAmpModeler_Entry"
#define AUV2_FACTORY NeuralAmpModeler_Factory
#define AUV2_VIEW_CLASS NeuralAmpModeler_View
#define AUV2_VIEW_CLASS_STR "NeuralAmpModeler_View"

#define AAX_TYPE_IDS 'ITP1'
#define AAX_TYPE_IDS_AUDIOSUITE 'ITA1'
#define AAX_PLUG_MFR_STR "Acme"
#define AAX_PLUG_NAME_STR "NeuralAmpModeler\nIPEF"
#define AAX_PLUG_CATEGORY_STR "Effect"
#define AAX_DOES_AUDIOSUITE 1

#define VST3_SUBCATEGORY "Fx"

#define APP_NUM_CHANNELS 2
#define APP_N_VECTOR_WAIT 0
#define APP_MULT 1
#define APP_COPY_AUV3 0
#define APP_SIGNAL_VECTOR_SIZE 64

#define ROBOTO_FN "Roboto-Regular.ttf"
#define HELP_FN "help.svg"
#define FILE_FN "SkinEHeritage_File.svg"
#define FOLDER_FN "folder.svg"
#define CLOSE_BUTTON_FN "SkinEHeritage_Close-button.svg"
#define LEFT_ARROW_FN "SkinEHeritage_ArrowLeft.svg"
#define RIGHT_ARROW_FN "SkinEHeritage_ArrowRight.svg"
#define EH_SKIN_FN "SkinEHeritage_BG.jpeg"
#define EH_SKIN2X_FN "SkinEHeritage_BG@2x.jpeg"
#define KNOB_FN "SkinEHeritage_Knob.png"
#define KNOB2X_FN "SkinEHeritage_Knob@2x.png"
#define TOGGLE_FN "SkinEHeritage_Toggle.png"
#define TOGGLE2X_FN "SkinEHeritage_Toggle@2x.png"
#define TOGGLEIR_FN "SkinEHeritage_IR_Toggle.png"
#define TOGGLEIR2X_FN "SkinEHeritage_IR_Toggle@2x.png"
#define TOGGLE_HANDLE_FN "SkinEHeritage_ToggleHandle.png"
#define TOGGLE_HANDLE2X_FN "SkinEHeritage_ToggleHandle@2x.png"
