//Cleaned With dr NHA's C Script Cleaner V2.72
#region Local Var
var uLocal_0=0;
var uLocal_1=0;
int iLocal_2=0;
int iLocal_3=0;
int iLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
int iLocal_8=0;
int iLocal_9=0;
int iLocal_10=0;
int iLocal_11=0;
var uLocal_12=0;
var uLocal_13=0;
float fLocal_14=0f;
var uLocal_15=0;
var uLocal_16=0;
int iLocal_17=0;
char* sLocal_18=0;
var uLocal_19=0;
var uLocal_20=0;
float fLocal_21=0f;
var uLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
float fLocal_25=0f;
float fLocal_26=0f;
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
float fLocal_30=0f;
float fLocal_31=0f;
float fLocal_32=0f;
var uLocal_33=0;
var uLocal_34=0;
int iLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
var uLocal_40=0;
var uLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
var uScriptParam_0=0;
var uScriptParam_1=0;
var uScriptParam_2=0;
var uScriptParam_3=1176255488;
var uScriptParam_4=1;
var uScriptParam_5=-1;
var uScriptParam_6=-1;
#endregion

void main() // Position - 0x0{
iLocal_2=1;
iLocal_3=134;
iLocal_4=134;
iLocal_5=1;
iLocal_6=1;
iLocal_7=1;
iLocal_8=134;
iLocal_9=1;
iLocal_10=12;
iLocal_11=12;
fLocal_14=0.001f;
iLocal_17=-1;
sLocal_18="NULL";
fLocal_21=0f;
fLocal_25=-0.0375f;
fLocal_26=0.17f;
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_35=3;
func_43(&uScriptParam_0);
while (true){
func_42();
if(func_33()) break;
func_14();
}
func_1();
return;
}


void func_1() // Position - 0x85{
func_3(&uLocal_37);
func_2();
return;
}


void func_2() // Position - 0x97{
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_3(var uParam0) // Position - 0xA3{
var unk;
func_4(false, true, true, false, false, false, false);
if(CAM::DOES_CAM_EXIST(uParam0->f_6)) CAM::DESTROY_CAM(uParam0->f_6, false);
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
*uParam0={
unk 
};
return;
}


void func_4(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xDA{
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
func_13(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20383.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
if(!func_12()) Global_20383.f_1=3;
Global_21725=5;
}
func_11(true, bParam3, bParam2, false);
Global_63368=1;
Global_75696=1;
Global_78556=1;
}else{
func_13(0);
HUD::THEFEED_RESUME();
Global_63368=0;
if(bParam1) GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
func_11(false, bParam3, bParam2, false);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_9(PLAYER::PLAYER_ID()) && !_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0) && !func_5() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()) ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_9(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5) ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
Global_78556=0;
}
return;
}
BOOL func_5() // Position - 0x227{
return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}
BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0x241{
BOOL flag;
if(player==PLAYER::PLAYER_ID()) flag=func_7(-1, false)==8;
else flag=Global_1853910[player /*862*/].f_205==8;
if(bCheckTeam==1)if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)) flag=PLAYER::GET_PLAYER_TEAM(player)==8;
return flag;
}

int func_7(int iParam0, BOOL bParam1) // Position - 0x28C{
int num;
int num2;
num2=iParam0;
if(num2==-1) num2=func_8();
if(Global_1575040[num2]==1){
bParam1;
num=8;
}else{
num=Global_1574912[num2];
bParam1;
}
return num;
}

int func_8() // Position - 0x2CD{
return Global_1574918;
}
BOOL func_9(Player plParam0) // Position - 0x2D9{
if(_NETWORK_IS_PLAYER_IN_SCTV(plParam0, 0)) return true;
if(func_10())if(plParam0==PLAYER::PLAYER_ID()) return true;
if(IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2)) return true;
return false;
}
BOOL func_10() // Position - 0x318{
return IS_BIT_SET(Global_2621446, 3);
}

int func_11(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x326{
int num;
num=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=bParam0 && bParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
num=1;
}}
return num;
}
BOOL func_12() // Position - 0x359{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}


void func_13(int iParam0) // Position - 0x380{
if(iParam0==1) MISC::SET_BIT(&Global_8253, 13);
else MISC::CLEAR_BIT(&Global_8253, 13);
return;
}


void func_14() // Position - 0x3A3{
if(func_15(&uLocal_37)) func_1();
return;
}
BOOL func_15(var uParam0) // Position - 0x3B8{
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::THEFEED_HIDE_THIS_FRAME();
func_30(true);
HUD::DISABLE_FRONTEND_THIS_FRAME();
func_24(0);
if(HUD::IS_PAUSE_MENU_ACTIVE()) HUD::SET_PAUSE_MENU_ACTIVE(false);
switch (func_23(uParam0)){
case 0:
func_18(uParam0);
break;
case 1:
func_16(uParam0);
break;
case 2:
return true;
}
return false;
}


void func_16(var uParam0) // Position - 0x416{
int localSceneFromNetworkId;
localSceneFromNetworkId=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_5);
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >=0.9f){
NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_5);
CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, true, false);
func_17(uParam0, 2);
}
return;
}


void func_17(var uParam0, int iParam1) // Position - 0x461{
*uParam0=iParam1;
return;
}


void func_18(var uParam0) // Position - 0x46E{
char* animDict;
animDict=func_20();
STREAMING::REQUEST_ANIM_DICT(animDict);
if(!STREAMING::HAS_ANIM_DICT_LOADED(animDict)) return;
CAM::DO_SCREEN_FADE_IN(800);
func_17(uParam0, 1);
func_19(uParam0);
return;
}


void func_19(var uParam0) // Position - 0x4A3{
char* animDict;
animDict=func_20();
uParam0->f_5=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uParam0->f_1, 0f, 0f, uParam0->f_4, 2, false, false, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_5, animDict, "action", 1000f, -1.5f, 0, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_5);
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "HS4F_IG25_BEACH", 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
uParam0->f_6=CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
CAM::PLAY_CAM_ANIM(uParam0->f_6, "action_camera", animDict, uParam0->f_1, 0f, 0f, uParam0->f_4, false, 2);
CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
STREAMING::REMOVE_ANIM_DICT(animDict);
return;
}


char* func_20() // Position - 0x54F{
if(func_21()) return "ANIM@SCRIPTED@HEIST@IG25_BEACH@HEELED@";
return "ANIM@SCRIPTED@HEIST@IG25_BEACH@MALE@";
}
BOOL func_21() // Position - 0x567{
return func_22(PLAYER::PLAYER_ID());
}
BOOL func_22(Player plParam0) // Position - 0x577{
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0))==joaat("MP_F_Freemode_01")) return 1;
return 0;
}

int func_23(var uParam0) // Position - 0x596{
return *uParam0;
}


void func_24(int iParam0) // Position - 0x5A1{
if(func_29()) return;
if(!Global_20383.f_1==1){
if(func_28(0)) func_25(iParam0);
MISC::SET_BIT(&Global_8254, 2);
}
return;
}


void func_25(int iParam0) // Position - 0x5D4{
if(func_29()) return;
if(Global_20584)if(func_27()) func_26(true, true);
else func_26(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_12()) Global_20383.f_1=3;
return;
}


void func_26(BOOL bParam0, BOOL bParam1) // Position - 0x65E{
if(bParam0){
if(func_28(0)){
Global_20584=true;
if(bParam1) MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
Global_20311={
Global_20329[Global_20328 /*3*/] 
};
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}}elseif(Global_20584==true){
Global_20584=false;
Global_20311={
Global_20336[Global_20328 /*3*/] 
};
if(bParam1) MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
else MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}
return;
}
BOOL func_27() // Position - 0x6D2{
return IS_BIT_SET(Global_1962996, 5);
}
BOOL func_28(int iParam0) // Position - 0x6E0{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_29() // Position - 0x737{
return IS_BIT_SET(Global_1962996, 19);
}


void func_30(BOOL bParam0) // Position - 0x746{
if(bParam0) func_32();
func_31(4, -1);
func_31(6, -1);
func_31(7, -1);
func_31(3, -1);
func_31(1, -1);
func_31(2, -1);
func_31(11, -1);
func_31(13, -1);
func_31(14, -1);
func_31(16, -1);
return;
}


void func_31(int iParam0, int iParam1) // Position - 0x797{
MISC::SET_BIT(&(Global_1653913.f_1047), iParam0);
switch (iParam0){
case 5:
if(iParam1 > -1) Global_1653913.f_170[iParam1]=1;
break;
}
return;
}


void func_32() // Position - 0x7CD{
Global_2793044.f_4629=0;
return;
}
BOOL func_33() // Position - 0x7DD{
if(_SHOULD_NETWORK_SCRIPT_TERMINATE()) return true;
return false;
}
BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x7F1{
if(Global_1575035==0)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return true;
if(func_41()) return true;
if(Global_2696915) return true;
if(func_40()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(159))if(!func_38()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(157)) return true;
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()) return true;
if(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() !=0)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())==0) return true;
return false;
}
Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x875{
switch (func_37()){
case 0:
return func_36();
case 2:
return joaat("creator");
}
return 0;
}
Hash func_36() // Position - 0x8A8{
switch (Global_2697019){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_37() // Position - 0x8CC{
return Global_32163;
}
BOOL func_38() // Position - 0x8D7{
return Global_2683862.f_698;
}
BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x8E6{
if(SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0)) return true;
return false;
}
BOOL func_40() // Position - 0x8FD{
return Global_2694524;
}
BOOL func_41() // Position - 0x909{
return Global_2683862.f_693;
}


void func_42() // Position - 0x918{
SYSTEM::WAIT(0);
return;
}


void func_43(var uParam0) // Position - 0x925{
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
func_44(&uLocal_37, *uParam0, uParam0->f_3);
return;
}


void func_44(var uParam0, Vector3 vParam1, var uParam2, var uParam3, var uParam4) // Position - 0x943{
func_46(uParam0, vParam1);
func_45(uParam0, uParam4);
func_4(true, true, true, false, false, false, false);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam1, true, false, false, true);
if(CAM::IS_SCREEN_FADED_OUT()) STREAMING::LOAD_ALL_OBJECTS_NOW();
return;
}


void func_45(var uParam0, var uParam1) // Position - 0x983{
uParam0->f_4=uParam1;
return;
}


void func_46(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x991{
uParam0->f_1={
uParam1 
};
return;
}