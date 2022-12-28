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
var uLocal_18=0;
var uLocal_19=0;
char* sLocal_20=0;
float fLocal_21=0f;
float fLocal_22=0f;
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
Hash hLocal_36=0;
var uLocal_37=10;
var uLocal_38=0;
var uLocal_39=0;
var uLocal_40=0;
var uLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=0;
var uLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
var uLocal_62=0;
var uLocal_63=0;
var uLocal_64=0;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
var uLocal_74=0;
var uLocal_75=0;
var uLocal_76=0;
var uLocal_77=0;
var uLocal_78=0;
var uLocal_79=0;
var uLocal_80=0;
var uLocal_81=0;
var uLocal_82=0;
var uLocal_83=0;
var uLocal_84=0;
var uLocal_85=0;
int iLocal_86=0;
char* sLocal_87=0;
var uLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=0;
var uLocal_94=0;
var uLocal_95=0;
var uLocal_96=0;
var uLocal_97=0;
var uLocal_98=0;
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=0;
var uLocal_104=0;
var uLocal_105=2;
var uLocal_106=0;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
var uLocal_110=0;
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
var uLocal_116=6;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=0;
var uLocal_121=0;
var uLocal_122=0;
var uLocal_123=5;
var uLocal_124=0;
var uLocal_125=0;
var uLocal_126=0;
var uLocal_127=0;
var uLocal_128=0;
var uLocal_129=6;
var uLocal_130=0;
var uLocal_131=0;
var uLocal_132=0;
var uLocal_133=0;
var uLocal_134=0;
var uLocal_135=0;
var uLocal_136=0;
var uLocal_137=0;
var uLocal_138=0;
var uLocal_139=0;
var uLocal_140=0;
var uLocal_141=0;
var uLocal_142=0;
var uLocal_143=0;
var uLocal_144=0;
var uLocal_145=0;
var uLocal_146=0;
var uLocal_147=0;
var uLocal_148=0;
Vehicle veLocal_149=0;
Cam caLocal_150=0;
BOOL bLocal_151=0;
int iLocal_152=0;
int iLocal_153=0;
int iLocal_154=0;
int iLocal_155=0;
var uScriptParam_0=0;
var uScriptParam_1=0;
var uScriptParam_2=0;
var uScriptParam_3=0;
var uScriptParam_4=0;
var uScriptParam_5=0;
var uScriptParam_6=0;
var uScriptParam_7=0;
var uScriptParam_8=0;
var uScriptParam_9=0;
var uScriptParam_10=0;
var uScriptParam_11=0;
var uScriptParam_12=0;
var uScriptParam_13=0;
var uScriptParam_14=0;
var uScriptParam_15=0;
var uScriptParam_16=0;
var uScriptParam_17=2;
var uScriptParam_18=0;
var uScriptParam_19=0;
var uScriptParam_20=0;
var uScriptParam_21=0;
var uScriptParam_22=0;
var uScriptParam_23=0;
var uScriptParam_24=0;
var uScriptParam_25=0;
var uScriptParam_26=0;
var uScriptParam_27=0;
var uScriptParam_28=6;
var uScriptParam_29=0;
var uScriptParam_30=0;
var uScriptParam_31=0;
var uScriptParam_32=0;
var uScriptParam_33=0;
var uScriptParam_34=0;
var uScriptParam_35=5;
var uScriptParam_36=0;
var uScriptParam_37=0;
var uScriptParam_38=0;
var uScriptParam_39=0;
var uScriptParam_40=0;
var uScriptParam_41=6;
var uScriptParam_42=0;
var uScriptParam_43=0;
var uScriptParam_44=0;
var uScriptParam_45=0;
var uScriptParam_46=0;
var uScriptParam_47=0;
var uScriptParam_48=0;
var uScriptParam_49=0;
var uScriptParam_50=0;
var uScriptParam_51=0;
var uScriptParam_52=0;
var uScriptParam_53=0;
var uScriptParam_54=0;
var uScriptParam_55=0;
var uScriptParam_56=0;
var uScriptParam_57=0;
var uScriptParam_58=0;
var uScriptParam_59=0;
var uScriptParam_60=0;
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
sLocal_20="NULL";
fLocal_21=0f;
fLocal_25=-0.0375f;
fLocal_26=0.17f;
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_35=3;
uLocal_80={
-1593.813f, 5221.2354f, 1.94482f 
};
uLocal_83={
-1603.9861f, 5243.6235f, 4.940323f 
};
iLocal_86=func_368(CHAR_ABIGAIL);
sLocal_87="rcmabigail";
uLocal_88={
uScriptParam_0 
};
func_366(&uLocal_88);
MISC::SET_MISSION_FLAG(true);
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19)){
func_365("Force cleanup [TERMINATING]");
func_346(true);
func_332();
}
func_331(&veLocal_149, &uLocal_88.f_28[0]);
while (true){
SYSTEM::WAIT(0);
RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_DAS", 0);
func_315(uLocal_88.f_9, 0, 0, 0, 0, 0);
func_1();
}
return;
}


void func_1() // Position - 0xF6{
switch (iLocal_153){
case 0:
func_307();
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(veLocal_149)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(veLocal_149, "rcmabigail", "loop_talk", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(veLocal_149, "rcmabigail", "loop_look", 3)){
TASK::TASK_PLAY_ANIM(veLocal_149, "rcmabigail", "loop_2_cs", 8f, -8f, -1, 2, 0, false, false, false);
CUTSCENE::REMOVE_CUTSCENE();
func_305(true);
CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("ABIGAIL_MCS_1_CONCAT", 2, 8);
iLocal_153=1;
}else{
func_304("ABIGAIL_MCS_1_CONCAT", true);
iLocal_153=2;
}}
break;
case 1:
func_302();
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(veLocal_149) && ENTITY::IS_ENTITY_PLAYING_ANIM(veLocal_149, "rcmabigail", "loop_2_cs", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(veLocal_149, "rcmabigail", "loop_2_cs") > 0.99f) iLocal_153=iLocal_153 + 1;
break;
case 2:
func_302();
if(func_293(1, 1093140480, 0)){
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(veLocal_149)) CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(veLocal_149, "ABIGAIL", 0, 0, 0);
func_292();
CUTSCENE::START_CUTSCENE(2048);
RECORDING::REPLAY_START_EVENT(4);
iLocal_153=iLocal_153 + 1;
}
break;
case 3:
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
func_285(-1608.1659f, 5246.844f, 1.97751f, -1604.4207f, 5238.246f, 4.996789f, 6f, -1596.4615f, 5232.455f, 2.9794f, 25.5125f, true, true, true, false, false);
func_236(-1596.4615f, 5232.455f, 2.9794f, 25.5125f, 0, 145);
func_234(-1604.668f, 5239.1f, 3.01f, 1, 1, 1, 1, 1, true, true, true, 1, true);
MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, false, false, false, false, false, false, 0);
func_233(500, false);
STREAMING::REMOVE_ANIM_DICT("rcmabigail");
func_230(58, true);
func_229(58);
bLocal_151=true;
if(!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) STREAMING::NEW_LOAD_SCENE_START(-1606.2491f, 5273.9644f, 5.199186f, -1.633685f, 0f, -175.27481f, 300f, 0);
iLocal_153=iLocal_153 + 1;
}
break;
case 4:
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false)){
caLocal_150=unk_0xDEE46CEB08617ECA("DEFAULT_SCRIPTED_CAMERA", 1);
CAM::SET_CAM_PARAMS(caLocal_150, -1606.2491f, 5273.9644f, 5.199186f, -1.633685f, 0f, -175.27481f, 30.166092f, 0, 1, 1, 2);
CAM::SET_CAM_PARAMS(caLocal_150, -1605.6807f, 5274.014f, 3.870102f, -2.089875f, 0f, -178.06396f, 30.166092f, 10000, 1, 1, 2);
CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
CAM::SHAKE_CAM(caLocal_150, "HAND_SHAKE", 0.3f);
}
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0)){
RECORDING::REPLAY_STOP_EVENT();
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1606.5344f, 5253.9814f, 2.9994f, 1f, 20000, 1048576000, 0, 1193033728);
TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -1602.62f, 5260.37f, 1.41f, -1, 0, 2);
}
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(veLocal_149) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Abigail", 0)){
TASK::CLEAR_PED_TASKS(veLocal_149);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(veLocal_149, -1581.5586f, 5198.0137f, 3.0091f, 1f, 20000, 1048576000, 0, 1193033728);
}}else{
iLocal_152=MISC::GET_GAME_TIMER() + 10000;
iLocal_153=iLocal_153 + 1;
}
break;
case 5:
if(iLocal_155==0 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE()==FIRST_PERSON && MISC::GET_GAME_TIMER() > iLocal_152 - 300){
GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
iLocal_155=1;
}
if(func_227(1000) || MISC::GET_GAME_TIMER() > iLocal_152){
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DIVING_HELP" /*A Dinghy is now available at the Marina property to search for the missing submarine pieces.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
CAM::DESTROY_ALL_CAMS(false);
func_215(1, 1, 1, true);
func_214(&uLocal_88, false, true);
func_213(&veLocal_149);
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID())){
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -1602.62f, 5260.37f, 1.41f, 5000, 0, 2);
}
func_3();
}elseif(!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DIVING_HELP" /*A Dinghy is now available at the Marina property to search for the missing submarine pieces.*/)){
func_2("DIVING_HELP" /*A Dinghy is now available at the Marina property to search for the missing submarine pieces.*/);
}
break;
}
return;
}


void func_2(char* sParam0) // Position - 0x510{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
return;
}


void func_3() // Position - 0x526{
func_204(16, 0, true);
if(!bLocal_151){
func_230(58, true);
func_229(58);
bLocal_151=true;
}
func_4(109, true);
func_332();
return;
}


void func_4(int iParam0, BOOL bParam1) // Position - 0x557{
int num;
var unk;
num=func_202();
if(num==-1) return;
if(!Global_112735[num /*10*/].f_4) return;
if(Global_112735[num /*10*/].f_5) return;
if(Global_112735[num /*10*/].f_6) return;
func_176(num, false);
MISC::SET_BIT(&Global_78807, 1);
if(Global_112735[num /*10*/].f_9==-1){}else{
func_175(&(Global_112735[num /*10*/].f_9));
}
if(bParam1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
PLAYER::START_FIRING_AMNESTY(5000);
}}
func_161(num, 1, false, false);
func_160(0, 0);
TEXT_LABEL_COPY(&unk,{
func_158(num) 
}
, 4);
func_155(&unk, func_156());
func_32();
if(IS_BIT_SET(Global_113648.f_10018.f_25, 3)) func_31();
func_13();
if(iParam0==210 || iParam0==211) func_7(iParam0, 406.38f, -1635.86f);
elseif(iParam0==111) func_7(iParam0, 1973.84f, 3814.89f);
elseif(iParam0 !=322) func_7(iParam0, 0, 0);
func_5();
return;
}

int func_5() // Position - 0x68B{
if(_IS_MISSION_REPEAT_ACTIVE(false)) return 0;
if(Global_100720.f_8)if(Global_100720.f_10 > 0) return 0;
elseif(Global_100720.f_10 > 1) return 0;
Global_100720.f_10=Global_100720.f_10 + 1;
return 1;
}
BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x6D6{
if(!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0) return true;
return IS_BIT_SET(Global_78807, 0);
}


void func_7(int iParam0, int iParam1, int iParam2) // Position - 0x6FE{
BOOL flag;
iParam0 < 0;
if(iParam0==321 || iParam0 > 321){}else{
_STAT_SET_PACKED_BOOL(891 + iParam0, 1, -1);
}
flag=true;
if(Global_113648.f_10196[iParam0 /*12*/].f_5==1){
if(Global_113648.f_10196[iParam0 /*12*/].f_6==11 || Global_113648.f_10196[iParam0 /*12*/].f_6==12) flag=false;
}else{
Global_113648.f_10196[iParam0 /*12*/].f_5=1;
Global_113648.f_10196[iParam0 /*12*/].f_10=iParam1;
Global_113648.f_10196[iParam0 /*12*/].f_11=iParam2;
if(iParam0==287) STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
if(iParam0==286) STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
if(iParam0==299) STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
}
if(flag) func_8();
return;
}


void func_8() // Position - 0x7E4{
int num;
float num2;
float num3;
float num4;
float num5;
float num6;
float num7;
float num8;
float value;
int value2;
num=0;
Global_113384=0;
Global_113385=0;
Global_113386=0;
Global_113387=0;
Global_113388=0;
Global_113389=0;
Global_113390=0;
num2=0f;
num3=0f;
num4=0f;
num5=0f;
num6=0f;
num7=0f;
num8=0f;
value=Global_113648.f_10196.f_3853;
Global_113648.f_10196.f_3853=0f;
while (num < 321){
if(Global_113648.f_10196[num /*12*/].f_5==1){
switch (Global_113648.f_10196[num /*12*/].f_6){
case 1:
Global_113384=Global_113384 + 1;
num2=num2 + Global_113648.f_10196[num /*12*/].f_4;
break;
case 3:
Global_113385=Global_113385 + 1;
num3=num3 + Global_113648.f_10196[num /*12*/].f_4;
break;
case 5:
Global_113386=Global_113386 + 1;
num4=num4 + Global_113648.f_10196[num /*12*/].f_4;
break;
case 7:
Global_113387=Global_113387 + 1;
num5=num5 + Global_113648.f_10196[num /*12*/].f_4;
break;
case 9:
Global_113388=Global_113388 + 1;
num6=num6 + (Global_113648.f_10196[num /*12*/].f_4 * 4f);
break;
case 11:
Global_113389=Global_113389 + 1;
num7=num7 + Global_113648.f_10196[num /*12*/].f_4;
break;
case 13:
Global_113390=Global_113390 + 1;
num8=num8 + Global_113648.f_10196[num /*12*/].f_4;
break;
default:
break;
}}
num=num + 1;
}
if(Global_113367 > 0)if(Global_113384==Global_113367) num2=55f;
if(Global_113368 > 0)if(Global_113385==Global_113368) num3=10f;
if(Global_113369 > 0)if(Global_113386==Global_113369) num4=0f;
if(Global_113370 > 0)if(Global_113387==Global_113370) num5=10f;
if(Global_113371 > 0){
if(Global_113388==Global_113371 || (Global_113371 * 10) / Global_113388 < 41 || Global_113388 > Global_113374 || Global_113388==Global_113374){
if(!IS_BIT_SET(Global_113648.f_10196.f_3856, 14)){
if(Global_113388==Global_113371){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113371, 0);
MISC::SET_BIT(&(Global_113648.f_10196.f_3856), 14);
}}
num6=5f;
}}
if(Global_113372 > 0)if(Global_113389==Global_113372) num7=15f;
if(Global_113373 > 0)if(Global_113390==Global_113373) num8=5f;
Global_113648.f_10196.f_3853=num2 + num3 + num4 + num5 + num6 + num7 + num8;
if(Global_113388 > Global_113374 || Global_113388==Global_113374) value2=Global_113374;
else value2=Global_113388;
STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113384, true);
STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113367, true);
STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113385, true);
STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113368, true);
STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113386, true);
STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113369, true);
STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113387, true);
STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113370, true);
STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), value2, true);
STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113374, true);
STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_113390 + Global_113389, true);
STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_113373 + Global_113372, true);
Global_113391=(Global_113384 * 100) / Global_113367;
Global_113393=((Global_113386 + Global_113385) * 100) / (Global_113369 + Global_113368);
Global_113392=((Global_113387 + value2) * 100) / (Global_113370 + Global_113374);
Global_113394=((Global_113389 + Global_113390) * 100) / (Global_113372 + Global_113373);
STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113648.f_10196.f_3853, true);
STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113391, true);
STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113392, true);
STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113393, true);
if(value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113648.f_10196.f_3853)) func_10(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78558){
if(func_9()==2==false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()) Global_113382=0;
if(!Global_63362) func_5();
}}}
return;
}

int func_9() // Position - 0xCA2{
return Global_32163;
}
BOOL func_10(int iParam0, int iParam1) // Position - 0xCAD{
int achievementProgress;
if(iParam0 < 0) return false;
if(iParam0 > 78) return false;
if(iParam1 <=0 || iParam1 > 100) return false;
achievementProgress=PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
if(iParam1 > achievementProgress) return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
return false;
}


void _STAT_SET_PACKED_BOOL(int iParam0, int iParam1, int iParam2) // Position - 0xCFE{
if(iParam2==-1) iParam2=func_12();
unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
return;
}

int func_12() // Position - 0xD1C{
return Global_1574918;
}


void func_13() // Position - 0xD28{
func_30();
func_22();
func_18();
func_17();
func_16();
func_15();
Global_100718=0;
Global_94856=-1;
MISC::CLEAR_BIT(&(Global_100681.f_20), 17);
Global_100716=0;
MISC::PAUSE_DEATH_ARREST_RESTART(false);
MISC::IGNORE_NEXT_RESTART(false);
MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
MISC::SET_FADE_OUT_AFTER_ARREST(true);
MISC::SET_FADE_OUT_AFTER_DEATH(true);
func_14(0);
return;
}


void func_14(int iParam0) // Position - 0xD81{
if(iParam0==1) MISC::SET_BIT(&(Global_100681.f_20), 13);
else MISC::CLEAR_BIT(&(Global_100681.f_20), 13);
return;
}


void func_15() // Position - 0xDAA{
Global_78799={
0f, 0f, 0f 
};
Global_78802=0f;
Global_100681.f_21=145;
return;
}


void func_16() // Position - 0xDC8{
TEXT_LABEL_ASSIGN_STRING(&Global_78791, "", 16);
TEXT_LABEL_ASSIGN_STRING(&Global_78795, "", 16);
return;
}


void func_17() // Position - 0xDE2{
int i;
for (i=0;
i <=6;
i=i + 1){
Global_100681.f_22[i]=0;
}
return;
}


void func_18() // Position - 0xE07{
Global_100681=13;
Global_100681.f_1=-1;
Global_100681.f_2=0;
Global_100681.f_30=0f;
MISC::CLEAR_BIT(&(Global_100681.f_20), 25);
Global_100715=0;
func_21(0);
func_20();
func_19();
Global_100681.f_18=-1;
Global_100681.f_19=-1;
return;
}


void func_19() // Position - 0xE56{
MISC::CLEAR_BIT(&(Global_100681.f_20), 22);
MISC::CLEAR_BIT(&(Global_100681.f_20), 8);
return;
}


void func_20() // Position - 0xE76{
if(Global_100681.f_16 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_100681.f_16));
Global_100681.f_16=0;
}
if(Global_100681.f_17 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_100681.f_17));
Global_100681.f_17=0;
}
return;
}


void func_21(int iParam0) // Position - 0xEB4{
if(iParam0==1) Global_43806=1;
else Global_43806=0;
return;
}


void func_22() // Position - 0xECD{
func_23(&Global_107196);
return;
}


void func_23(var uParam0) // Position - 0xEDD{
int i;
int j;
*uParam0=145;
func_29(&(uParam0->f_1));
uParam0->f_6=-1;
uParam0->f_7=-1;
uParam0->f_8=0f;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=145;
for (j=0;
j < 3;
j=j + 1){
uParam0->f_9[j]=-1;
uParam0->f_13[j]=0;
uParam0->f_17[j]=0;
uParam0->f_21[j]=0;
func_28(&uParam0->f_25[0 /*295*/][j /*98*/]);
func_28(&uParam0->f_25[1 /*295*/][j /*98*/]);
for (i=0;
i < 12;
i=i + 1){
uParam0->f_616[j /*65*/][i]=-1;
uParam0->f_616[j /*65*/].f_13[i]=-1;
uParam0->f_616[j /*65*/].f_26[i]=-1;
}
uParam0->f_616[j /*65*/].f_59=0;
uParam0->f_616[j /*65*/].f_60=-99;
uParam0->f_616[j /*65*/].f_61=2;
uParam0->f_616[j /*65*/].f_62=0;
uParam0->f_616[j /*65*/].f_63=-99;
uParam0->f_616[j /*65*/].f_64=1;
for (i=0;
i < 9;
i=i + 1){
uParam0->f_616[j /*65*/].f_39[i]=-1;
uParam0->f_616[j /*65*/].f_49[i]=-1;
}
for (i=0;
i < 44;
i=i + 1){
uParam0->f_812[j /*477*/][i /*5*/].f_1=0;
uParam0->f_812[j /*477*/][i /*5*/].f_2=0;
uParam0->f_812[j /*477*/][i /*5*/].f_3=0;
uParam0->f_812[j /*477*/][i /*5*/].f_4=0;
uParam0->f_812[j /*477*/][i /*5*/]=0;
}
for (i=0;
i < 51;
i=i + 1){
uParam0->f_812[j /*477*/].f_221[i /*5*/].f_1=0;
uParam0->f_812[j /*477*/].f_221[i /*5*/].f_2=0;
uParam0->f_812[j /*477*/].f_221[i /*5*/].f_3=0;
uParam0->f_812[j /*477*/].f_221[i /*5*/].f_4=0;
uParam0->f_812[j /*477*/].f_221[i /*5*/]=0;
}
for (i=0;
i < 4;
i=i + 1){
uParam0->f_2244[j /*32*/][i]=0;
}
for (i=0;
i < 10;
i=i + 1){
uParam0->f_2244[j /*32*/].f_5[i]=0;
}
for (i=0;
i < 15;
i=i + 1){
uParam0->f_2244[j /*32*/].f_16[i]=0;
}
uParam0->f_2341[j]=0;
for (i=0;
i <=3;
i=i + 1){
uParam0->f_2838[j /*15*/][i]=0;
uParam0->f_2838[j /*15*/].f_5[i]=0;
uParam0->f_2838[j /*15*/].f_10[i]=0;
}
for (i=0;
i <=2;
i=i + 1){
uParam0->f_2345[j /*164*/][i]=0;
uParam0->f_2345[j /*164*/].f_4[i]=0;
uParam0->f_2345[j /*164*/].f_8[i]=0;
uParam0->f_2345[j /*164*/].f_12[i]=0;
uParam0->f_2345[j /*164*/].f_16[i]=0;
uParam0->f_2345[j /*164*/].f_20[i]=0;
uParam0->f_2345[j /*164*/].f_24[i]=0;
uParam0->f_2345[j /*164*/].f_28[i]=0;
uParam0->f_2345[j /*164*/].f_32[i]=0;
uParam0->f_2345[j /*164*/].f_36[i]=0;
uParam0->f_2345[j /*164*/].f_40[i]=0;
uParam0->f_2345[j /*164*/].f_44[i]=0;
uParam0->f_2345[j /*164*/].f_48[i]=0;
uParam0->f_2345[j /*164*/].f_52[i]=0;
uParam0->f_2345[j /*164*/].f_56[i]=0;
uParam0->f_2345[j /*164*/].f_60[i]=0;
uParam0->f_2345[j /*164*/].f_64[i]=0;
uParam0->f_2345[j /*164*/].f_68[i]=0;
uParam0->f_2345[j /*164*/].f_72[i]=0;
uParam0->f_2345[j /*164*/].f_76[i]=0;
uParam0->f_2345[j /*164*/].f_80[i]=0;
uParam0->f_2345[j /*164*/].f_84[i]=0;
uParam0->f_2345[j /*164*/].f_88[i]=0;
uParam0->f_2345[j /*164*/].f_92[i]=0;
uParam0->f_2345[j /*164*/].f_96[i]=0;
uParam0->f_2345[j /*164*/].f_100[i]=0;
uParam0->f_2345[j /*164*/].f_104[i]=0;
uParam0->f_2345[j /*164*/].f_108[i]=0;
uParam0->f_2345[j /*164*/].f_112[i]=0;
uParam0->f_2345[j /*164*/].f_116[i]=0;
uParam0->f_2345[j /*164*/].f_120[i]=0;
uParam0->f_2345[j /*164*/].f_124[i]=0;
uParam0->f_2345[j /*164*/].f_128[i]=0;
uParam0->f_2345[j /*164*/].f_132[i]=0;
uParam0->f_2345[j /*164*/].f_136[i]=0;
uParam0->f_2345[j /*164*/].f_140[i]=0;
uParam0->f_2345[j /*164*/].f_144[i]=0;
uParam0->f_2345[j /*164*/].f_148[i]=0;
uParam0->f_2345[j /*164*/].f_152[i]=0;
uParam0->f_2345[j /*164*/].f_156[i]=0;
uParam0->f_2345[j /*164*/].f_160[i]=0;
}}
func_27(&(uParam0->f_2884));
func_25(&(uParam0->f_2890));
func_24(&(uParam0->f_2980));
return;
}


void func_24(var uParam0) // Position - 0x146D{
*uParam0=-1;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
return;
}


void func_25(var uParam0) // Position - 0x1488{
func_26(&(uParam0->f_12));
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3={
0f, 0f, 0f 
};
uParam0->f_6=0f;
uParam0->f_8=0;
uParam0->f_9=0;
return;
}


void func_26(var uParam0) // Position - 0x14B7{
int i;
uParam0->f_66=0;
uParam0->f_77=0;
uParam0->f_65=0;
uParam0->f_62=0;
uParam0->f_63=0;
uParam0->f_64=0;
uParam0->f_74=0;
uParam0->f_75=0;
uParam0->f_76=0;
*uParam0=0;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
for (i=0;
i < 49;
i=i + 1){
uParam0->f_9[i]=0;
}
for (i=0;
i < 2;
i=i + 1){
uParam0->f_59[i]=0;
}
uParam0->f_67=0;
uParam0->f_68=0;
uParam0->f_69=0;
uParam0->f_70=1;
uParam0->f_71=0;
uParam0->f_72=0;
uParam0->f_73=0;
return;
}


void func_27(var uParam0) // Position - 0x1567{
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
uParam0->f_5=-1;
return;
}


void func_28(var uParam0) // Position - 0x1585{
int i;
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0f;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_9=0;
uParam0->f_10=0;
for (i=0;
i <=11;
i=i + 1){
uParam0->f_11[i]=0;
}
uParam0->f_24=0;
uParam0->f_25=0;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_27), "", 16);
for (i=0;
i <=48;
i=i + 1){
uParam0->f_31[i]=0;
}
for (i=0;
i <=1;
i=i + 1){
uParam0->f_81[i]=0;
}
uParam0->f_84=0;
uParam0->f_85=0;
uParam0->f_86=0;
uParam0->f_87=0;
uParam0->f_88=0;
uParam0->f_89=0;
uParam0->f_90=0;
uParam0->f_91=0;
uParam0->f_93=0;
uParam0->f_94=0;
uParam0->f_95=0;
uParam0->f_92=0;
return;
}


void func_29(var uParam0) // Position - 0x1665{
*uParam0=-15;
return;
}


void func_30() // Position - 0x1673{
TEXT_LABEL_ASSIGN_STRING(&Global_104204, "", 32);
func_23(&Global_104212);
return;
}


void func_31() // Position - 0x168C{
if(Global_9058[0 /*2811*/][0 /*281*/].f_259==0) Global_9058[0 /*2811*/][0 /*281*/].f_259=2;
if(Global_9058[1 /*2811*/][0 /*281*/].f_259==0) Global_9058[1 /*2811*/][0 /*281*/].f_259=2;
if(Global_9058[2 /*2811*/][0 /*281*/].f_259==0) Global_9058[2 /*2811*/][0 /*281*/].f_259=2;
MISC::SET_BIT(&Global_8253, 25);
MISC::SET_BIT(&Global_8254, 11);
return;
}


void func_32() // Position - 0x1709{
int i;
Ped ped;
int num;
eCharacter character;
for (i=0;
i <=8;
i=i + 1){
ped=Global_98050[i];
if(ENTITY::DOES_ENTITY_EXIST(ped) && !PED::IS_PED_INJURED(ped)){
character=_GET_PLAYER_CHARACTER_FROM_PED(ped);
num=-99;
switch (character){
case CHAR_MICHAEL:
num=112;
break;
case CHAR_FRANKLIN:
num=158;
break;
case CHAR_TREVOR:
num=154;
break;
}
if(num !=-99){
if(func_150(ped, 14, num)) func_33(ped, 14, num);
if(Global_113648.f_2365.f_539[character /*65*/].f_39[2]==num) Global_113648.f_2365.f_539[character /*65*/].f_39[2]=-1;
}}}
return;
}
BOOL func_33(Ped pedParam0, int iParam1, int iParam2) // Position - 0x17CA{
Hash entityModel;
int i;
var unk;
int j;
BOOL flag;
var unk18;
var unk28;
int num;
if(PED::IS_PED_INJURED(pedParam0) || iParam2==-99) return false;
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
Global_78341[1 /*14*/]={
func_85(entityModel, iParam1, iParam2, -1) 
};
if(!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)) return false;
if(!func_150(pedParam0, iParam1, iParam2)) return false;
if(iParam1==12){
unk={
func_81(entityModel, iParam2) 
};
for (i=0;
i <=14;
i=i + 1){
if(unk[i] !=-99) func_33(pedParam0, i, unk[i]);
}}elseif(iParam1==13){
unk18={
func_78(entityModel, iParam2) 
};
for (j=0;
j <=8;
j=j + 1){
if(!func_33(pedParam0, 14, unk18[j])) flag=0;
}
return flag;
}elseif(iParam1==14){
PED::CLEAR_PED_PROP(pedParam0, Global_78341[1 /*14*/].f_12, 1);
}else{
unk28={
func_81(entityModel, 0) 
};
Global_78341[1 /*14*/]={
func_85(entityModel, iParam1, unk28[iParam1], -1) 
};
if(PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(pedParam0, func_77(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(pedParam0, func_77(iParam1), Global_78341[1 /*14*/].f_3) > 0) PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_77(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, 0);
}
if(func_76(pedParam0, entityModel, &num, 0)) func_36(pedParam0, 2, num, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
if(func_34(pedParam0, entityModel, &num)) func_36(pedParam0, 1, num, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
return true;
}
BOOL func_34(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0x1987{
int num;
num=func_35(hParam1);
if(Global_113648.f_2365.f_539[num /*65*/].f_63 !=-99){
if(!func_150(pedParam0, Global_113648.f_2365.f_539[num /*65*/].f_64, Global_113648.f_2365.f_539[num /*65*/].f_63)){
*uParam2=Global_113648.f_2365.f_539[num /*65*/].f_62;
Global_113648.f_2365.f_539[num /*65*/].f_63=-99;
Global_113648.f_2365.f_539[num /*65*/].f_64=1;
return true;
}}
return false;
}

int func_35(Hash hParam0) // Position - 0x1A13{
switch (hParam0){
case joaat("Player_Zero"):
return 0;
case joaat("Player_One"):
return 1;
case joaat("Player_Two"):
return 2;
default:
break;
}
return 145;
}

int func_36(Ped pedParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x1A4E{
int i;
int j;
int k;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
Hash entityModel;
var unk;
var unk18;
var unk28;
var unk45;
var unk59;
if(PED::IS_PED_INJURED(pedParam0) || iParam2==-99) return 0;
Global_78339=Global_78339 + 1;
num3=-99;
num4=-99;
num5=-99;
num6=-99;
num7=-99;
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
if(iParam5==0){
Global_78341[1 /*14*/]={
func_85(entityModel, iParam1, iParam2, -1) 
};
if(!func_75(iParam3)){
Global_78339=Global_78339 - 1;
return 0;
}
func_68(iParam1);
}
if(iParam1==12){
if(iParam7==1){
if(entityModel==joaat("Player_One")){
num3=func_66(pedParam0, 8);
if(num3 !=9) num3=-99;
}
num4=func_66(pedParam0, 9);
if(entityModel==joaat("Player_Zero")){
if(num4 >=9 && num4 <=14){
}else{
num4=-99;
}}elseif(entityModel==joaat("Player_One")){
if(num4 >=5 && num4 <=10){
}else{
num4=-99;
}}elseif(entityModel==joaat("Player_Two")){
if(num4 >=9 && num4 <=14 || num4 >=15 && num4 <=16){
}else{
num4=-99;
}}
num5=func_65(pedParam0, PV_COMP_BERD);
if(!func_64(entityModel, 14, num5, -1)) num5=-99;
num6=func_65(pedParam0, PV_COMP_HEAD);
if(!func_63(entityModel, 14, num6, -1) && !func_62(entityModel, 14, num6, -1)) num6=-99;
if(entityModel==joaat("Player_One")) num7=func_65(pedParam0, PV_COMP_HAIR);
}
PED::CLEAR_ALL_PED_PROPS(pedParam0, 1);
unk=15;
if(iParam5==1) unk={
Global_78384 
};
else unk={
func_81(entityModel, iParam2) 
};
for (i=0;
i <=14;
i=i + 1){
if(unk[i] !=-99){
Global_78341[1 /*14*/]={
func_85(entityModel, i, unk[i], -1) 
};
if(IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
if(i==13){
unk18=9;
if(iParam5==1) unk18={
Global_78401 
};
else unk18={
func_78(entityModel, unk[i]) 
};
for (j=0;
j <=8;
j=j + 1){
Global_78341[1 /*14*/]={
func_85(entityModel, 14, unk18[j], -1) 
};
func_52(pedParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
func_68(14);
if(Global_78339==1){
for (k=0;
k < 15;
k=k + 1){
num=func_44(pedParam0, entityModel, 14, unk18[j], k, 0);
if(num !=-99) func_36(pedParam0, k, num, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
}}elseif(i !=14 && i !=12){
if(entityModel==joaat("Player_One") && i==2 && unk[i]==20) func_43(entityModel, 2, 20, &num2);
if(iParam4==-1) PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_77(i), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(pedParam0, func_77(i)));
else PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_77(i), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
func_68(i);
if(Global_78339==1){
for (k=0;
k < 15;
k=k + 1){
num=func_44(pedParam0, entityModel, i, unk[i], k, 0);
if(num !=-99) func_36(pedParam0, k, num, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
}}}}elseif(i !=12 && i !=14){
Global_78341[1 /*14*/]={
func_85(entityModel, i, func_42(pedParam0, i, PV_COMP_INVALID), -1) 
};
if(IS_BIT_SET(Global_78341[1 /*14*/].f_6, 3)){
if(i==2){
if(entityModel==joaat("Player_One"))if(func_76(pedParam0, entityModel, &num2, 1)) func_36(pedParam0, 2, num2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}else{
unk28={
func_81(entityModel, 0) 
};
func_36(pedParam0, i, unk28[i], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}}
if(iParam7==1){
unk45={
func_85(entityModel, 8, num3, -1) 
};
if(num3 !=-99)if(func_40(entityModel, iParam2, 8, num3, &unk, &unk45)) func_36(pedParam0, 8, num3, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
unk45={
func_85(entityModel, 9, num4, -1) 
};
if(num4 !=-99)if(func_40(entityModel, iParam2, 9, num4, &unk, &unk45)) func_36(pedParam0, 9, num4, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
unk45={
func_85(entityModel, 14, num5, -1) 
};
if(num5 !=-99)if(func_40(entityModel, iParam2, 14, num5, &unk, &unk45)) func_36(pedParam0, 14, num5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
unk45={
func_85(entityModel, 14, num6, -1) 
};
if(num6 !=-99)if(func_40(entityModel, iParam2, 14, num6, &unk, &unk45)) func_36(pedParam0, 14, num6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
unk45={
func_85(entityModel, 14, num7, -1) 
};
if(num7 !=-99)if(func_40(entityModel, iParam2, 14, num7, &unk, &unk45)) func_36(pedParam0, 14, num7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}elseif(iParam1==13){
unk59={
func_78(entityModel, iParam2) 
};
for (j=0;
j <=8;
j=j + 1){
Global_78341[1 /*14*/]={
func_85(entityModel, 14, unk59[j], -1) 
};
func_52(pedParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
func_68(14);
if(Global_78339==1){
for (k=0;
k < 15;
k=k + 1){
num=func_44(pedParam0, entityModel, 14, unk59[j], k, 0);
if(num !=-99) func_36(pedParam0, k, num, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}}elseif(iParam1==14){
func_52(pedParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
func_68(iParam1);
if(Global_78339==1){
for (k=0;
k < 15;
k=k + 1){
num=func_44(pedParam0, entityModel, iParam1, iParam2, k, 0);
if(num !=-99) func_36(pedParam0, k, num, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}else{
if(iParam4==-1) PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_77(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(pedParam0, func_77(iParam1)));
else PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_77(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
if(Global_78339==1){
for (k=0;
k < 15;
k=k + 1){
num=func_44(pedParam0, entityModel, iParam1, iParam2, k, 0);
if(num !=-99) func_36(pedParam0, k, num, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
if(iParam6==0) func_37(entityModel, iParam1, iParam2);
}
if(Global_78339==1){
if(func_76(pedParam0, entityModel, &num2, 0)) func_36(pedParam0, 2, num2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
if(func_34(pedParam0, entityModel, &num2)) func_36(pedParam0, 1, num2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
Global_78339=Global_78339 - 1;
return 1;
}


void func_37(Hash hParam0, int iParam1, int iParam2) // Position - 0x225F{
int num;
int num2;
if(hParam0==joaat("Player_Zero")) num=5;
elseif(hParam0==joaat("Player_One")) num=2;
elseif(hParam0==joaat("Player_Two")) num=4;
if(func_39(hParam0, 12, num)){
if(func_38(hParam0, iParam1, iParam2)){
num2=func_35(hParam0);
if(iParam1==3) Global_113648.f_2365.f_539.f_196[num2]=iParam2;
elseif(iParam1==4) Global_113648.f_2365.f_539.f_200[num2]=iParam2;
}}
return;
}
BOOL func_38(Hash hParam0, int iParam1, int iParam2) // Position - 0x22E9{
if(hParam0==joaat("Player_Zero"))if(iParam1==4)if(iParam2 >=47 && iParam2 <=54) return true;
elseif(iParam1==3)if(iParam2 >=77 && iParam2 <=84) return true;
elseif(hParam0==joaat("Player_One"))if(iParam1==4)if(iParam2 >=14 && iParam2 <=21) return true;
elseif(iParam1==3)if(iParam2 >=41 && iParam2 <=56) return true;
elseif(hParam0==joaat("Player_Two"))if(iParam1==4)if(iParam2 >=18 && iParam2 <=29) return true;
elseif(iParam1==3)if(iParam2 >=54 && iParam2 <=69) return true;
return false;
}
BOOL func_39(Hash hParam0, int iParam1, int iParam2) // Position - 0x23C7{
Global_78341[1 /*14*/]={
func_85(hParam0, iParam1, iParam2, -1) 
};
return IS_BIT_SET(Global_78341[1 /*14*/].f_6, 2);
}
BOOL func_40(Hash hParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5) // Position - 0x23EF{
var unk;
int i;
if(uParam4->[iParam2]==iParam3) return true;
if(uParam4->[iParam2]==-99 && iParam2 !=14 && iParam2 !=13) return true;
if(iParam2==13 || iParam2==14 && uParam4->[13]==31)if(iParam3==0 || iParam3==1 || iParam3==2 || iParam3==3 || iParam3==4 || iParam3==5 || iParam3==6 || iParam3==7 || iParam3==8) return true;
if(iParam3==-99 || iParam5->f_1==-1) return true;
if(iParam2==14){
unk={
func_78(hParam0, uParam4->[13]) 
};
for (i=0;
i <=8;
i=i + 1){
if(unk[i]==iParam3) return true;
}}
if(func_41(hParam0, iParam2, iParam3)) return true;
if(hParam0==joaat("Player_Zero")){
if(func_64(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==10 || iParam1==11 || iParam1==12 || iParam1==18 || iParam1==50) return false;
return true;
}elseif(func_63(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==4 || iParam1==5 || iParam1==10 || iParam1==11 || iParam1==12 || iParam1==14 || iParam1==18 || iParam1==50) return false;
if(iParam2==8)if(uParam4->[8] !=0) return false;
elseif(iParam2==9)if(uParam4->[9] !=0) return false;
return true;
}elseif(func_62(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==4 || iParam1==5 || iParam1==10 || iParam1==11 || iParam1==12 || iParam1==14 || iParam1==18 || iParam1==50) return false;
return true;
}}elseif(hParam0==joaat("Player_One")){
if(func_64(hParam0, iParam2, iParam3, -1)){
if(iParam1==3 || iParam1==5 || iParam1==7) return false;
return true;
}elseif(func_63(hParam0, iParam2, iParam3, -1)){
if(iParam1==3 || iParam1==5 || iParam1==7 || iParam1==8 || iParam1==21)if(iParam2==8)if(iParam3==9)if(iParam1==8 || iParam1==21) return true;
else return false;
else return false;
if(iParam2==8){
if(uParam4->[8] !=26) return false;
}elseif(iParam2==9){
if(uParam4->[9] !=0) return false;
if(iParam1==43 || iParam1==44 || iParam1==45 || iParam1==46)if(iParam3 >=5 && iParam3 <=10) return false;
}elseif(iParam2==14){
if(iParam1==43 || iParam1==44 || iParam1==45 || iParam1==46)if(iParam3 >=26 && iParam3 <=39) return false;
}
return true;
}elseif(func_62(hParam0, iParam2, iParam3, -1)){
if(iParam1==3 || iParam1==3 || iParam1==5 || iParam1==7 || iParam1==8 || iParam1==21) return false;
return true;
}elseif(iParam2==14){
if(iParam3 >=159 && iParam3 <=174) return true;
}}elseif(hParam0==joaat("Player_Two")){
if(iParam1==2)if(iParam2==14 && iParam3==0) return true;
if(func_64(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==6 || iParam1==8 || iParam1==45 || iParam1==12) return false;
return true;
}elseif(func_63(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==3 || iParam1==6 || iParam1==8 || iParam1==11 || iParam1==45 || iParam1==12) return false;
if(iParam2==8)if(uParam4->[8] !=15) return false;
elseif(iParam2==9)if(uParam4->[9] !=0) return false;
return true;
}elseif(func_62(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==3 || iParam1==6 || iParam1==8 || iParam1==11 || iParam1==12) return false;
return true;
}}
return false;
}
BOOL func_41(Hash hParam0, int iParam1, int iParam2) // Position - 0x29F3{
switch (hParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 8:
if(iParam2==15) return true;
break;
case 9:
if(iParam2==6) return true;
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 8:
if(iParam2==1 || iParam2==10) return true;
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 8:
if(iParam2==4) return true;
break;
}
break;
}
return false;
}

int func_42(Ped pedParam0, int iParam1, ePedComponentType epctParam2) // Position - 0x2A8C{
int i;
int j;
if(!PED::IS_PED_INJURED(pedParam0)){
if(iParam1==12){
for (i=0;
i <=53;
i=i + 1){
if(func_150(pedParam0, iParam1, i)) return i;
}}elseif(iParam1==13){
for (j=0;
j <=19;
j=j + 1){
if(func_150(pedParam0, iParam1, j)) return j;
}
return 31;
}elseif(iParam1==14){
if(epctParam2==PV_COMP_INVALID){
}else{
return func_65(pedParam0, epctParam2);
}}else{
return func_66(pedParam0, iParam1);
}}
return -99;
}

int func_43(Hash hParam0, int iParam1, int iParam2, var uParam3) // Position - 0x2B2D{
int num;
*uParam3=-99;
switch (hParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 8:
if(iParam2==7 || iParam2==23) *uParam3=1;
break;
case 9:
if(iParam2==8 || iParam2 >=9 && iParam2 <=14) *uParam3=1;
break;
case 10:
if(iParam2 >=44 && iParam2 <=47) *uParam3=1;
break;
case 14:
if(iParam2 >=31 && iParam2 <=32 || iParam2 >=33 && iParam2 <=34 || iParam2 >=35 && iParam2 <=36 || iParam2==37 || iParam2 >=40 && iParam2 <=41 || iParam2==46) *uParam3=1;
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 2:
if(iParam2==20) *uParam3=20;
break;
case 8:
if(iParam2==4) *uParam3=19;
break;
case 9:
if(iParam2 >=5 && iParam2 <=10) *uParam3=19;
break;
case 10:
if(iParam2 >=47 && iParam2 <=50) *uParam3=19;
break;
case 14:
if(iParam2 >=26 && iParam2 <=27 || iParam2 >=28 && iParam2 <=29 || iParam2 >=30 && iParam2 <=31 || iParam2==32 || iParam2 >=35 && iParam2 <=36) *uParam3=19;
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 8:
if(iParam2==7) *uParam3=2;
break;
case 9:
if(iParam2 >=9 && iParam2 <=14 || iParam2 >=15 && iParam2 <=16) *uParam3=2;
break;
case 10:
if(iParam2 >=29 && iParam2 <=32) *uParam3=2;
break;
case 14:
if(iParam2 >=47 && iParam2 <=48 || iParam2 >=49 && iParam2 <=50 || iParam2 >=51 && iParam2 <=52 || iParam2==53 || iParam2 >=56 && iParam2 <=57 || iParam2==62) *uParam3=2;
break;
}
break;
}
if(*uParam3 !=-99){
num=func_35(hParam0);
Global_113648.f_2365.f_539[num /*65*/].f_60=iParam2;
Global_113648.f_2365.f_539[num /*65*/].f_61=iParam1;
return 1;
}
return 0;
}

int func_44(Ped pedParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2E34{
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
int num8;
int num9;
int num10;
num=-99;
if(iParam4==0){
switch (iParam2){
case 2:
num2=func_66(pedParam0, 1);
num=func_51(hParam1, iParam3, num2);
break;
case 1:
num3=func_66(pedParam0, 2);
num=func_51(hParam1, num3, iParam3);
break;
}}elseif(iParam4==2){
func_43(hParam1, iParam2, iParam3, &num);
}elseif(iParam4==1){
func_50(hParam1, iParam2, iParam3, &num);
}elseif(iParam4==6){
if(iParam2==4) func_49(hParam1, iParam3, &num);
}else{
switch (hParam1){
case joaat("Player_Zero"):
switch (iParam4){
case 3:
switch (iParam2){
case 10:
switch (iParam3){
case 36:
num=17;
break;
case 37:
num=17;
break;
case 38:
num=18;
break;
case 39:
num=18;
break;
case 40:
num=19;
break;
case 41:
num=19;
break;
case 42:
num=20;
break;
case 43:
num=20;
break;
}
break;
case 11:
if(iParam3 >=2 && iParam3 <=7)if(!func_48(pedParam0, 3, 44, 59)) num=44;
elseif(iParam3 >=8 && iParam3 <=17 || iParam3 >=18 && iParam3 <=27 || iParam3 >=28 && iParam3 <=43)if(!func_48(pedParam0, 3, 135, 150)) num=func_47(hParam1, 3, 135, 150);
break;
}
break;
case 10:
switch (iParam2){
case 3:
switch (iParam3){
case 63:
num=4;
break;
case 61:
num=3;
break;
case 16:
num=1;
break;
case 114:
num=15;
break;
case 115:
num=17;
break;
case 116:
num=16;
break;
case 117:
num=18;
break;
case 118:
num=20;
break;
case 119:
num=19;
break;
case 125:
num=21;
break;
case 120:
num=22;
break;
case 124:
num=23;
break;
case 126:
num=24;
break;
case 121:
num=25;
break;
case 127:
num=26;
break;
case 128:
num=27;
break;
case 85:
num=6;
break;
case 77:
num=7;
break;
case 78:
num=8;
break;
case 79:
num=9;
break;
case 80:
num=10;
break;
case 81:
num=11;
break;
case 82:
num=12;
break;
case 83:
num=13;
break;
case 84:
num=14;
break;
case 21:
num=31;
break;
case 22:
num=30;
break;
case 23:
num=29;
break;
case 24:
num=28;
break;
case 25:
num=33;
break;
case 26:
num=35;
break;
case 27:
num=34;
break;
case 28:
num=32;
break;
default:
if(iParam3 >=17 && iParam3 <=20){
}
else{
num=0;
}
break;
}
break;
case 11:
if(iParam3 !=0) num=0;
break;
}
break;
case 11:
if(iParam2==3){
if(iParam3 >=44 && iParam3 <=59 || iParam3 >=135 && iParam3 <=150){
}else{
num=0;
}
}
elseif(iParam2==10){
if(iParam3 >=36 && iParam3 <=43) num=0;
}
break;
}
break;
case joaat("Player_One"):
switch (iParam4){
case 10:
switch (iParam2){
case 3:
switch (iParam3){
case 17:
num=2;
break;
case 90:
num=1;
break;
case 268:
num=3;
break;
case 269:
num=5;
break;
case 270:
num=4;
break;
case 271:
num=6;
break;
case 272:
num=8;
break;
case 273:
num=7;
break;
case 279:
num=9;
break;
case 274:
num=10;
break;
case 278:
num=11;
break;
case 280:
num=12;
break;
case 275:
num=13;
break;
case 281:
num=14;
break;
case 282:
num=15;
break;
case 107:
num=16;
break;
case 108:
num=17;
break;
case 109:
num=18;
break;
case 110:
num=19;
break;
case 111:
num=20;
break;
case 112:
num=21;
break;
case 113:
num=22;
break;
case 114:
num=23;
break;
case 115:
num=24;
break;
case 116:
num=25;
break;
case 117:
num=52;
break;
case 118:
num=27;
break;
case 119:
num=28;
break;
case 120:
num=29;
break;
case 121:
num=30;
break;
case 122:
num=31;
break;
case 296:
num=32;
break;
case 297:
num=33;
break;
case 298:
num=34;
break;
case 299:
num=35;
break;
case 300:
num=36;
break;
case 301:
num=37;
break;
case 302:
num=38;
break;
case 309:
num=39;
break;
case 310:
num=40;
break;
case 311:
num=41;
break;
case 312:
num=42;
break;
case 313:
num=43;
break;
case 314:
num=44;
break;
case 315:
num=45;
break;
case 316:
num=46;
break;
case 317:
num=51;
break;
default:
num=0;
break;
}
break;
case 11:
if(iParam3 !=0) num=0;
break;
}
break;
case 3:
switch (iParam2){
case 11:
if(iParam3 >=47 && iParam3 <=62)if(!func_48(pedParam0, 3, 209, 222)) num=func_47(hParam1, 3, 209, 222);
elseif(iParam3 >=1 && iParam3 <=4 || iParam3 >=5 && iParam3 <=8)if(!func_48(pedParam0, 3, 243, 258))if(iParam3==1 || iParam3==5) num=func_47(hParam1, 3, 243, 246);
elseif(iParam3==2 || iParam3==6) num=func_47(hParam1, 3, 247, 250);
elseif(iParam3==3 || iParam3==7) num=func_47(hParam1, 3, 251, 254);
elseif(iParam3==4 || iParam3==8) num=func_47(hParam1, 3, 255, 258);
elseif(iParam3==41 || iParam3==42)if(!func_48(pedParam0, 3, 176, 191) && !func_48(pedParam0, 3, 227, 242)) num=func_47(hParam1, 3, 176, 191);
break;
}
break;
case 8:
if(iParam2==11 || iParam2==3){
if(iParam2==11){
num6=iParam3;
num5=func_66(pedParam0, 3);
}elseif(iParam2==3){
num5=iParam3;
num6=func_66(pedParam0, 11);
num6=func_46(hParam1, num5, num6, 0);
}
num4=func_66(pedParam0, 8);
if(num6 >=5 && num6 <=8 || num6 >=25 && num6 <=40 || num6 >=42 && num6 <=43)if(!func_45(joaat("Player_One"), num4, num6, num5, &num7))if(num7 !=-99) num=num7;
elseif(num4 >=27 && num4 <=42 || num4 >=43 && num4 <=58 || num4 >=59 && num4 <=74) num=26;
}
break;
case 11:
if(iParam2==3){
if(iParam3 >=209 && iParam3 <=222){
}elseif(iParam3 >=176 && iParam3 <=191 || iParam3 >=227 && iParam3 <=242 || iParam3 >=243 && iParam3 <=258){
num8=func_66(pedParam0, 8);
num9=func_66(pedParam0, 11);
if(num8 >=27 && num8 <=42 || num8 >=43 && num8 <=58 || num8 >=59 && num8 <=74) num=func_46(hParam1, iParam3, num9, 0);
else num=func_46(hParam1, iParam3, num9, 1);
}elseif(iParam3 >=41 && iParam3 <=56){
num=45;
}elseif(iParam3 >=223 && iParam3 <=226){
num=44;
}else{
num=0;
}
}
elseif(iParam2==8){
if(iParam3 >=27 && iParam3 <=42 || iParam3 >=43 && iParam3 <=58 || iParam3 >=59 && iParam3 <=74){
num10=func_66(pedParam0, 11);
num=func_46(hParam1, -99, num10, 0);
}
}
break;
}
break;
case joaat("Player_Two"):
switch (iParam4){
case 10:
switch (iParam2){
case 3:
switch (iParam3){
case 50:
num=3;
break;
case 81:
num=5;
break;
case 82:
num=6;
break;
case 83:
num=7;
break;
case 84:
num=10;
break;
case 85:
num=9;
break;
case 86:
num=8;
break;
case 92:
num=22;
break;
case 87:
num=23;
break;
case 91:
num=24;
break;
case 93:
num=25;
break;
case 88:
num=26;
break;
case 94:
num=27;
break;
case 120:
num=11;
break;
case 121:
num=13;
break;
case 122:
num=14;
break;
case 124:
num=12;
break;
case 126:
num=18;
break;
case 128:
num=17;
break;
case 130:
num=19;
break;
case 131:
num=16;
break;
case 134:
num=15;
break;
case 135:
num=20;
break;
default:
num=0;
break;
}
break;
}
break;
}
break;
}}
return num;
}
BOOL func_45(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4) // Position - 0x39E7{
int num;
switch (iParam0){
case joaat("Player_Zero"):
break;
case joaat("Player_One"):
*uParam4=0;
if(iParam1 >=27 && iParam1 <=42){
if(iParam2 !=-99){
if(iParam2 >=5 && iParam2 <=8 || iParam2 >=25 && iParam2 <=40){
}else{
if(iParam2 >=42 && iParam2 <=43){
if(iParam3 >=176 && iParam3 <=191){
num=iParam1 - 27;
*uParam4=59 + num;
}elseif(iParam3 >=227 && iParam3 <=242){
num=iParam1 - 27;
*uParam4=43 + num;
}
}
return false;
}}
if(iParam3 !=-99){
if(iParam3 >=227 && iParam3 <=242 || iParam3 >=176 && iParam3 <=191 || iParam3 >=243 && iParam3 <=258){
}else{
return false;
}}}elseif(iParam1 >=43 && iParam1 <=58){
if(iParam2 !=-99){
if(iParam2 >=42 && iParam2 <=43){
}else{
if(iParam2 >=5 && iParam2 <=8 || iParam2 >=25 && iParam2 <=40){
num=iParam1 - 43;
*uParam4=27 + num;
}
return false;
}}
if(iParam3 !=-99){
if(iParam3 >=227 && iParam3 <=242){
}else{
if(iParam3 >=176 && iParam3 <=191){
if(iParam2 >=42 && iParam2 <=43){
num=iParam1 - 43;
*uParam4=59 + num;
}
}
return false;
}}}elseif(iParam1 >=59 && iParam1 <=74){
if(iParam2 !=-99){
if(iParam2 >=42 && iParam2 <=43){
}else{
if(iParam2 >=5 && iParam2 <=8 || iParam2 >=25 && iParam2 <=40){
num=iParam1 - 59;
*uParam4=27 + num;
}
return false;
}}
if(iParam3 !=-99){
if(iParam3 >=176 && iParam3 <=191){
}else{
if(iParam3 >=227 && iParam3 <=242){
if(iParam2 >=42 && iParam2 <=43){
num=iParam1 - 59;
*uParam4=43 + num;
}
}
elseif(iParam2 >=5 && iParam2 <=8 || iParam2 >=25 && iParam2 <=40){
num=iParam1 - 59;
*uParam4=27 + num;
}
return false;
}}}
break;
case joaat("Player_Two"):
if(iParam1==12)if(iParam3 !=241) return false;
break;
}
return true;
}

int func_46(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x3CCB{
int num;
if(iParam1 >=243 && iParam1 <=246){
if(iParam3==1) return 1;
else return 5;
}elseif(iParam1 >=247 && iParam1 <=250){
if(iParam3==1) return 2;
else return 6;
}elseif(iParam1 >=251 && iParam1 <=254){
if(iParam3==1) return 3;
else return 7;
}elseif(iParam1 >=255 && iParam1 <=258){
if(iParam3==1) return 4;
else return 8;
}elseif(iParam1 >=255 && iParam1 <=258){
if(iParam3==1) return 4;
else return 8;
}elseif(iParam1 >=176 && iParam1 <=191 || iParam1 >=227 && iParam1 <=242){
if(iParam2 >=9 && iParam2 <=24){
if(iParam3==1){
return iParam2;
}else{
num=iParam2 - 9;
iParam2=25 + num;
return iParam2;
}}elseif(iParam2 >=25 && iParam2 <=40){
if(iParam3==1){
num=iParam2 - 25;
iParam2=9 + num;
return iParam2;
}else{
return iParam2;
}}elseif(iParam2==41 || iParam2==42){
if(iParam3==1) return 41;
else return 42;
}else{
if(iParam3==1) iParam2=func_47(hParam0, 11, 9, 24);
else iParam2=func_47(hParam0, 11, 25, 40);
if(iParam2==-99)if(iParam3==1) return 41;
else return 42;
else return iParam2;
}}elseif(iParam2 >=1 && iParam2 <=4){
if(iParam3==1){
return iParam2;
}else{
num=iParam2 - 1;
iParam2=5 + num;
return iParam2;
}}elseif(iParam2 >=5 && iParam2 <=8){
if(iParam3==1){
num=iParam2 - 5;
iParam2=1 + num;
return iParam2;
}else{
return iParam2;
}}elseif(iParam2 >=9 && iParam2 <=24){
if(iParam3==1){
return iParam2;
}else{
num=iParam2 - 9;
iParam2=25 + num;
return iParam2;
}}elseif(iParam2 >=25 && iParam2 <=40){
if(iParam3==1){
num=iParam2 - 25;
iParam2=9 + num;
return iParam2;
}else{
return iParam2;
}}elseif(iParam2==41 || iParam2==42){
if(iParam3==1) return 41;
else return 42;
}
return -99;
}

int func_47(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x3F92{
int i;
int num;
for (i=iParam2;
i <=iParam3 - 1;
i=i + 1){
num=i;
if(func_39(hParam0, iParam1, num)) return num;
}
return -99;
}
BOOL func_48(Ped pedParam0, int iParam1, int iParam2, int iParam3) // Position - 0x3FC9{
int num;
num=func_66(pedParam0, iParam1);
if(num >=iParam2 && num <=iParam3) return true;
return false;
}
BOOL func_49(Hash hParam0, int iParam1, var uParam2) // Position - 0x3FF2{
*uParam2=-99;
switch (hParam0){
case joaat("Player_Zero"):
if(iParam1==16 || iParam1==17 || iParam1==21 || iParam1==22 || iParam1==32 || iParam1 >=34 && iParam1 <=39 || iParam1 >=41 && iParam1 <=45 || iParam1==46 || iParam1 >=47 && iParam1 <=54 || iParam1 >=55 && iParam1 <=70 || iParam1 >=72 && iParam1 <=79 || iParam1==80 || iParam1 >=81 && iParam1 <=83 || iParam1 >=84 && iParam1 <=87 || iParam1==88 || iParam1 >=89 && iParam1 <=91 || iParam1==95 || iParam1 >=96 && iParam1 <=111 || iParam1==112){
*uParam2=6;
return true;
}
break;
case joaat("Player_One"):
if(iParam1==12 || iParam1 >=14 && iParam1 <=21 || iParam1==32 || iParam1==52 || iParam1 >=69 && iParam1 <=70 || iParam1==71 || iParam1 >=72 && iParam1 <=77){
*uParam2=17;
return true;
}
break;
case joaat("Player_Two"):
if(iParam1==4 || iParam1==5 || iParam1==6 || iParam1==7 || iParam1==14 || iParam1 >=18 && iParam1 <=29 || iParam1==31 || iParam1==32 || iParam1==33 || iParam1==34 || iParam1 >=35 && iParam1 <=42 || iParam1 >=43 && iParam1 <=53 || iParam1 >=54 && iParam1 <=61 || iParam1 >=71 && iParam1 <=80 || iParam1 >=81 && iParam1 <=90 || iParam1 >=94 && iParam1 <=103){
*uParam2=8;
return true;
}
break;
}
return false;
}

int func_50(Hash hParam0, int iParam1, int iParam2, var uParam3) // Position - 0x42BD{
int num;
*uParam3=-99;
switch (hParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 10:
if(iParam2 >=44 && iParam2 <=47) *uParam3=0;
break;
case 14:
if(iParam2 >=31 && iParam2 <=32 || iParam2 >=33 && iParam2 <=34 || iParam2 >=35 && iParam2 <=36 || iParam2==37 || iParam2 >=38 && iParam2 <=39 || iParam2 >=40 && iParam2 <=41 || iParam2 >=42 && iParam2 <=44) *uParam3=0;
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 10:
if(iParam2 >=47 && iParam2 <=50) *uParam3=0;
break;
case 14:
if(iParam2 >=26 && iParam2 <=27 || iParam2 >=28 && iParam2 <=29 || iParam2 >=30 && iParam2 <=31 || iParam2==32 || iParam2 >=35 && iParam2 <=36) *uParam3=0;
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 9:
if(iParam2 >=15 && iParam2 <=16) *uParam3=0;
break;
case 10:
if(iParam2 >=29 && iParam2 <=32) *uParam3=0;
break;
case 14:
if(iParam2 >=47 && iParam2 <=48 || iParam2 >=49 && iParam2 <=50 || iParam2 >=51 && iParam2 <=52 || iParam2==53 || iParam2 >=54 && iParam2 <=55 || iParam2 >=56 && iParam2 <=57 || iParam2 >=58 && iParam2 <=60) *uParam3=0;
break;
}
break;
}
if(*uParam3 !=-99){
num=func_35(hParam0);
Global_113648.f_2365.f_539[num /*65*/].f_63=iParam2;
Global_113648.f_2365.f_539[num /*65*/].f_64=iParam1;
return 1;
}
return 0;
}

int func_51(Hash hParam0, int iParam1, int iParam2) // Position - 0x4547{
switch (hParam0){
case joaat("Player_Zero"):
if(iParam1==1)if(iParam2==0) return 1;
elseif(iParam2==4) return 5;
else return 3;
elseif(iParam2==0) return 0;
elseif(iParam2==4) return 4;
else return 2;
break;
case joaat("Player_One"):
if(iParam1 >=0 && iParam1 <=15)if(iParam2==0) return 0;
else return 3;
elseif(iParam1 >=16 && iParam1 <=17)if(iParam2==0) return 2;
else return 5;
elseif(iParam1==18)if(iParam2==0) return 6;
else return 7;
elseif(iParam1==19)if(iParam2==0) return 1;
else return 4;
elseif(iParam2==0) return 1;
else return 4;
break;
case joaat("Player_Two"):
if(iParam1==2)if(iParam2==0) return 2;
else return 3;
elseif(iParam1==3)if(iParam2==0) return 4;
else return 6;
elseif(iParam1==8) return 5;
elseif(iParam2==0) return 0;
else return 1;
break;
}
return -99;
}


void func_52(Ped pedParam0, ePedComponentType epctParam1, int iParam2, int iParam3) // Position - 0x469E{
int num;
if(iParam2==-1){
PED::CLEAR_PED_PROP(pedParam0, epctParam1, 1);
if(epctParam1==PV_COMP_HEAD){
PED::SET_PED_CONFIG_FLAG(pedParam0, 34, false);
PED::SET_PED_CONFIG_FLAG(pedParam0, 36, false);
}}else{
PED::SET_PED_PROP_INDEX(pedParam0, epctParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1);
if(epctParam1==PV_COMP_HEAD){
num=func_57(pedParam0, iParam2, iParam3, epctParam1);
if(func_53(ENTITY::GET_ENTITY_MODEL(pedParam0), 14, num, FILES::GET_HASH_NAME_FOR_PROP(pedParam0, 0, iParam2, iParam3))){
PED::SET_PED_CONFIG_FLAG(pedParam0, 34, true);
PED::SET_PED_CONFIG_FLAG(pedParam0, 36, true);
}else{
PED::SET_PED_CONFIG_FLAG(pedParam0, 34, false);
PED::SET_PED_CONFIG_FLAG(pedParam0, 36, false);
}}}
return;
}
BOOL func_53(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x4738{
switch (hParam0){
case joaat("MP_M_Freemode_01"):
switch (iParam1){
case 14:
if(hParam3==-1) hParam3=func_54(hParam0, iParam2, 14, 3);
if(iParam2 >=131 && iParam2 <=154 || iParam2 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HELMET"), 1)) return true;
break;
}
break;
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 14:
if(hParam3==-1) hParam3=func_54(hParam0, iParam2, 14, 4);
if(iParam2 >=131 && iParam2 <=154 || iParam2 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HELMET"), 1)) return true;
break;
}
break;
}
return false;
}
Hash func_54(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x4806{
var outProp;
int componentId;
int num;
var outComponent;
int componentId2;
int num2;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&outProp);
componentId=iParam1 - func_56(hParam0);
if(componentId < 0) return -1;
num=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
if(num <=componentId) return -1;
FILES::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
return outProp.f_1;
}else{
FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
componentId2=iParam1 - func_55(hParam0, func_77(iParam2));
if(componentId2 < 0) return -1;
if(hParam0==Global_78491.f_26[iParam2] && iParam1==Global_78491[iParam2] && Global_78491.f_13[iParam2] !=0) return Global_78491.f_13[iParam2];
num2=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_77(iParam2));
if(num2 <=componentId2) return -1;
FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
Global_78491.f_13[iParam2]=outComponent.f_1;
Global_78491[iParam2]=iParam1;
Global_78491.f_26[iParam2]=hParam0;
return outComponent.f_1;
}
return -1;
}

int func_55(Hash hParam0, int iParam1) // Position - 0x4920{
switch (hParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 0:
return 7;
case 1:
return 5;
case 2:
return 6;
case 3:
return 181;
case 4:
return 113;
case 5:
return 14;
case 6:
return 99;
case 7:
return 1;
case 8:
return 24;
case 9:
return 20;
case 10:
return 48;
case 11:
return 45;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 0:
return 10;
case 1:
return 5;
case 2:
return 21;
case 3:
return 318;
case 4:
return 117;
case 5:
return 7;
case 6:
return 134;
case 7:
return 1;
case 8:
return 77;
case 9:
return 12;
case 10:
return 53;
case 11:
return 63;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 0:
return 7;
case 1:
return 6;
case 2:
return 9;
case 3:
return 242;
case 4:
return 104;
case 5:
return 7;
case 6:
return 84;
case 7:
return 1;
case 8:
return 18;
case 9:
return 17;
case 10:
return 33;
case 11:
return 1;
}
break;
}
switch (hParam0){
case joaat("MP_M_Freemode_01"):
switch (iParam1){
case 0:
return 0;
case 1:
return 26;
case 2:
return 91;
case 3:
return 16;
case 4:
return 256;
case 5:
return 9;
case 6:
return 256;
case 7:
return 92;
case 8:
return 241;
case 9:
return 46;
case 10:
return 7;
case 11:
return 237;
}
break;
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 0:
return 0;
case 1:
return 26;
case 2:
return 92;
case 3:
return 16;
case 4:
return 256;
case 5:
return 9;
case 6:
return 256;
case 7:
return 55;
case 8:
return 136;
case 9:
return 36;
case 10:
return 6;
case 11:
return 256;
}
break;
}
return -99;
}

int func_56(Hash hParam0) // Position - 0x4CC7{
switch (hParam0){
case joaat("Player_Zero"):
return 113;
case joaat("Player_One"):
return 175;
case joaat("Player_Two"):
return 155;
}
switch (hParam0){
case joaat("MP_M_Freemode_01"):
return 327;
case joaat("MP_F_Freemode_01"):
return 327;
}
return -99;
}

int func_57(Ped pedParam0, int iParam1, int iParam2, ePedComponentType epctParam3) // Position - 0x4D28{
Hash entityModel;
Hash hashNameForProp;
int numberOfPedPropDrawableVariations;
int num;
int i;
int j;
int numberOfPedPropTextureVariations;
if(iParam1==-1) return func_61(epctParam3);
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
hashNameForProp=FILES::GET_HASH_NAME_FOR_PROP(pedParam0, epctParam3, iParam1, iParam2);
if(hashNameForProp !=-1 && hashNameForProp !=0)if(entityModel==joaat("MP_M_Freemode_01")) return func_59(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 3);
elseif(entityModel==joaat("MP_F_Freemode_01")) return func_59(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 4);
numberOfPedPropDrawableVariations=PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(pedParam0, epctParam3);
for (i=0;
i <=numberOfPedPropDrawableVariations - 1;
i=i + 1){
numberOfPedPropTextureVariations=PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(pedParam0, epctParam3, i);
if(i !=iParam1){
num=num + numberOfPedPropTextureVariations;
}else{
for (j=0;
j <=numberOfPedPropTextureVariations - 1;
j=j + 1){
if(i==iParam1 && j==iParam2){
num=num + func_58(pedParam0, epctParam3);
return num;
}else{
num=num + 1;
}}}}
return func_61(epctParam3);
}

int func_58(Ped pedParam0, ePedComponentType epctParam1) // Position - 0x4E24{
Hash entityModel;
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
switch (entityModel){
case joaat("Player_Zero"):
switch (epctParam1){
case PV_COMP_HEAD:
return 10;
case PV_COMP_BERD:
return 58;
case PV_COMP_HAIR:
return 112;
}
break;
case joaat("Player_One"):
switch (epctParam1){
case PV_COMP_HEAD:
return 10;
case PV_COMP_BERD:
return 82;
case PV_COMP_HAIR:
return 158;
}
break;
case joaat("Player_Two"):
switch (epctParam1){
case PV_COMP_HEAD:
return 10;
case PV_COMP_BERD:
return 88;
case PV_COMP_HAIR:
return 154;
}
break;
case joaat("MP_M_Freemode_01"):
switch (epctParam1){
case PV_COMP_HEAD:
return 10;
case PV_COMP_BERD:
return 155;
case PV_COMP_FEET:
return 319;
}
break;
case joaat("MP_F_Freemode_01"):
switch (epctParam1){
case PV_COMP_HEAD:
return 10;
case PV_COMP_BERD:
return 155;
case PV_COMP_FEET:
return 319;
}
break;
}
return -99;
}

int func_59(Hash hParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x4F62{
var unk;
Ped i;
Ped ped;
int shopPedQueryPropIndex;
int shopPedQueryComponentIndex;
if(iParam2==12){
ped=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
for (i=0;
i < ped;
i=i + 1){
PED::APPLY_PED_BLOOD_BY_ZONE(i, &unk);
if(unk.f_1==hParam1) return func_60(hParam0) + i;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
shopPedQueryPropIndex=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(hParam1);
if(shopPedQueryPropIndex !=-1) return func_56(hParam0) + shopPedQueryPropIndex;
}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_77(iParam2));
shopPedQueryComponentIndex=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(hParam1);
if(shopPedQueryComponentIndex !=-1) return func_55(hParam0, func_77(iParam2)) + shopPedQueryComponentIndex;
}
return -99;
}

int func_60(Hash hParam0) // Position - 0x501D{
switch (hParam0){
case joaat("Player_Zero"):
return 53;
case joaat("Player_One"):
return 47;
case joaat("Player_Two"):
return 48;
}
switch (hParam0){
case joaat("MP_M_Freemode_01"):
return 26;
case joaat("MP_F_Freemode_01"):
return 28;
}
return -99;
}

int func_61(ePedComponentType epctParam0) // Position - 0x507C{
switch (epctParam0){
case PV_COMP_HEAD:
return 0;
case PV_COMP_BERD:
return 1;
case PV_COMP_HAIR:
return 2;
case PV_COMP_UPPR:
return 3;
case PV_COMP_LOWR:
return 4;
case PV_COMP_HAND:
return 5;
case PV_COMP_FEET:
return 6;
case PV_COMP_TEEF:
return 7;
case PV_COMP_ACCS:
return 8;
}
return 0;
}
BOOL func_62(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x5102{
switch (hParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 14:
if(iParam2==16) return true;
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 14:
if(iParam2==40 || iParam2 >=41 && iParam2 <=56 || iParam2 >=64 && iParam2 <=79) return true;
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 14:
if(iParam2 >=17 && iParam2 <=18 || iParam2 >=71 && iParam2 <=86) return true;
break;
}
break;
case joaat("MP_M_Freemode_01"):
switch (iParam1){
case 14:
if(iParam2 >=18 && iParam2 <=130){
return true;
}elseif(iParam2 >=10 && iParam2 <=17){
return true;
}elseif(iParam2 >=327){
if(hParam3==-1) hParam3=func_54(hParam0, iParam2, 14, 3);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_54(hParam0, iParam2, 14, 3), -1842686353, 1);
}
break;
case 1:
if(iParam2 >=26){
if(hParam3==-1) hParam3=func_54(hParam0, iParam2, 1, 3);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_54(hParam0, iParam2, 1, 3), -1842686353, 0);
}
break;
}
break;
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 14:
if(iParam2 >=18 && iParam2 <=130){
return true;
}elseif(iParam2 >=10 && iParam2 <=17){
return true;
}elseif(iParam2 >=327){
if(hParam3==-1) hParam3=func_54(hParam0, iParam2, 14, 4);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_54(hParam0, iParam2, 14, 4), -1842686353, 1);
}
break;
case 1:
if(iParam2 >=26){
if(hParam3==-1) hParam3=func_54(hParam0, iParam2, 1, 4);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_54(hParam0, iParam2, 1, 4), -1842686353, 0);
}
break;
}
break;
}
return false;
}
BOOL func_63(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x537F{
if(hParam0==joaat("Player_Zero")){
if(iParam1==6)if(iParam2==10) return true;
elseif(iParam1==8)if(iParam2==9 || iParam2==7 || iParam2==23) return true;
elseif(iParam1==9)if(iParam2 >=9 && iParam2 <=14) return true;
elseif(iParam1==14)if(iParam2==12 || iParam2==59 || iParam2==60 || iParam2==31 || iParam2==32 || iParam2==33 || iParam2==34 || iParam2==35 || iParam2==36 || iParam2==37 || iParam2==38 || iParam2==39 || iParam2==40 || iParam2==41 || iParam2 >=42 && iParam2 <=44 || iParam2==54 || iParam2==55) return true;
}elseif(hParam0==joaat("Player_One")){
if(iParam1==2)if(iParam2==20) return true;
elseif(iParam1==8)if(iParam2==3 || iParam2==5 || iParam2==9) return true;
elseif(iParam1==9)if(iParam2 >=5 && iParam2 <=10) return true;
elseif(iParam1==14)if(iParam2==82 || iParam2==10 || iParam2==26 || iParam2==27 || iParam2==28 || iParam2==29 || iParam2==30 || iParam2==31 || iParam2==32 || iParam2==33 || iParam2==34 || iParam2==35 || iParam2==36 || iParam2 >=37 && iParam2 <=39) return true;
}elseif(hParam0==joaat("Player_Two")){
if(iParam1==8)if(iParam2==14 || iParam2==7) return true;
elseif(iParam1==9)if(iParam2==8 || iParam2 >=9 && iParam2 <=14 || iParam2==15 || iParam2==16) return true;
elseif(iParam1==14)if(iParam2==88 || iParam2==12 || iParam2==47 || iParam2==48 || iParam2==49 || iParam2==50 || iParam2==51 || iParam2==52 || iParam2==53 || iParam2==54 || iParam2==55 || iParam2==56 || iParam2==57 || iParam2 >=58 && iParam2 <=60) return true;
}elseif(hParam0==joaat("MP_M_Freemode_01")){
if(iParam1==1){
if(iParam2 > 0){
if(iParam2 >=26){
if(hParam3==-1) hParam3=func_54(hParam0, iParam2, 1, 3);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAIR_SHRINK"), 0)) return false;
}
return true;
}}}elseif(hParam0==joaat("MP_F_Freemode_01")){
if(iParam1==1){
if(iParam2 > 0){
if(iParam2 >=26){
if(hParam3==-1) hParam3=func_54(hParam0, iParam2, 1, 4);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAIR_SHRINK"), 0)) return false;
}
return true;
}}}
return false;
}
BOOL func_64(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x57A4{
switch (hParam0){
case joaat("Player_Zero"):
if(iParam1==14)if(iParam2==58 || iParam2==61 || iParam2 >=62 && iParam2 <=69 || iParam2 >=70 && iParam2 <=79 || iParam2 >=80 && iParam2 <=89 || iParam2==90 || iParam2 >=91 && iParam2 <=102 || iParam2 >=103 && iParam2 <=110 || iParam2==111) return true;
break;
case joaat("Player_One"):
if(iParam1==14)if(iParam2 >=83 && iParam2 <=92 || iParam2==93 || iParam2==94 || iParam2 >=95 && iParam2 <=101 || iParam2 >=102 && iParam2 <=111 || iParam2 >=112 && iParam2 <=121 || iParam2 >=122 && iParam2 <=131 || iParam2 >=132 && iParam2 <=139 || iParam2 >=140 && iParam2 <=149 || iParam2 >=150 && iParam2 <=156 || iParam2==157) return true;
break;
case joaat("Player_Two"):
if(iParam1==14)if(iParam2==89 || iParam2 >=90 && iParam2 <=99 || iParam2 >=100 && iParam2 <=109 || iParam2==111 || iParam2==112 || iParam2 >=113 && iParam2 <=122 || iParam2 >=123 && iParam2 <=132 || iParam2 >=133 && iParam2 <=142 || iParam2 >=143 && iParam2 <=152 || iParam2==153) return true;
break;
case joaat("MP_M_Freemode_01"):
if(iParam1==14){
if(iParam2 >=155 && iParam2 <=318){
return true;
}elseif(iParam2 >=327){
if(hParam3==-1) hParam3=func_54(hParam0, iParam2, 14, 3);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("GLASSES"), 1);
}}
break;
case joaat("MP_F_Freemode_01"):
if(iParam1==14){
if(iParam2 >=155 && iParam2 <=318){
return true;
}elseif(iParam2 >=327){
if(hParam3==-1) hParam3=func_54(hParam0, iParam2, 14, 4);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("GLASSES"), 1);
}}
break;
}
return false;
}

int func_65(Ped pedParam0, ePedComponentType epctParam1) // Position - 0x5A97{
int pedPropIndex;
int pedPropTextureIndex;
if(PED::IS_PED_INJURED(pedParam0)) return -99;
pedPropIndex=PED::GET_PED_PROP_INDEX(pedParam0, epctParam1, 1);
if(pedPropIndex==-1) return func_61(epctParam1);
pedPropTextureIndex=PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, epctParam1);
return func_57(pedParam0, pedPropIndex, pedPropTextureIndex, epctParam1);
}

int func_66(Ped pedParam0, int iParam1) // Position - 0x5ADE{
ePedComponentType componentId;
int pedDrawableVariation;
int pedTextureVariation;
if(iParam1==12 || iParam1==13 || iParam1==14 || PED::IS_PED_INJURED(pedParam0)) return -99;
componentId=func_77(iParam1);
pedDrawableVariation=PED::GET_PED_DRAWABLE_VARIATION(pedParam0, componentId);
pedTextureVariation=PED::GET_PED_TEXTURE_VARIATION(pedParam0, componentId);
return func_67(pedParam0, pedDrawableVariation, pedTextureVariation, iParam1);
}

int func_67(Ped pedParam0, int iParam1, int iParam2, int iParam3) // Position - 0x5B3E{
ePedComponentType componentId;
int numberOfPedDrawableVariations;
int num;
int i;
componentId=func_77(iParam3);
numberOfPedDrawableVariations=PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(pedParam0, componentId);
for (i=0;
i <=numberOfPedDrawableVariations - 1;
i=i + 1){
if(i !=iParam1){
num=num + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(pedParam0, componentId, i);
}else{
num=num + iParam2;
return num;
}}
return -99;
}


void func_68(int iParam0) // Position - 0x5B95{
if(IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1) && !IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)) func_74(iParam0, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 2, Global_78341[1 /*14*/].f_1, 1, 0);
if(IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1) && IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
if(iParam0==12){
func_69(Global_2883588, 2, true, true, -1);
}elseif(iParam0==13){
}elseif(iParam0==14){
func_69(Global_2883588, 2, true, true, -1);
}else{
func_69(Global_2883588, 2, true, true, -1);
}}
return;
}


void func_69(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x5C41{
int num;
int offset;
eMPStat stat;
int address;
num=Global_78338;
if(iParam4 !=-1) num=iParam4;
if(func_73(hParam0, iParam1, &stat, &offset, bParam2, bParam3)){
address=_MPCHAR_STAT_GET_INT(stat, num, 0);
MISC::SET_BIT(&address, offset);
_MPCHAR_STAT_SET_INT(stat, address, num, true, false);
}
return;
}


void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5C8B{
Hash statName;
bParam4;
statName=Global_2805027[empsParam0 /*3*/][func_71(iParam2)];
if(statName !=0) STATS::STAT_SET_INT(statName, iParam1, bParam3);
return;
}

int func_71(int iParam0) // Position - 0x5CBB{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_12();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}
int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x5CEF{
Hash statHash;
int outValue;
if(empsParam0 !=14192){
iParam2==0;
statHash=Global_2805027[empsParam0 /*3*/][func_71(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
}
return 0;
}
BOOL func_73(Hash hParam0, int iParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x5D2C{
int fmMaleShopPedApparelItemIndex;
*uParam2=14192;
if(bParam4 && Global_4539485 || !bParam4 && bParam5){
switch (iParam1){
case 1:
switch (hParam0){
case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
*uParam2=972;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
*uParam2=972;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
*uParam2=972;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
*uParam2=972;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
*uParam2=972;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
*uParam2=972;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
*uParam2=972;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
*uParam2=972;
*uParam3=26;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
*uParam2=936;
*uParam3=0;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
*uParam2=936;
*uParam3=1;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
*uParam2=936;
*uParam3=2;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
*uParam2=936;
*uParam3=3;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
*uParam2=936;
*uParam3=4;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
*uParam2=936;
*uParam3=5;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
*uParam2=936;
*uParam3=7;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
*uParam2=936;
*uParam3=8;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
*uParam2=936;
*uParam3=11;
return true;
}
break;
case 2:
switch (hParam0){
case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
*uParam2=1024;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
*uParam2=1024;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
*uParam2=1024;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
*uParam2=1024;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
*uParam2=1024;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
*uParam2=1024;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
*uParam2=1024;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
*uParam2=1024;
*uParam3=26;
return true;
}
break;
}}else{
switch (iParam1){
case 1:
switch (hParam0){
case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
*uParam2=972;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
*uParam2=972;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
*uParam2=972;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
*uParam2=972;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
*uParam2=972;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
*uParam2=972;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
*uParam2=972;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
*uParam2=972;
*uParam3=26;
return true;
}
break;
case 2:
switch (hParam0){
case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
*uParam2=1024;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
*uParam2=1024;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
*uParam2=1024;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
*uParam2=1024;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
*uParam2=1024;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
*uParam2=1024;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
*uParam2=1024;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
*uParam2=1024;
*uParam3=26;
return true;
}
break;
}}
fmMaleShopPedApparelItemIndex=-1;
if(bParam4)if(Global_4539485) fmMaleShopPedApparelItemIndex=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
else fmMaleShopPedApparelItemIndex=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
elseif(bParam5) fmMaleShopPedApparelItemIndex=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
else fmMaleShopPedApparelItemIndex=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
if(fmMaleShopPedApparelItemIndex==-1) return false;
switch (iParam1){
case 1:
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 0:
*uParam2=1761;
break;
case 1:
*uParam2=1762;
break;
case 2:
*uParam2=1763;
break;
case 3:
*uParam2=1764;
break;
case 4:
*uParam2=1765;
break;
case 5:
*uParam2=1766;
break;
case 6:
*uParam2=1773;
break;
case 7:
*uParam2=1774;
break;
case 8:
*uParam2=1775;
break;
case 9:
*uParam2=1776;
break;
case 10:
*uParam2=1777;
break;
case 11:
*uParam2=1778;
break;
case 12:
*uParam2=1779;
break;
case 13:
*uParam2=1787;
break;
case 14:
*uParam2=1788;
break;
case 15:
*uParam2=1889;
break;
case 16:
*uParam2=1890;
break;
case 17:
*uParam2=1921;
break;
case 18:
*uParam2=1935;
break;
case 19:
*uParam2=1936;
break;
case 20:
*uParam2=1937;
break;
case 21:
*uParam2=1938;
break;
case 22:
*uParam2=1939;
break;
case 23:
*uParam2=2043;
break;
case 24:
*uParam2=2044;
break;
case 25:
*uParam2=2070;
break;
case 26:
*uParam2=2071;
break;
case 27:
*uParam2=2072;
break;
case 28:
*uParam2=2073;
break;
case 29:
*uParam2=2074;
break;
case 30:
*uParam2=2075;
break;
case 31:
*uParam2=2076;
break;
case 32:
*uParam2=2077;
break;
case 33:
*uParam2=2078;
break;
case 34:
*uParam2=2079;
break;
case 35:
*uParam2=2326;
break;
case 36:
*uParam2=2327;
break;
case 37:
*uParam2=2391;
break;
case 38:
*uParam2=2392;
break;
case 39:
*uParam2=2393;
break;
case 40:
*uParam2=2394;
break;
case 41:
*uParam2=2453;
break;
case 42:
*uParam2=2454;
break;
case 43:
*uParam2=2455;
break;
case 44:
*uParam2=2456;
break;
case 45:
*uParam2=2457;
break;
case 46:
*uParam2=2458;
break;
case 47:
*uParam2=2459;
break;
case 48:
*uParam2=2460;
break;
case 49:
*uParam2=2461;
break;
case 50:
*uParam2=2462;
break;
case 51:
*uParam2=2592;
break;
case 52:
*uParam2=2593;
break;
case 53:
*uParam2=2594;
break;
case 54:
*uParam2=2595;
break;
case 55:
*uParam2=2596;
break;
case 56:
*uParam2=2597;
break;
case 57:
*uParam2=2598;
break;
case 58:
*uParam2=2599;
break;
case 59:
*uParam2=2600;
break;
case 60:
*uParam2=2601;
break;
case 61:
*uParam2=2602;
break;
case 62:
*uParam2=3199;
break;
case 63:
*uParam2=3200;
break;
case 64:
*uParam2=3201;
break;
case 65:
*uParam2=3202;
break;
case 66:
*uParam2=3203;
break;
case 67:
*uParam2=3204;
break;
case 68:
*uParam2=3672;
break;
case 69:
*uParam2=3673;
break;
case 70:
*uParam2=3674;
break;
case 71:
*uParam2=3675;
break;
case 72:
*uParam2=3676;
break;
case 73:
*uParam2=3677;
break;
case 74:
*uParam2=3678;
break;
case 75:
*uParam2=3679;
break;
case 76:
*uParam2=3680;
break;
case 77:
*uParam2=3681;
break;
case 78:
*uParam2=3795;
break;
case 79:
*uParam2=3796;
break;
case 80:
*uParam2=3797;
break;
case 81:
*uParam2=3798;
break;
case 82:
*uParam2=3799;
break;
case 83:
*uParam2=3800;
break;
case 84:
*uParam2=3801;
break;
case 85:
*uParam2=3802;
break;
case 86:
*uParam2=3905;
break;
case 87:
*uParam2=3906;
break;
case 88:
*uParam2=3907;
break;
case 89:
*uParam2=5340;
break;
case 90:
*uParam2=5341;
break;
case 91:
*uParam2=5342;
break;
case 92:
*uParam2=5343;
break;
case 93:
*uParam2=5344;
break;
case 94:
*uParam2=5345;
break;
case 95:
*uParam2=5346;
break;
case 96:
*uParam2=5347;
break;
case 97:
*uParam2=5348;
break;
case 98:
*uParam2=5349;
break;
case 99:
*uParam2=5350;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 100:
*uParam2=5351;
break;
case 101:
*uParam2=5397;
break;
case 102:
*uParam2=5398;
break;
case 103:
*uParam2=5399;
break;
case 104:
*uParam2=5400;
break;
case 105:
*uParam2=5401;
break;
case 106:
*uParam2=5402;
break;
case 107:
*uParam2=5403;
break;
case 108:
*uParam2=5404;
break;
case 109:
*uParam2=5405;
break;
case 110:
*uParam2=5406;
break;
case 111:
*uParam2=5407;
break;
case 112:
*uParam2=5408;
break;
case 113:
*uParam2=5409;
break;
case 114:
*uParam2=5410;
break;
case 115:
*uParam2=5411;
break;
case 116:
*uParam2=5412;
break;
case 117:
*uParam2=5413;
break;
case 118:
*uParam2=5414;
break;
case 119:
*uParam2=5415;
break;
case 120:
*uParam2=5416;
break;
case 121:
*uParam2=5417;
break;
case 122:
*uParam2=5418;
break;
case 123:
*uParam2=5419;
break;
case 124:
*uParam2=6125;
break;
case 125:
*uParam2=6126;
break;
case 126:
*uParam2=6127;
break;
case 127:
*uParam2=6128;
break;
case 128:
*uParam2=6129;
break;
case 129:
*uParam2=6130;
break;
case 130:
*uParam2=6131;
break;
case 131:
*uParam2=6132;
break;
case 132:
*uParam2=6133;
break;
case 133:
*uParam2=6134;
break;
case 134:
*uParam2=6135;
break;
case 135:
*uParam2=6136;
break;
case 136:
*uParam2=6137;
break;
case 137:
*uParam2=6138;
break;
case 138:
*uParam2=6139;
break;
case 139:
*uParam2=6438;
break;
case 140:
*uParam2=6439;
break;
case 141:
*uParam2=6440;
break;
case 142:
*uParam2=6441;
break;
case 143:
*uParam2=6442;
break;
case 144:
*uParam2=6443;
break;
case 145:
*uParam2=6444;
break;
case 146:
*uParam2=6445;
break;
case 147:
*uParam2=6446;
break;
case 148:
*uParam2=6447;
break;
case 149:
*uParam2=6448;
break;
case 150:
*uParam2=6449;
break;
case 151:
*uParam2=6450;
break;
case 152:
*uParam2=6451;
break;
case 153:
*uParam2=6452;
break;
case 154:
*uParam2=7269;
break;
case 155:
*uParam2=7270;
break;
case 156:
*uParam2=7271;
break;
case 157:
*uParam2=7272;
break;
case 158:
*uParam2=7273;
break;
case 159:
*uParam2=7274;
break;
case 160:
*uParam2=7275;
break;
case 161:
*uParam2=7882;
break;
case 162:
*uParam2=7883;
break;
case 163:
*uParam2=7884;
break;
case 164:
*uParam2=7885;
break;
case 165:
*uParam2=7886;
break;
case 166:
*uParam2=7887;
break;
case 167:
*uParam2=7888;
break;
case 168:
*uParam2=7889;
break;
case 169:
*uParam2=7890;
break;
case 170:
*uParam2=7891;
break;
case 171:
*uParam2=7892;
break;
case 172:
*uParam2=7893;
break;
case 173:
*uParam2=7894;
break;
case 174:
*uParam2=7895;
break;
case 175:
*uParam2=7896;
break;
case 176:
*uParam2=8302;
break;
case 177:
*uParam2=8303;
break;
case 178:
*uParam2=8304;
break;
case 179:
*uParam2=8305;
break;
case 180:
*uParam2=8306;
break;
case 181:
*uParam2=8307;
break;
case 182:
*uParam2=8308;
break;
case 183:
*uParam2=8309;
break;
case 184:
*uParam2=8310;
break;
case 185:
*uParam2=8311;
break;
case 186:
*uParam2=8312;
break;
case 187:
*uParam2=8313;
break;
case 188:
*uParam2=8314;
break;
case 189:
*uParam2=8315;
break;
case 190:
*uParam2=8316;
break;
case 191:
*uParam2=8317;
break;
case 192:
*uParam2=8318;
break;
case 193:
*uParam2=8319;
break;
case 194:
*uParam2=8320;
break;
case 195:
*uParam2=8321;
break;
case 196:
*uParam2=8322;
break;
case 197:
*uParam2=8323;
break;
case 198:
*uParam2=8324;
break;
case 199:
*uParam2=8325;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 200:
*uParam2=8326;
break;
case 201:
*uParam2=8941;
break;
case 202:
*uParam2=8942;
break;
case 203:
*uParam2=8943;
break;
case 204:
*uParam2=8944;
break;
case 205:
*uParam2=8945;
break;
case 206:
*uParam2=9424;
break;
case 207:
*uParam2=9425;
break;
case 208:
*uParam2=9426;
break;
case 209:
*uParam2=9427;
break;
case 210:
*uParam2=9428;
break;
case 211:
*uParam2=9429;
break;
case 212:
*uParam2=9430;
break;
case 213:
*uParam2=9431;
break;
case 214:
*uParam2=9432;
break;
case 215:
*uParam2=9433;
break;
case 216:
*uParam2=9434;
break;
case 217:
*uParam2=9435;
break;
case 218:
*uParam2=9436;
break;
case 219:
*uParam2=9437;
break;
case 220:
*uParam2=9438;
break;
case 221:
*uParam2=9439;
break;
case 222:
*uParam2=9440;
break;
case 223:
*uParam2=9441;
break;
case 224:
*uParam2=9442;
break;
case 225:
*uParam2=9443;
break;
case 226:
*uParam2=9444;
break;
case 227:
*uParam2=9445;
break;
case 228:
*uParam2=9446;
break;
case 229:
*uParam2=9447;
break;
case 230:
*uParam2=9448;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 231:
*uParam2=10303;
break;
case 232:
*uParam2=10304;
break;
case 233:
*uParam2=10305;
break;
case 234:
*uParam2=10306;
break;
case 235:
*uParam2=10307;
break;
case 236:
*uParam2=10308;
break;
case 237:
*uParam2=10309;
break;
case 238:
*uParam2=10310;
break;
case 239:
*uParam2=10311;
break;
case 240:
*uParam2=10312;
break;
case 241:
*uParam2=10313;
break;
case 242:
*uParam2=10314;
break;
case 243:
*uParam2=10315;
break;
case 244:
*uParam2=10316;
break;
case 245:
*uParam2=10317;
break;
case 246:
*uParam2=10318;
break;
case 247:
*uParam2=10319;
break;
case 248:
*uParam2=10320;
break;
case 249:
*uParam2=10321;
break;
case 250:
*uParam2=10322;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 251:
*uParam2=10419;
break;
case 252:
*uParam2=10420;
break;
case 253:
*uParam2=10421;
break;
case 254:
*uParam2=10422;
break;
case 255:
*uParam2=10423;
break;
case 256:
*uParam2=10424;
break;
case 257:
*uParam2=10425;
break;
case 258:
*uParam2=10426;
break;
case 259:
*uParam2=10427;
break;
case 260:
*uParam2=10428;
break;
case 261:
*uParam2=11845;
break;
case 262:
*uParam2=11846;
break;
case 263:
*uParam2=11847;
break;
case 264:
*uParam2=11848;
break;
case 265:
*uParam2=11849;
break;
case 266:
*uParam2=11850;
break;
case 267:
*uParam2=11851;
break;
case 268:
*uParam2=11852;
break;
case 269:
*uParam2=11853;
break;
case 270:
*uParam2=11854;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 271:
*uParam2=11876;
break;
case 272:
*uParam2=11877;
break;
case 273:
*uParam2=11878;
break;
case 274:
*uParam2=11879;
break;
case 275:
*uParam2=11880;
break;
case 276:
*uParam2=11881;
break;
case 277:
*uParam2=11882;
break;
case 278:
*uParam2=11883;
break;
case 279:
*uParam2=11884;
break;
case 280:
*uParam2=11885;
break;
case 281:
*uParam2=11886;
break;
case 282:
*uParam2=11887;
break;
}
break;
case 2:
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 0:
*uParam2=1767;
break;
case 1:
*uParam2=1768;
break;
case 2:
*uParam2=1769;
break;
case 3:
*uParam2=1770;
break;
case 4:
*uParam2=1771;
break;
case 5:
*uParam2=1772;
break;
case 6:
*uParam2=1780;
break;
case 7:
*uParam2=1781;
break;
case 8:
*uParam2=1782;
break;
case 9:
*uParam2=1783;
break;
case 10:
*uParam2=1784;
break;
case 11:
*uParam2=1785;
break;
case 12:
*uParam2=1786;
break;
case 13:
*uParam2=1789;
break;
case 14:
*uParam2=1790;
break;
case 15:
*uParam2=1891;
break;
case 16:
*uParam2=1892;
break;
case 17:
*uParam2=1922;
break;
case 18:
*uParam2=1940;
break;
case 19:
*uParam2=1941;
break;
case 20:
*uParam2=1942;
break;
case 21:
*uParam2=1943;
break;
case 22:
*uParam2=1944;
break;
case 23:
*uParam2=2045;
break;
case 24:
*uParam2=2046;
break;
case 25:
*uParam2=2080;
break;
case 26:
*uParam2=2081;
break;
case 27:
*uParam2=2082;
break;
case 28:
*uParam2=2083;
break;
case 29:
*uParam2=2084;
break;
case 30:
*uParam2=2085;
break;
case 31:
*uParam2=2086;
break;
case 32:
*uParam2=2087;
break;
case 33:
*uParam2=2088;
break;
case 34:
*uParam2=2089;
break;
case 35:
*uParam2=2328;
break;
case 36:
*uParam2=2329;
break;
case 37:
*uParam2=2395;
break;
case 38:
*uParam2=2396;
break;
case 39:
*uParam2=2397;
break;
case 40:
*uParam2=2398;
break;
case 41:
*uParam2=2463;
break;
case 42:
*uParam2=2464;
break;
case 43:
*uParam2=2465;
break;
case 44:
*uParam2=2466;
break;
case 45:
*uParam2=2467;
break;
case 46:
*uParam2=2468;
break;
case 47:
*uParam2=2469;
break;
case 48:
*uParam2=2470;
break;
case 49:
*uParam2=2471;
break;
case 50:
*uParam2=2472;
break;
case 51:
*uParam2=2603;
break;
case 52:
*uParam2=2604;
break;
case 53:
*uParam2=2605;
break;
case 54:
*uParam2=2606;
break;
case 55:
*uParam2=2607;
break;
case 56:
*uParam2=2608;
break;
case 57:
*uParam2=2609;
break;
case 58:
*uParam2=2610;
break;
case 59:
*uParam2=2611;
break;
case 60:
*uParam2=2612;
break;
case 61:
*uParam2=2613;
break;
case 62:
*uParam2=3205;
break;
case 63:
*uParam2=3206;
break;
case 64:
*uParam2=3207;
break;
case 65:
*uParam2=3208;
break;
case 66:
*uParam2=3209;
break;
case 67:
*uParam2=3210;
break;
case 68:
*uParam2=3682;
break;
case 69:
*uParam2=3683;
break;
case 70:
*uParam2=3684;
break;
case 71:
*uParam2=3685;
break;
case 72:
*uParam2=3686;
break;
case 73:
*uParam2=3687;
break;
case 74:
*uParam2=3688;
break;
case 75:
*uParam2=3689;
break;
case 76:
*uParam2=3690;
break;
case 77:
*uParam2=3691;
break;
case 78:
*uParam2=3803;
break;
case 79:
*uParam2=3804;
break;
case 80:
*uParam2=3805;
break;
case 81:
*uParam2=3806;
break;
case 82:
*uParam2=3807;
break;
case 83:
*uParam2=3808;
break;
case 84:
*uParam2=3809;
break;
case 85:
*uParam2=3810;
break;
case 86:
*uParam2=3908;
break;
case 87:
*uParam2=3909;
break;
case 88:
*uParam2=3910;
break;
case 89:
*uParam2=5352;
break;
case 90:
*uParam2=5353;
break;
case 91:
*uParam2=5354;
break;
case 92:
*uParam2=5355;
break;
case 93:
*uParam2=5356;
break;
case 94:
*uParam2=5357;
break;
case 95:
*uParam2=5358;
break;
case 96:
*uParam2=5359;
break;
case 97:
*uParam2=5360;
break;
case 98:
*uParam2=5361;
break;
case 99:
*uParam2=5362;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 100:
*uParam2=5363;
break;
case 101:
*uParam2=5420;
break;
case 102:
*uParam2=5421;
break;
case 103:
*uParam2=5422;
break;
case 104:
*uParam2=5423;
break;
case 105:
*uParam2=5424;
break;
case 106:
*uParam2=5425;
break;
case 107:
*uParam2=5426;
break;
case 108:
*uParam2=5427;
break;
case 109:
*uParam2=5428;
break;
case 110:
*uParam2=5429;
break;
case 111:
*uParam2=5430;
break;
case 112:
*uParam2=5431;
break;
case 113:
*uParam2=5432;
break;
case 114:
*uParam2=5433;
break;
case 115:
*uParam2=5434;
break;
case 116:
*uParam2=5435;
break;
case 117:
*uParam2=5436;
break;
case 118:
*uParam2=5437;
break;
case 119:
*uParam2=5438;
break;
case 120:
*uParam2=5439;
break;
case 121:
*uParam2=5440;
break;
case 122:
*uParam2=5441;
break;
case 123:
*uParam2=5442;
break;
case 124:
*uParam2=6140;
break;
case 125:
*uParam2=6141;
break;
case 126:
*uParam2=6142;
break;
case 127:
*uParam2=6143;
break;
case 128:
*uParam2=6144;
break;
case 129:
*uParam2=6145;
break;
case 130:
*uParam2=6146;
break;
case 131:
*uParam2=6147;
break;
case 132:
*uParam2=6148;
break;
case 133:
*uParam2=6149;
break;
case 134:
*uParam2=6150;
break;
case 135:
*uParam2=6151;
break;
case 136:
*uParam2=6152;
break;
case 137:
*uParam2=6153;
break;
case 138:
*uParam2=6154;
break;
case 139:
*uParam2=6453;
break;
case 140:
*uParam2=6454;
break;
case 141:
*uParam2=6455;
break;
case 142:
*uParam2=6456;
break;
case 143:
*uParam2=6457;
break;
case 144:
*uParam2=6458;
break;
case 145:
*uParam2=6459;
break;
case 146:
*uParam2=6460;
break;
case 147:
*uParam2=6461;
break;
case 148:
*uParam2=6462;
break;
case 149:
*uParam2=6463;
break;
case 150:
*uParam2=6464;
break;
case 151:
*uParam2=6465;
break;
case 152:
*uParam2=6466;
break;
case 153:
*uParam2=6467;
break;
case 154:
*uParam2=7276;
break;
case 155:
*uParam2=7277;
break;
case 156:
*uParam2=7278;
break;
case 157:
*uParam2=7279;
break;
case 158:
*uParam2=7280;
break;
case 159:
*uParam2=7281;
break;
case 160:
*uParam2=7282;
break;
case 161:
*uParam2=7897;
break;
case 162:
*uParam2=7898;
break;
case 163:
*uParam2=7899;
break;
case 164:
*uParam2=7900;
break;
case 165:
*uParam2=7901;
break;
case 166:
*uParam2=7902;
break;
case 167:
*uParam2=7903;
break;
case 168:
*uParam2=7904;
break;
case 169:
*uParam2=7905;
break;
case 170:
*uParam2=7906;
break;
case 171:
*uParam2=7907;
break;
case 172:
*uParam2=7908;
break;
case 173:
*uParam2=7909;
break;
case 174:
*uParam2=7910;
break;
case 175:
*uParam2=7911;
break;
case 176:
*uParam2=8327;
break;
case 177:
*uParam2=8328;
break;
case 178:
*uParam2=8329;
break;
case 179:
*uParam2=8330;
break;
case 180:
*uParam2=8331;
break;
case 181:
*uParam2=8332;
break;
case 182:
*uParam2=8333;
break;
case 183:
*uParam2=8334;
break;
case 184:
*uParam2=8335;
break;
case 185:
*uParam2=8336;
break;
case 186:
*uParam2=8337;
break;
case 187:
*uParam2=8338;
break;
case 188:
*uParam2=8339;
break;
case 189:
*uParam2=8340;
break;
case 190:
*uParam2=8341;
break;
case 191:
*uParam2=8342;
break;
case 192:
*uParam2=8343;
break;
case 193:
*uParam2=8344;
break;
case 194:
*uParam2=8345;
break;
case 195:
*uParam2=8346;
break;
case 196:
*uParam2=8347;
break;
case 197:
*uParam2=8348;
break;
case 198:
*uParam2=8349;
break;
case 199:
*uParam2=8350;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 200:
*uParam2=8351;
break;
case 201:
*uParam2=8946;
break;
case 202:
*uParam2=8947;
break;
case 203:
*uParam2=8948;
break;
case 204:
*uParam2=8949;
break;
case 205:
*uParam2=8950;
break;
case 206:
*uParam2=9449;
break;
case 207:
*uParam2=9450;
break;
case 208:
*uParam2=9451;
break;
case 209:
*uParam2=9452;
break;
case 210:
*uParam2=9453;
break;
case 211:
*uParam2=9454;
break;
case 212:
*uParam2=9455;
break;
case 213:
*uParam2=9456;
break;
case 214:
*uParam2=9457;
break;
case 215:
*uParam2=9458;
break;
case 216:
*uParam2=9459;
break;
case 217:
*uParam2=9460;
break;
case 218:
*uParam2=9461;
break;
case 219:
*uParam2=9462;
break;
case 220:
*uParam2=9463;
break;
case 221:
*uParam2=9464;
break;
case 222:
*uParam2=9465;
break;
case 223:
*uParam2=9466;
break;
case 224:
*uParam2=9467;
break;
case 225:
*uParam2=9468;
break;
case 226:
*uParam2=9469;
break;
case 227:
*uParam2=9470;
break;
case 228:
*uParam2=9471;
break;
case 229:
*uParam2=9472;
break;
case 230:
*uParam2=9473;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 231:
*uParam2=10323;
break;
case 232:
*uParam2=10324;
break;
case 233:
*uParam2=10325;
break;
case 234:
*uParam2=10326;
break;
case 235:
*uParam2=10327;
break;
case 236:
*uParam2=10328;
break;
case 237:
*uParam2=10329;
break;
case 238:
*uParam2=10330;
break;
case 239:
*uParam2=10331;
break;
case 240:
*uParam2=10332;
break;
case 241:
*uParam2=10333;
break;
case 242:
*uParam2=10334;
break;
case 243:
*uParam2=10335;
break;
case 244:
*uParam2=10336;
break;
case 245:
*uParam2=10337;
break;
case 246:
*uParam2=10338;
break;
case 247:
*uParam2=10339;
break;
case 248:
*uParam2=10340;
break;
case 249:
*uParam2=10341;
break;
case 250:
*uParam2=10342;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 251:
*uParam2=10429;
break;
case 252:
*uParam2=10430;
break;
case 253:
*uParam2=10431;
break;
case 254:
*uParam2=10432;
break;
case 255:
*uParam2=10433;
break;
case 256:
*uParam2=10434;
break;
case 257:
*uParam2=10435;
break;
case 258:
*uParam2=10436;
break;
case 259:
*uParam2=10437;
break;
case 260:
*uParam2=10438;
break;
case 261:
*uParam2=11855;
break;
case 262:
*uParam2=11856;
break;
case 263:
*uParam2=11857;
break;
case 264:
*uParam2=11858;
break;
case 265:
*uParam2=11859;
break;
case 266:
*uParam2=11860;
break;
case 267:
*uParam2=11861;
break;
case 268:
*uParam2=11862;
break;
case 269:
*uParam2=11863;
break;
case 270:
*uParam2=11864;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 271:
*uParam2=11888;
break;
case 272:
*uParam2=11889;
break;
case 273:
*uParam2=11890;
break;
case 274:
*uParam2=11891;
break;
case 275:
*uParam2=11892;
break;
case 276:
*uParam2=11893;
break;
case 277:
*uParam2=11894;
break;
case 278:
*uParam2=11895;
break;
case 279:
*uParam2=11896;
break;
case 280:
*uParam2=11897;
break;
case 281:
*uParam2=11898;
break;
case 282:
*uParam2=11899;
break;
}
break;
}
*uParam3=fmMaleShopPedApparelItemIndex % 32;
return *uParam2 !=14192;
}
BOOL func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x8540{
if(iParam0==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
}elseif(iParam0==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
}elseif(iParam0==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
}elseif(iParam0==3){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
}elseif(iParam2==4){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
}elseif(iParam2==5){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
}elseif(iParam2==6){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
}elseif(iParam2==7){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
}elseif(iParam2==8){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
}elseif(iParam2==9){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
}}elseif(iParam0==4){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
}}elseif(iParam0==5){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
}elseif(iParam0==6){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
}elseif(iParam2==4){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
}}elseif(iParam0==7){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
}elseif(iParam0==8){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
}}elseif(iParam0==9){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
}elseif(iParam0==10){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
}}elseif(iParam0==11){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
}}elseif(iParam0==12){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
}}elseif(iParam0==13){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
}elseif(iParam0==14){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
}elseif(iParam2==4){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
}elseif(iParam2==5){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
}}
return false;
}
BOOL func_75(int iParam0) // Position - 0x93E3{
if(!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)) return false;
if(iParam0==1){
if(!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)) return false;
if(!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 2)) return false;
}
return true;
}
BOOL func_76(Ped pedParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x942B{
int num;
num=func_35(hParam1);
if(num >=3 || num < 0) return false;
if(Global_113648.f_2365.f_539[num /*65*/].f_60 !=-99){
if(!func_150(pedParam0, Global_113648.f_2365.f_539[num /*65*/].f_61, Global_113648.f_2365.f_539[num /*65*/].f_60) || iParam3==1){
*uParam2=Global_113648.f_2365.f_539[num /*65*/].f_59;
Global_113648.f_2365.f_539[num /*65*/].f_60=-99;
Global_113648.f_2365.f_539[num /*65*/].f_61=2;
return true;
}}
return false;
}
ePedComponentType func_77(int iParam0) // Position - 0x94D6{
switch (iParam0){
case 0:
return 0;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 6:
return 6;
case 5:
return 5;
case 8:
return 8;
case 9:
return 9;
case 10:
return 10;
case 1:
return 1;
case 7:
return 7;
case 11:
return 11;
}
return 0;
}


struct<10> func_78(Hash hParam0, int iParam1) // Position - 0x9586{
int i;
var unk;
unk=9;
for (i=0;
i <=8;
i=i + 1){
unk[i]=-99;
}
switch (hParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 31:
func_80(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_80(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_80(&unk, 19, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_80(&unk, 14, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_80(&unk, 18, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_80(&unk, 0, 59, 112, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_80(&unk, 0, 60, 112, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_80(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_80(&unk, 0, 60, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_80(&unk, 55, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_80(&unk, 0, 1, 112, 3, 4, 5, 6, 7, 8);
break;
default:
func_79(&unk, hParam0, iParam1, 10);
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 31:
func_80(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_80(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_80(&unk, 0, 82, 158, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_80(&unk, 0, 1, 158, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_80(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_80(&unk, 41, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_80(&unk, 40, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_80(&unk, 41, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_80(&unk, 0, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_80(&unk, 69, 95, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_79(&unk, hParam0, iParam1, 9);
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 31:
func_80(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_80(&unk, 11, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_80(&unk, 17, 90, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_80(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_80(&unk, 0, 88, 154, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_80(&unk, 0, 1, 154, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_80(&unk, 16, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_80(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_80(&unk, 0, 123, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_80(&unk, 69, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_79(&unk, hParam0, iParam1, 9);
break;
}
break;
case joaat("MP_M_Freemode_01"):
switch (iParam1){
case 31:
func_80(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_80(&unk, 129, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_80(&unk, 90, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_80(&unk, 23, 251, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_80(&unk, 36, 262, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_80(&unk, 88, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_80(&unk, 125, 175, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_80(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_80(&unk, 44, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_80(&unk, 52, 189, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_80(&unk, 0, 261, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_80(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_80(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_80(&unk, 0, 212, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_80(&unk, 64, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 14:
func_80(&unk, 61, 207, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_80(&unk, 0, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_80(&unk, 0, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_80(&unk, 0, 229, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_80(&unk, 36, 249, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_80(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_80(&unk, 0, 174, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_80(&unk, 35, 180, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_80(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_80(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 24:
func_80(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_79(&unk, hParam0, iParam1, 25);
break;
}
break;
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 31:
func_80(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_80(&unk, 35, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_80(&unk, 36, 178, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_80(&unk, 53, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_80(&unk, 38, 170, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_80(&unk, 37, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_80(&unk, 113, 203, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_80(&unk, 114, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_80(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_80(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_80(&unk, 0, 199, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_80(&unk, 0, 182, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_80(&unk, 0, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_80(&unk, 107, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_80(&unk, 109, 170, 2, 3, 4, 5, 323, 7, 8);
break;
case 14:
func_80(&unk, 119, 237, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_80(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_80(&unk, 114, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_80(&unk, 35, 268, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_80(&unk, 0, 266, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_80(&unk, 42, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_80(&unk, 76, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_80(&unk, 39, 235, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_80(&unk, 41, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_80(&unk, 111, 194, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_79(&unk, hParam0, iParam1, 25);
break;
}
break;
}
return unk;
}


void func_79(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x9EB5{
int num;
Hash itemHash;
Hash outPropVariant;
int i;
if(iParam2 !=0 && iParam2 !=-99){
uParam0->[0]=0;
uParam0->[1]=1;
uParam0->[2]=2;
uParam0->[3]=3;
uParam0->[4]=4;
uParam0->[5]=5;
uParam0->[6]=6;
uParam0->[7]=7;
uParam0->[8]=8;
num=0;
if(hParam1==joaat("Player_Zero")) num=0;
elseif(hParam1==joaat("Player_One")) num=1;
elseif(hParam1==joaat("Player_Two")) num=2;
elseif(hParam1==joaat("MP_M_Freemode_01")) num=3;
elseif(hParam1==joaat("MP_F_Freemode_01")) num=4;
FILES::GET_SHOP_PED_OUTFIT(iParam2, &itemHash);
if(!FILES::IS_CONTENT_ITEM_LOCKED(itemHash)){
for (i=0;
i < itemHash.f_3;
i=i + 1){
if(FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(itemHash.f_1, i, &outPropVariant) && outPropVariant.f_2 !=-1)if(outPropVariant !=0 && outPropVariant !=-1 && outPropVariant !=joaat("0")) uParam0->[outPropVariant.f_2]=func_59(hParam1, outPropVariant, 14, num);
elseif(outPropVariant.f_1 !=-1) uParam0->[outPropVariant.f_2]=outPropVariant.f_1;
}}}
return;
}


void func_80(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x9FDF{
uParam0->[0]=iParam1;
uParam0->[1]=iParam2;
uParam0->[2]=iParam3;
uParam0->[3]=iParam4;
uParam0->[4]=iParam5;
uParam0->[5]=iParam6;
uParam0->[6]=iParam7;
uParam0->[7]=iParam8;
uParam0->[8]=iParam9;
return;
}
struct<17> func_81(Hash hParam0, int iParam1) // Position - 0xA027{
int i;
var unk;
unk=15;
for (i=0;
i <=14;
i=i + 1){
unk[i]=-99;
}
unk.f_16=0;
switch (hParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 0:
if(Global_113648.f_9087.f_99.f_58[120]) func_84(&unk, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
else func_84(&unk, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_84(&unk, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
break;
case 2:
func_84(&unk, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
break;
case 3:
func_84(&unk, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
break;
case 4:
func_84(&unk, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
break;
case 5:
func_84(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
break;
case 6:
func_84(&unk, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_84(&unk, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 8:
func_84(&unk, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_84(&unk, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_84(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
break;
case 11:
func_84(&unk, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
break;
case 12:
func_84(&unk, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_84(&unk, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_84(&unk, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
break;
case 15:
func_84(&unk, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
break;
case 16:
func_84(&unk, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_84(&unk, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_84(&unk, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
break;
case 19:
func_84(&unk, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_84(&unk, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_84(&unk, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_84(&unk, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_84(&unk, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_84(&unk, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_84(&unk, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_84(&unk, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_84(&unk, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_84(&unk, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_84(&unk, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_84(&unk, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_84(&unk, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
break;
case 32:
func_84(&unk, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_84(&unk, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_84(&unk, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
break;
case 35:
func_84(&unk, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_84(&unk, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_84(&unk, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_84(&unk, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_84(&unk, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_84(&unk, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_84(&unk, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_84(&unk, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_84(&unk, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_84(&unk, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_84(&unk, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 46:
func_84(&unk, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_84(&unk, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 48:
func_84(&unk, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
break;
case 49:
func_84(&unk, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 50:
func_84(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
break;
case 51:
func_84(&unk, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 52:
func_84(&unk, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
default:
func_82(&unk, hParam0, iParam1, 53);
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 0:
func_84(&unk, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_84(&unk, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 2:
func_84(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
break;
case 3:
func_84(&unk, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
break;
case 4:
func_84(&unk, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
break;
case 5:
func_84(&unk, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 6:
func_84(&unk, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_84(&unk, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
break;
case 8:
func_84(&unk, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
break;
case 9:
func_84(&unk, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_84(&unk, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_84(&unk, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 12:
func_84(&unk, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_84(&unk, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_84(&unk, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_84(&unk, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_84(&unk, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_84(&unk, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_84(&unk, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
break;
case 19:
func_84(&unk, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_84(&unk, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_84(&unk, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
break;
case 22:
func_84(&unk, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
break;
case 23:
func_84(&unk, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
break;
case 24:
func_84(&unk, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
break;
case 25:
func_84(&unk, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
break;
case 26:
func_84(&unk, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
break;
case 27:
func_84(&unk, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
break;
case 28:
func_84(&unk, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
break;
case 29:
func_84(&unk, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
break;
case 30:
func_84(&unk, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
break;
case 31:
func_84(&unk, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
break;
case 32:
func_84(&unk, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
break;
case 33:
func_84(&unk, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
break;
case 34:
func_84(&unk, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
break;
case 35:
func_84(&unk, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
break;
case 36:
func_84(&unk, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
break;
case 37:
func_84(&unk, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
break;
case 38:
func_84(&unk, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_84(&unk, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_84(&unk, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_84(&unk, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_84(&unk, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_84(&unk, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
break;
case 44:
func_84(&unk, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 45:
func_84(&unk, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
break;
case 46:
func_84(&unk, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
break;
default:
func_82(&unk, hParam0, iParam1, 47);
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 0:
func_84(&unk, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_84(&unk, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
break;
case 2:
func_84(&unk, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
break;
case 3:
func_84(&unk, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
break;
case 4:
func_84(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 5:
func_84(&unk, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
break;
case 6:
func_84(&unk, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
break;
case 7:
func_84(&unk, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
break;
case 8:
func_84(&unk, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_84(&unk, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_84(&unk, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_84(&unk, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
break;
case 12:
func_84(&unk, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_84(&unk, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_84(&unk, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_84(&unk, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_84(&unk, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_84(&unk, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_84(&unk, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 19:
func_84(&unk, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_84(&unk, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_84(&unk, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_84(&unk, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_84(&unk, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_84(&unk, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_84(&unk, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_84(&unk, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_84(&unk, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_84(&unk, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_84(&unk, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_84(&unk, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_84(&unk, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 32:
func_84(&unk, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_84(&unk, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_84(&unk, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 35:
func_84(&unk, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_84(&unk, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_84(&unk, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_84(&unk, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_84(&unk, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_84(&unk, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_84(&unk, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_84(&unk, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_84(&unk, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_84(&unk, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_84(&unk, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 46:
func_84(&unk, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_84(&unk, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
break;
default:
func_82(&unk, hParam0, iParam1, 48);
break;
}
break;
case joaat("MP_M_Freemode_01"):
switch (iParam1){
case 0:
func_84(&unk, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
break;
case 1:
func_84(&unk, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
break;
case 2:
func_84(&unk, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
break;
case 3:
func_84(&unk, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
break;
case 4:
func_84(&unk, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
break;
case 5:
func_84(&unk, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
break;
case 6:
func_84(&unk, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
break;
case 7:
func_84(&unk, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
break;
case 8:
func_84(&unk, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
break;
case 9:
func_84(&unk, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
break;
case 10:
func_84(&unk, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
break;
case 11:
func_84(&unk, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
break;
case 12:
func_84(&unk, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
break;
case 13:
func_84(&unk, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
break;
case 14:
func_84(&unk, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
break;
case 15:
func_84(&unk, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
break;
case 16:
func_84(&unk, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
break;
case 17:
func_84(&unk, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
break;
case 18:
func_84(&unk, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
break;
case 19:
func_84(&unk, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
break;
case 20:
func_84(&unk, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
break;
case 21:
func_84(&unk, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
break;
case 22:
func_84(&unk, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
break;
case 23:
func_84(&unk, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
break;
case 24:
func_84(&unk, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
break;
case 25:
func_84(&unk, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
break;
default:
func_82(&unk, hParam0, iParam1, 26);
break;
}
break;
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 0:
func_84(&unk, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
break;
case 1:
func_84(&unk, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
break;
case 2:
func_84(&unk, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
break;
case 3:
func_84(&unk, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
break;
case 4:
func_84(&unk, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
break;
case 5:
func_84(&unk, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
break;
case 6:
func_84(&unk, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
break;
case 7:
func_84(&unk, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
break;
case 8:
func_84(&unk, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
break;
case 9:
func_84(&unk, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
break;
case 10:
func_84(&unk, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
break;
case 11:
func_84(&unk, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
break;
case 12:
func_84(&unk, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
break;
case 13:
func_84(&unk, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
break;
case 14:
func_84(&unk, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
break;
case 15:
func_84(&unk, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
break;
case 16:
func_84(&unk, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
break;
case 17:
func_84(&unk, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
break;
case 18:
func_84(&unk, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
break;
case 19:
func_84(&unk, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
break;
case 20:
func_84(&unk, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
break;
case 21:
func_84(&unk, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
break;
case 22:
func_84(&unk, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
break;
case 23:
func_84(&unk, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
break;
case 24:
func_84(&unk, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
break;
case 25:
func_84(&unk, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
break;
case 26:
func_84(&unk, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
break;
case 27:
func_84(&unk, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
break;
default:
func_82(&unk, hParam0, iParam1, 28);
break;
}
break;
}
return unk;
}


void func_82(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xBE6F{
int num;
Hash itemHash;
Hash outComponentVariant;
var outComponent;
int i;
uParam0->[0]=0;
uParam0->[2]=-99;
uParam0->[3]=0;
uParam0->[4]=0;
uParam0->[6]=0;
uParam0->[5]=0;
uParam0->[8]=0;
uParam0->[9]=0;
uParam0->[10]=0;
uParam0->[1]=0;
uParam0->[7]=0;
uParam0->[11]=0;
uParam0->[13]=-99;
uParam0->[14]=-99;
uParam0->f_16=0;
num=0;
if(hParam1==joaat("Player_Zero")){
num=0;
uParam0->[13]=10 + (iParam2 - iParam3);
}elseif(hParam1==joaat("Player_One")){
num=1;
uParam0->[13]=9 + (iParam2 - iParam3);
}elseif(hParam1==joaat("Player_Two")){
num=2;
uParam0->[13]=9 + (iParam2 - iParam3);
}elseif(hParam1==joaat("MP_M_Freemode_01")){
num=3;
}elseif(hParam1==joaat("MP_F_Freemode_01")){
num=4;
}
FILES::SETUP_SHOP_PED_OUTFIT_QUERY(num, false);
PED::APPLY_PED_BLOOD_BY_ZONE(iParam2 - iParam3, &itemHash);
if(!FILES::IS_CONTENT_ITEM_LOCKED(itemHash)){
for (i=0;
i < itemHash.f_4;
i=i + 1){
if(FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(itemHash.f_1, i, &outComponentVariant)){
if(outComponentVariant !=0 && outComponentVariant !=-1 && outComponentVariant !=joaat("0")){
if(outComponentVariant.f_2==10){
FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
FILES::GET_SHOP_PED_COMPONENT(outComponentVariant, &outComponent);
if(outComponentVariant !=outComponent.f_1) uParam0->f_16=1;
}
if(outComponentVariant.f_2==10 && uParam0->f_16){
uParam0->[func_83(outComponentVariant.f_2)]=outComponentVariant;
uParam0->f_16=1;
}else{
uParam0->[func_83(outComponentVariant.f_2)]=func_59(hParam1, outComponentVariant, func_83(outComponentVariant.f_2), num);
}}elseif(outComponentVariant.f_1 !=-1){
uParam0->[func_83(outComponentVariant.f_2)]=outComponentVariant.f_1;
}}}
if(itemHash.f_3==0) uParam0->[13]=-99;
else uParam0->[13]=itemHash.f_1;
}
return;
}

int func_83(int iParam0) // Position - 0xC05B{
switch (iParam0){
case 0:
return 0;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 6:
return 6;
case 5:
return 5;
case 8:
return 8;
case 9:
return 9;
case 10:
return 10;
case 1:
return 1;
case 7:
return 7;
case 11:
return 11;
}
return 0;
}


void func_84(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0xC10B{
uParam0->[0]=iParam1;
uParam0->[2]=iParam2;
uParam0->[3]=iParam3;
uParam0->[4]=iParam4;
uParam0->[6]=iParam5;
uParam0->[5]=iParam6;
uParam0->[8]=iParam7;
uParam0->[9]=iParam8;
uParam0->[10]=iParam9;
uParam0->[1]=iParam10;
uParam0->[7]=iParam11;
uParam0->[11]=iParam12;
uParam0->[13]=iParam13;
uParam0->[14]=-99;
return;
}
struct<14> func_85(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0xC17C{
func_149();
if(hParam0==joaat("Player_Zero")) func_131(iParam1, iParam2);
elseif(hParam0==joaat("Player_One")) func_112(iParam1, iParam2);
elseif(hParam0==joaat("Player_Two")) func_86(iParam1, iParam2);
return Global_78341[0 /*14*/];
}


void func_86(int iParam0, int iParam1) // Position - 0xC1CE{
switch (iParam0){
case 0:
func_111(iParam1);
break;
case 2:
func_110(iParam1);
break;
case 3:
func_107(iParam1);
break;
case 4:
func_106(iParam1);
break;
case 6:
func_105(iParam1);
break;
case 5:
func_104(iParam1);
break;
case 8:
func_103(iParam1);
break;
case 9:
func_102(iParam1);
break;
case 10:
func_101(iParam1);
break;
case 1:
func_100(iParam1);
break;
case 7:
func_99(iParam1);
break;
case 11:
func_98(iParam1);
break;
case 12:
func_97(iParam1);
break;
case 13:
func_96(iParam1);
break;
case 14:
func_87(iParam1);
break;
}
return;
}


void func_87(int iParam0) // Position - 0xC2BE{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=14;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=8;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=2;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=10;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E1" /*Specs Pest Shades*/, 16);
num2=1;
num3=0;
num=45;
num4=10;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2" /*Dix Charcoal Glasses*/, 16);
num2=2;
num3=0;
num4=10;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_1" /*Dix Brown Glasses*/, 16);
num2=2;
num3=1;
num=50;
num4=10;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_2" /*Dix Black Glasses*/, 16);
num2=2;
num3=2;
num=55;
num4=10;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_3" /*Dix Checked Glasses*/, 16);
num2=2;
num3=3;
num=52;
num4=10;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_4" /*Dix White Glasses*/, 16);
num2=2;
num3=4;
num=54;
num4=10;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_5" /*Dix Red Glasses*/, 16);
num2=2;
num3=5;
num=54;
num4=10;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_6" /*Dix Maroon Glasses*/, 16);
num2=2;
num3=6;
num=55;
num4=10;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_7" /*Dix Yellow Glasses*/, 16);
num2=2;
num3=7;
num=55;
num4=10;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_8" /*Dix Spring Glasses*/, 16);
num2=2;
num3=8;
num=58;
num4=10;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_9" /*Dix Fall Glasses*/, 16);
num2=2;
num3=9;
num=58;
num4=10;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3" /*Tung Charcoal Shades*/, 16);
num2=3;
num3=0;
num=75;
num4=10;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_1" /*Tung White Shades*/, 16);
num2=3;
num3=1;
num=75;
num4=10;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_2" /*Tung Ash Shades*/, 16);
num2=3;
num3=2;
num=75;
num4=10;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_3" /*Tung Red Shades*/, 16);
num2=3;
num3=3;
num=75;
num4=10;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_4" /*Tung Blue Shades*/, 16);
num2=3;
num3=4;
num=75;
num4=10;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_5" /*Tung Black Shades*/, 16);
num2=3;
num3=5;
num=75;
num4=10;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_6" /*Tung Orange Tint Shades*/, 16);
num2=3;
num3=6;
num=75;
num4=10;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_7" /*Tung Purple Tint Shades*/, 16);
num2=3;
num3=7;
num=75;
num4=10;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_8" /*Tung Hornet Shades*/, 16);
num2=3;
num3=8;
num=75;
num4=10;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_9" /*Tung Two-Tone Shades*/, 16);
num2=3;
num3=9;
num=75;
num4=10;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
num4=10;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
num4=10;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
num4=10;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_0" /*OG Black Shades*/, 16);
num2=7;
num3=0;
num=60;
num4=10;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_1" /*OG Ash Shades*/, 16);
num2=7;
num3=1;
num=50;
num4=10;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_2" /*OG Red Shades*/, 16);
num2=7;
num3=2;
num=50;
num4=10;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_3" /*OG Yellow Shades*/, 16);
num2=7;
num3=3;
num=59;
num4=10;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_4" /*OG Brown Shades*/, 16);
num2=7;
num3=4;
num=55;
num4=10;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_5" /*OG Gray Shades*/, 16);
num2=7;
num3=5;
num=55;
num4=10;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_6" /*OG Blue Shades*/, 16);
num2=7;
num3=6;
num=65;
num4=10;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_7" /*OG Smoke Shades*/, 16);
num2=7;
num3=7;
num=59;
num4=10;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_8" /*OG Orange Shades*/, 16);
num2=7;
num3=8;
num=79;
num4=10;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_9" /*OG Slate Shades*/, 16);
num2=7;
num3=9;
num=79;
num4=10;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_0" /*Steel Aviators*/, 16);
num2=8;
num3=0;
num=150;
num4=10;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_1" /*Slate Aviators*/, 16);
num2=8;
num3=1;
num=150;
num4=10;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_2" /*Gold Aviators*/, 16);
num2=8;
num3=2;
num=170;
num4=10;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_3" /*Silver Two-Tone Aviators*/, 16);
num2=8;
num3=3;
num=175;
num4=10;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_4" /*Aluminum Aviators*/, 16);
num2=8;
num3=4;
num=180;
num4=10;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_5" /*Bronze Two-Tone Aviators*/, 16);
num2=8;
num3=5;
num=185;
num4=10;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_6" /*Brown Two-Tone Aviators*/, 16);
num2=8;
num3=6;
num=189;
num4=10;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_7" /*Black Aviators*/, 16);
num2=8;
num3=7;
num=195;
num4=10;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_8" /*Silver Aviators*/, 16);
num2=8;
num3=8;
num=210;
num4=10;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_9" /*Smoke Aviators*/, 16);
num2=8;
num3=9;
num=215;
num4=10;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_0" /*Krepp Gold Shades*/, 16);
num2=9;
num3=0;
num=165;
num4=10;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_1" /*Krepp Gray Shades*/, 16);
num2=9;
num3=1;
num=165;
num4=10;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_2" /*Krepp Slate Shades*/, 16);
num2=9;
num3=2;
num=169;
num4=10;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_3" /*Krepp Black Shades*/, 16);
num2=9;
num3=3;
num=169;
num4=10;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_4" /*Krepp White Shades*/, 16);
num2=9;
num3=4;
num=175;
num4=10;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_5" /*Krepp Silver Shades*/, 16);
num2=9;
num3=5;
num=175;
num4=10;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_6" /*Krepp Ash Shades*/, 16);
num2=9;
num3=6;
num=175;
num4=10;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_7" /*Krepp Brown Shades*/, 16);
num2=9;
num3=7;
num=189;
num4=10;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_8" /*Krepp Beige Shades*/, 16);
num2=9;
num3=8;
num=195;
num4=10;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_9" /*Krepp Coffee Shades*/, 16);
num2=9;
num3=9;
num=195;
num4=10;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_0" /*Broker Black Shades*/, 16);
num2=10;
num3=0;
num=49;
num4=10;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_1" /*Broker Purple Shades*/, 16);
num2=10;
num3=1;
num=50;
num4=10;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_2" /*Broker Brown Shades*/, 16);
num2=10;
num3=2;
num=52;
num4=10;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_3" /*Broker Orange Shades*/, 16);
num2=10;
num3=3;
num=55;
num4=10;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_4" /*Broker Gray Shades*/, 16);
num2=10;
num3=4;
num=60;
num4=10;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_5" /*Broker Striped Shades*/, 16);
num2=10;
num3=5;
num=58;
num4=10;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_6" /*Broker Beige Shades*/, 16);
num2=10;
num3=6;
num=60;
num4=10;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_7" /*Broker Ash Shades*/, 16);
num2=10;
num3=7;
num=63;
num4=10;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_8" /*Broker Charcoal Shades*/, 16);
num2=10;
num3=8;
num=65;
num4=10;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_9" /*Broker Gradient Shades*/, 16);
num2=10;
num3=9;
num=68;
num4=10;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
num=100;
num4=10;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
num4=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H2_0" /*Hockey Mask*/, 16);
num2=2;
num3=0;
num=320;
num4=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
num4=0;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
num4=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
num4=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
num4=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H7_0" /*Black Hat*/, 16);
num2=7;
num3=0;
num4=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H7_1", 16);
num2=7;
num3=1;
num4=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
num4=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
num4=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=1;
num4=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=2;
num4=0;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=3;
num4=0;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=4;
num4=0;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=5;
num4=0;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=6;
num4=0;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=7;
num4=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=8;
num4=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=9;
num4=0;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=10;
num4=0;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=11;
num4=0;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=12;
num4=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=13;
num4=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=14;
num4=0;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=15;
num4=0;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
num4=0;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
num4=0;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=1;
num4=0;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=2;
num4=0;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=3;
num4=0;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=4;
num4=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=5;
num4=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=6;
num4=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=7;
num4=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
num4=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
num4=0;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
num2=14;
num3=0;
num=270;
num4=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
num2=14;
num3=1;
num=270;
num4=0;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
num2=15;
num3=0;
num=200;
num4=0;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
num2=15;
num3=1;
num=200;
num4=0;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
num2=16;
num3=0;
num=350;
num4=0;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
num2=16;
num3=1;
num=350;
num4=0;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
num2=17;
num3=0;
num=450;
num4=0;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
num2=18;
num3=0;
num=500;
num4=0;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
num2=18;
num3=1;
num=500;
num4=0;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
num2=19;
num3=0;
num=50;
num4=0;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
num2=19;
num3=1;
num=50;
num4=0;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
num2=20;
num3=0;
num=99;
num4=0;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
num2=20;
num3=1;
num=99;
num4=0;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
num2=20;
num3=2;
num=99;
num4=0;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=21;
num3=0;
num4=0;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=22;
num3=0;
num4=0;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=0;
num4=0;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=1;
num4=0;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=2;
num4=0;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=3;
num4=0;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=4;
num4=0;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=5;
num4=0;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=24;
num3=0;
num4=0;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=25;
num3=0;
num4=0;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_0" /*Hawk and Little Baseball Cap*/, 16);
num2=26;
num3=0;
num=20;
num4=0;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_1" /*Taco Bomb Baseball Cap*/, 16);
num2=26;
num3=1;
num=25;
num4=0;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_2" /*Nut House Baseball Cap*/, 16);
num2=26;
num3=2;
num=25;
num4=0;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_3" /*Rusty Brown's Baseball Cap*/, 16);
num2=26;
num3=3;
num=22;
num4=0;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_4" /*Bishop's Chicken Baseball Cap*/, 16);
num2=26;
num3=4;
num=20;
num4=0;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_5" /*24/7 Baseball Cap*/, 16);
num2=26;
num3=5;
num=25;
num4=0;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_6" /*iFruit 80s Baseball Cap*/, 16);
num2=26;
num3=6;
num=28;
num4=0;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_7" /*Blarneys Baseball Cap*/, 16);
num2=26;
num3=7;
num=24;
num4=0;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_8" /*Pisswasser Baseball Cap*/, 16);
num2=26;
num3=8;
num=25;
num4=0;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_9" /*RON Baseball Cap*/, 16);
num2=26;
num3=9;
num=22;
num4=0;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_10" /*Logger Light Baseball Cap*/, 16);
num2=26;
num3=10;
num=18;
num4=0;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_11" /*Meteorite Baseball Cap*/, 16);
num2=26;
num3=11;
num=20;
num4=0;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_12" /*Dusche Gold Baseball Cap*/, 16);
num2=26;
num3=12;
num=24;
num4=0;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_13" /*Barracho Baseball Cap*/, 16);
num2=26;
num3=13;
num=22;
num4=0;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_14" /*Vespucci Beach Baseball Cap*/, 16);
num2=26;
num3=14;
num=25;
num4=0;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_15" /*Orang-O-Tang Baseball Cap*/, 16);
num2=26;
num3=15;
num=25;
num4=0;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=27;
num3=0;
num4=0;
break;
default:
func_95(num6, iParam0, 155, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_88(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0xD4F8{
int num;
eMPStat stat;
iParam0->f_6=0;
*iParam0=iParam9;
iParam0->f_1=iParam2 % 32;
iParam0->f_2=iParam2 / 32;
iParam0->f_3=iParam4;
iParam0->f_4=iParam5;
iParam0->f_7=iParam6;
TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_8), sParam3, 16);
iParam0->f_13=iParam8;
iParam0->f_12=func_94(iParam8);
if(iParam0->f_2 >=10 && iParam0->f_5 >=0 && iParam0->f_5 < 3){
!bParam10;
iParam0->f_2=0;
}
MISC::GET_HASH_KEY(sParam3) !=MISC::GET_HASH_KEY("NO_LABEL");
if(bParam7) MISC::SET_BIT(&(iParam0->f_6), 3);
if(bParam10){
MISC::SET_BIT(&(iParam0->f_6), 0);
if(iParam0->f_5 >=0 && iParam0->f_5 < 3) MISC::SET_BIT(&(iParam0->f_6), 5);
MISC::SET_BIT(&(iParam0->f_6), 1);
MISC::SET_BIT(&(iParam0->f_6), 2);
MISC::SET_BIT(&(iParam0->f_6), 6);
if(func_93(14)) return;
if(iParam1==1)if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0)) MISC::SET_BIT(&(iParam0->f_6), 7);
if(iParam1==12){
if(!func_92(Global_2883588, 1, true, true, -1)) MISC::CLEAR_BIT(&(iParam0->f_6), 2);
if(!func_92(Global_2883588, 2, true, true, -1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_92(Global_2883588, 1, true, true, -1)) MISC::CLEAR_BIT(&(iParam0->f_6), 2);
if(!func_92(Global_2883588, 2, true, true, -1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}else{
if(!func_92(Global_2883588, 1, true, true, -1)) MISC::CLEAR_BIT(&(iParam0->f_6), 2);
if(!func_92(Global_2883588, 2, true, true, -1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(iParam0->f_6), 1);
MISC::CLEAR_BIT(&(iParam0->f_6), 0);
}}elseif(iParam0->f_5 >=0 && iParam0->f_5 < 3){
MISC::SET_BIT(&(iParam0->f_6), 0);
MISC::SET_BIT(&(iParam0->f_6), 5);
if(func_74(iParam1, iParam0->f_5, iParam0->f_2, 0, iParam0->f_1, 0, 0)) MISC::SET_BIT(&(iParam0->f_6), 1);
if(func_74(iParam1, iParam0->f_5, iParam0->f_2, 1, iParam0->f_1, 0, 0)) MISC::SET_BIT(&(iParam0->f_6), 2);
if(!func_74(iParam1, iParam0->f_5, iParam0->f_2, 2, iParam0->f_1, 0, 0)) MISC::SET_BIT(&(iParam0->f_6), 4);
}else{
MISC::SET_BIT(&(iParam0->f_6), 0);
if(iParam1==11 || iParam1==4 || iParam1==6 || iParam1==1 || iParam1==14 || iParam1==2 || iParam1==8 || iParam1==9 || iParam1==10 || iParam1==7 || iParam1==12){
if(func_93(14)) return;
num=_MPCHAR_STAT_GET_INT(func_91(iParam1, iParam0->f_2), Global_78338, 0);
if(IS_BIT_SET(num, iParam0->f_1)) MISC::SET_BIT(&(iParam0->f_6), 1);
num=_MPCHAR_STAT_GET_INT(func_90(iParam1, iParam0->f_2), Global_78338, 0);
if(IS_BIT_SET(num, iParam0->f_1)) MISC::SET_BIT(&(iParam0->f_6), 2);
if(func_89(iParam1, iParam0->f_2, &stat)){
num=_MPCHAR_STAT_GET_INT(stat, Global_78338, 0);
if(!IS_BIT_SET(num, iParam0->f_1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(iParam0->f_6), 1);
MISC::SET_BIT(&(iParam0->f_6), 2);
}}
if(iParam1==14){
if(iParam4==-1){
MISC::SET_BIT(&(iParam0->f_6), 1);
MISC::SET_BIT(&(iParam0->f_6), 2);
}}
return;
}
BOOL func_89(int iParam0, int iParam1, var uParam2) // Position - 0xD89C{
*uParam2=979;
switch (iParam1){
case 0:
switch (iParam0){
case 2:
*uParam2=980;
break;
case 3:
*uParam2=1430;
break;
case 4:
*uParam2=996;
break;
case 6:
*uParam2=1004;
break;
case 8:
*uParam2=1431;
break;
case 9:
*uParam2=1439;
break;
case 10:
*uParam2=1441;
break;
case 1:
*uParam2=1012;
break;
case 7:
*uParam2=1442;
break;
case 11:
*uParam2=988;
break;
case 14:
*uParam2=1020;
break;
case 12:
*uParam2=1031;
break;
}
break;
case 1:
switch (iParam0){
case 2:
*uParam2=981;
break;
case 4:
*uParam2=997;
break;
case 6:
*uParam2=1005;
break;
case 8:
*uParam2=1432;
break;
case 9:
*uParam2=1440;
break;
case 7:
*uParam2=1443;
break;
case 11:
*uParam2=989;
break;
case 14:
*uParam2=1021;
break;
}
break;
case 2:
switch (iParam0){
case 2:
*uParam2=982;
break;
case 4:
*uParam2=998;
break;
case 6:
*uParam2=1006;
break;
case 8:
*uParam2=1433;
break;
case 7:
*uParam2=1444;
break;
case 11:
*uParam2=990;
break;
case 14:
*uParam2=1022;
break;
}
break;
case 3:
switch (iParam0){
case 4:
*uParam2=999;
break;
case 6:
*uParam2=1007;
break;
case 8:
*uParam2=1434;
break;
case 11:
*uParam2=991;
break;
case 14:
*uParam2=1023;
break;
}
break;
case 4:
switch (iParam0){
case 4:
*uParam2=1000;
break;
case 6:
*uParam2=1008;
break;
case 8:
*uParam2=1435;
break;
case 11:
*uParam2=992;
break;
case 14:
*uParam2=1024;
break;
}
break;
case 5:
switch (iParam0){
case 4:
*uParam2=1001;
break;
case 6:
*uParam2=1009;
break;
case 8:
*uParam2=1436;
break;
case 11:
*uParam2=993;
break;
case 14:
*uParam2=1025;
break;
}
break;
case 6:
switch (iParam0){
case 4:
*uParam2=1002;
break;
case 6:
*uParam2=1010;
break;
case 8:
*uParam2=1437;
break;
case 11:
*uParam2=994;
break;
case 14:
*uParam2=1026;
break;
}
break;
case 7:
switch (iParam0){
case 4:
*uParam2=1003;
break;
case 6:
*uParam2=1011;
break;
case 8:
*uParam2=1438;
break;
case 11:
*uParam2=995;
break;
case 14:
*uParam2=1027;
break;
}
break;
case 8:
switch (iParam0){
case 14:
*uParam2=1028;
break;
}
break;
case 9:
switch (iParam0){
case 14:
*uParam2=1029;
break;
}
break;
case 10:
switch (iParam0){
case 14:
*uParam2=1030;
break;
}
break;
}
return *uParam2 !=979;
}
eMPStat func_90(int iParam0, int iParam1) // Position - 0xDCA1{
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_ACQUIRED_HAIR;
case 3:
return MP_STAT_CLTHS_ACQUIRED_TORSO;
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL;
case 9:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL2;
case 10:
return MP_STAT_CLTHS_ACQUIRED_DECL;
case 1:
return MP_STAT_CLTHS_ACQUIRED_BERD;
case 7:
return MP_STAT_CLTHS_ACQUIRED_TEETH;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS;
case 12:
return MP_STAT_CLTHS_ACQUIRED_OUTFIT;
}
break;
case 1:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_ACQUIRED_HAIR_1;
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_1;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_1;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_1;
case 9:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL2_1;
case 7:
return MP_STAT_CLTHS_ACQUIRED_TEETH_1;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_1;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_1;
}
break;
case 2:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_ACQUIRED_HAIR_2;
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_2;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_2;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_2;
case 7:
return MP_STAT_CLTHS_ACQUIRED_TEETH_2;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_2;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_2;
}
break;
case 3:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_3;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_3;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_3;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_3;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_3;
}
break;
case 4:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_4;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_4;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_4;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_4;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_4;
}
break;
case 5:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_5;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_5;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_5;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_5;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_5;
}
break;
case 6:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_6;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_6;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_6;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_6;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_6;
}
break;
case 7:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_7;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_7;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_7;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_7;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_7;
}
break;
case 8:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_8;
}
break;
case 9:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_9;
}
break;
case 10:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_10;
}
break;
}
return MP_STAT_CLTHS_ACQUIRED_JBIB;
}
eMPStat func_91(int iParam0, int iParam1) // Position - 0xE09C{
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_AVAILABLE_HAIR;
case 3:
return MP_STAT_CLTHS_AVAILABLE_TORSO;
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL;
case 9:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL2;
case 10:
return MP_STAT_CLTHS_AVAILABLE_DECL;
case 1:
return MP_STAT_CLTHS_AVAILABLE_BERD;
case 7:
return MP_STAT_CLTHS_AVAILABLE_TEETH;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS;
case 12:
return MP_STAT_CLTHS_AVAILABLE_OUTFIT;
}
break;
case 1:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_AVAILABLE_HAIR_1;
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_1;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_1;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_1;
case 9:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL2_1;
case 7:
return MP_STAT_CLTHS_AVAILABLE_TEETH_1;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_1;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_1;
}
break;
case 2:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_AVAILABLE_HAIR_2;
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_2;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_2;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_2;
case 7:
return MP_STAT_CLTHS_AVAILABLE_TEETH_2;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_2;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_2;
}
break;
case 3:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_3;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_3;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_3;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_3;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_3;
}
break;
case 4:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_4;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_4;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_4;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_4;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_4;
}
break;
case 5:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_5;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_5;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_5;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_5;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_5;
}
break;
case 6:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_6;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_6;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_6;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_6;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_6;
}
break;
case 7:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_7;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_7;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_7;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_7;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_7;
}
break;
case 8:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_8;
}
break;
case 9:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_9;
}
break;
case 10:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_10;
}
break;
}
return MP_STAT_CLTHS_AVAILABLE_JBIB;
}
BOOL func_92(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0xE497{
int num;
int num2;
eMPStat stat;
int num3;
num=Global_78338;
if(iParam4 !=-1) num=iParam4;
if(func_73(hParam0, iParam1, &stat, &num2, bParam2, bParam3)){
num3=_MPCHAR_STAT_GET_INT(stat, num, 0);
return IS_BIT_SET(num3, num2);
}
return false;
}
BOOL func_93(int iParam0) // Position - 0xE4D6{
return Global_43257==iParam0;
}

int func_94(int iParam0) // Position - 0xE4E4{
switch (iParam0){
case -1:
return 0;
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 5:
return 5;
case 6:
return 6;
case 7:
return 7;
case 8:
return 8;
case 9:
return 0;
case 10:
return 1;
case 11:
return 0;
case 12:
return 0;
case 13:
return 0;
}
return 0;
}


void func_95(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0xE5B8{
int num;
int num2;
Hash hash;
Ped ped;
Ped ped2;
Hash outProp;
int num3;
int componentId;
int num4;
Hash outComponent;
int componentId2;
int num5;
num=iParam1 - iParam2;
num=num;
if(num < 0) return;
num2=Global_78341[0 /*14*/].f_5;
if(iParam0==12){
ped=iParam1 - iParam2;
if(ped >=0){
ped2=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(num2, false);
if(ped2 > ped){
PED::APPLY_PED_BLOOD_BY_ZONE(ped, &hash);
Global_2883588=hash.f_1;
Global_2883589=hash;
func_88(&Global_78341[0 /*14*/], iParam0, iParam1, &(hash.f_7), 0, 0, hash.f_2, false, -1, 2, true);
return;
}}}elseif(iParam0==13){
func_88(&Global_78341[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, true, -1, 2, true);
}elseif(iParam0==14){
FILES::INIT_SHOP_PED_PROP(&outProp);
componentId=iParam1 - iParam2;
if(componentId >=0){
num4=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, true, -1, -1);
if(num4 > componentId){
FILES::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
if(outProp.f_6==0) num3=9;
elseif(outProp.f_6==1) num3=10;
elseif(outProp.f_6==2) num3=2;
elseif(outProp.f_6==3) num3=3;
elseif(outProp.f_6==4) num3=4;
elseif(outProp.f_6==5) num3=5;
elseif(outProp.f_6==6) num3=6;
elseif(outProp.f_6==7) num3=7;
elseif(outProp.f_6==8) num3=8;
else num3=-1;
Global_2883588=outProp.f_1;
Global_2883589=outProp;
func_88(&Global_78341[0 /*14*/], iParam0, iParam1, &(outProp.f_9), outProp.f_3, outProp.f_4, outProp.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outProp.f_1, joaat("OUTFIT_ONLY"), 0), num3, 2, outProp.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
if(hParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(hParam3, &outComponent);
Global_2883588=outComponent.f_1;
Global_2883589=outComponent;
func_88(&Global_78341[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 !=0);
return;
}
componentId2=iParam1 - iParam2;
if(componentId2 >=0){
num5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, false, -1, func_77(iParam0));
if(num5 > componentId2){
FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
Global_2883588=outComponent.f_1;
Global_2883589=outComponent;
func_88(&Global_78341[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 !=0);
return;
}}}
return;
}


void func_96(int iParam0) // Position - 0xE83E{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=13;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
default:
func_95(num6, iParam0, 9, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_97(int iParam0) // Position - 0xE98B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=12;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_0" /*White T-Shirt, Sweatpants*/, 16);
num2=0;
num3=0;
flag=true;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_5" /*Dock Worker*/, 16);
num2=0;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_6" /*Highway Patrol*/, 16);
num2=0;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_7" /*Golf*/, 16);
num2=0;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_8" /*Tennis*/, 16);
num2=0;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_9", 16);
num2=0;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_10" /*Scuba Land*/, 16);
num2=0;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_12" /*Stealth*/, 16);
num2=0;
num3=0;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_13" /*Triathlon*/, 16);
num2=0;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_14" /*Underwear*/, 16);
num2=0;
num3=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_15" /*Security*/, 16);
num2=0;
num3=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_16" /*Toilet*/, 16);
num2=0;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_17" /*Prologue*/, 16);
num2=0;
num3=0;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_18" /*Tuxedo*/, 16);
num2=0;
num3=0;
num=10000;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_19" /*Pink Ladies Sweats*/, 16);
num2=0;
num3=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_20" /*Blue Boiler Suit*/, 16);
num2=0;
num3=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_21" /*Navy Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_22" /*Gray Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_23" /*Green Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_24" /*Hunting*/, 16);
num2=0;
num3=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_25" /*White T-Shirt, Cargo Pants*/, 16);
num2=0;
num3=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_26" /*Denim Jacket, Jeans*/, 16);
num2=0;
num3=0;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_27" /*Ludendorff*/, 16);
num2=0;
num3=0;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_28" /*Beige Suit*/, 16);
num2=0;
num3=0;
num=119;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_29" /*Blue Suit*/, 16);
num2=0;
num3=0;
num=99;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_30" /*Brown Plaid Suit*/, 16);
num2=0;
num3=0;
num=129;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_44" /*Burgundy Cheap Suit*/, 16);
num2=0;
num3=0;
num=125;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_45" /*Murky Plaid Cheap Suit*/, 16);
num2=0;
num3=0;
num=120;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_46" /*Mint Plaid Cheap Suit*/, 16);
num2=0;
num3=0;
num=139;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_47" /*Green Plaid Cheap Suit*/, 16);
num2=0;
num3=0;
num=149;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_48" /*Blue-Gray Cheap Suit*/, 16);
num2=0;
num3=0;
num=145;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_49" /*Caramel Cheap Suit*/, 16);
num2=0;
num3=0;
num=140;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_50" /*Mocha Cheap Suit*/, 16);
num2=0;
num3=0;
num=135;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_31" /*Gray Suit*/, 16);
num2=0;
num3=0;
num=4900;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_32" /*Sand Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_33" /*Charcoal Suit*/, 16);
num2=0;
num3=0;
num=4500;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_34" /*Off-White Suit*/, 16);
num2=0;
num3=0;
num=4900;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_35" /*Cream Suit*/, 16);
num2=0;
num3=0;
num=4500;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_36" /*Black Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_37" /*Ash Suit*/, 16);
num2=0;
num3=0;
num=5500;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_38" /*Red T-Shirt, Cargo Pants*/, 16);
num2=0;
num3=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_39" /*Amethyst Polo Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_40" /*White T-Shirt, Camo Pants*/, 16);
num2=0;
num3=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_41" /*Moto-X*/, 16);
num2=0;
num3=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_42" /*White Tank Top, Sweatpants*/, 16);
num2=0;
num3=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_43" /*White T-Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_12" /*Stealth*/, 16);
num2=0;
num3=0;
break;
default:
func_95(num6, iParam0, 48, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_98(int iParam0) // Position - 0xEE98{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=11;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_95(num6, iParam0, 1, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_99(int iParam0) // Position - 0xEF0C{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=7;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_95(num6, iParam0, 1, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_100(int iParam0) // Position - 0xEF7F{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=1;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_0_0" /*Clean Shave*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_1_0" /*Beard 1*/, 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_2_0" /*Stubble*/, 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_3_0" /*Big Mustache*/, 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_4_0" /*Handlebar*/, 16);
num2=4;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_5_0" /*The Gerry*/, 16);
num2=5;
num3=0;
break;
default:
func_95(num6, iParam0, 6, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_101(int iParam0) // Position - 0xF066{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=10;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=1;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=2;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=3;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=4;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=5;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=1;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=2;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=3;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=4;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=5;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=6;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=7;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=8;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=9;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=1;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=2;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=3;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=4;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=5;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=6;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=1;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=2;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=3;
break;
default:
func_95(num6, iParam0, 33, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_102(int iParam0) // Position - 0xF3A8{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=9;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=1;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=2;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=3;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
num2=6;
num3=0;
num=125;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
num2=6;
num3=1;
num=150;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
num2=6;
num3=2;
num=175;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
num2=6;
num3=3;
num=85;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
num2=6;
num3=4;
num=150;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
num2=6;
num3=5;
num=175;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
num2=7;
num3=0;
num=270;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
num2=7;
num3=1;
num=270;
break;
default:
func_95(num6, iParam0, 17, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_103(int iParam0) // Position - 0xF5B0{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=8;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P2_0_0" /*Black Digital Watch*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P2_0_1" /*White Digital Watch*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=16;
num3=0;
flag=true;
break;
default:
func_95(num6, iParam0, 18, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_104(int iParam0) // Position - 0xF7D0{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=5;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=1;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
default:
func_95(num6, iParam0, 7, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_105(int iParam0) // Position - 0xF8D9{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=6;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_0" /*Black Chukka Boots*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_1" /*Snakeskin Chukka Boots*/, 16);
num2=0;
num3=1;
num=22;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_2" /*Gray Chukka Boots*/, 16);
num2=0;
num3=2;
num=45;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_3" /*Brown Chukka Boots*/, 16);
num2=0;
num3=3;
num=65;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_4" /*Crocodile Skin Boots*/, 16);
num2=0;
num3=4;
num=58;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_5" /*Cowboy Boots*/, 16);
num2=0;
num3=5;
num=72;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_6" /*Yellow Reptile Skin Boots*/, 16);
num2=0;
num3=6;
num=68;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_7" /*Reptile Skin Boots*/, 16);
num2=0;
num3=7;
num=60;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_5_0" /*Work Boots*/, 16);
num2=5;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_8_0" /*Dressy Shoes*/, 16);
num2=8;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_0" /*Black Leather Loafers*/, 16);
num2=9;
num3=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_1" /*Gray Leather Loafers*/, 16);
num2=9;
num3=1;
num=680;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_2" /*Cream Leather Loafers*/, 16);
num2=9;
num3=2;
num=650;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_3" /*Brown Leather Loafers*/, 16);
num2=9;
num3=3;
num=670;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_4" /*White Leather Loafers*/, 16);
num2=9;
num3=4;
num=700;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_5" /*Russet Leather Loafers*/, 16);
num2=9;
num3=5;
num=680;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_6" /*White Snakeskin Loafers*/, 16);
num2=9;
num3=6;
num=720;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_7" /*Rattlesnake Loafers*/, 16);
num2=9;
num3=7;
num=740;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_8" /*Brown Snakeskin Loafers*/, 16);
num2=9;
num3=8;
num=760;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_9" /*Zebra Two-Tone Loafers*/, 16);
num2=9;
num3=9;
num=780;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_10" /*Pale Reptile Loafers*/, 16);
num2=9;
num3=10;
num=750;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_11" /*Tan Alligator Loafers*/, 16);
num2=9;
num3=11;
num=700;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_10_0" /*Chestnut Boots*/, 16);
num2=10;
num3=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
flag=true;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
flag=true;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=16;
num3=0;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_0" /*All Black Oxfords*/, 16);
num2=18;
num3=0;
num=790;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_1" /*Chocolate Oxfords*/, 16);
num2=18;
num3=1;
num=750;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_2" /*Chestnut Oxfords*/, 16);
num2=18;
num3=2;
num=860;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_3" /*Tan Oxfords*/, 16);
num2=18;
num3=3;
num=750;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_4" /*White Oxfords*/, 16);
num2=18;
num3=4;
num=790;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_5" /*Ash Oxfords*/, 16);
num2=18;
num3=5;
num=840;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_6" /*Gray Two-Tone Oxfords*/, 16);
num2=18;
num3=6;
num=820;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_7" /*Beige Oxfords*/, 16);
num2=18;
num3=7;
num=800;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_8" /*Topaz Oxfords*/, 16);
num2=18;
num3=8;
num=850;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_9" /*Black Oxfords*/, 16);
num2=18;
num3=9;
num=870;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_10" /*Lime Oxfords*/, 16);
num2=18;
num3=10;
num=720;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_11" /*Hawthorn Oxfords*/, 16);
num2=18;
num3=11;
num=740;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_12" /*Coffee Oxfords*/, 16);
num2=18;
num3=12;
num=800;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_13" /*Gray Oxfords*/, 16);
num2=18;
num3=13;
num=750;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_14" /*Cream Oxfords*/, 16);
num2=18;
num3=14;
num=770;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_15" /*Navy Oxfords*/, 16);
num2=18;
num3=15;
num=860;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_0" /*Black Slip-Ons*/, 16);
num2=19;
num3=0;
num=850;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_1" /*Red Slip-Ons*/, 16);
num2=19;
num3=1;
num=800;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_2" /*Brown Slip-Ons*/, 16);
num2=19;
num3=2;
num=780;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_3" /*Green Stripe Slip-Ons*/, 16);
num2=19;
num3=3;
num=890;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_4" /*Green Slip-Ons*/, 16);
num2=19;
num3=4;
num=820;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_5" /*Copper Slip-Ons*/, 16);
num2=19;
num3=5;
num=840;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_6" /*Copper Two-Tone Slip-Ons*/, 16);
num2=19;
num3=6;
num=870;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_7" /*Navy Slip-Ons*/, 16);
num2=19;
num3=7;
num=930;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_8" /*Blue Slip-Ons*/, 16);
num2=19;
num3=8;
num=880;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_9" /*Beige Slip-Ons*/, 16);
num2=19;
num3=9;
num=900;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_10" /*White Slip-Ons*/, 16);
num2=19;
num3=10;
num=920;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_11" /*Tan Slip-Ons*/, 16);
num2=19;
num3=11;
num=970;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_12" /*Black Snakeskin Slip-Ons*/, 16);
num2=19;
num3=12;
num=990;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_13" /*Two-Tone Slip-Ons*/, 16);
num2=19;
num3=13;
num=960;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_14" /*Brown Snakeskin Slip-Ons*/, 16);
num2=19;
num3=14;
num=980;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_15" /*Gray Slip-Ons*/, 16);
num2=19;
num3=15;
num=950;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_0" /*Brown Wingtips*/, 16);
num2=20;
num3=0;
num=110;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_1" /*Navy Wingtips*/, 16);
num2=20;
num3=1;
num=115;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_2" /*Coffee Wingtips*/, 16);
num2=20;
num3=2;
num=120;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_3" /*Burgundy Wingtips*/, 16);
num2=20;
num3=3;
num=110;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_4" /*Blue Wingtips*/, 16);
num2=20;
num3=4;
num=125;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_5" /*Woodland Camo Wingtips*/, 16);
num2=20;
num3=5;
num=128;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_6" /*Black Wingtips*/, 16);
num2=20;
num3=6;
num=135;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_7" /*Tan Wingtips*/, 16);
num2=20;
num3=7;
num=130;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_8" /*Purple Wingtips*/, 16);
num2=20;
num3=8;
num=145;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_9" /*Brown Wingtips*/, 16);
num2=20;
num3=9;
num=110;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_10" /*Chocolate Wingtips*/, 16);
num2=20;
num3=10;
num=120;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_11" /*Green Wingtips*/, 16);
num2=20;
num3=11;
num=150;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_12" /*Ash Wingtips*/, 16);
num2=20;
num3=12;
num=125;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_13" /*Olive Wingtips*/, 16);
num2=20;
num3=13;
num=120;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_14" /*Two-Tone Wingtips*/, 16);
num2=20;
num3=14;
num=130;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_15" /*Yellow Wingtips*/, 16);
num2=20;
num3=15;
num=110;
break;
default:
func_95(num6, iParam0, 84, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_106(int iParam0) // Position - 0x1026D{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=4;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_0" /*Blue Jeans*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_1" /*Dirty Blue Jeans*/, 16);
num2=0;
num3=1;
num=95;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_2" /*Navy Jeans*/, 16);
num2=0;
num3=2;
num=129;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_3" /*Faded Jeans*/, 16);
num2=0;
num3=3;
num=115;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=1;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=2;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=3;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=4;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_0" /*Black Golf Pants*/, 16);
num2=11;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_1" /*Russet Plaid Golf Pants*/, 16);
num2=11;
num3=1;
num=750;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_2" /*White Golf Pants*/, 16);
num2=11;
num3=2;
num=650;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_3" /*Maroon Golf Pants*/, 16);
num2=11;
num3=3;
num=850;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_4" /*Lobster Golf Pants*/, 16);
num2=11;
num3=4;
num=850;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_5" /*Stone Plaid Golf Pants*/, 16);
num2=11;
num3=5;
num=750;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_6" /*Pink Plaid Golf Pants*/, 16);
num2=11;
num3=6;
num=690;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_7" /*Mint Plaid Golf Pants*/, 16);
num2=11;
num3=7;
num=820;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_8" /*Brown Plaid Golf Pants*/, 16);
num2=11;
num3=8;
num=650;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_9" /*Pale Blue Plaid Golf Pants*/, 16);
num2=11;
num3=9;
num=690;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_10" /*Beige Plaid Golf Pants*/, 16);
num2=11;
num3=10;
num=690;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_11" /*Aqua Plaid Golf Pants*/, 16);
num2=11;
num3=11;
num=820;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_14_0" /*Black Cargo Pants*/, 16);
num2=14;
num3=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_15_0" /*White Shorts*/, 16);
num2=15;
num3=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_16_0" /*Pink Sweatpants*/, 16);
num2=16;
num3=0;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_0" /*Brown Work Pants*/, 16);
num2=17;
num3=0;
num=58;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_1" /*Charcoal Work Pants*/, 16);
num2=17;
num3=1;
num=68;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_2" /*Gray Work Pants*/, 16);
num2=17;
num3=2;
num=65;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_3" /*Tan Work Pants*/, 16);
num2=17;
num3=3;
num=60;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_4" /*Blue Work Pants*/, 16);
num2=17;
num3=4;
num=65;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_5" /*Ash Work Pants*/, 16);
num2=17;
num3=5;
num=63;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_6" /*White Work Pants*/, 16);
num2=17;
num3=6;
num=60;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_7" /*Beige Work Pants*/, 16);
num2=17;
num3=7;
num=58;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_0" /*Tan Cargo Pants*/, 16);
num2=18;
num3=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_1" /*Cream Cargo Pants*/, 16);
num2=18;
num3=1;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_2" /*Silver Cargo Pants*/, 16);
num2=18;
num3=2;
num=99;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_3" /*Gray Cargo Pants*/, 16);
num2=18;
num3=3;
num=105;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_4" /*Charcoal Cargo Pants*/, 16);
num2=18;
num3=4;
num=110;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_5" /*Green Cargo Pants*/, 16);
num2=18;
num3=5;
num=110;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_6" /*White Cargo Pants*/, 16);
num2=18;
num3=6;
num=99;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_7" /*Urban Camo Cargo Pants*/, 16);
num2=18;
num3=7;
num=110;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_8" /*Desert Camo Cargo Pants*/, 16);
num2=18;
num3=8;
num=110;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_9" /*Field Camo Cargo Pants*/, 16);
num2=18;
num3=9;
num=105;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_10" /*Forest Camo Cargo Pants*/, 16);
num2=18;
num3=10;
num=105;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_0" /*Black Shorts*/, 16);
num2=19;
num3=0;
num=15;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_1" /*Pale Blue Shorts*/, 16);
num2=19;
num3=1;
num=15;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_2" /*Orange Shorts*/, 16);
num2=19;
num3=2;
num=15;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_3" /*Blue Shorts*/, 16);
num2=19;
num3=3;
num=15;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_4" /*Slate Shorts*/, 16);
num2=19;
num3=4;
num=15;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_5" /*Green Shorts*/, 16);
num2=19;
num3=5;
num=15;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_6" /*Crimson Shorts*/, 16);
num2=19;
num3=6;
num=15;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_7" /*Pale Blue Stripe Shorts*/, 16);
num2=19;
num3=7;
num=15;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_0" /*Gray Pants*/, 16);
num2=20;
num3=0;
num=600;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_1" /*Khaki Pants*/, 16);
num2=20;
num3=1;
num=600;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_2" /*Charcoal Pants*/, 16);
num2=20;
num3=2;
num=600;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_3" /*Cream Pants*/, 16);
num2=20;
num3=3;
num=600;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_4" /*Stone Pants*/, 16);
num2=20;
num3=4;
num=600;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_5" /*Black Pants*/, 16);
num2=20;
num3=5;
num=600;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_6" /*Ash Pants*/, 16);
num2=20;
num3=6;
num=600;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_7" /*Beige Pants*/, 16);
num2=20;
num3=7;
num=600;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_8" /*Brown Pants*/, 16);
num2=20;
num3=8;
num=600;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_0" /*Beige Cheap Pants*/, 16);
num2=21;
num3=0;
num=80;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_1" /*Blue Cheap Pants*/, 16);
num2=21;
num3=1;
num=80;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_2" /*Brown Plaid Cheap Pants*/, 16);
num2=21;
num3=2;
num=80;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_3" /*Burgundy Cheap Pants*/, 16);
num2=21;
num3=3;
num=80;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_4" /*Murky Plaid Cheap Pants*/, 16);
num2=21;
num3=4;
num=80;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_5" /*Mint Plaid Cheap Pants*/, 16);
num2=21;
num3=5;
num=80;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_6" /*Green Plaid Cheap Pants*/, 16);
num2=21;
num3=6;
num=80;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_7" /*Blue-Gray Cheap Pants*/, 16);
num2=21;
num3=7;
num=80;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_8" /*Caramel Cheap Pants*/, 16);
num2=21;
num3=8;
num=80;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_9" /*Mocha Cheap Pants*/, 16);
num2=21;
num3=9;
num=80;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_0" /*White Briefs*/, 16);
num2=22;
num3=0;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_1" /*Green Briefs*/, 16);
num2=22;
num3=1;
num=12;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_2" /*Gray Briefs*/, 16);
num2=22;
num3=2;
num=12;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_3" /*Leopardskin Briefs*/, 16);
num2=22;
num3=3;
num=22;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_4" /*Impotent Rage Briefs*/, 16);
num2=22;
num3=4;
num=18;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_5" /*Pink Leopardskin Briefs*/, 16);
num2=22;
num3=5;
num=20;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_6" /*Space Monkey Briefs 1*/, 16);
num2=22;
num3=6;
num=30;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_7" /*Space Monkey Briefs 2*/, 16);
num2=22;
num3=7;
num=30;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_8" /*Space Monkey Briefs 3*/, 16);
num2=22;
num3=8;
num=30;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_9" /*Space Monkey Briefs 4*/, 16);
num2=22;
num3=9;
num=30;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_23_0" /*Sweatpants*/, 16);
num2=23;
num3=0;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_24_0" /*Brown Tuxedo Pants*/, 16);
num2=24;
num3=0;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=25;
num3=0;
flag=true;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=0;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=1;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=2;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=3;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=4;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=5;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=6;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=7;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=8;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=9;
break;
default:
func_95(num6, iParam0, 104, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_107(int iParam0) // Position - 0x10DC5{
if(iParam0 < 136) func_109(iParam0);
else func_108(iParam0);
if(Global_78341[0 /*14*/].f_2==-1) func_95(3, iParam0, 242, -1);
return;
}


void func_108(int iParam0) // Position - 0x10DFA{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_0" /*Peyton Blue Blouson*/, 16);
num2=21;
num3=0;
num=32;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_1" /*Overlooked Red Blouson*/, 16);
num2=21;
num3=1;
num=39;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_2" /*Natural Blouson*/, 16);
num2=21;
num3=2;
num=40;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_3" /*Sky Blue Blouson*/, 16);
num2=21;
num3=3;
num=42;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_4" /*Deep Green Blouson*/, 16);
num2=21;
num3=4;
num=45;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_5" /*Champagne Driver Blouson*/, 16);
num2=21;
num3=5;
num=48;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_6" /*Snakeskin Blouson*/, 16);
num2=21;
num3=6;
num=52;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_7" /*Desert Brown Blouson*/, 16);
num2=21;
num3=7;
num=55;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_0" /*Black Striped Leather Jacket*/, 16);
num2=22;
num3=0;
num=390;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_1" /*Black Leather Jacket*/, 16);
num2=22;
num3=1;
num=390;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_2" /*Chestnut Leather Jacket*/, 16);
num2=22;
num3=2;
num=560;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_3" /*Red Leather Jacket*/, 16);
num2=22;
num3=3;
num=390;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_4" /*White Leather Jacket*/, 16);
num2=22;
num3=4;
num=390;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_5" /*Blue Leather Jacket*/, 16);
num2=22;
num3=5;
num=390;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_6" /*Lonewolf Leather Jacket*/, 16);
num2=22;
num3=6;
num=560;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_7" /*Brown Leather Jacket*/, 16);
num2=22;
num3=7;
num=390;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_8" /*Gray Striped Leather Jacket*/, 16);
num2=22;
num3=8;
num=390;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_9" /*Gray Banded Leather Jacket*/, 16);
num2=22;
num3=9;
num=390;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_10" /*Russet Leather Jacket*/, 16);
num2=22;
num3=10;
num=390;
break;
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_11" /*Brown Suede Jacket*/, 16);
num2=22;
num3=11;
num=3950;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_0" /*Brown Shooting Vest*/, 16);
num2=23;
num3=0;
num=150;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_1" /*Woodland Shooting Vest*/, 16);
num2=23;
num3=1;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_2" /*Taupe Shooting Vest*/, 16);
num2=23;
num3=2;
num=150;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_3" /*Brown Woven Shooting Vest*/, 16);
num2=23;
num3=3;
num=150;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_4" /*Field Shooting Vest*/, 16);
num2=23;
num3=4;
num=160;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_5" /*Forest Shooting Vest*/, 16);
num2=23;
num3=5;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_0" /*Yellow Tank Top*/, 16);
num2=24;
num3=0;
num=19;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_1" /*Blue Birds Tank Top*/, 16);
num2=24;
num3=1;
num=20;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_2" /*Orange Pattern Tank Top*/, 16);
num2=24;
num3=2;
num=19;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_3" /*Blue Stars Tank Top*/, 16);
num2=24;
num3=3;
num=22;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_4" /*Aqua Pattern Tank Top*/, 16);
num2=24;
num3=4;
num=20;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_5" /*Degenatron Tank Top*/, 16);
num2=24;
num3=5;
num=28;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_6" /*Taco Libre Tank Top*/, 16);
num2=24;
num3=6;
num=28;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_7" /*Pussycat Tank Top*/, 16);
num2=24;
num3=7;
num=25;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_8" /*Lemon Pattern Tank Top*/, 16);
num2=24;
num3=8;
num=22;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_9" /*Charcoal Tank Top*/, 16);
num2=24;
num3=9;
num=19;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_10" /*Off-White Tank Top*/, 16);
num2=24;
num3=10;
num=22;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_11" /*Banded Tank Top*/, 16);
num2=24;
num3=11;
num=19;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_12" /*Orange Tank Top*/, 16);
num2=24;
num3=12;
num=20;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_13" /*Camo Tank Top*/, 16);
num2=24;
num3=13;
num=25;
break;
case 176:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_14" /*Indigo Tank Top*/, 16);
num2=24;
num3=14;
num=20;
break;
case 177:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_15" /*Liberty Cocks Tank Top*/, 16);
num2=24;
num3=15;
num=28;
break;
case 178:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_0" /*Blue Two-Tone Shirt*/, 16);
num2=25;
num3=0;
num=35;
break;
case 179:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_1" /*Circles Shirt*/, 16);
num2=25;
num3=1;
num=40;
break;
case 180:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_2" /*Gray Two-Tone Shirt*/, 16);
num2=25;
num3=2;
num=45;
break;
case 181:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_3" /*Mustard Shirt*/, 16);
num2=25;
num3=3;
num=45;
break;
case 182:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_4" /*Blue Checkered Shirt*/, 16);
num2=25;
num3=4;
num=49;
break;
case 183:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_5" /*Floral Shirt*/, 16);
num2=25;
num3=5;
num=820;
break;
case 184:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_6" /*Beige Shirt*/, 16);
num2=25;
num3=6;
num=790;
break;
case 185:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_7" /*Lavender Shirt*/, 16);
num2=25;
num3=7;
num=820;
break;
case 186:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_8" /*Black Shirt*/, 16);
num2=25;
num3=8;
num=929;
break;
case 187:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_9" /*Monogrammed Shirt*/, 16);
num2=25;
num3=9;
num=40;
break;
case 188:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_10" /*Paisley Shirt*/, 16);
num2=25;
num3=10;
num=850;
break;
case 189:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_11" /*Camel Shirt*/, 16);
num2=25;
num3=11;
num=790;
break;
case 190:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_0" /*Beige Tight Jacket*/, 16);
num2=26;
num3=0;
break;
case 191:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_1" /*Blue Tight Jacket*/, 16);
num2=26;
num3=1;
break;
case 192:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_2" /*Brown Plaid Tight Jacket*/, 16);
num2=26;
num3=2;
break;
case 193:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_3" /*Burgundy Tight Jacket*/, 16);
num2=26;
num3=3;
break;
case 194:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_4" /*Murky Plaid Tight Jacket*/, 16);
num2=26;
num3=4;
break;
case 195:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_5" /*Mint Plaid Tight Jacket*/, 16);
num2=26;
num3=5;
break;
case 196:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_6" /*Green Plaid Tight Jacket*/, 16);
num2=26;
num3=6;
break;
case 197:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_7" /*Blue-Gray Tight Jacket*/, 16);
num2=26;
num3=7;
break;
case 198:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_8" /*Caramel Tight Jacket*/, 16);
num2=26;
num3=8;
break;
case 199:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_9" /*Mocha Tight Jacket*/, 16);
num2=26;
num3=9;
break;
case 200:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_0" /*Gray Jacket*/, 16);
num2=27;
num3=0;
num=2200;
break;
case 201:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_1" /*Oatmeal Jacket*/, 16);
num2=27;
num3=1;
num=2500;
break;
case 202:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_2" /*Charcoal Jacket*/, 16);
num2=27;
num3=2;
num=2500;
break;
case 203:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_3" /*Off-White Jacket*/, 16);
num2=27;
num3=3;
num=2200;
break;
case 204:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_4" /*Cream Jacket*/, 16);
num2=27;
num3=4;
num=2500;
break;
case 205:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_5" /*Black Jacket*/, 16);
num2=27;
num3=5;
num=2500;
break;
case 206:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_6" /*Ash Jacket*/, 16);
num2=27;
num3=6;
num=2200;
break;
case 207:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_0" /*Dark Gray Sweater*/, 16);
num2=28;
num3=0;
num=1100;
break;
case 208:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_1" /*Pale Gray Sweater*/, 16);
num2=28;
num3=1;
num=1200;
break;
case 209:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_2" /*Taupe Sweater*/, 16);
num2=28;
num3=2;
num=1220;
break;
case 210:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_3" /*Pale Blue Sweater*/, 16);
num2=28;
num3=3;
num=1250;
break;
case 211:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_4" /*Tangerine Sweater*/, 16);
num2=28;
num3=4;
num=1300;
break;
case 212:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_5" /*Quarry Brown Sweater*/, 16);
num2=28;
num3=5;
num=1360;
break;
case 213:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_6" /*Dark Chevrons Sweater*/, 16);
num2=28;
num3=6;
num=35;
break;
case 214:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_7" /*Zingy Chevrons Sweater*/, 16);
num2=28;
num3=7;
num=38;
break;
case 215:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_8" /*Rainbow Field Sweater*/, 16);
num2=28;
num3=8;
num=40;
break;
case 216:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_9" /*Dark Field Sweater*/, 16);
num2=28;
num3=9;
num=42;
break;
case 217:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_10" /*Animal Strip Sweater*/, 16);
num2=28;
num3=10;
num=50;
break;
case 218:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_11" /*Bill Brown Sweater*/, 16);
num2=28;
num3=11;
num=45;
break;
case 219:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_12" /*Mint Argyle Sweater*/, 16);
num2=28;
num3=12;
num=45;
break;
case 220:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_13" /*Gray Argyle Sweater*/, 16);
num2=28;
num3=13;
num=44;
break;
case 221:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_14" /*Grape Eighties Sweater*/, 16);
num2=28;
num3=14;
num=46;
break;
case 222:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_15" /*Geometric Eighties Sweater*/, 16);
num2=28;
num3=15;
num=52;
break;
case 223:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_0" /*Black Jacket*/, 16);
num2=29;
num3=0;
num=3200;
break;
case 224:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_1" /*All Black Jacket*/, 16);
num2=29;
num3=1;
num=3200;
break;
case 225:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_2" /*White Jacket*/, 16);
num2=29;
num3=2;
num=2550;
break;
case 226:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_3" /*Cream Jacket*/, 16);
num2=29;
num3=3;
num=2750;
break;
case 227:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_4" /*Oatmeal Jacket*/, 16);
num2=29;
num3=4;
num=2590;
break;
case 228:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_5" /*Blue-Gray Jacket*/, 16);
num2=29;
num3=5;
num=2750;
break;
case 229:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_6" /*Beige Jacket*/, 16);
num2=29;
num3=6;
num=2550;
break;
case 230:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_7" /*Off-White Jacket*/, 16);
num2=29;
num3=7;
num=2590;
break;
case 231:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_8" /*Gray Suit Jacket*/, 16);
num2=29;
num3=8;
num=2720;
break;
case 232:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_9" /*Ash Suit Jacket*/, 16);
num2=29;
num3=9;
num=2750;
break;
case 233:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_0" /*Gray Blazer*/, 16);
num2=30;
num3=0;
num=3250;
break;
case 234:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_1" /*Beige Blazer*/, 16);
num2=30;
num3=1;
num=2950;
break;
case 235:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_2" /*Black Blazer*/, 16);
num2=30;
num3=2;
num=3100;
break;
case 236:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_3" /*Brown Blazer*/, 16);
num2=30;
num3=3;
num=3150;
break;
case 237:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_4" /*Navy Blazer*/, 16);
num2=30;
num3=4;
num=3240;
break;
case 238:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_5" /*Navy Pinstripe Blazer*/, 16);
num2=30;
num3=5;
num=3350;
break;
case 239:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_6" /*Blue-Gray Pinstripe Blazer*/, 16);
num2=30;
num3=6;
num=3400;
break;
case 240:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_7" /*Brown Pinstripe Blazer*/, 16);
num2=30;
num3=7;
num=3280;
break;
case 241:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_31_0" /*Tuxedo Jacket*/, 16);
num2=31;
num3=0;
break;
default:
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_109(int iParam0) // Position - 0x119FE{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_0" /*White T-Shirt*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_1" /*Yellow T-Shirt*/, 16);
num2=0;
num3=1;
num=25;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_2" /*Dusche Gold T-Shirt*/, 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_3" /*Charcoal T-Shirt*/, 16);
num2=0;
num3=3;
num=15;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_4" /*Cerveza Barracho T-Shirt*/, 16);
num2=0;
num3=4;
num=25;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_5" /*Liberty City Wrath T-Shirt*/, 16);
num2=0;
num3=5;
num=25;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_6" /*Pump & Run T-Shirt*/, 16);
num2=0;
num3=6;
num=22;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_7" /*Atomic T-Shirt*/, 16);
num2=0;
num3=7;
num=22;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_8" /*LS Nuclear Power T-Shirt*/, 16);
num2=0;
num3=8;
num=20;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_9" /*Zancudo T-Shirt*/, 16);
num2=0;
num3=9;
num=20;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_10" /*West Coast Classics T-Shirt*/, 16);
num2=0;
num3=10;
num=24;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_11" /*BC Talk Radio T-Shirt*/, 16);
num2=0;
num3=11;
num=26;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_12" /*Animal Ark T-Shirt*/, 16);
num2=0;
num3=12;
num=28;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_13" /*Rimmers T-Shirt*/, 16);
num2=0;
num3=13;
num=29;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_14" /*Paperclips T-Shirt*/, 16);
num2=0;
num3=14;
num=22;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_15" /*Pop's Pills T-Shirt*/, 16);
num2=0;
num3=15;
num=20;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_0" /*Los Santos Tank Top*/, 16);
num2=3;
num3=0;
num=35;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_1" /*Del Perro Pier Tank Top*/, 16);
num2=3;
num3=1;
num=22;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_2" /*San Andreas Tank Top*/, 16);
num2=3;
num3=2;
num=25;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_3" /*Love Fist Tank Top*/, 16);
num2=3;
num3=3;
num=38;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_4" /*Space Monkey Tank Top 1*/, 16);
num2=3;
num3=4;
num=40;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_5" /*Space Monkey Tank Top 2*/, 16);
num2=3;
num3=5;
num=40;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_6" /*Space Monkey Tank Top 3*/, 16);
num2=3;
num3=6;
num=40;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_7" /*Space Monkey Tank Top 4*/, 16);
num2=3;
num3=7;
num=40;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_8" /*Space Monkey Tank Top 5*/, 16);
num2=3;
num3=8;
num=40;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_0" /*Rearwall Black Down Jacket*/, 16);
num2=4;
num3=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_1" /*Crevis Green Down Jacket*/, 16);
num2=4;
num3=1;
num=500;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_2" /*Rearwall Fluoro Down Jacket*/, 16);
num2=4;
num3=2;
num=560;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_3" /*Rearwall Coffee Down Jacket*/, 16);
num2=4;
num3=3;
num=600;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_4tu" /*Crevis Yellow Down Jacket*/, 16);
num2=4;
num3=4;
num=650;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_5tu" /*Eris Yellow Down Jacket*/, 16);
num2=4;
num3=5;
num=500;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_6tu" /*Crevis Red Down Jacket*/, 16);
num2=4;
num3=6;
num=560;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_7" /*Rearwall Red Down Jacket*/, 16);
num2=4;
num3=7;
num=500;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_8" /*Crevis Blue Down Jacket*/, 16);
num2=4;
num3=8;
num=650;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_9" /*Eris Gray Down Jacket*/, 16);
num2=4;
num3=9;
num=540;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_10" /*Eris Red Down Jacket*/, 16);
num2=4;
num3=10;
num=690;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_11" /*Eris Olive Down Jacket*/, 16);
num2=4;
num3=11;
num=560;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_12" /*Eris Aqua Down Jacket*/, 16);
num2=4;
num3=12;
num=590;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_13" /*Eris Blue Down Jacket*/, 16);
num2=4;
num3=13;
num=690;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_14" /*Crevis Gray Down Jacket*/, 16);
num2=4;
num3=14;
num=540;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_15" /*Eris Tan Down Jacket*/, 16);
num2=4;
num3=15;
num=500;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=1;
flag=true;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=2;
flag=true;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=3;
flag=true;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=4;
flag=true;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=5;
flag=true;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_0" /*Red Floral Polo Shirt*/, 16);
num2=11;
num3=0;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_1" /*Amethyst Polo Shirt*/, 16);
num2=11;
num3=1;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_2" /*Turquoise Striped Polo Shirt*/, 16);
num2=11;
num3=2;
num=25;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_3" /*Pink Striped Polo Shirt*/, 16);
num2=11;
num3=3;
num=27;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_4" /*Mustard Polo Shirt*/, 16);
num2=11;
num3=4;
num=22;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_5" /*Orange Polo Shirt*/, 16);
num2=11;
num3=5;
num=350;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_6" /*Topaz Striped Polo Shirt*/, 16);
num2=11;
num3=6;
num=27;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_7" /*Mint Polo Shirt*/, 16);
num2=11;
num3=7;
num=370;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_8" /*Navy Striped Polo Shirt*/, 16);
num2=11;
num3=8;
num=25;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_9" /*Green Striped Polo Shirt*/, 16);
num2=11;
num3=9;
num=22;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_10" /*Turquoise Two-Tone Polo Shirt*/, 16);
num2=11;
num3=10;
num=25;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_11" /*Brown Polo Shirt*/, 16);
num2=11;
num3=11;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_12" /*Pink Polo Shirt*/, 16);
num2=11;
num3=12;
num=22;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_13" /*Green Polo Shirt*/, 16);
num2=11;
num3=13;
num=27;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_14" /*Aqua Polo Shirt*/, 16);
num2=11;
num3=14;
num=25;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_15" /*Brown Striped Polo Shirt*/, 16);
num2=11;
num3=15;
num=27;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
num5=1;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_0" /*Mint Floral Dress*/, 16);
num2=13;
num3=0;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_1" /*Pink Dress*/, 16);
num2=13;
num3=1;
num=39;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_2" /*White Floral Dress*/, 16);
num2=13;
num3=2;
num=42;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_3" /*Purple Zebra Dress*/, 16);
num2=13;
num3=3;
num=49;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_4" /*Cream Dress*/, 16);
num2=13;
num3=4;
num=35;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_5" /*Space Monkey Dress 1*/, 16);
num2=13;
num3=5;
num=50;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_6" /*Space Monkey Dress 2*/, 16);
num2=13;
num3=6;
num=50;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_7" /*Space Monkey Dress 3*/, 16);
num2=13;
num3=7;
num=50;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_0" /*Black Hoodie*/, 16);
num2=14;
num3=0;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_1" /*Silver Hoodie*/, 16);
num2=14;
num3=1;
num=88;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_2" /*Ammu-Nation Camo Hoodie*/, 16);
num2=14;
num3=2;
num=60;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_3" /*LSGC Urban Hoodie*/, 16);
num2=14;
num3=3;
num=80;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_4" /*LSGC Gray Hoodie*/, 16);
num2=14;
num3=4;
num=70;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_5" /*Ammu-Nation A Hoodie*/, 16);
num2=14;
num3=5;
num=80;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_6" /*Blauser Hoodie*/, 16);
num2=14;
num3=6;
num=70;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_7" /*LSGC Forest Hoodie*/, 16);
num2=14;
num3=7;
num=90;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_8" /*Penetrators Hoodie*/, 16);
num2=14;
num3=8;
num=95;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_9" /*Crevis Fluorescent Hoodie*/, 16);
num2=14;
num3=9;
num=105;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_10" /*Blue Hoodie*/, 16);
num2=14;
num3=10;
num=95;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_11" /*Green Hoodie*/, 16);
num2=14;
num3=11;
num=110;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_12" /*LS Jardineros Hoodie*/, 16);
num2=14;
num3=12;
num=98;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_13" /*Ash 18 Hoodie*/, 16);
num2=14;
num3=13;
num=88;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_14" /*Red Mist XI Hoodie*/, 16);
num2=14;
num3=14;
num=98;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_15" /*Eris Charcoal Hoodie*/, 16);
num2=14;
num3=15;
num=110;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_15_0" /*Tennis Shirt*/, 16);
num2=15;
num3=0;
flag=true;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_16_0" /*Bare Chest*/, 16);
num2=16;
num3=0;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_17_0" /*Pink Jacket*/, 16);
num2=17;
num3=0;
flag=true;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_0" /*Blue Denim Jacket*/, 16);
num2=18;
num3=0;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_1" /*Black Denim Jacket*/, 16);
num2=18;
num3=1;
num=520;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_2" /*Gray Denim Jacket*/, 16);
num2=18;
num3=2;
num=490;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_3" /*Brown Denim Jacket*/, 16);
num2=18;
num3=3;
num=450;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_4" /*Faded Denim Jacket*/, 16);
num2=18;
num3=4;
num=420;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_5" /*Ash Denim Jacket*/, 16);
num2=18;
num3=5;
num=420;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_0" /*Denim Shirt*/, 16);
num2=19;
num3=0;
num=85;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_1" /*Faded Denim Shirt*/, 16);
num2=19;
num3=1;
num=85;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_2" /*Black Shirt*/, 16);
num2=19;
num3=2;
num=75;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_3" /*Gray Check Shirt*/, 16);
num2=19;
num3=3;
num=68;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_4" /*Brown Check Shirt*/, 16);
num2=19;
num3=4;
num=68;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_5" /*Red Check Shirt*/, 16);
num2=19;
num3=5;
num=78;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_6" /*Brown Shirt*/, 16);
num2=19;
num3=6;
num=85;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_7" /*Khaki Shirt*/, 16);
num2=19;
num3=7;
num=68;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_8" /*Red Plaid Shirt*/, 16);
num2=19;
num3=8;
num=75;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_9" /*Brown Plaid Shirt*/, 16);
num2=19;
num3=9;
num=75;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_10" /*Green Check Shirt*/, 16);
num2=19;
num3=10;
num=78;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_11" /*Maroon Check Shirt*/, 16);
num2=19;
num3=11;
num=75;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_12" /*Gray Shirt*/, 16);
num2=19;
num3=12;
num=75;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_13" /*Blue Check Shirt*/, 16);
num2=19;
num3=13;
num=75;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_14" /*Blue Two-Tone Shirt*/, 16);
num2=19;
num3=14;
num=78;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_15" /*Navy Shirt*/, 16);
num2=19;
num3=15;
num=78;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_0" /*Burgundy Bowling Shirt*/, 16);
num2=20;
num3=0;
num=40;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_1" /*Purple Bowling Shirt*/, 16);
num2=20;
num3=1;
num=32;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_2" /*Crimson Bowling Shirt*/, 16);
num2=20;
num3=2;
num=32;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_3" /*Tan Bowling Shirt*/, 16);
num2=20;
num3=3;
num=32;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_4" /*Flames Bowling Shirt*/, 16);
num2=20;
num3=4;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_5" /*Skull Bowling Shirt*/, 16);
num2=20;
num3=5;
num=38;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_6" /*Pale Blue Bowling Shirt*/, 16);
num2=20;
num3=6;
num=35;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_7" /*Scarab Bowling Shirt*/, 16);
num2=20;
num3=7;
num=38;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_8" /*Cream Bowling Shirt*/, 16);
num2=20;
num3=8;
num=29;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_9" /*Cube Bowling Shirt*/, 16);
num2=20;
num3=9;
num=32;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_10" /*Beige Bowling Shirt*/, 16);
num2=20;
num3=10;
num=29;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_11" /*Blue Bowling Shirt*/, 16);
num2=20;
num3=11;
num=35;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_12" /*Yellow Bowling Shirt*/, 16);
num2=20;
num3=12;
num=32;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_13" /*Pink Bowling Shirt*/, 16);
num2=20;
num3=13;
num=35;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_14" /*White Bowling Shirt*/, 16);
num2=20;
num3=14;
num=32;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_15" /*Black Bowling Shirt*/, 16);
num2=20;
num3=15;
num=40;
break;
default:
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_110(int iParam0) // Position - 0x128FE{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=2;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_0_0" /*Trailer Cut*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_0_1" /*Frozen*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_1_0" /*Clean Razor*/, 16);
num2=1;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_2_0" /*Randal*/, 16);
num2=2;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_3_0" /*Side Shed*/, 16);
num2=3;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_4_0" /*Grown Out*/, 16);
num2=4;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_5_0" /*Mullet*/, 16);
num2=5;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_6_0" /*Shaved 2*/, 16);
num2=6;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_7_0" /*Swept Back*/, 16);
num2=7;
num3=0;
break;
default:
func_95(num6, iParam0, 9, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_111(int iParam0) // Position - 0x12A2B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=0;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=6;
break;
default:
func_95(num6, iParam0, 7, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_112(int iParam0, int iParam1) // Position - 0x12B22{
switch (iParam0){
case 0:
func_130(iParam1);
break;
case 2:
func_129(iParam1);
break;
case 3:
func_125(iParam1);
break;
case 4:
func_124(iParam1);
break;
case 6:
func_123(iParam1);
break;
case 5:
func_122(iParam1);
break;
case 8:
func_121(iParam1);
break;
case 9:
func_120(iParam1);
break;
case 10:
func_119(iParam1);
break;
case 1:
func_118(iParam1);
break;
case 7:
func_117(iParam1);
break;
case 11:
func_116(iParam1);
break;
case 12:
func_115(iParam1);
break;
case 13:
func_114(iParam1);
break;
case 14:
func_113(iParam1);
break;
}
return;
}


void func_113(int iParam0) // Position - 0x12C12{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=14;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=8;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=2;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_0" /*De Koch Diamond Studs*/, 16);
num2=1;
num3=0;
num=4590;
num4=2;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_1" /*De Koch Obsidian Studs*/, 16);
num2=1;
num3=1;
num=4100;
num4=2;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_2" /*De Koch Sapphire Studs*/, 16);
num2=1;
num3=2;
num=3850;
num4=2;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_3" /*De Koch Opal Studs*/, 16);
num2=1;
num3=3;
num=1850;
num4=2;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_4" /*De Koch Platinum Studs*/, 16);
num2=1;
num3=4;
num=5250;
num4=2;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_5" /*De Koch Garnet Studs*/, 16);
num2=1;
num3=5;
num=2700;
num4=2;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_6" /*De Koch Jasper Studs*/, 16);
num2=1;
num3=6;
num=3100;
num4=2;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_7" /*De Koch Aquamarine Studs*/, 16);
num2=1;
num3=7;
num=5050;
num4=2;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_0" /*Vankhov Diamond Studs*/, 16);
num2=2;
num3=0;
num=2500;
num4=2;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_1" /*Vankhov Emerald Studs*/, 16);
num2=2;
num3=1;
num=1950;
num4=2;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_2" /*Vankhov Quartz Studs*/, 16);
num2=2;
num3=2;
num=3900;
num4=2;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_3" /*Vankhov Obsidian Studs*/, 16);
num2=2;
num3=3;
num=3550;
num4=2;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_4" /*Vankhov Platinum Studs*/, 16);
num2=2;
num3=4;
num=4500;
num4=2;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_5" /*Vankhov Agate Studs*/, 16);
num2=2;
num3=5;
num=2700;
num4=2;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_6" /*Vankhov Jade Studs*/, 16);
num2=2;
num3=6;
num=3100;
num4=2;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_7" /*Vankhov Onyx Studs*/, 16);
num2=2;
num3=7;
num=2950;
num4=2;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=10;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_0" /*Orange Tint Contour Shades*/, 16);
num2=1;
num3=0;
num=75;
num4=10;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_1" /*Slate Contour Shades*/, 16);
num2=1;
num3=1;
num=75;
num4=10;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_2" /*Gray Contour Shades*/, 16);
num2=1;
num3=2;
num=75;
num4=10;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_3" /*Brown Contour Shades*/, 16);
num2=1;
num3=3;
num=75;
num4=10;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_4" /*Burgundy Contour Shades*/, 16);
num2=1;
num3=4;
num=75;
num4=10;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_5" /*Chocolate Contour Shades*/, 16);
num2=1;
num3=5;
num=75;
num4=10;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_6" /*Black Contour Shades*/, 16);
num2=1;
num3=6;
num=75;
num4=10;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_7" /*Purple Tint Contour Shades*/, 16);
num2=1;
num3=7;
num=75;
num4=10;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_8" /*Blue-Gray Contour Shades*/, 16);
num2=1;
num3=8;
num=75;
num4=10;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_9" /*White Contour Shades*/, 16);
num2=1;
num3=9;
num=75;
num4=10;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E2" /*Swimming Goggles*/, 16);
num2=2;
num3=0;
num4=10;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E3" /*Racer Shades*/, 16);
num2=3;
num3=0;
num=110;
num4=10;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_0" /*Stank Slate Shades*/, 16);
num2=4;
num3=0;
num=120;
num4=10;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_1" /*Broker Ash Shades*/, 16);
num2=4;
num3=1;
num=128;
num4=10;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_2" /*Broker Chocolate Shades*/, 16);
num2=4;
num3=2;
num=130;
num4=10;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_3" /*Stank Black Shades*/, 16);
num2=4;
num3=3;
num=140;
num4=10;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_4" /*Broker Black Shades*/, 16);
num2=4;
num3=4;
num=145;
num4=10;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_5" /*Stank Green Tint Shades*/, 16);
num2=4;
num3=5;
num=135;
num4=10;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_6" /*Stank Blue Tint Shades*/, 16);
num2=4;
num3=6;
num=138;
num4=10;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_0" /*Black Aviator Shades*/, 16);
num2=5;
num3=0;
num=110;
num4=10;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_1" /*White Aviator Shades*/, 16);
num2=5;
num3=1;
num=112;
num4=10;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_2" /*Brown Aviator Shades*/, 16);
num2=5;
num3=2;
num=115;
num4=10;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_3" /*Gray Aviator Shades*/, 16);
num2=5;
num3=3;
num=118;
num4=10;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_4" /*Two-Tone Aviator Shades*/, 16);
num2=5;
num3=4;
num=120;
num4=10;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_5" /*Bone Aviator Shades*/, 16);
num2=5;
num3=5;
num=125;
num4=10;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_6" /*Red Aviator Shades*/, 16);
num2=5;
num3=6;
num=128;
num4=10;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_7" /*Silver Aviator Shades*/, 16);
num2=5;
num3=7;
num=138;
num4=10;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_8" /*Charcoal Aviator Shades*/, 16);
num2=5;
num3=8;
num=140;
num4=10;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_9" /*Gold Aviator Shades*/, 16);
num2=5;
num3=9;
num=155;
num4=10;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_0" /*Tinted Aviator Glasses*/, 16);
num2=6;
num3=0;
num=55;
num4=10;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_1" /*Silver Aviator Glasses*/, 16);
num2=6;
num3=1;
num=55;
num4=10;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_2" /*Sepia Aviator Glasses*/, 16);
num2=6;
num3=2;
num=58;
num4=10;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_3" /*Blue Aviator Glasses*/, 16);
num2=6;
num3=3;
num=58;
num4=10;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_4" /*Yellow Aviator Glasses*/, 16);
num2=6;
num3=4;
num=60;
num4=10;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_5" /*Gray Aviator Glasses*/, 16);
num2=6;
num3=5;
num=62;
num4=10;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_6" /*Black Aviator Glasses*/, 16);
num2=6;
num3=6;
num=65;
num4=10;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_7" /*Slate Aviator Glasses*/, 16);
num2=6;
num3=7;
num=68;
num4=10;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_8" /*Smoke Aviator Glasses*/, 16);
num2=6;
num3=8;
num=68;
num4=10;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_9" /*Gold Aviator Glasses*/, 16);
num2=6;
num3=9;
num=72;
num4=10;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_0" /*Suburban Black Shades*/, 16);
num2=7;
num3=0;
num=145;
num4=10;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_1" /*Suburban Teal Shades*/, 16);
num2=7;
num3=1;
num=149;
num4=10;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_2" /*Suburban Tortoiseshell Shades*/, 16);
num2=7;
num3=2;
num=139;
num4=10;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_3" /*Suburban Orange Shades*/, 16);
num2=7;
num3=3;
num=149;
num4=10;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_4" /*Fuque White Shades*/, 16);
num2=7;
num3=4;
num=135;
num4=10;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_5" /*Fuque Camo Shades*/, 16);
num2=7;
num3=5;
num=138;
num4=10;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_6" /*Fuque Yellow Shades*/, 16);
num2=7;
num3=6;
num=140;
num4=10;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_7" /*Fuque Burgundy Shades*/, 16);
num2=7;
num3=7;
num=145;
num4=10;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_8" /*Fuque Funky Shades*/, 16);
num2=7;
num3=8;
num=159;
num4=10;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_9" /*Fuque Squared Shades*/, 16);
num2=7;
num3=9;
num=155;
num4=10;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_0" /*Gold T-Bone Shades*/, 16);
num2=8;
num3=0;
num=198;
num4=10;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_1" /*Silver T-Bone Shades*/, 16);
num2=8;
num3=1;
num=210;
num4=10;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_2" /*Two-Tone T-Bone Shades*/, 16);
num2=8;
num3=2;
num=185;
num4=10;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_3" /*Green T-Bone Shades*/, 16);
num2=8;
num3=3;
num=220;
num4=10;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_4" /*Brown T-Bone Shades*/, 16);
num2=8;
num3=4;
num=190;
num4=10;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_5" /*Peach T-Bone Shades*/, 16);
num2=8;
num3=5;
num=200;
num4=10;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_6" /*Gray T-Bone Shades*/, 16);
num2=8;
num3=6;
num=208;
num4=10;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_7" /*Orange T-Bone Shades*/, 16);
num2=8;
num3=7;
num=210;
num4=10;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_0" /*Yellow Mono Shades*/, 16);
num2=9;
num3=0;
num=165;
num4=10;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_1" /*Gray Mono Shades*/, 16);
num2=9;
num3=1;
num=185;
num4=10;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_2" /*Hornet Mono Shades*/, 16);
num2=9;
num3=2;
num=190;
num4=10;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_3" /*Copper Mono Shades*/, 16);
num2=9;
num3=3;
num=178;
num4=10;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_4" /*Blue Mono Shades*/, 16);
num2=9;
num3=4;
num=180;
num4=10;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_5" /*Sepia Mono Shades*/, 16);
num2=9;
num3=5;
num=168;
num4=10;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_6" /*White Mono Shades*/, 16);
num2=9;
num3=6;
num=170;
num4=10;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_7" /*Orange Tint Mono Shades*/, 16);
num2=9;
num3=7;
num=175;
num4=10;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_8" /*Blue Tint Mono Shades*/, 16);
num2=9;
num3=8;
num=170;
num4=10;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_9" /*Smoke Mono Shades*/, 16);
num2=9;
num3=9;
num=178;
num4=10;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_0" /*Gold Triptych Shades*/, 16);
num2=10;
num3=0;
num=140;
num4=10;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_1" /*Gray Triptych Shades*/, 16);
num2=10;
num3=1;
num=145;
num4=10;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_2" /*Silver Triptych Shades*/, 16);
num2=10;
num3=2;
num=150;
num4=10;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_3" /*Two-Tone Triptych Shades*/, 16);
num2=10;
num3=3;
num=165;
num4=10;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_4" /*Copper Triptych Shades*/, 16);
num2=10;
num3=4;
num=168;
num4=10;
break;
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_5" /*Black Triptych Shades*/, 16);
num2=10;
num3=5;
num=178;
num4=10;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_6" /*White Triptych Shades*/, 16);
num2=10;
num3=6;
num=160;
num4=10;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
num=100;
num4=10;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H0_0" /*Hockey Mask*/, 16);
num2=0;
num3=0;
num=320;
num4=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
num4=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
num4=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H3_0" /*Gray Flat Cap*/, 16);
num2=3;
num3=0;
num4=0;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
num4=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
num4=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
num4=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=1;
num4=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=2;
num4=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=3;
num4=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=4;
num4=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=5;
num4=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=6;
num4=0;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=7;
num4=0;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=8;
num4=0;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
num4=0;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
num2=8;
num3=0;
num=270;
num4=0;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
num2=8;
num3=1;
num=270;
num4=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
num2=9;
num3=0;
num=200;
num4=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
num2=9;
num3=1;
num=200;
num4=0;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
num2=10;
num3=0;
num=350;
num4=0;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
num2=10;
num3=1;
num=350;
num4=0;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
num2=11;
num3=0;
num=450;
num4=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
num2=12;
num3=0;
num=500;
num4=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
num2=12;
num3=1;
num=500;
num4=0;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
num2=13;
num3=0;
num=50;
num4=0;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
num2=13;
num3=1;
num=50;
num4=0;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
num2=14;
num3=0;
num=99;
num4=0;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
num2=14;
num3=1;
num=99;
num4=0;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
num2=14;
num3=2;
num=99;
num4=0;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
flag=true;
num4=0;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_0" /*Toe Shoes Fitted Cap*/, 16);
num2=16;
num3=0;
num4=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_1" /*Yeti Fitted Cap*/, 16);
num2=16;
num3=1;
num4=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_2" /*OG Fitted Cap*/, 16);
num2=16;
num3=2;
num4=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_3" /*Magnetics Fitted Cap*/, 16);
num2=16;
num3=3;
num4=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_4" /*LS Red Fitted Cap*/, 16);
num2=16;
num3=4;
num4=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_5" /*Los Santos Charcoal Fitted Cap*/, 16);
num2=16;
num3=5;
num4=0;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_6" /*Stank Fitted Cap*/, 16);
num2=16;
num3=6;
num4=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_7" /*Los Santos Gray Fitted Cap*/, 16);
num2=16;
num3=7;
num4=0;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_8" /*Perseus Fitted Cap*/, 16);
num2=16;
num3=8;
num4=0;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_9" /*Feud Slate Fitted Cap*/, 16);
num2=16;
num3=9;
num4=0;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_10" /*Feud Black Fitted Cap*/, 16);
num2=16;
num3=10;
num4=0;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_11" /*LS Black Fitted Cap*/, 16);
num2=16;
num3=11;
num4=0;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_12" /*LS Corkers Fitted Cap*/, 16);
num2=16;
num3=12;
num4=0;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_13" /*LS White Fitted Cap*/, 16);
num2=16;
num3=13;
num4=0;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_14" /*Feud Green Fitted Cap*/, 16);
num2=16;
num3=14;
num4=0;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_15" /*LS Olive Fitted Cap*/, 16);
num2=16;
num3=15;
num4=0;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
num4=0;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=1;
num4=0;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=2;
num4=0;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=3;
num4=0;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=4;
num4=0;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=5;
num4=0;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=18;
num3=0;
num4=0;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_0" /*Toe Shoes Fitted Cap*/, 16);
num2=19;
num3=0;
num=30;
num4=0;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_1" /*Yeti Fitted Cap*/, 16);
num2=19;
num3=1;
num=30;
num4=0;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_2" /*OG Fitted Cap*/, 16);
num2=19;
num3=2;
num=32;
num4=0;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_3" /*Magnetics Fitted Cap*/, 16);
num2=19;
num3=3;
num=35;
num4=0;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_4" /*LS Red Fitted Cap*/, 16);
num2=19;
num3=4;
num=38;
num4=0;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_5" /*Los Santos Charcoal Fitted Cap*/, 16);
num2=19;
num3=5;
num=42;
num4=0;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_6" /*Stank Fitted Cap*/, 16);
num2=19;
num3=6;
num=42;
num4=0;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_7" /*Los Santos Gray Fitted Cap*/, 16);
num2=19;
num3=7;
num=40;
num4=0;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_8" /*Perseus Fitted Cap*/, 16);
num2=19;
num3=8;
num=45;
num4=0;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_9" /*Feud Slate Fitted Cap*/, 16);
num2=19;
num3=9;
num=48;
num4=0;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_10" /*Feud Black Fitted Cap*/, 16);
num2=19;
num3=10;
num=25;
num4=0;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_11" /*LS Black Fitted Cap*/, 16);
num2=19;
num3=11;
num=25;
num4=0;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_12" /*LS Corkers Fitted Cap*/, 16);
num2=19;
num3=12;
num=28;
num4=0;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_13" /*LS White Fitted Cap*/, 16);
num2=19;
num3=13;
num=28;
num4=0;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_14" /*Feud Green Fitted Cap*/, 16);
num2=19;
num3=14;
num=30;
num4=0;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_15" /*LS Olive Fitted Cap*/, 16);
num2=19;
num3=15;
num=35;
num4=0;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=20;
num3=0;
num4=0;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=21;
num3=0;
num4=0;
break;
default:
func_95(num6, iParam0, 175, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_114(int iParam0) // Position - 0x140E1{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=13;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_95(num6, iParam0, 9, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_115(int iParam0) // Position - 0x14228{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=12;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_0" /*Blue Shirt, Jeans*/, 16);
num2=0;
num3=0;
flag=true;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_2" /*White Tuxedo*/, 16);
num2=0;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_4" /*Golf*/, 16);
num2=0;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_7" /*Scuba Land*/, 16);
num2=0;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_10" /*Stealth*/, 16);
num2=0;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_11" /*Triathlon*/, 16);
num2=0;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_12" /*Fireman*/, 16);
num2=0;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_13" /*Exterminator*/, 16);
num2=0;
num3=0;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_15" /*Black Boiler Suit*/, 16);
num2=0;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_16" /*Skydiving*/, 16);
num2=0;
num3=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_17" /*Tuxedo*/, 16);
num2=0;
num3=0;
num=10000;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_18" /*Blue Boiler Suit*/, 16);
num2=0;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_19" /*Navy Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_20" /*Gray Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_21" /*Green Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_22" /*Ash Hoodie, Sweatpants*/, 16);
num2=0;
num3=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_23" /*Yellow Check Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_24" /*Gray Plaid Suit*/, 16);
num2=0;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_25" /*Black Hoodie, Jeans*/, 16);
num2=0;
num3=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_26" /*Track Jacket, Jeans*/, 16);
num2=0;
num3=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_27" /*Off-White Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_28" /*Gray Plaid 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4000;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_29" /*Ash Plaid 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4500;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_30" /*Charcoal Plaid 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4500;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_31" /*Tan Plaid 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4650;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_32" /*Slate 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4900;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_33" /*Ash 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5000;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_34" /*Stone 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4750;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_35" /*Oatmeal 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4750;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_36" /*Navy Plaid Piped 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5200;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_37" /*Off-White 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5200;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_38" /*Red Piped 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5500;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_39" /*Gray Piped 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_40" /*Navy 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_41" /*Russet Piped 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_42" /*Green 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_43" /*Beige 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_47" /*Underwear*/, 16);
num2=0;
num3=0;
num=3000;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_48" /*LS Black Hoodie, Jeans*/, 16);
num2=0;
num3=0;
num=3000;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_49" /*Gray Hoodie, Jeans*/, 16);
num2=0;
num3=0;
num=3000;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_10" /*Stealth*/, 16);
num2=0;
num3=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_50" /*Moto X*/, 16);
num2=0;
num3=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_51" /*U.R. Jersey, Fatigues*/, 16);
num2=0;
num3=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_52" /*U.R. OG Tee, Bike Leathers*/, 16);
num2=0;
num3=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_53" /*Uptown Riders Longsleeve, Camos*/, 16);
num2=0;
num3=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_54" /*U.R. Jacket, Baggies*/, 16);
num2=0;
num3=0;
break;
default:
func_95(num6, iParam0, 47, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_116(int iParam0) // Position - 0x14732{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=11;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=1;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=2;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=3;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_0", 16);
num2=2;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_1", 16);
num2=2;
num3=1;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_2", 16);
num2=2;
num3=2;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_3", 16);
num2=2;
num3=3;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_0" /*Silver Plaid Vest*/, 16);
num2=3;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_1" /*Ash Vest*/, 16);
num2=3;
num3=1;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_2" /*Navy Vest*/, 16);
num2=3;
num3=2;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_3" /*Colorful Plaid Vest*/, 16);
num2=3;
num3=3;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_4" /*Beige Vest*/, 16);
num2=3;
num3=4;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_5" /*Black Vest*/, 16);
num2=3;
num3=5;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_6" /*Gray Plaid Vest*/, 16);
num2=3;
num3=6;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_7" /*Jade Plaid Vest*/, 16);
num2=3;
num3=7;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_8" /*Beige Plaid Vest*/, 16);
num2=3;
num3=8;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_9" /*Brown Plaid Vest*/, 16);
num2=3;
num3=9;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_10" /*Brown Vest*/, 16);
num2=3;
num3=10;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_11" /*White Plaid Vest*/, 16);
num2=3;
num3=11;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_12" /*Pearl Plaid Vest*/, 16);
num2=3;
num3=12;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_13" /*Warm Gray Vest*/, 16);
num2=3;
num3=13;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_14" /*Topaz Vest*/, 16);
num2=3;
num3=14;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_15" /*Plum Vest*/, 16);
num2=3;
num3=15;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_0" /*Silver Plaid Vest*/, 16);
num2=4;
num3=0;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_1" /*Ash Vest*/, 16);
num2=4;
num3=1;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_2" /*Navy Vest*/, 16);
num2=4;
num3=2;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_3" /*Colorful Plaid Vest*/, 16);
num2=4;
num3=3;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_4" /*Beige Vest*/, 16);
num2=4;
num3=4;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_5" /*Black Vest*/, 16);
num2=4;
num3=5;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_6" /*Gray Plaid Vest*/, 16);
num2=4;
num3=6;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_7" /*Jade Plaid Vest*/, 16);
num2=4;
num3=7;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_8" /*Beige Plaid Vest*/, 16);
num2=4;
num3=8;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_9" /*Brown Plaid Vest*/, 16);
num2=4;
num3=9;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_10" /*Brown Vest*/, 16);
num2=4;
num3=10;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_11" /*White Plaid Vest*/, 16);
num2=4;
num3=11;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_12" /*Pearl Plaid Vest*/, 16);
num2=4;
num3=12;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_13" /*Warm Gray Vest*/, 16);
num2=4;
num3=13;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_14" /*Topaz Vest*/, 16);
num2=4;
num3=14;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_15" /*Plum Vest*/, 16);
num2=4;
num3=15;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_5_0" /*White Shirt*/, 16);
num2=5;
num3=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_6_0" /*White Shirt*/, 16);
num2=6;
num3=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_6_1" /*Two-Tone Shirt*/, 16);
num2=6;
num3=1;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_7_0" /*Charcoal Hoodie*/, 16);
num2=7;
num3=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_8_0" /*White T-Shirt*/, 16);
num2=8;
num3=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_9_0" /*Blue Shirt*/, 16);
num2=9;
num3=0;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_0" /*White T-Shirt*/, 16);
num2=10;
num3=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_1" /*Crevis T-Shirt*/, 16);
num2=10;
num3=1;
num=48;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_2" /*Yeti T-Shirt*/, 16);
num2=10;
num3=2;
num=35;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_3" /*Sweatbox T-Shirt*/, 16);
num2=10;
num3=3;
num=32;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_4" /*Trey Baker T-Shirt*/, 16);
num2=10;
num3=4;
num=35;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_5" /*Black T-Shirt*/, 16);
num2=10;
num3=5;
num=48;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_6" /*Fruntalot T-Shirt*/, 16);
num2=10;
num3=6;
num=52;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_7" /*Kingz of Los Santos T-Shirt*/, 16);
num2=10;
num3=7;
num=38;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_8" /*Ten Off The Chain T-Shirt*/, 16);
num2=10;
num3=8;
num=42;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_9" /*Gray T-Shirt*/, 16);
num2=10;
num3=9;
num=38;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_10" /*Green T-Shirt*/, 16);
num2=10;
num3=10;
num=35;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_11" /*Camo T-Shirt*/, 16);
num2=10;
num3=11;
num=48;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_12" /*Yeti Rainbow T-Shirt*/, 16);
num2=10;
num3=12;
num=42;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_13" /*Feud Banded T-Shirt*/, 16);
num2=10;
num3=13;
num=45;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_14" /*Yogarishima T-Shirt*/, 16);
num2=10;
num3=14;
num=45;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_15" /*Feud Gray T-Shirt*/, 16);
num2=10;
num3=15;
num=49;
break;
default:
func_95(num6, iParam0, 63, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_117(int iParam0) // Position - 0x14D9B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=7;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_95(num6, iParam0, 1, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_118(int iParam0) // Position - 0x14E0E{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=1;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_0_0" /*Clean Shave*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_1_0" /*Full Van Dyke*/, 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_2_0" /*Methodical*/, 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_3_0" /*Full Spartan*/, 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_4_0" /*Stubble*/, 16);
num2=4;
num3=0;
break;
default:
func_95(num6, iParam0, 5, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_119(int iParam0) // Position - 0x14EDE{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=10;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=1;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=2;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=3;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=4;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=5;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=1;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=2;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=3;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=4;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=5;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=6;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=1;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=2;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=3;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=4;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=5;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=6;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=7;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=8;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=9;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=10;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=11;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=12;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=13;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=14;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=15;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=1;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=2;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=3;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=4;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=5;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=6;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=1;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=2;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=3;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=4;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=5;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=6;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=7;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=1;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=2;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=3;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
break;
default:
func_95(num6, iParam0, 53, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_120(int iParam0) // Position - 0x153D9{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=9;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
num2=5;
num3=0;
num=125;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
num2=5;
num3=1;
num=150;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
num2=5;
num3=2;
num=175;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
num2=5;
num3=3;
num=85;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
num2=5;
num3=4;
num=150;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
num2=5;
num3=5;
num=175;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
break;
default:
func_95(num6, iParam0, 12, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_121(int iParam0) // Position - 0x1556A{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=8;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_9_0" /*Bandana*/, 16);
num2=9;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_0" /*Silver Tie*/, 16);
num2=11;
num3=0;
num=195;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_1" /*Gold Tie*/, 16);
num2=11;
num3=1;
num=195;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_2" /*Cream Tie*/, 16);
num2=11;
num3=2;
num=195;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_3" /*Blue Diamond Tie*/, 16);
num2=11;
num3=3;
num=250;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_4" /*Blue Spotted Tie*/, 16);
num2=11;
num3=4;
num=250;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_5" /*White Spotted Tie*/, 16);
num2=11;
num3=5;
num=250;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_6" /*Dark Gray Tie*/, 16);
num2=11;
num3=6;
num=195;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_7" /*Gray Striped Tie*/, 16);
num2=11;
num3=7;
num=250;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_8" /*Silver Striped Tie*/, 16);
num2=11;
num3=8;
num=250;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_9" /*Red Striped Tie*/, 16);
num2=11;
num3=9;
num=250;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_10" /*Bronze Striped Tie*/, 16);
num2=11;
num3=10;
num=250;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_11" /*White Diamond Tie*/, 16);
num2=11;
num3=11;
num=195;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_12" /*Black Diamond Tie*/, 16);
num2=11;
num3=12;
num=250;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
num2=15;
num3=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
num2=15;
num3=1;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
num2=15;
num3=2;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
num2=15;
num3=3;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
num2=15;
num3=4;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
num2=15;
num3=5;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
num2=15;
num3=6;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
num2=15;
num3=7;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
num2=15;
num3=8;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
num2=15;
num3=9;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
num2=15;
num3=10;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
num2=15;
num3=11;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
num2=15;
num3=12;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
num2=15;
num3=13;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
num2=15;
num3=14;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
num2=15;
num3=15;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
num2=16;
num3=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
num2=16;
num3=1;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
num2=16;
num3=2;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
num2=16;
num3=3;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
num2=16;
num3=4;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
num2=16;
num3=5;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
num2=16;
num3=6;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
num2=16;
num3=7;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
num2=16;
num3=8;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
num2=16;
num3=9;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
num2=16;
num3=10;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
num2=16;
num3=11;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
num2=16;
num3=12;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
num2=16;
num3=13;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
num2=16;
num3=14;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
num2=16;
num3=15;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
num2=17;
num3=0;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
num2=17;
num3=1;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
num2=17;
num3=2;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
num2=17;
num3=3;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
num2=17;
num3=4;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
num2=17;
num3=5;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
num2=17;
num3=6;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
num2=17;
num3=7;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
num2=17;
num3=8;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
num2=17;
num3=9;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
num2=17;
num3=10;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
num2=17;
num3=11;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
num2=17;
num3=12;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
num2=17;
num3=13;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
num2=17;
num3=14;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
num2=17;
num3=15;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=18;
num3=0;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=19;
num3=0;
break;
default:
func_95(num6, iParam0, 77, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_122(int iParam0) // Position - 0x15D59{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=5;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=1;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
default:
func_95(num6, iParam0, 7, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_123(int iParam0) // Position - 0x15E62{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=6;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_0" /*White Athletic Shoes*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_1" /*All White Athletic Shoes*/, 16);
num2=0;
num3=1;
num=80;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_2" /*Charcoal Two-Tone Athletic Shoes*/, 16);
num2=0;
num3=2;
num=80;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_3" /*Yellow Athletic Shoes*/, 16);
num2=0;
num3=3;
num=89;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_4" /*Gray Athletic Shoes*/, 16);
num2=0;
num3=4;
num=45;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_5" /*Black Two-Tone Athletic Shoes*/, 16);
num2=0;
num3=5;
num=35;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_6" /*Gray Two-Tone Athletic Shoes*/, 16);
num2=0;
num3=6;
num=89;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_7" /*Lemon Accent Athletic Shoes*/, 16);
num2=0;
num3=7;
num=95;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_8" /*Two-Tone Athletic Shoes*/, 16);
num2=0;
num3=8;
num=115;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_9" /*Cyan Athletic Shoes*/, 16);
num2=0;
num3=9;
num=40;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_10" /*Cyan Accent Athletic Shoes*/, 16);
num2=0;
num3=10;
num=145;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_11" /*Fluorescent Athletic Shoes*/, 16);
num2=0;
num3=11;
num=145;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_01_0" /*Work Boots*/, 16);
num2=1;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=1;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_0" /*Desert Round-Toe Boots*/, 16);
num2=6;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_1" /*Coffee Round-Toe Boots*/, 16);
num2=6;
num3=1;
num=180;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_2" /*Chocolate Round-Toe Boots*/, 16);
num2=6;
num3=2;
num=80;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_3" /*Gray Round-Toe Boots*/, 16);
num2=6;
num3=3;
num=200;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_4" /*Slate Round-Toe Boots*/, 16);
num2=6;
num3=4;
num=220;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_5" /*Copper Round-Toe Boots*/, 16);
num2=6;
num3=5;
num=235;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_0" /*Gray Snake Shoes*/, 16);
num2=8;
num3=0;
num=870;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_1" /*Black Shoes*/, 16);
num2=8;
num3=1;
num=870;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_2" /*White Snake Shoes*/, 16);
num2=8;
num3=2;
num=870;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_3" /*Gray Crocodile Shoes*/, 16);
num2=8;
num3=3;
num=1275;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_4" /*Alligator Shoes*/, 16);
num2=8;
num3=4;
num=1275;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_5" /*Brown Crocodile Shoes*/, 16);
num2=8;
num3=5;
num=1275;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_6" /*Rattlesnake Shoes*/, 16);
num2=8;
num3=6;
num=1275;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_7" /*Gray Python Shoes*/, 16);
num2=8;
num3=7;
num=1275;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_8" /*Two-Tone Crocodile Shoes*/, 16);
num2=8;
num3=8;
num=1275;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_10_0" /*Black Brogues*/, 16);
num2=10;
num3=0;
flag=true;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_0" /*Two-Tone Sneakers*/, 16);
num2=11;
num3=0;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_1" /*Orange Sneakers*/, 16);
num2=11;
num3=1;
num=50;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_2" /*Black Sneakers*/, 16);
num2=11;
num3=2;
num=50;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_3" /*Desert Green Sneakers*/, 16);
num2=11;
num3=3;
num=50;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_4" /*Mint Sneakers*/, 16);
num2=11;
num3=4;
num=50;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_5" /*Freeway Sneakers*/, 16);
num2=11;
num3=5;
num=50;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_6" /*Animal Fashion Sneakers*/, 16);
num2=11;
num3=6;
num=50;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_7" /*Feud Classic Sneakers*/, 16);
num2=11;
num3=7;
num=50;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_8" /*Cacao Blend Sneakers*/, 16);
num2=11;
num3=8;
num=50;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_9" /*Magnetics Sneakers*/, 16);
num2=11;
num3=9;
num=50;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_10" /*Blue Sneakers*/, 16);
num2=11;
num3=10;
num=50;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_11" /*White Sneakers*/, 16);
num2=11;
num3=11;
num=50;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_12" /*Winter Camo Sneakers*/, 16);
num2=11;
num3=12;
num=50;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_13" /*Forest Camo Sneakers*/, 16);
num2=11;
num3=13;
num=50;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_14" /*Soft Seas Sneakers*/, 16);
num2=11;
num3=14;
num=50;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_15" /*Latte Sneakers*/, 16);
num2=11;
num3=15;
num=50;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_0" /*White Skate Sneakers*/, 16);
num2=12;
num3=0;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_1" /*Green Skate Sneakers*/, 16);
num2=12;
num3=1;
num=25;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_2" /*Two-Tone Skate Sneakers*/, 16);
num2=12;
num3=2;
num=20;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_3" /*Black Skate Sneakers*/, 16);
num2=12;
num3=3;
num=24;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_4" /*Blue Skate Sneakers*/, 16);
num2=12;
num3=4;
num=25;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_5" /*Orange Accent Skate Sneakers*/, 16);
num2=12;
num3=5;
num=27;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_6" /*Red Skate Sneakers*/, 16);
num2=12;
num3=6;
num=29;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_7" /*Orange Skate Sneakers*/, 16);
num2=12;
num3=7;
num=27;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_8" /*Mocha Skate Sneakers*/, 16);
num2=12;
num3=8;
num=25;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_9" /*Black Skate Sneakers*/, 16);
num2=12;
num3=9;
num=30;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_10" /*Fresh Skate Sneakers*/, 16);
num2=12;
num3=10;
num=28;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_11" /*Green Skate Sneakers*/, 16);
num2=12;
num3=11;
num=30;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_13_0" /*Black Oxfords*/, 16);
num2=13;
num3=0;
flag=true;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_0" /*Gray Skate Shoes*/, 16);
num2=14;
num3=0;
num=155;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_1" /*White Skate Shoes*/, 16);
num2=14;
num3=1;
num=155;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_2" /*Chestnut Skate Shoes*/, 16);
num2=14;
num3=2;
num=165;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_3" /*Jade Accent Skate Shoes*/, 16);
num2=14;
num3=3;
num=170;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_4" /*Two-Tone Skate Shoes*/, 16);
num2=14;
num3=4;
num=160;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_5" /*Red Piped Skate Shoes*/, 16);
num2=14;
num3=5;
num=165;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_6" /*Red Skate Shoes*/, 16);
num2=14;
num3=6;
num=170;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_7" /*Beige Skate Shoes*/, 16);
num2=14;
num3=7;
num=160;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_0" /*Black Leather Loafers*/, 16);
num2=16;
num3=0;
num=720;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_1" /*Gray Leather Loafers*/, 16);
num2=16;
num3=1;
num=680;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_2" /*Cream Leather Loafers*/, 16);
num2=16;
num3=2;
num=650;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_3" /*Brown Leather Loafers*/, 16);
num2=16;
num3=3;
num=670;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_4" /*White Leather Loafers*/, 16);
num2=16;
num3=4;
num=700;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_5" /*Russet Leather Loafers*/, 16);
num2=16;
num3=5;
num=680;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_6" /*White Snakeskin Loafers*/, 16);
num2=16;
num3=6;
num=720;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_7" /*Rattlesnake Loafers*/, 16);
num2=16;
num3=7;
num=740;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_8" /*Brown Snakeskin Loafers*/, 16);
num2=16;
num3=8;
num=760;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_9" /*Zebra Two-Tone Loafers*/, 16);
num2=16;
num3=9;
num=780;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_10" /*Pale Reptile Loafers*/, 16);
num2=16;
num3=10;
num=750;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_11" /*Tan Alligator Loafers*/, 16);
num2=16;
num3=11;
num=700;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_0" /*All Black Oxfords*/, 16);
num2=17;
num3=0;
num=790;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_1" /*Chocolate Oxfords*/, 16);
num2=17;
num3=1;
num=750;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_2" /*Chestnut Oxfords*/, 16);
num2=17;
num3=2;
num=860;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_3" /*Tan Oxfords*/, 16);
num2=17;
num3=3;
num=750;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_4" /*White Oxfords*/, 16);
num2=17;
num3=4;
num=790;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_5" /*Ash Oxfords*/, 16);
num2=17;
num3=5;
num=840;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_6" /*Gray Two-Tone Oxfords*/, 16);
num2=17;
num3=6;
num=820;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_7" /*Beige Oxfords*/, 16);
num2=17;
num3=7;
num=800;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_8" /*Topaz Oxfords*/, 16);
num2=17;
num3=8;
num=850;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_9" /*Black Oxfords*/, 16);
num2=17;
num3=9;
num=870;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_10" /*Lime Oxfords*/, 16);
num2=17;
num3=10;
num=720;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_11" /*Hawthorn Oxfords*/, 16);
num2=17;
num3=11;
num=740;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_12" /*Coffee Oxfords*/, 16);
num2=17;
num3=12;
num=800;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_13" /*Gray Oxfords*/, 16);
num2=17;
num3=13;
num=750;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_14" /*Cream Oxfords*/, 16);
num2=17;
num3=14;
num=770;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_15" /*Navy Oxfords*/, 16);
num2=17;
num3=15;
num=860;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_0" /*Black Slip-Ons*/, 16);
num2=18;
num3=0;
num=850;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_1" /*Red Slip-Ons*/, 16);
num2=18;
num3=1;
num=800;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_2" /*Brown Slip-Ons*/, 16);
num2=18;
num3=2;
num=780;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_3" /*Green Stripe Slip-Ons*/, 16);
num2=18;
num3=3;
num=890;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_4" /*Green Slip-Ons*/, 16);
num2=18;
num3=4;
num=820;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_5" /*Copper Slip-Ons*/, 16);
num2=18;
num3=5;
num=840;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_6" /*Copper Two-Tone Slip-Ons*/, 16);
num2=18;
num3=6;
num=870;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_7" /*Navy Slip-Ons*/, 16);
num2=18;
num3=7;
num=930;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_8" /*Blue Slip-Ons*/, 16);
num2=18;
num3=8;
num=880;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_9" /*Beige Slip-Ons*/, 16);
num2=18;
num3=9;
num=900;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_10" /*White Slip-Ons*/, 16);
num2=18;
num3=10;
num=920;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_11" /*Tan Slip-Ons*/, 16);
num2=18;
num3=11;
num=970;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_12" /*Black Snakeskin Slip-Ons*/, 16);
num2=18;
num3=12;
num=990;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_13" /*Two-Tone Slip-Ons*/, 16);
num2=18;
num3=13;
num=960;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_14" /*Brown Snakeskin Slip-Ons*/, 16);
num2=18;
num3=14;
num=980;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_15" /*Gray Slip-Ons*/, 16);
num2=18;
num3=15;
num=950;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_0" /*Brown Wingtips*/, 16);
num2=19;
num3=0;
num=110;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_1" /*Navy Wingtips*/, 16);
num2=19;
num3=1;
num=115;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_2" /*Coffee Wingtips*/, 16);
num2=19;
num3=2;
num=120;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_3" /*Burgundy Wingtips*/, 16);
num2=19;
num3=3;
num=110;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_4" /*Blue Wingtips*/, 16);
num2=19;
num3=4;
num=125;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_5" /*Woodland Camo Wingtips*/, 16);
num2=19;
num3=5;
num=128;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_6" /*Black Wingtips*/, 16);
num2=19;
num3=6;
num=135;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_7" /*Tan Wingtips*/, 16);
num2=19;
num3=7;
num=130;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_8" /*Purple Wingtips*/, 16);
num2=19;
num3=8;
num=145;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_9" /*Brown Wingtips*/, 16);
num2=19;
num3=9;
num=110;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_10" /*Chocolate Wingtips*/, 16);
num2=19;
num3=10;
num=120;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_11" /*Green Wingtips*/, 16);
num2=19;
num3=11;
num=150;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_12" /*Ash Wingtips*/, 16);
num2=19;
num3=12;
num=125;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_13" /*Olive Wingtips*/, 16);
num2=19;
num3=13;
num=120;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_14" /*Two-Tone Wingtips*/, 16);
num2=19;
num3=14;
num=130;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_15" /*Yellow Wingtips*/, 16);
num2=19;
num3=15;
num=110;
break;
default:
func_95(num6, iParam0, 134, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_124(int iParam0) // Position - 0x16D85{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=4;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_0" /*Cream Cargo Shorts*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_1" /*Sand Cargo Shorts*/, 16);
num2=0;
num3=1;
num=32;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_2" /*Navy Cargo Shorts*/, 16);
num2=0;
num3=2;
num=38;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_3" /*Olive Cargo Shorts*/, 16);
num2=0;
num3=3;
num=44;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=1;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=2;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=3;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=4;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=5;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_2_0" /*Black Tuxedo Pants*/, 16);
num2=2;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_0" /*Gray Golf Pants*/, 16);
num2=6;
num3=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_1" /*Cream Golf Pants*/, 16);
num2=6;
num3=1;
num=690;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_2" /*Tan Plaid Golf Pants*/, 16);
num2=6;
num3=2;
num=720;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_3" /*Tartan Golf Pants*/, 16);
num2=6;
num3=3;
num=850;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_4" /*Charcoal Plaid Golf Pants*/, 16);
num2=6;
num3=4;
num=850;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_5" /*Dark Plaid Golf Pants*/, 16);
num2=6;
num3=5;
num=740;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_6" /*Brown Plaid Golf Pants*/, 16);
num2=6;
num3=6;
num=750;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_7" /*Slate Golf Pants*/, 16);
num2=6;
num3=7;
num=790;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=1;
flag=true;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_0" /*Slate Baggy Jeans*/, 16);
num2=8;
num3=0;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_1" /*Blue Baggy Jeans*/, 16);
num2=8;
num3=1;
num=145;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_2" /*Gray Baggy Jeans*/, 16);
num2=8;
num3=2;
num=140;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_3" /*Pale Blue Baggy Jeans*/, 16);
num2=8;
num3=3;
num=148;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_4" /*Black Baggy Jeans*/, 16);
num2=8;
num3=4;
num=150;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_5" /*Blue-Green Baggy Jeans*/, 16);
num2=8;
num3=5;
num=154;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_6" /*Faded Baggy Jeans*/, 16);
num2=8;
num3=6;
num=158;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_0" /*Beige Chinos*/, 16);
num2=11;
num3=0;
num=820;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_1" /*Olive Chinos*/, 16);
num2=11;
num3=1;
num=820;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_2" /*Black Chinos*/, 16);
num2=11;
num3=2;
num=850;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_3" /*Off-White Chinos*/, 16);
num2=11;
num3=3;
num=850;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_4" /*Gray Chinos*/, 16);
num2=11;
num3=4;
num=920;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_5" /*Navy Chinos*/, 16);
num2=11;
num3=5;
num=950;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_0" /*Silver Sweatpants*/, 16);
num2=13;
num3=0;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_1" /*Gray Sweatpants*/, 16);
num2=13;
num3=1;
num=45;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_2" /*Topaz Sweatpants*/, 16);
num2=13;
num3=2;
num=48;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_3" /*Ash Sweatpants*/, 16);
num2=13;
num3=3;
num=45;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_4" /*Slate Sweatpants*/, 16);
num2=13;
num3=4;
num=48;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_5" /*Olive Sweatpants*/, 16);
num2=13;
num3=5;
num=52;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_6" /*Jade Sweatpants*/, 16);
num2=13;
num3=6;
num=55;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_7" /*Dark Green Sweatpants*/, 16);
num2=13;
num3=7;
num=58;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_8" /*Teal Sweatpants*/, 16);
num2=13;
num3=8;
num=60;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_9" /*Brown Sweatpants*/, 16);
num2=13;
num3=9;
num=58;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_10" /*Kingz Green Sweatpants*/, 16);
num2=13;
num3=10;
num=62;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_11" /*Gray Stripe Sweatpants*/, 16);
num2=13;
num3=11;
num=65;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_14_0" /*White Shorts*/, 16);
num2=14;
num3=0;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_0" /*Gray Plaid Pants*/, 16);
num2=15;
num3=0;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_1" /*Silver Plaid Pants*/, 16);
num2=15;
num3=1;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_2" /*Charcoal Plaid Pants*/, 16);
num2=15;
num3=2;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_3" /*Tan Plaid Pants*/, 16);
num2=15;
num3=3;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_4" /*Charcoal Pants*/, 16);
num2=15;
num3=4;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_5" /*Ash Pants*/, 16);
num2=15;
num3=5;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_6" /*Beige Pants*/, 16);
num2=15;
num3=6;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_7" /*Cream Pants*/, 16);
num2=15;
num3=7;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_8" /*Navy Plaid Pants*/, 16);
num2=15;
num3=8;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_9" /*Off-White Pants*/, 16);
num2=15;
num3=9;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_10" /*White Pants*/, 16);
num2=15;
num3=10;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_11" /*Subtle Blue Pants*/, 16);
num2=15;
num3=11;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_12" /*Navy Pants*/, 16);
num2=15;
num3=12;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_13" /*Rust Pants*/, 16);
num2=15;
num3=13;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_14" /*Green Pants*/, 16);
num2=15;
num3=14;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_15" /*Tan Pants*/, 16);
num2=15;
num3=15;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_16_0" /*Combat Pants*/, 16);
num2=16;
num3=0;
flag=true;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=16;
num3=1;
flag=true;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
flag=true;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_0" /*White Boxers*/, 16);
num2=18;
num3=0;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_1" /*Gray Boxers*/, 16);
num2=18;
num3=1;
num=160;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_2" /*Black Boxers*/, 16);
num2=18;
num3=2;
num=180;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_3" /*Kings Ash Boxers*/, 16);
num2=18;
num3=3;
num=180;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_4" /*Feud Green Boxers*/, 16);
num2=18;
num3=4;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_5" /*Feud White Boxers*/, 16);
num2=18;
num3=5;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_19_0" /*Black Tuxedo Pants*/, 16);
num2=19;
num3=0;
flag=true;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_0" /*Indigo Jeans*/, 16);
num2=20;
num3=0;
num=118;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_1" /*Black Jeans*/, 16);
num2=20;
num3=1;
num=120;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_2" /*Gray Faded Jeans*/, 16);
num2=20;
num3=2;
num=128;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_3" /*Navy Jeans*/, 16);
num2=20;
num3=3;
num=128;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_4" /*Brown Jeans*/, 16);
num2=20;
num3=4;
num=130;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_5" /*Blue Jeans*/, 16);
num2=20;
num3=5;
num=145;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_6" /*Olive Jeans*/, 16);
num2=20;
num3=6;
num=138;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_7" /*Black Faded Jeans*/, 16);
num2=20;
num3=7;
num=132;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_8" /*Coffee Jeans*/, 16);
num2=20;
num3=8;
num=148;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_0" /*Indigo Skinny Jeans*/, 16);
num2=21;
num3=0;
num=118;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_1" /*Black Skinny Jeans*/, 16);
num2=21;
num3=1;
num=118;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_2" /*Aqua Skinny Jeans*/, 16);
num2=21;
num3=2;
num=118;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_3" /*Brown Skinny Jeans*/, 16);
num2=21;
num3=3;
num=129;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_4" /*Blue Skinny Jeans*/, 16);
num2=21;
num3=4;
num=135;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_5" /*Red Skinny Jeans*/, 16);
num2=21;
num3=5;
num=135;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_6" /*Gray Skinny Jeans*/, 16);
num2=21;
num3=6;
num=118;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_7" /*Green Skinny Jeans*/, 16);
num2=21;
num3=7;
num=118;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_8" /*Coffee Skinny Jeans*/, 16);
num2=21;
num3=8;
num=118;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_0" /*LS Panic Charcoal Shorts*/, 16);
num2=22;
num3=0;
num=55;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_1" /*LS Panic Yellow Shorts*/, 16);
num2=22;
num3=1;
num=55;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_2" /*Prolaps White Shorts*/, 16);
num2=22;
num3=2;
num=59;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_3" /*Prolaps Blue Shorts*/, 16);
num2=22;
num3=3;
num=59;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_4" /*LC Salamanders Red Shorts*/, 16);
num2=22;
num3=4;
num=65;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_5" /*LC Salamanders Green Shorts*/, 16);
num2=22;
num3=5;
num=65;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_6" /*LS Shrimps Gray Shorts*/, 16);
num2=22;
num3=6;
num=69;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_7" /*LS Shrimps White Shorts*/, 16);
num2=22;
num3=7;
num=69;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_8" /*LOB Gray Shorts*/, 16);
num2=22;
num3=8;
num=75;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_9" /*LOB Blue Shorts*/, 16);
num2=22;
num3=9;
num=75;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_10" /*LOB Green Shorts*/, 16);
num2=22;
num3=10;
num=65;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_11" /*LOB Tan Shorts*/, 16);
num2=22;
num3=11;
num=65;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_12" /*LOB Orange Shorts*/, 16);
num2=22;
num3=12;
num=65;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_13" /*LOB Pale Blue Shorts*/, 16);
num2=22;
num3=13;
num=65;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_0" /*Broker White Shorts*/, 16);
num2=23;
num3=0;
num=38;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_1" /*Broker Black Shorts*/, 16);
num2=23;
num3=1;
num=38;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_2" /*Broker Gray Shorts*/, 16);
num2=23;
num3=2;
num=28;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_3" /*Broker Navy Shorts*/, 16);
num2=23;
num3=3;
num=34;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_4" /*Broker Green Shorts*/, 16);
num2=23;
num3=4;
num=36;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_5" /*Broker Brown Shorts*/, 16);
num2=23;
num3=5;
num=32;
break;
default:
func_95(num6, iParam0, 117, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_125(int iParam0) // Position - 0x17A32{
if(iParam0 < 107) func_128(iParam0);
elseif(iParam0 < 227) func_127(iParam0);
else func_126(iParam0);
if(Global_78341[0 /*14*/].f_2==-1) func_95(3, iParam0, 318, -1);
return;
}


void func_126(int iParam0) // Position - 0x17A78{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 227:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_0" /*Gray Plaid Jacket*/, 16);
num2=23;
num3=0;
num5=3;
break;
case 228:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_1" /*Ash Plaid Jacket*/, 16);
num2=23;
num3=1;
num5=3;
break;
case 229:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_2" /*Charcoal Plaid Jacket*/, 16);
num2=23;
num3=2;
num5=3;
break;
case 230:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_3" /*Tan Plaid Jacket*/, 16);
num2=23;
num3=3;
num5=3;
break;
case 231:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_4" /*Slate Jacket*/, 16);
num2=23;
num3=4;
num5=3;
break;
case 232:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_5" /*Silver Jacket*/, 16);
num2=23;
num3=5;
num5=3;
break;
case 233:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_6" /*Stone Jacket*/, 16);
num2=23;
num3=6;
num5=3;
break;
case 234:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_7" /*Cream Jacket*/, 16);
num2=23;
num3=7;
num5=3;
break;
case 235:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_8" /*Navy Plaid Piped Jacket*/, 16);
num2=23;
num3=8;
num5=3;
break;
case 236:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_9" /*Off-White Jacket*/, 16);
num2=23;
num3=9;
num5=3;
break;
case 237:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_10" /*Red Piped Jacket*/, 16);
num2=23;
num3=10;
num5=3;
break;
case 238:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_11" /*Gray Piped Jacket*/, 16);
num2=23;
num3=11;
num5=3;
break;
case 239:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_12" /*Navy Jacket*/, 16);
num2=23;
num3=12;
num5=3;
break;
case 240:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_13" /*Russet Piped Jacket*/, 16);
num2=23;
num3=13;
num5=3;
break;
case 241:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_14" /*Green Jacket*/, 16);
num2=23;
num3=14;
num5=3;
break;
case 242:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_15" /*Beige Jacket*/, 16);
num2=23;
num3=15;
num5=3;
break;
case 243:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_0" /*Navy Plaid Vest*/, 16);
num2=24;
num3=0;
num=2200;
num5=3;
break;
case 244:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_1" /*Gray Plaid Vest*/, 16);
num2=24;
num3=1;
num=2200;
num5=3;
break;
case 245:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_2" /*Silver Plaid Vest*/, 16);
num2=24;
num3=2;
num=2200;
num5=3;
break;
case 246:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_3" /*Charcoal Vest*/, 16);
num2=24;
num3=3;
num=2200;
num5=3;
break;
case 247:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_4" /*Plum Plaid Vest*/, 16);
num2=24;
num3=4;
num=2200;
num5=3;
break;
case 248:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_5" /*All Ash Vest*/, 16);
num2=24;
num3=5;
num=2200;
num5=3;
break;
case 249:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_6" /*Silverback Vest*/, 16);
num2=24;
num3=6;
num=2200;
num5=3;
break;
case 250:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_7" /*Gray Subtle Plaid Vest*/, 16);
num2=24;
num3=7;
num=2200;
num5=3;
break;
case 251:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_8" /*Green Plaid Vest*/, 16);
num2=24;
num3=8;
num=2200;
num5=3;
break;
case 252:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_9" /*Ash Plaid Vest*/, 16);
num2=24;
num3=9;
num=2200;
num5=3;
break;
case 253:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_10" /*Stone Plaid Vest*/, 16);
num2=24;
num3=10;
num=2200;
num5=3;
break;
case 254:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_11" /*Charcoal Plaid Vest*/, 16);
num2=24;
num3=11;
num=2200;
num5=3;
break;
case 255:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_12" /*White Vest*/, 16);
num2=24;
num3=12;
num=2200;
num5=3;
break;
case 256:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_13" /*Gray Vest*/, 16);
num2=24;
num3=13;
num=2200;
num5=3;
break;
case 257:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_14" /*Silver Light Plaid Vest*/, 16);
num2=24;
num3=14;
num=2200;
num5=3;
break;
case 258:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_15" /*All Silver Vest*/, 16);
num2=24;
num3=15;
num=2200;
num5=3;
break;
case 259:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_25_0" /*Gray Tuxedo Jacket*/, 16);
num2=25;
num3=0;
flag=true;
num5=3;
break;
case 260:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=0;
num5=1;
break;
case 261:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_0" /*Brown Shooting Vest*/, 16);
num2=27;
num3=0;
num=150;
break;
case 262:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_1" /*Woodland Shooting Vest*/, 16);
num2=27;
num3=1;
num=160;
break;
case 263:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_2" /*Taupe Shooting Vest*/, 16);
num2=27;
num3=2;
num=150;
break;
case 264:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_3" /*Brown Woven Shooting Vest*/, 16);
num2=27;
num3=3;
num=150;
break;
case 265:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_4" /*Field Shooting Vest*/, 16);
num2=27;
num3=4;
num=160;
break;
case 266:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_5" /*Forest Shooting Vest*/, 16);
num2=27;
num3=5;
num=160;
break;
case 267:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_0" /*Silver Hoodie*/, 16);
num2=28;
num3=0;
num=88;
break;
case 268:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_1" /*Ammu-Nation Camo Hoodie*/, 16);
num2=28;
num3=1;
num=60;
break;
case 269:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_2" /*LSGC Gray Hoodie*/, 16);
num2=28;
num3=2;
num=70;
break;
case 270:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_3" /*LSGC Urban Hoodie*/, 16);
num2=28;
num3=3;
num=80;
break;
case 271:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_4" /*LSGC Forest Hoodie*/, 16);
num2=28;
num3=4;
num=90;
break;
case 272:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_5" /*Ammu-Nation A Hoodie*/, 16);
num2=28;
num3=5;
num=80;
break;
case 273:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_6" /*Blauser Hoodie*/, 16);
num2=28;
num3=6;
num=70;
break;
case 274:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_7" /*Penetrators Orange Hoodie*/, 16);
num2=28;
num3=7;
num=95;
break;
case 275:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_8" /*Crevis Fluorescent Hoodie*/, 16);
num2=28;
num3=8;
num=105;
break;
case 276:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_9" /*Blue Hoodie*/, 16);
num2=28;
num3=9;
num=95;
break;
case 277:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_10" /*Green Hoodie*/, 16);
num2=28;
num3=10;
num=110;
break;
case 278:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_11" /*LS Jardineros Hoodie*/, 16);
num2=28;
num3=11;
num=98;
break;
case 279:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_12" /*Ash 18 Hoodie*/, 16);
num2=28;
num3=12;
num=88;
break;
case 280:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_13" /*Red Mist XI Hoodie*/, 16);
num2=28;
num3=13;
num=98;
break;
case 281:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_14" /*Eris Charcoal Hoodie*/, 16);
num2=28;
num3=14;
num=110;
break;
case 282:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_15" /*OG Hoodie*/, 16);
num2=28;
num3=15;
num=98;
break;
case 283:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_0" /*White V Neck T-Shirt*/, 16);
num2=29;
num3=0;
num=250;
break;
case 284:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_1" /*Ash V Neck T-Shirt*/, 16);
num2=29;
num3=1;
num=270;
break;
case 285:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_2" /*Black V Neck T-Shirt*/, 16);
num2=29;
num3=2;
num=280;
break;
case 286:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_3" /*Brown V Neck T-Shirt*/, 16);
num2=29;
num3=3;
num=275;
break;
case 287:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_4" /*Olive V Neck T-Shirt*/, 16);
num2=29;
num3=4;
num=290;
break;
case 288:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_5" /*Corkers V Neck T-Shirt*/, 16);
num2=29;
num3=5;
num=35;
break;
case 289:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_6" /*Feud V Neck T-Shirt*/, 16);
num2=29;
num3=6;
num=35;
break;
case 290:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_7" /*Magnetics V Neck T-Shirt*/, 16);
num2=29;
num3=7;
num=35;
break;
case 291:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_8" /*Mint V Neck T-Shirt*/, 16);
num2=29;
num3=8;
num=295;
break;
case 292:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_9" /*Harsh Souls V Neck T-Shirt*/, 16);
num2=29;
num3=9;
num=35;
break;
case 293:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_10" /*Trey Baker V Neck T-Shirt*/, 16);
num2=29;
num3=10;
num=35;
break;
case 294:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_11" /*Fuque V Neck T-Shirt*/, 16);
num2=29;
num3=11;
num=35;
break;
case 295:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_12" /*Fellowship V Neck T-Shirt*/, 16);
num2=29;
num3=12;
break;
case 296:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_0" /*Green Cardigan*/, 16);
num2=30;
num3=0;
num=1750;
break;
case 297:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_1" /*Gray Cardigan*/, 16);
num2=30;
num3=1;
num=1920;
break;
case 298:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_2" /*Slate Cardigan*/, 16);
num2=30;
num3=2;
num=1890;
break;
case 299:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_3" /*Blue Cardigan*/, 16);
num2=30;
num3=3;
num=1850;
break;
case 300:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_4" /*Red Cardigan*/, 16);
num2=30;
num3=4;
num=1750;
break;
case 301:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_5" /*Charcoal Cardigan*/, 16);
num2=30;
num3=5;
num=1990;
break;
case 302:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_6" /*White Cardigan*/, 16);
num2=30;
num3=6;
num=1820;
break;
case 303:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_7" /*Silver Cardigan*/, 16);
num2=30;
num3=7;
num=1990;
break;
case 304:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_8" /*Pale Blue Cardigan*/, 16);
num2=30;
num3=8;
num=1920;
break;
case 305:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_9" /*Aqua Cardigan*/, 16);
num2=30;
num3=9;
num=1850;
break;
case 306:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_10" /*Gray Two-Tone Cardigan*/, 16);
num2=30;
num3=10;
num=1990;
break;
case 307:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_11" /*Pink Cardigan*/, 16);
num2=30;
num3=11;
num=1790;
break;
case 308:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_12" /*Yellow Cardigan*/, 16);
num2=30;
num3=12;
num=1790;
break;
case 309:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_0" /*LS Panic Gray Jersey*/, 16);
num2=31;
num3=0;
num=69;
break;
case 310:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_1" /*LS Panic Yellow Jersey*/, 16);
num2=31;
num3=1;
num=75;
break;
case 311:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_2" /*Penetrators White Jersey*/, 16);
num2=31;
num3=2;
num=75;
break;
case 312:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_3" /*Penetrators Blue Jersey*/, 16);
num2=31;
num3=3;
num=79;
break;
case 313:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_4" /*LC Salamanders Red Jersey*/, 16);
num2=31;
num3=4;
num=79;
break;
case 314:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_5" /*LC Salamanders Green Jersey*/, 16);
num2=31;
num3=5;
num=89;
break;
case 315:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_6" /*LS Shrimps Gray Jersey*/, 16);
num2=31;
num3=6;
num=85;
break;
case 316:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_7" /*LS Shrimps White Jersey*/, 16);
num2=31;
num3=7;
num=85;
break;
case 317:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_8" /*Uptown Riders Jersey*/, 16);
num2=31;
num3=8;
break;
default:
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_127(int iParam0) // Position - 0x1851D{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_0" /*Snake A Jacket*/, 16);
num2=12;
num3=0;
num=195;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_1" /*Eagle 69 Jacket*/, 16);
num2=12;
num3=1;
num=420;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_2" /*LS Corkers 33 Jacket*/, 16);
num2=12;
num3=2;
num=390;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_3" /*LSP 41 Jacket*/, 16);
num2=12;
num3=3;
num=450;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_4" /*LS Corkers E Jacket*/, 16);
num2=12;
num3=4;
num=400;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_5" /*LS Squeezers Jacket*/, 16);
num2=12;
num3=5;
num=390;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_6" /*The Feud 69 Jacket*/, 16);
num2=12;
num3=6;
num=570;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_7" /*LS Pounders Jacket*/, 16);
num2=12;
num3=7;
num=390;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_8" /*SA Jacket*/, 16);
num2=12;
num3=8;
num=470;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_9" /*Redwood A Jacket*/, 16);
num2=12;
num3=9;
num=390;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_10" /*Uptown Riders Jacket*/, 16);
num2=12;
num3=10;
num=520;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_11" /*The Feud Black Jacket*/, 16);
num2=12;
num3=11;
num=490;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_12" /*Yeti Jacket*/, 16);
num2=12;
num3=12;
num=490;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_13" /*LSP 71 Jacket*/, 16);
num2=12;
num3=13;
num=590;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_14" /*Dust Devils Jacket*/, 16);
num2=12;
num3=14;
num=560;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_15" /*SA 56 Jacket*/, 16);
num2=12;
num3=15;
num=520;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_0" /*Gray Hoodie*/, 16);
num2=13;
num3=0;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_1" /*Kingz of Los Santos Hoodie*/, 16);
num2=13;
num3=1;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_2" /*LS Black Hoodie*/, 16);
num2=13;
num3=2;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_3" /*Dark Blue Hoodie*/, 16);
num2=13;
num3=3;
num=90;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_4" /*LS Mustard Hoodie*/, 16);
num2=13;
num3=4;
num=85;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_5" /*Crevis Hoodie*/, 16);
num2=13;
num3=5;
num=45;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_6" /*Dust Devils Hoodie*/, 16);
num2=13;
num3=6;
num=90;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_7" /*Feud Olive Hoodie*/, 16);
num2=13;
num3=7;
num=47;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_8" /*Eris Hoodie*/, 16);
num2=13;
num3=8;
num=45;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_9" /*Hinterland Hoodie*/, 16);
num2=13;
num3=9;
num=48;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_10" /*Feud Mint Hoodie*/, 16);
num2=13;
num3=10;
num=45;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_11" /*Penetrators Gray Hoodie*/, 16);
num2=13;
num3=11;
num=85;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_12" /*Ash Hoodie*/, 16);
num2=13;
num3=12;
num=45;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_13" /*Rearwall Hoodie*/, 16);
num2=13;
num3=13;
num=47;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_14" /*Trey Baker Hoodie*/, 16);
num2=13;
num3=14;
num=45;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_15" /*Feud Camo Hoodie*/, 16);
num2=13;
num3=15;
num=48;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_0" /*Gray Jacket*/, 16);
num2=14;
num3=0;
num=290;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_1" /*Charcoal Jacket*/, 16);
num2=14;
num3=1;
num=290;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_2" /*Silver Jacket*/, 16);
num2=14;
num3=2;
num=290;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_3" /*Olive Jacket*/, 16);
num2=14;
num3=3;
num=290;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_4" /*Brown Jacket*/, 16);
num2=14;
num3=4;
num=290;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_5" /*Desert Sand Jacket*/, 16);
num2=14;
num3=5;
num=290;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_6" /*Field Camo Jacket*/, 16);
num2=14;
num3=6;
num=65;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_7" /*Desert Camo Jacket*/, 16);
num2=14;
num3=7;
num=65;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_0" /*White T-Shirt*/, 16);
num2=15;
num3=0;
num=200;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_1" /*Gray T-Shirt*/, 16);
num2=15;
num3=1;
num=220;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_2" /*Slate T-Shirt*/, 16);
num2=15;
num3=2;
num=220;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_3" /*Jade T-Shirt*/, 16);
num2=15;
num3=3;
num=240;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_4" /*100% T-Shirt*/, 16);
num2=15;
num3=4;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_5" /*Navy T-Shirt*/, 16);
num2=15;
num3=5;
num=250;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_6" /*Black T-Shirt*/, 16);
num2=15;
num3=6;
num=260;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_7" /*LC Wrath T-Shirt*/, 16);
num2=15;
num3=7;
num=40;
break;
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_8" /*LOB T-Shirt*/, 16);
num2=15;
num3=8;
num=50;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_9" /*UCLS Bookworms T-Shirt*/, 16);
num2=15;
num3=9;
num=45;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_10" /*Los Santos Red T-Shirt*/, 16);
num2=15;
num3=10;
num=40;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_11" /*Queensbury Boxing T-Shirt*/, 16);
num2=15;
num3=11;
num=55;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_16_0" /*Black Shirt*/, 16);
num2=16;
num3=0;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_0" /*Blue Jacket*/, 16);
num2=17;
num3=0;
num=40;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_1" /*OG Slate Jacket*/, 16);
num2=17;
num3=1;
num=50;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_2" /*OG White Jacket*/, 16);
num2=17;
num3=2;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_3" /*Corkers Green Jacket*/, 16);
num2=17;
num3=3;
num=50;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_4" /*Deep Gray Jacket*/, 16);
num2=17;
num3=4;
num=50;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_5" /*Kingz Banded Jacket*/, 16);
num2=17;
num3=5;
num=50;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_6" /*Stank Forest Camo Jacket*/, 16);
num2=17;
num3=6;
num=50;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_7" /*Trey Baker Camo Jacket*/, 16);
num2=17;
num3=7;
num=50;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_8" /*Coffee Jacket*/, 16);
num2=17;
num3=8;
num=50;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_9" /*Plain Coffee Jacket*/, 16);
num2=17;
num3=9;
num=50;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_10" /*Fruntalot Green Jacket*/, 16);
num2=17;
num3=10;
num=50;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_11" /*Mocha Jacket*/, 16);
num2=17;
num3=11;
num=50;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_12" /*Brown Jacket*/, 16);
num2=17;
num3=12;
num=50;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_13" /*LS Snake Weave Jacket*/, 16);
num2=17;
num3=13;
num=50;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_14" /*Feud Animal Print Jacket*/, 16);
num2=17;
num3=14;
num=50;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_15" /*Fruntalot Techno Jacket*/, 16);
num2=17;
num3=15;
num=50;
break;
case 176:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_0" /*Gray Plaid Jacket*/, 16);
num2=18;
num3=0;
num5=3;
break;
case 177:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_1" /*Ash Plaid Jacket*/, 16);
num2=18;
num3=1;
num5=3;
break;
case 178:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_2" /*Charcoal Plaid Jacket*/, 16);
num2=18;
num3=2;
num5=3;
break;
case 179:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_3" /*Tan Plaid Jacket*/, 16);
num2=18;
num3=3;
num5=3;
break;
case 180:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_4" /*Slate Jacket*/, 16);
num2=18;
num3=4;
num5=3;
break;
case 181:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_5" /*Silver Jacket*/, 16);
num2=18;
num3=5;
num5=3;
break;
case 182:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_6" /*Stone Jacket*/, 16);
num2=18;
num3=6;
num5=3;
break;
case 183:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_7" /*Cream Jacket*/, 16);
num2=18;
num3=7;
num5=3;
break;
case 184:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_8" /*Navy Plaid Piped Jacket*/, 16);
num2=18;
num3=8;
num5=3;
break;
case 185:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_9" /*Off-White Jacket*/, 16);
num2=18;
num3=9;
num5=3;
break;
case 186:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_10" /*Red Piped Jacket*/, 16);
num2=18;
num3=10;
num5=3;
break;
case 187:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_11" /*Gray Piped Jacket*/, 16);
num2=18;
num3=11;
num5=3;
break;
case 188:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_12" /*Navy Jacket*/, 16);
num2=18;
num3=12;
num5=3;
break;
case 189:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_13" /*Russet Piped Jacket*/, 16);
num2=18;
num3=13;
num5=3;
break;
case 190:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_14" /*Green Jacket*/, 16);
num2=18;
num3=14;
num5=3;
break;
case 191:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_15" /*Beige Jacket*/, 16);
num2=18;
num3=15;
num5=3;
break;
case 192:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_0" /*Blue Striped Shirt*/, 16);
num2=19;
num3=0;
num=480;
num5=3;
break;
case 193:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_1" /*Beige Striped Shirt*/, 16);
num2=19;
num3=1;
num=440;
num5=3;
break;
case 194:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_2" /*Gray Shirt*/, 16);
num2=19;
num3=2;
num=440;
num5=3;
break;
case 195:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_3" /*Slate Shirt*/, 16);
num2=19;
num3=3;
num=520;
num5=3;
break;
case 196:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_4" /*Green Shirt*/, 16);
num2=19;
num3=4;
num=440;
num5=3;
break;
case 197:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_5" /*Picnic Plaid Shirt*/, 16);
num2=19;
num3=5;
num=440;
num5=3;
break;
case 198:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_6" /*White Shirt*/, 16);
num2=19;
num3=6;
num=480;
num5=3;
break;
case 199:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_7" /*Light Green Plaid Shirt*/, 16);
num2=19;
num3=7;
num=480;
num5=3;
break;
case 200:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_8" /*Pink Striped Shirt*/, 16);
num2=19;
num3=8;
num=480;
num5=3;
break;
case 201:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_9" /*Country Check Shirt*/, 16);
num2=19;
num3=9;
num=480;
num5=3;
break;
case 202:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_10" /*Off-White Striped Shirt*/, 16);
num2=19;
num3=10;
num=480;
num5=3;
break;
case 203:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_11" /*Russet Striped Shirt*/, 16);
num2=19;
num3=11;
num=480;
num5=3;
break;
case 204:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_12" /*Sea Green Plaid Shirt*/, 16);
num2=19;
num3=12;
num=520;
num5=3;
break;
case 205:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_13" /*Navy Shirt*/, 16);
num2=19;
num3=13;
num=520;
num5=3;
break;
case 206:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_14" /*Brown Check Shirt*/, 16);
num2=19;
num3=14;
num=520;
num5=3;
break;
case 207:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_15" /*Sand Check Shirt*/, 16);
num2=19;
num3=15;
num=440;
num5=3;
break;
case 208:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=20;
num3=0;
flag=true;
num5=4;
break;
case 209:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_0" /*Black Jacket*/, 16);
num2=21;
num3=0;
num=220;
break;
case 210:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_1" /*Sand Jacket*/, 16);
num2=21;
num3=1;
num=200;
break;
case 211:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_2" /*Teal Jacket*/, 16);
num2=21;
num3=2;
num=240;
break;
case 212:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_3" /*Gray Jacket*/, 16);
num2=21;
num3=3;
num=240;
break;
case 213:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_4" /*Gray Three-Way Jacket*/, 16);
num2=21;
num3=4;
num=260;
break;
case 214:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_5" /*Red Accent Jacket*/, 16);
num2=21;
num3=5;
num=275;
break;
case 215:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_6" /*Aqua Accent Jacket*/, 16);
num2=21;
num3=6;
num=275;
break;
case 216:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_7" /*Brown Two-Tone Jacket*/, 16);
num2=21;
num3=7;
num=280;
break;
case 217:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_8" /*White Jacket*/, 16);
num2=21;
num3=8;
num=280;
break;
case 218:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_9" /*Tan Two-Tone Jacket*/, 16);
num2=21;
num3=9;
num=280;
break;
case 219:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_10" /*Red Jacket*/, 16);
num2=21;
num3=10;
num=280;
break;
case 220:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_11" /*Olive Two-Tone Jacket*/, 16);
num2=21;
num3=11;
num=280;
break;
case 221:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_12" /*Three-Way Jacket*/, 16);
num2=21;
num3=12;
num=280;
break;
case 222:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_13" /*Ash Two-Tone Jacket*/, 16);
num2=21;
num3=13;
num=280;
break;
case 223:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_0" /*Navy Peacoat*/, 16);
num2=22;
num3=0;
num=3100;
num5=3;
break;
case 224:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_1" /*Gray Peacoat*/, 16);
num2=22;
num3=1;
num=2800;
num5=3;
break;
case 225:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_2" /*Brown Peacoat*/, 16);
num2=22;
num3=2;
num=2500;
num5=3;
break;
case 226:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_3" /*Black Peacoat*/, 16);
num2=22;
num3=3;
num=3000;
num5=3;
break;
default:
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_128(int iParam0) // Position - 0x1930B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_0" /*White Tank Top*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_1" /*Black Tank Top*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_2" /*Gray Tank Top*/, 16);
num2=0;
num3=2;
num=180;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_3" /*Feud Green Tank Top*/, 16);
num2=0;
num3=3;
num=22;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_4" /*Fruntalot Jade Tank Top*/, 16);
num2=0;
num3=4;
num=20;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_5" /*Fruntalot Brown Tank Top*/, 16);
num2=0;
num3=5;
num=18;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_6" /*Broker Blue Tank Top*/, 16);
num2=0;
num3=6;
num=19;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_7" /*Kingz Green Tank Top*/, 16);
num2=0;
num3=7;
num=22;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_8" /*Broker Gray Tank Top*/, 16);
num2=0;
num3=8;
num=20;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_9" /*Harsh Souls Tank Top*/, 16);
num2=0;
num3=9;
num=19;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_10" /*Sweatbox Tank Top*/, 16);
num2=0;
num3=10;
num=19;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_11" /*White Ringer Tank Top*/, 16);
num2=0;
num3=11;
num=18;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_12" /*Rearwall Tank Top*/, 16);
num2=0;
num3=12;
num=20;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_13" /*Feud 3 Tank Top*/, 16);
num2=0;
num3=13;
num=22;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_14" /*Kingz Charcoal Tank Top*/, 16);
num2=0;
num3=14;
num=19;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_15" /*Feud White Tank Top*/, 16);
num2=0;
num3=15;
num=22;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
num5=4;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=1;
flag=true;
num5=4;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=2;
flag=true;
num5=4;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=3;
flag=true;
num5=4;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=4;
flag=true;
num5=4;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=5;
flag=true;
num5=4;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_2_0" /*White Tuxedo Jacket*/, 16);
num2=2;
num3=0;
flag=true;
num5=3;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
num5=1;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_0" /*White OG T-Shirt*/, 16);
num2=4;
num3=0;
num=20;
num5=2;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_1" /*Black OG T-Shirt*/, 16);
num2=4;
num3=1;
num=22;
num5=2;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_2" /*Ash OG T-Shirt*/, 16);
num2=4;
num3=2;
num=20;
num5=2;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_3" /*LC Swingers OG T-Shirt*/, 16);
num2=4;
num3=3;
num=25;
num5=2;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_4" /*Corkers Red OG T-Shirt*/, 16);
num2=4;
num3=4;
num=23;
num5=2;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_5" /*Corkers Green OG T-Shirt*/, 16);
num2=4;
num3=5;
num=25;
num5=2;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_6" /*Uptown Riders OG T-Shirt*/, 16);
num2=4;
num3=6;
num=28;
num5=2;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_7" /*Feud White OG T-Shirt*/, 16);
num2=4;
num3=7;
num=26;
num5=2;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_8" /*Salamanders OG T-Shirt*/, 16);
num2=4;
num3=8;
num=24;
num5=2;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_9" /*LC Rampage OG T-Shirt*/, 16);
num2=4;
num3=9;
num=27;
num5=2;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_10" /*Dust Devils OG T-Shirt*/, 16);
num2=4;
num3=10;
num=29;
num5=2;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_11" /*LS Gray OG T-Shirt*/, 16);
num2=4;
num3=11;
num=28;
num5=2;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_12" /*Los Santos Black OG T-Shirt*/, 16);
num2=4;
num3=12;
num=25;
num5=2;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_13" /*Los Santos White OG T-Shirt*/, 16);
num2=4;
num3=13;
num=22;
num5=2;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_14" /*Pounders OG T-Shirt*/, 16);
num2=4;
num3=14;
num=27;
num5=2;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_15" /*Feud Black OG T-Shirt*/, 16);
num2=4;
num3=15;
num=29;
num5=2;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
num5=4;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_0" /*Pine Striped Sweater*/, 16);
num2=6;
num3=0;
num5=3;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_1" /*Yellow Sweater*/, 16);
num2=6;
num3=1;
num=1270;
num5=3;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_2" /*Blue Sweater*/, 16);
num2=6;
num3=2;
num=1270;
num5=3;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_3" /*Sand Striped Sweater*/, 16);
num2=6;
num3=3;
num=1270;
num5=3;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_4" /*Silver Sweater*/, 16);
num2=6;
num3=4;
num=1090;
num5=3;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_5" /*Gray Sweater*/, 16);
num2=6;
num3=5;
num=1090;
num5=3;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_6" /*Navy Argyle Sweater*/, 16);
num2=6;
num3=6;
num=1120;
num5=3;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_7" /*Sand Sweater*/, 16);
num2=6;
num3=7;
num=1120;
num5=3;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_8" /*Salmon Pink Sweater*/, 16);
num2=6;
num3=8;
num=1290;
num5=3;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_9" /*Turquoise Sweater*/, 16);
num2=6;
num3=9;
num=1290;
num5=3;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_10" /*Green Sweater*/, 16);
num2=6;
num3=10;
num=1320;
num5=3;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_11" /*Amethyst Sweater*/, 16);
num2=6;
num3=11;
num=1320;
num5=3;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_12" /*Yellow Argyle Sweater*/, 16);
num2=6;
num3=12;
num=1590;
num5=3;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_13" /*Gray Two-Tone Sweater*/, 16);
num2=6;
num3=13;
num=1590;
num5=3;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_14" /*Sand Argyle Sweater*/, 16);
num2=6;
num3=14;
num=1590;
num5=3;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_15" /*Charcoal Sweater*/, 16);
num2=6;
num3=15;
num=1320;
num5=3;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_0" /*Ash Shirt*/, 16);
num2=7;
num3=0;
num=98;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_1" /*Gray Shirt*/, 16);
num2=7;
num3=1;
num=98;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_2" /*Black Shirt*/, 16);
num2=7;
num3=2;
num=110;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_3" /*Silver Shirt*/, 16);
num2=7;
num3=3;
num=110;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_4" /*White Shirt*/, 16);
num2=7;
num3=4;
num=118;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_5" /*Olive Shirt*/, 16);
num2=7;
num3=5;
num=120;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_6" /*Navy Shirt*/, 16);
num2=7;
num3=6;
num=120;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_7" /*Red Shirt*/, 16);
num2=7;
num3=7;
num=129;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_8" /*Tan Check Shirt*/, 16);
num2=7;
num3=8;
num=125;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_9" /*Beige Gingham Shirt*/, 16);
num2=7;
num3=9;
num=125;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_10" /*Gray Gingham Shirt*/, 16);
num2=7;
num3=10;
num=129;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_11" /*Gray Check Shirt*/, 16);
num2=7;
num3=11;
num=129;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_12" /*Blue Shirt*/, 16);
num2=7;
num3=12;
num=135;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_13" /*Off-White Shirt*/, 16);
num2=7;
num3=13;
num=139;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_14" /*Pastel Check Shirt*/, 16);
num2=7;
num3=14;
num=145;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_15" /*Fruity Check Shirt*/, 16);
num2=7;
num3=15;
num=145;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_0" /*Blue Shirt*/, 16);
num2=8;
num3=0;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_1" /*Yellow Check Shirt*/, 16);
num2=8;
num3=1;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_2" /*Off-White Striped Shirt*/, 16);
num2=8;
num3=2;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_3" /*Off-White Shirt*/, 16);
num2=8;
num3=3;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_4" /*Red Check Shirt*/, 16);
num2=8;
num3=4;
num=30;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_5" /*Charcoal Shirt*/, 16);
num2=8;
num3=5;
num=38;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_6" /*Blue Check Shirt*/, 16);
num2=8;
num3=6;
num=32;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_7" /*Gingham Shirt*/, 16);
num2=8;
num3=7;
num=30;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_8" /*Aqua Check Shirt*/, 16);
num2=8;
num3=8;
num=33;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_9" /*Orange Shirt*/, 16);
num2=8;
num3=9;
num=35;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_10" /*Mint Check Shirt*/, 16);
num2=8;
num3=10;
num=35;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_11" /*Dark Gray Check Shirt*/, 16);
num2=8;
num3=11;
num=38;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_12" /*Purple Check Shirt*/, 16);
num2=8;
num3=12;
num=33;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_13" /*Olive Shirt*/, 16);
num2=8;
num3=13;
num=35;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_14" /*Cream Shirt*/, 16);
num2=8;
num3=14;
num=38;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_15" /*Fruity Check Shirt*/, 16);
num2=8;
num3=15;
num=32;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_0" /*White Longsleeve*/, 16);
num2=11;
num3=0;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_1" /*Gray Longsleeve*/, 16);
num2=11;
num3=1;
num=59;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_2" /*Black Longsleeve*/, 16);
num2=11;
num3=2;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_3" /*Ten Off Yellow Longsleeve*/, 16);
num2=11;
num3=3;
num=25;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_4" /*Kingz Of Los Santos Longsleeve*/, 16);
num2=11;
num3=4;
num=29;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_5" /*Yeti Rainbow Longsleeve*/, 16);
num2=11;
num3=5;
num=27;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_6" /*Ten Off Red Longsleeve*/, 16);
num2=11;
num3=6;
num=25;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_7" /*Trey Baker Longsleeve*/, 16);
num2=11;
num3=7;
num=27;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_8" /*Stank Striped Longsleeve*/, 16);
num2=11;
num3=8;
num=28;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_9" /*Feud Olive Longsleeve*/, 16);
num2=11;
num3=9;
num=30;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_10" /*Yeti Gray Longsleeve*/, 16);
num2=11;
num3=10;
num=29;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_11" /*Yogarishima Longsleeve*/, 16);
num2=11;
num3=11;
num=27;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_12" /*Yeti Camo Longsleeve*/, 16);
num2=11;
num3=12;
num=29;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_13" /*Crevis White Longsleeve*/, 16);
num2=11;
num3=13;
num=32;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_14" /*Yeti Blue Longsleeve*/, 16);
num2=11;
num3=14;
num=30;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_15" /*Uptown Ryders Longsleeve*/, 16);
num2=11;
num3=15;
num=28;
break;
default:
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_129(int iParam0) // Position - 0x19F4A{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=2;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_0" /*Fade*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_1" /*Triple Rails*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_2" /*Side Shaded*/, 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_3" /*Wavy Siderows*/, 16);
num2=0;
num3=3;
num5=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_4" /*Snakes*/, 16);
num2=0;
num3=4;
num5=3;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_5" /*Tramlines*/, 16);
num2=0;
num3=5;
num5=3;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_6" /*The King Fresh*/, 16);
num2=0;
num3=6;
num5=3;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_7" /*Star Kutz*/, 16);
num2=0;
num3=7;
num5=3;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_8" /*Tigerized*/, 16);
num2=0;
num3=8;
num5=3;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_9" /*Abstraction*/, 16);
num2=0;
num3=9;
num5=3;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_10" /*Shutters*/, 16);
num2=0;
num3=10;
num5=3;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_11" /*Berms*/, 16);
num2=0;
num3=11;
num5=3;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_12" /*Mellowplex*/, 16);
num2=0;
num3=12;
num5=3;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_13" /*The Feud*/, 16);
num2=0;
num3=13;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_14" /*Business on Top*/, 16);
num2=0;
num3=14;
num5=3;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_15" /*Wild Palm*/, 16);
num2=0;
num3=15;
num5=3;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_1_0" /*Lo Fro*/, 16);
num2=1;
num3=0;
num5=3;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_2_0" /*Blowout*/, 16);
num2=2;
num3=0;
num5=3;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_3_0" /*Cornrows*/, 16);
num2=3;
num3=0;
num5=3;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_4_0" /*Shape-up*/, 16);
num2=4;
num3=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
default:
func_95(num6, iParam0, 21, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_130(int iParam0) // Position - 0x1A1C2{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=0;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=8;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=9;
break;
default:
func_95(num6, iParam0, 10, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_131(int iParam0, int iParam1) // Position - 0x1A2FE{
switch (iParam0){
case 0:
func_148(iParam1);
break;
case 2:
func_147(iParam1);
break;
case 3:
func_144(iParam1);
break;
case 4:
func_143(iParam1);
break;
case 6:
func_142(iParam1);
break;
case 5:
func_141(iParam1);
break;
case 8:
func_140(iParam1);
break;
case 9:
func_139(iParam1);
break;
case 10:
func_138(iParam1);
break;
case 1:
func_137(iParam1);
break;
case 7:
func_136(iParam1);
break;
case 11:
func_135(iParam1);
break;
case 12:
func_134(iParam1);
break;
case 13:
func_133(iParam1);
break;
case 14:
func_132(iParam1);
break;
}
return;
}


void func_132(int iParam0) // Position - 0x1A3EE{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=14;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=8;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H1" /*Blue Baseball Cap*/, 16);
num2=1;
num3=0;
num4=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H2" /*White Hockey Mask*/, 16);
num2=2;
num3=0;
num=320;
num4=11;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
num4=0;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
num4=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
num4=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
num4=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
num4=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
num4=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
num4=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
num4=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
num4=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=1;
num4=0;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=2;
num4=0;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=3;
num4=0;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=4;
num4=0;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=5;
num4=0;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=6;
num4=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=7;
num4=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H12" /*Black Knitted Hat*/, 16);
num2=12;
num3=0;
num4=0;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
num4=0;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
num2=14;
num3=0;
num=270;
num4=0;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
num2=14;
num3=1;
num=270;
num4=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
num2=15;
num3=0;
num=200;
num4=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
num2=15;
num3=1;
num=200;
num4=0;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
num2=16;
num3=0;
num=350;
num4=0;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
num2=16;
num3=1;
num=350;
num4=0;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
num2=17;
num3=0;
num=450;
num4=0;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
num2=18;
num3=0;
num=500;
num4=0;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
num2=18;
num3=1;
num=500;
num4=0;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
num2=19;
num3=0;
num=50;
num4=0;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
num2=19;
num3=1;
num=50;
num4=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
num2=20;
num3=0;
num=99;
num4=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
num2=20;
num3=1;
num=99;
num4=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
num2=20;
num3=2;
num=99;
num4=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=21;
num3=0;
num4=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=22;
num3=0;
num4=0;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=0;
num4=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=1;
num4=0;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=2;
num4=0;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=3;
num4=0;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=4;
num4=0;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=5;
num4=0;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=24;
num3=0;
num4=0;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=25;
num3=0;
num4=0;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=0;
num4=0;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=27;
num3=0;
num4=0;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=28;
num3=0;
num4=0;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E0" /*Black-Rimmed Glasses*/, 16);
num2=0;
num3=0;
num=45;
num4=10;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
num4=10;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
num4=10;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E3" /*Copper Sports Shades*/, 16);
num2=3;
num3=0;
num=55;
num4=10;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4" /*Enema Brown Glasses*/, 16);
num2=4;
num3=0;
num=58;
num4=10;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_1" /*Enema Gray Glasses*/, 16);
num2=4;
num3=1;
num=56;
num4=10;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_2" /*Enema Black Glasses*/, 16);
num2=4;
num3=2;
num=60;
num4=10;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_3" /*Enema Tortoiseshell Glasses*/, 16);
num2=4;
num3=3;
num=65;
num4=10;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_4" /*Enema Coffee Glasses*/, 16);
num2=4;
num3=4;
num=62;
num4=10;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_5" /*Enema Walnut Glasses*/, 16);
num2=4;
num3=5;
num=65;
num4=10;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_6" /*Enema Silver Accent Glasses*/, 16);
num2=4;
num3=6;
num=68;
num4=10;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_7" /*Enema Smoke Glasses*/, 16);
num2=4;
num3=7;
num=68;
num4=10;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5" /*Farshtunken Gold Aviators*/, 16);
num2=5;
num3=0;
num=65;
num4=10;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_1" /*Farshtunken Purple Aviators*/, 16);
num2=5;
num3=1;
num=69;
num4=10;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_2" /*Farshtunken Silver Aviators*/, 16);
num2=5;
num3=2;
num=72;
num4=10;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_3" /*Farshtunken Gray Aviators*/, 16);
num2=5;
num3=3;
num=70;
num4=10;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_4" /*Farshtunken Blue Aviators*/, 16);
num2=5;
num3=4;
num=74;
num4=10;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_5" /*Farshtunken Tinted Aviators*/, 16);
num2=5;
num3=5;
num=78;
num4=10;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_6" /*Farshtunken Steel Aviators*/, 16);
num2=5;
num3=6;
num=82;
num4=10;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_7" /*Farshtunken Sepia Aviators*/, 16);
num2=5;
num3=7;
num=85;
num4=10;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_8" /*Farshtunken Black Aviators*/, 16);
num2=5;
num3=8;
num=85;
num4=10;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_9" /*Farshtunken Smoke Aviators*/, 16);
num2=5;
num3=9;
num4=10;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6" /*Tung Charcoal Shades*/, 16);
num2=6;
num3=0;
num=69;
num4=10;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_1" /*Tung Ash Shades*/, 16);
num2=6;
num3=1;
num=69;
num4=10;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_2" /*Tung Gray Shades*/, 16);
num2=6;
num3=2;
num=69;
num4=10;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_3" /*Tung Red Shades*/, 16);
num2=6;
num3=3;
num=69;
num4=10;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_4" /*Tung Blue Shades*/, 16);
num2=6;
num3=4;
num=69;
num4=10;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_5" /*Tung Yellow Shades*/, 16);
num2=6;
num3=5;
num=69;
num4=10;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_6" /*Tung Black Shades*/, 16);
num2=6;
num3=6;
num=69;
num4=10;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_7" /*Tung Rosy Shades*/, 16);
num2=6;
num3=7;
num=69;
num4=10;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_8" /*Tung Hornet Shades*/, 16);
num2=6;
num3=8;
num=69;
num4=10;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_9" /*Tung Two-Tone Shades*/, 16);
num2=6;
num3=9;
num=69;
num4=10;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E7" /*Swimming Goggles*/, 16);
num2=7;
num3=0;
num4=10;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8" /*Rimmers Azure Aviators*/, 16);
num2=8;
num3=0;
num=170;
num4=10;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_1" /*Rimmers Smoke Aviators*/, 16);
num2=8;
num3=1;
num=175;
num4=10;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_2" /*Rimmers Yellow Aviators*/, 16);
num2=8;
num3=2;
num=180;
num4=10;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_3" /*Rimmers Topaz Aviators*/, 16);
num2=8;
num3=3;
num=185;
num4=10;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_4" /*Rimmers Tinted Aviators*/, 16);
num2=8;
num3=4;
num=189;
num4=10;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_5" /*Rimmers Steel Aviators*/, 16);
num2=8;
num3=5;
num=195;
num4=10;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_6" /*Rimmers Indigo Aviators*/, 16);
num2=8;
num3=6;
num=235;
num4=10;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_7" /*Rimmers Chocolate Aviators*/, 16);
num2=8;
num3=7;
num=245;
num4=10;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_8" /*Rimmers Sepia Aviators*/, 16);
num2=8;
num3=8;
num=250;
num4=10;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_9" /*Rimmers Slate Aviators*/, 16);
num2=8;
num3=9;
num=275;
num4=10;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_10" /*Rimmers Gold Aviators*/, 16);
num2=8;
num3=10;
num=280;
num4=10;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_11" /*Rimmers Blue Aviators*/, 16);
num2=8;
num3=11;
num=295;
num4=10;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9" /*Hawaiian Snow Black Shades*/, 16);
num2=9;
num3=0;
num=179;
num4=10;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_1" /*Hawaiian Snow Charcoal Shades*/, 16);
num2=9;
num3=1;
num=159;
num4=10;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_2" /*Hawaiian Snow Ash Shades*/, 16);
num2=9;
num3=2;
num=165;
num4=10;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_3" /*Hawaiian Snow Gray Shades*/, 16);
num2=9;
num3=3;
num=155;
num4=10;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_4" /*Hawaiian Snow Tan Shades*/, 16);
num2=9;
num3=4;
num=175;
num4=10;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_5" /*Hawaiian Snow Tortoiseshell Shades*/, 16);
num2=9;
num3=5;
num=185;
num4=10;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_6" /*Hawaiian Snow Walnut Shades*/, 16);
num2=9;
num3=6;
num=189;
num4=10;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_7" /*Hawaiian Snow Marbled Shades*/, 16);
num2=9;
num3=7;
num=225;
num4=10;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
num=100;
num4=10;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=2;
break;
default:
func_95(num6, iParam0, 113, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_133(int iParam0) // Position - 0x1B14C{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=13;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
default:
func_95(num6, iParam0, 10, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_134(int iParam0) // Position - 0x1B2BB{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=12;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_0" /*Gray Suit*/, 16);
num2=0;
num3=0;
flag=true;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_1" /*Firefighter*/, 16);
num2=0;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_4" /*Janitor*/, 16);
num2=0;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_7" /*Highway Patrol*/, 16);
num2=0;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_8" /*Golf*/, 16);
num2=0;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_9" /*Bed*/, 16);
num2=0;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_11" /*Epsilon Robes*/, 16);
num2=0;
num3=0;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_12" /*Tennis*/, 16);
num2=0;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_14" /*Scuba Land*/, 16);
num2=0;
num3=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_17" /*Stealth*/, 16);
num2=0;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_18" /*Triathlon*/, 16);
num2=0;
num3=0;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_19" /*Security*/, 16);
num2=0;
num3=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_20" /*Exterminator*/, 16);
num2=0;
num3=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_22" /*Tuxedo*/, 16);
num2=0;
num3=0;
num=10000;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_23" /*Ludendorff*/, 16);
num2=0;
num3=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_24" /*Rappel Gear*/, 16);
num2=0;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_26" /*Blue Boiler Suit*/, 16);
num2=0;
num3=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_28" /*Navy Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_29" /*Gray Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_30" /*Green Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_31" /*Prologue*/, 16);
num2=0;
num3=0;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_32" /*Spec Ops*/, 16);
num2=0;
num3=0;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_33" /*Denim Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_34" /*Slate Suit*/, 16);
num2=0;
num3=0;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_35" /*Leather Jacket, Jeans*/, 16);
num2=0;
num3=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_11" /*Epsilon Robes*/, 16);
num2=0;
num3=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_36" /*Charcoal Suit*/, 16);
num2=0;
num3=0;
num=4900;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_37" /*Pale Blue Shirt, Gray Pants*/, 16);
num2=0;
num3=0;
num=840;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_38" /*Jewel Heist Suit*/, 16);
num2=0;
num3=0;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_39" /*Polo Shirt, Beach Shorts*/, 16);
num2=0;
num3=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_40" /*Polo Shirt, Suit Pants*/, 16);
num2=0;
num3=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_41" /*Shirt, Shorts*/, 16);
num2=0;
num3=0;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_42" /*Polo Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_43" /*Topaz Suit*/, 16);
num2=0;
num3=0;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_44" /*Pale Blue Suit*/, 16);
num2=0;
num3=0;
num=3900;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_45" /*Off-White Suit*/, 16);
num2=0;
num3=0;
num=4000;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_46" /*Olive Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_47" /*Cream Suit*/, 16);
num2=0;
num3=0;
num=4600;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_48" /*Navy Suit*/, 16);
num2=0;
num3=0;
num=5500;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_49" /*Beige Suit*/, 16);
num2=0;
num3=0;
num=4400;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_50" /*Smoke Suit*/, 16);
num2=0;
num3=0;
num=4400;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_51" /*Blue-Gray Suit*/, 16);
num2=0;
num3=0;
num=4900;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_52" /*Ash Suit*/, 16);
num2=0;
num3=0;
num=5500;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_53" /*Sand Suit*/, 16);
num2=0;
num3=0;
num=4500;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_54" /*Black Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_55" /*Moto X*/, 16);
num2=0;
num3=0;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_17" /*Stealth*/, 16);
num2=0;
num3=0;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_95(num6, iParam0, 53, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_135(int iParam0) // Position - 0x1B82C{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=11;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_0" /*Ash T-Shirt*/, 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_1" /*White T-Shirt*/, 16);
num2=2;
num3=1;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_2" /*Gray T-Shirt*/, 16);
num2=2;
num3=2;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_3" /*Charcoal T-Shirt*/, 16);
num2=2;
num3=3;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_4" /*Green T-Shirt*/, 16);
num2=2;
num3=4;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_5" /*Blue T-Shirt*/, 16);
num2=2;
num3=5;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_0" /*Charcoal Henley*/, 16);
num2=3;
num3=0;
num=390;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_1" /*Gray Henley*/, 16);
num2=3;
num3=1;
num=390;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_2" /*Black Henley*/, 16);
num2=3;
num3=2;
num=420;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_3" /*Beige Henley*/, 16);
num2=3;
num3=3;
num=420;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_4" /*Brown Henley*/, 16);
num2=3;
num3=4;
num=490;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_5" /*Navy Henley*/, 16);
num2=3;
num3=5;
num=490;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_6" /*Navy Striped Henley*/, 16);
num2=3;
num3=6;
num=540;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_7" /*Gray Striped Henley*/, 16);
num2=3;
num3=7;
num=540;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_8" /*Gray Wool Henley*/, 16);
num2=3;
num3=8;
num=550;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_9" /*Charcoal Striped Henley*/, 16);
num2=3;
num3=9;
num=540;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_0" /*Charcoal V Neck*/, 16);
num2=4;
num3=0;
num=850;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_1" /*Beige V Neck*/, 16);
num2=4;
num3=1;
num=850;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_2" /*Black V Neck*/, 16);
num2=4;
num3=2;
num=890;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_3" /*Olive V Neck*/, 16);
num2=4;
num3=3;
num=890;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_4" /*Gray V Neck*/, 16);
num2=4;
num3=4;
num=920;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_5" /*Brown V Neck*/, 16);
num2=4;
num3=5;
num=920;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_6" /*Black Striped V Neck*/, 16);
num2=4;
num3=6;
num=950;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_7" /*Gray Diamond V Neck*/, 16);
num2=4;
num3=7;
num=980;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_8" /*Brown Striped V Neck*/, 16);
num2=4;
num3=8;
num=1050;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_9" /*Silver Diamond V Neck*/, 16);
num2=4;
num3=9;
num=1100;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_0" /*Black Vest, White Shirt*/, 16);
num2=5;
num3=0;
num=1890;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_1" /*Black Vest, Black Shirt*/, 16);
num2=5;
num3=1;
num=1820;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_2" /*Black Vest, Gray Shirt*/, 16);
num2=5;
num3=2;
num=1820;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_3" /*Black Vest, Blue Shirt*/, 16);
num2=5;
num3=3;
num=1850;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_4" /*Black Vest, Pink Shirt*/, 16);
num2=5;
num3=4;
num=1850;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_5" /*Ash Vest, White Shirt*/, 16);
num2=5;
num3=5;
num=1900;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_6" /*Ash Vest, Black Shirt*/, 16);
num2=5;
num3=6;
num=1920;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_7" /*Ash Vest, Gray Shirt*/, 16);
num2=5;
num3=7;
num=1980;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_8" /*Ash Vest, Blue Shirt*/, 16);
num2=5;
num3=8;
num=2100;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_9" /*Ash Vest, Pink Shirt*/, 16);
num2=5;
num3=9;
num=2120;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_10" /*Blue Vest, White Shirt*/, 16);
num2=5;
num3=10;
num=2000;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_11" /*Blue Vest, Black Shirt*/, 16);
num2=5;
num3=11;
num=2200;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_12" /*Blue Vest, Gray Shirt*/, 16);
num2=5;
num3=12;
num=2280;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_13" /*Blue Vest, Blue Shirt*/, 16);
num2=5;
num3=13;
num=2300;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_14" /*Blue Vest, Pink Shirt*/, 16);
num2=5;
num3=14;
num=2350;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_15" /*Stone Vest, White Shirt*/, 16);
num2=5;
num3=15;
num=2280;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_06_0" /*Bare Chest*/, 16);
num2=6;
num3=0;
break;
default:
func_95(num6, iParam0, 45, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_136(int iParam0) // Position - 0x1BD54{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=7;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_95(num6, iParam0, 1, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_137(int iParam0) // Position - 0x1BDC7{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=1;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_0_0" /*Clean Shave*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_1_0" /*Stubbled*/, 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_2_0" /*Long Stubbled*/, 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_3_0" /*Full Goatee*/, 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_4_0" /*Full Beard*/, 16);
num2=4;
num3=0;
break;
default:
func_95(num6, iParam0, 5, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_138(int iParam0) // Position - 0x1BE97{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=10;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=1;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=2;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=3;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=4;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=5;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=6;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=7;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=1;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=2;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=3;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=4;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=5;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=1;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=2;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=3;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=4;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=5;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=6;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=1;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=2;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=3;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=4;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=5;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=6;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=7;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_8" /*Del Perro Pier T-Shirt*/, 16);
num2=10;
num3=8;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_9" /*Los Santos T-Shirt*/, 16);
num2=10;
num3=9;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_10" /*Sharkies Bites T-Shirt*/, 16);
num2=10;
num3=10;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_11" /*Muscle Peach T-Shirt*/, 16);
num2=10;
num3=11;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_12" /*Coral Reefers T-Shirt*/, 16);
num2=10;
num3=12;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_13" /*SmokeBomb T-Shirt*/, 16);
num2=10;
num3=13;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_14" /*The Big Puffa T-Shirt*/, 16);
num2=10;
num3=14;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_15" /*Lob-Star T-Shirt*/, 16);
num2=10;
num3=15;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=1;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=2;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=3;
break;
default:
func_95(num6, iParam0, 48, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_139(int iParam0) // Position - 0x1C348{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=9;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=1;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
num2=8;
num3=0;
num=125;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
num2=8;
num3=1;
num=150;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
num2=8;
num3=2;
num=175;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
num2=8;
num3=3;
num=85;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
num2=8;
num3=4;
num=150;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
num2=8;
num3=5;
num=175;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=1;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
default:
func_95(num6, iParam0, 20, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_140(int iParam0) // Position - 0x1C5A3{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=8;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P0_10" /*Watch and Bracelet*/, 16);
num2=10;
num3=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P0_16" /*Leather Watch*/, 16);
num2=16;
num3=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=18;
num3=0;
flag=true;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=19;
num3=0;
flag=true;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=20;
num3=0;
flag=true;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=21;
num3=0;
flag=true;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=22;
num3=0;
flag=true;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=0;
flag=true;
break;
default:
func_95(num6, iParam0, 24, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_141(int iParam0) // Position - 0x1C863{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=5;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=1;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=2;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=3;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=4;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
default:
func_95(num6, iParam0, 14, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_142(int iParam0) // Position - 0x1CA1E{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=6;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_0" /*Black Leather Shoes*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_1" /*Brown Leather Shoes*/, 16);
num2=0;
num3=1;
num=665;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_2" /*Charcoal Leather Shoes*/, 16);
num2=0;
num3=2;
num=620;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_3" /*Gray Leather Shoes*/, 16);
num2=0;
num3=3;
num=540;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_4" /*Sand Leather Shoes*/, 16);
num2=0;
num3=4;
num=580;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_5" /*Blue Suede Shoes*/, 16);
num2=0;
num3=5;
num=650;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_13_0" /*Dress Loafers*/, 16);
num2=13;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
flag=true;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_0" /*Ash Skate Shoes*/, 16);
num2=15;
num3=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_1" /*Black Skate Shoes*/, 16);
num2=15;
num3=1;
num=64;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_2" /*White Skate Shoes*/, 16);
num2=15;
num3=2;
num=56;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_3" /*Red Skate Shoes*/, 16);
num2=15;
num3=3;
num=69;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_4" /*Plaid Skate Shoes*/, 16);
num2=15;
num3=4;
num=59;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_5" /*Striped Skate Shoes*/, 16);
num2=15;
num3=5;
num=62;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_6" /*Coffee Skate Shoes*/, 16);
num2=15;
num3=6;
num=74;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_7" /*Camo Skate Shoes*/, 16);
num2=15;
num3=7;
num=68;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_8" /*Tropical Skate Shoes*/, 16);
num2=15;
num3=8;
num=72;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_9" /*Green Skate Shoes*/, 16);
num2=15;
num3=9;
num=70;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_0" /*Chocolate Boat Shoes*/, 16);
num2=16;
num3=0;
num=48;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_1" /*Teal Boat Shoes*/, 16);
num2=16;
num3=1;
num=48;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_2" /*Black Boat Shoes*/, 16);
num2=16;
num3=2;
num=55;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_3" /*Chestnut Boat Shoes*/, 16);
num2=16;
num3=3;
num=75;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_4" /*Tan Boat Shoes*/, 16);
num2=16;
num3=4;
num=65;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_5" /*Gray Boat Shoes*/, 16);
num2=16;
num3=5;
num=68;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_6" /*Red Boat Shoes*/, 16);
num2=16;
num3=6;
num=58;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_7" /*Slate Boat Shoes*/, 16);
num2=16;
num3=7;
num=68;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
flag=true;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_0" /*All Black Oxfords*/, 16);
num2=18;
num3=0;
num=790;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_1" /*Chocolate Oxfords*/, 16);
num2=18;
num3=1;
num=750;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_2" /*Chestnut Oxfords*/, 16);
num2=18;
num3=2;
num=860;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_3" /*Tan Oxfords*/, 16);
num2=18;
num3=3;
num=750;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_4" /*White Oxfords*/, 16);
num2=18;
num3=4;
num=790;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_5" /*Ash Oxfords*/, 16);
num2=18;
num3=5;
num=840;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_6" /*Gray Two-Tone Oxfords*/, 16);
num2=18;
num3=6;
num=820;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_7" /*Beige Oxfords*/, 16);
num2=18;
num3=7;
num=800;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_8" /*Topaz Oxfords*/, 16);
num2=18;
num3=8;
num=850;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_9" /*Black Oxfords*/, 16);
num2=18;
num3=9;
num=870;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_10" /*Lime Oxfords*/, 16);
num2=18;
num3=10;
num=720;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_11" /*Hawthorn Oxfords*/, 16);
num2=18;
num3=11;
num=740;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_12" /*Coffee Oxfords*/, 16);
num2=18;
num3=12;
num=800;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_13" /*Gray Oxfords*/, 16);
num2=18;
num3=13;
num=750;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_14" /*Cream Oxfords*/, 16);
num2=18;
num3=14;
num=770;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_15" /*Navy Oxfords*/, 16);
num2=18;
num3=15;
num=860;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_0" /*Black Slip-Ons*/, 16);
num2=19;
num3=0;
num=850;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_1" /*Red Slip-Ons*/, 16);
num2=19;
num3=1;
num=800;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_2" /*Brown Slip-Ons*/, 16);
num2=19;
num3=2;
num=780;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_3" /*Green Stripe Slip-Ons*/, 16);
num2=19;
num3=3;
num=890;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_4" /*Green Slip-Ons*/, 16);
num2=19;
num3=4;
num=820;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_5" /*Copper Slip-Ons*/, 16);
num2=19;
num3=5;
num=840;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_6" /*Copper Two-Tone Slip-Ons*/, 16);
num2=19;
num3=6;
num=870;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_7" /*Navy Slip-Ons*/, 16);
num2=19;
num3=7;
num=930;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_8" /*Blue Slip-Ons*/, 16);
num2=19;
num3=8;
num=880;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_9" /*Beige Slip-Ons*/, 16);
num2=19;
num3=9;
num=900;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_10" /*White Slip-Ons*/, 16);
num2=19;
num3=10;
num=920;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_11" /*Tan Slip-Ons*/, 16);
num2=19;
num3=11;
num=970;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_12" /*Black Snakeskin Slip-Ons*/, 16);
num2=19;
num3=12;
num=990;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_13" /*Two-Tone Slip-Ons*/, 16);
num2=19;
num3=13;
num=960;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_14" /*Brown Snakeskin Slip-Ons*/, 16);
num2=19;
num3=14;
num=980;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_15" /*Gray Slip-Ons*/, 16);
num2=19;
num3=15;
num=950;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_0" /*Brown Wingtips*/, 16);
num2=20;
num3=0;
num=110;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_1" /*Navy Wingtips*/, 16);
num2=20;
num3=1;
num=115;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_2" /*Coffee Wingtips*/, 16);
num2=20;
num3=2;
num=120;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_3" /*Burgundy Wingtips*/, 16);
num2=20;
num3=3;
num=110;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_4" /*Blue Wingtips*/, 16);
num2=20;
num3=4;
num=125;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_5" /*Woodland Camo Wingtips*/, 16);
num2=20;
num3=5;
num=128;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_6" /*Black Wingtips*/, 16);
num2=20;
num3=6;
num=135;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_7" /*Tan Wingtips*/, 16);
num2=20;
num3=7;
num=130;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_8" /*Purple Wingtips*/, 16);
num2=20;
num3=8;
num=145;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_9" /*Brown Wingtips*/, 16);
num2=20;
num3=9;
num=110;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_10" /*Chocolate Wingtips*/, 16);
num2=20;
num3=10;
num=120;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_11" /*Green Wingtips*/, 16);
num2=20;
num3=11;
num=150;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_12" /*Ash Wingtips*/, 16);
num2=20;
num3=12;
num=125;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_13" /*Olive Wingtips*/, 16);
num2=20;
num3=13;
num=120;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_14" /*Two-Tone Wingtips*/, 16);
num2=20;
num3=14;
num=130;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_15" /*Yellow Wingtips*/, 16);
num2=20;
num3=15;
num=110;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_0" /*Black Leather Loafers*/, 16);
num2=21;
num3=0;
num=720;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_1" /*Gray Leather Loafers*/, 16);
num2=21;
num3=1;
num=680;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_2" /*Cream Leather Loafers*/, 16);
num2=21;
num3=2;
num=650;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_3" /*Brown Leather Loafers*/, 16);
num2=21;
num3=3;
num=670;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_4" /*White Leather Loafers*/, 16);
num2=21;
num3=4;
num=700;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_5" /*Russet Leather Loafers*/, 16);
num2=21;
num3=5;
num=680;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_6" /*White Snakeskin Loafers*/, 16);
num2=21;
num3=6;
num=720;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_7" /*Rattlesnake Loafers*/, 16);
num2=21;
num3=7;
num=740;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_8" /*Brown Snakeskin Loafers*/, 16);
num2=21;
num3=8;
num=760;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_9" /*Zebra Two-Tone Loafers*/, 16);
num2=21;
num3=9;
num=780;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_10" /*Pale Reptile Loafers*/, 16);
num2=21;
num3=10;
num=750;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_11" /*Tan Alligator Loafers*/, 16);
num2=21;
num3=11;
num=700;
break;
default:
func_95(num6, iParam0, 99, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_143(int iParam0) // Position - 0x1D564{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=4;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_0" /*Gray Pants*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_0" /*Gray Pants*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_2" /*Charcoal Pants*/, 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_3" /*Slate Pants*/, 16);
num2=0;
num3=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_4" /*Topaz Pants*/, 16);
num2=0;
num3=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_5" /*Pale Blue Pants*/, 16);
num2=0;
num3=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_6" /*Cream Pants*/, 16);
num2=0;
num3=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_7" /*Olive Pants*/, 16);
num2=0;
num3=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_8" /*Off-White Pants*/, 16);
num2=0;
num3=8;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_9" /*Navy Pants*/, 16);
num2=0;
num3=9;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_10" /*Beige Pants*/, 16);
num2=0;
num3=10;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_11" /*Smoke Pants*/, 16);
num2=0;
num3=11;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_12" /*Blue-Gray Pants*/, 16);
num2=0;
num3=12;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_13" /*Ash Pants*/, 16);
num2=0;
num3=13;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_14" /*Sand Pants*/, 16);
num2=0;
num3=14;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_15" /*Black Pants*/, 16);
num2=0;
num3=15;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=1;
flag=true;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_0" /*Off-White Chinos*/, 16);
num2=7;
num3=0;
num=115;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_1" /*Camel Chinos*/, 16);
num2=7;
num3=1;
num=115;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_2" /*Ash Chinos*/, 16);
num2=7;
num3=2;
num=128;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_3" /*Olive Chinos*/, 16);
num2=7;
num3=3;
num=118;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_4" /*Brown Chinos*/, 16);
num2=7;
num3=4;
num=125;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_5" /*Black Chinos*/, 16);
num2=7;
num3=5;
num=128;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_6" /*Charcoal Chinos*/, 16);
num2=7;
num3=6;
num=128;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_7" /*White Chinos*/, 16);
num2=7;
num3=7;
num=125;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=1;
flag=true;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=2;
flag=true;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=3;
flag=true;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=4;
flag=true;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=5;
flag=true;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_0" /*Cream Cargo Shorts*/, 16);
num2=13;
num3=0;
num=68;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_1" /*Khaki Cargo Shorts*/, 16);
num2=13;
num3=1;
num=68;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_2" /*Camo Cargo Shorts*/, 16);
num2=13;
num3=2;
num=68;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_3" /*Gray Cargo Shorts*/, 16);
num2=13;
num3=3;
num=68;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_4" /*White Cargo Shorts*/, 16);
num2=13;
num3=4;
num=68;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
flag=true;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_0" /*Gray Golf Pants*/, 16);
num2=15;
num3=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_1" /*Cream Golf Pants*/, 16);
num2=15;
num3=1;
num=550;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_2" /*Brown Golf Pants*/, 16);
num2=15;
num3=2;
num=650;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_3" /*Tartan Golf Pants*/, 16);
num2=15;
num3=3;
num=875;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_4" /*Charcoal Plaid Golf Pants*/, 16);
num2=15;
num3=4;
num=820;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_5" /*Green Plaid Golf Pants*/, 16);
num2=15;
num3=5;
num=720;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_6" /*Brown Plaid Golf Pants*/, 16);
num2=15;
num3=6;
num=750;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_7" /*Slate Golf Pants*/, 16);
num2=15;
num3=7;
num=850;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_0" /*Beige Shorts*/, 16);
num2=16;
num3=0;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_1" /*Yellow Shorts*/, 16);
num2=16;
num3=1;
num=48;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_2" /*Blue Shorts*/, 16);
num2=16;
num3=2;
num=48;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_3" /*Brown Leafy Shorts*/, 16);
num2=16;
num3=3;
num=38;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_4" /*Tropical Shorts*/, 16);
num2=16;
num3=4;
num=38;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_5" /*Aqua Vintage Shorts*/, 16);
num2=16;
num3=5;
num=42;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_6" /*Bright Two-Tone Shorts*/, 16);
num2=16;
num3=6;
num=58;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_7" /*Red Floral Shorts*/, 16);
num2=16;
num3=7;
num=46;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_8" /*Navy Floral Shorts*/, 16);
num2=16;
num3=8;
num=46;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_9" /*Blue Floral Shorts*/, 16);
num2=16;
num3=9;
num=46;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_10" /*Orange Shorts*/, 16);
num2=16;
num3=10;
num=68;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_11" /*White Striped Shorts*/, 16);
num2=16;
num3=11;
num=58;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_12" /*Charcoal Shorts*/, 16);
num2=16;
num3=12;
num=50;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_13" /*Gray Shorts*/, 16);
num2=16;
num3=13;
num=68;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_14" /*Candy Surf Shorts*/, 16);
num2=16;
num3=14;
num=68;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_15" /*Undersea Shorts*/, 16);
num2=16;
num3=15;
num=42;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
flag=true;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_0" /*White Striped Boxers*/, 16);
num2=18;
num3=0;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_1" /*Blue Boxers*/, 16);
num2=18;
num3=1;
num=250;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_2" /*Ash Boxers*/, 16);
num2=18;
num3=2;
num=250;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_3" /*Blue Striped Boxers*/, 16);
num2=18;
num3=3;
num=290;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_4" /*White Boxers*/, 16);
num2=18;
num3=4;
num=270;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_5" /*Charcoal Boxers*/, 16);
num2=18;
num3=5;
num=270;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_6" /*Red Heart Boxers*/, 16);
num2=18;
num3=6;
num=15;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_7" /*Blue Heart Boxers*/, 16);
num2=18;
num3=7;
num=12;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=19;
num3=0;
flag=true;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_0" /*Blue Casual Jeans*/, 16);
num2=20;
num3=0;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_1" /*Black Casual Jeans*/, 16);
num2=20;
num3=1;
num=118;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_2" /*Faded Casual Jeans*/, 16);
num2=20;
num3=2;
num=110;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_0" /*Tan Pants*/, 16);
num2=21;
num3=0;
num=88;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_1" /*Charcoal Pants*/, 16);
num2=21;
num3=1;
num=95;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_2" /*Brown Pants*/, 16);
num2=21;
num3=2;
num=95;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_3" /*Ash Pants*/, 16);
num2=21;
num3=3;
num=98;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_22_0" /*Smart Jeans*/, 16);
num2=22;
num3=0;
num=140;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_0" /*White Tennis Shorts*/, 16);
num2=23;
num3=0;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_1" /*Lobon Tennis Shorts*/, 16);
num2=23;
num3=1;
num=150;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_2" /*Plaid Tennis Shorts*/, 16);
num2=23;
num3=2;
num=130;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=24;
num3=0;
flag=true;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=25;
num3=0;
flag=true;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=0;
flag=true;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_27_0" /*Beige Shorts, Bare Feet*/, 16);
num2=27;
num3=0;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_0" /*Pale Blue Bermudas*/, 16);
num2=28;
num3=0;
num=45;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_1" /*Beige Bermudas*/, 16);
num2=28;
num3=1;
num=48;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_2" /*Cream Bermudas*/, 16);
num2=28;
num3=2;
num=48;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_3" /*Olive Bermudas*/, 16);
num2=28;
num3=3;
num=52;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_4" /*Blue Bermudas*/, 16);
num2=28;
num3=4;
num=52;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_5" /*Off-White Bermudas*/, 16);
num2=28;
num3=5;
num=55;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_6" /*Gray Bermudas*/, 16);
num2=28;
num3=6;
num=55;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_7" /*Charcoal Bermudas*/, 16);
num2=28;
num3=7;
num=55;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_8" /*Pink Bermudas*/, 16);
num2=28;
num3=8;
num=58;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_9" /*Beige Plaid Bermudas*/, 16);
num2=28;
num3=9;
num=58;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_10" /*Pastel Plaid Bermudas*/, 16);
num2=28;
num3=10;
num=60;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_11" /*Orange Plaid Bermudas*/, 16);
num2=28;
num3=11;
num=60;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_12" /*Gray Plaid Bermudas*/, 16);
num2=28;
num3=12;
num=62;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_13" /*Blue Striped Bermudas*/, 16);
num2=28;
num3=13;
num=62;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_14" /*Murky Plaid Bermudas*/, 16);
num2=28;
num3=14;
num=65;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_15" /*Pastel Check Bermudas*/, 16);
num2=28;
num3=15;
num=65;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=29;
num3=0;
break;
default:
func_95(num6, iParam0, 113, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_144(int iParam0) // Position - 0x1E196{
if(iParam0 < 60) func_146(iParam0);
else func_145(iParam0);
if(Global_78341[0 /*14*/].f_2==-1) func_95(3, iParam0, 181, -1);
return;
}


void func_145(int iParam0) // Position - 0x1E1CB{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=1;
flag=true;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=2;
flag=true;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=3;
flag=true;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=4;
flag=true;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=5;
flag=true;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_0" /*Rearwall Black Gilet*/, 16);
num2=14;
num3=0;
num=120;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_1" /*Fruntalot Red Gilet*/, 16);
num2=14;
num3=1;
num=120;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_2" /*Yeti Blue Gilet*/, 16);
num2=14;
num3=2;
num=120;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_3" /*Rearwall Brown Gilet*/, 16);
num2=14;
num3=3;
num=120;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_4" /*Rearwall Orange Gilet*/, 16);
num2=14;
num3=4;
num=120;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_5" /*Rearwall Green Gilet*/, 16);
num2=14;
num3=5;
num=120;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
flag=true;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_0" /*Purple Golf Shirt*/, 16);
num2=16;
num3=0;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_1" /*Orange Golf Shirt*/, 16);
num2=16;
num3=1;
num=20;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_2" /*Burgundy Golf Shirt*/, 16);
num2=16;
num3=2;
num=24;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_3" /*Yellow Golf Shirt*/, 16);
num2=16;
num3=3;
num=22;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_4" /*Blue Golf Shirt*/, 16);
num2=16;
num3=4;
num=25;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_5" /*Mint Golf Shirt*/, 16);
num2=16;
num3=5;
num=25;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_6" /*Brown Golf Shirt*/, 16);
num2=16;
num3=6;
num=22;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_7" /*Crimson Golf Shirt*/, 16);
num2=16;
num3=7;
num=27;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_0" /*Blue-Gray Polo Shirt*/, 16);
num2=17;
num3=0;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_1" /*Olive Polo Shirt*/, 16);
num2=17;
num3=1;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_2" /*Red Polo Shirt*/, 16);
num2=17;
num3=2;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_3" /*Black Polo Shirt*/, 16);
num2=17;
num3=3;
num=48;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_4" /*White Polo Shirt*/, 16);
num2=17;
num3=4;
num=40;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_5" /*Blue Polo Shirt*/, 16);
num2=17;
num3=5;
num=45;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=18;
num3=0;
flag=true;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_0" /*Off-White Tank Top*/, 16);
num2=19;
num3=0;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_1" /*White Tank Top*/, 16);
num2=19;
num3=1;
num=190;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_2" /*Ash Tank Top*/, 16);
num2=19;
num3=2;
num=190;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_3" /*Gray Tank Top*/, 16);
num2=19;
num3=3;
num=190;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_4" /*Black Tank Top*/, 16);
num2=19;
num3=4;
num=210;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_0" /*Blue Denim Shirt*/, 16);
num2=20;
num3=0;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_1" /*Deep Black Shirt*/, 16);
num2=20;
num3=1;
num=115;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_2" /*Russet Shirt*/, 16);
num2=20;
num3=2;
num=55;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_3" /*Green Cord Shirt*/, 16);
num2=20;
num3=3;
num=110;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_4" /*Gray Shirt*/, 16);
num2=20;
num3=4;
num=99;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_5" /*Fresh Check Shirt*/, 16);
num2=20;
num3=5;
num=49;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_6" /*Southern Plaid Shirt*/, 16);
num2=20;
num3=6;
num=120;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_7" /*Sunrise Yellow Shirt*/, 16);
num2=20;
num3=7;
num=45;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_8" /*White Shirt*/, 16);
num2=20;
num3=8;
num=115;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_9" /*Stone Shirt*/, 16);
num2=20;
num3=9;
num=105;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_10" /*Earth Plaid Shirt*/, 16);
num2=20;
num3=10;
num=90;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_11" /*Green Check Shirt*/, 16);
num2=20;
num3=11;
num=95;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_12" /*Country Plaid Shirt*/, 16);
num2=20;
num3=12;
num=39;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_13" /*Orange Tight Check Shirt*/, 16);
num2=20;
num3=13;
num=95;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_14" /*Bright Blue Plaid Shirt*/, 16);
num2=20;
num3=14;
num=35;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_15" /*Blue Check Shirt*/, 16);
num2=20;
num3=15;
num=95;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_0" /*Gray Hoodie*/, 16);
num2=21;
num3=0;
num=88;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_1" /*Ammu-Nation Camo Hoodie*/, 16);
num2=21;
num3=1;
num=60;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_2" /*LSGC Gray Hoodie*/, 16);
num2=21;
num3=2;
num=70;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_3" /*LSGC Urban Hoodie*/, 16);
num2=21;
num3=3;
num=80;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_4" /*LSGC Forest Hoodie*/, 16);
num2=21;
num3=4;
num=90;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_5" /*Ammu-Nation A Hoodie*/, 16);
num2=21;
num3=5;
num=80;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_6" /*Blauser Hoodie*/, 16);
num2=21;
num3=6;
num=70;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_7" /*Penetrators Orange Hoodie*/, 16);
num2=21;
num3=7;
num=95;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_8" /*Crevis Fluorescent Hoodie*/, 16);
num2=21;
num3=8;
num=105;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_9" /*Blue Hoodie*/, 16);
num2=21;
num3=9;
num=95;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_10" /*Green Hoodie*/, 16);
num2=21;
num3=10;
num=110;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_11" /*LS Jardineros Hoodie*/, 16);
num2=21;
num3=11;
num=98;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_12" /*Ash 18 Hoodie*/, 16);
num2=21;
num3=12;
num=88;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_13" /*Red Mist XI Hoodie*/, 16);
num2=21;
num3=13;
num=98;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_14" /*Eris Charcoal Hoodie*/, 16);
num2=21;
num3=14;
num=110;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_15" /*OG Hoodie*/, 16);
num2=21;
num3=15;
num=98;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_0" /*Distressed Leather Jacket*/, 16);
num2=22;
num3=0;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_1" /*Black Leather Jacket*/, 16);
num2=22;
num3=1;
num=4950;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_2" /*Chestnut Leather Jacket*/, 16);
num2=22;
num3=2;
num=4195;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_3" /*Oxblood Leather Jacket*/, 16);
num2=22;
num3=3;
num=3195;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_4" /*Vintage Black Leather Jacket*/, 16);
num2=22;
num3=4;
num=2950;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_5" /*Brown Leather Jacket*/, 16);
num2=22;
num3=5;
num=3950;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_0" /*Silver Sports Coat*/, 16);
num2=23;
num3=0;
num=3200;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_1" /*Gray-Green Sports Coat*/, 16);
num2=23;
num3=1;
num=3200;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_2" /*Slate Sports Coat*/, 16);
num2=23;
num3=2;
num=3200;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_3" /*Gray Sports Coat*/, 16);
num2=23;
num3=3;
num=3200;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_4" /*Blue Sports Coat*/, 16);
num2=23;
num3=4;
num=3200;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_5" /*Pale Blue Sports Coat*/, 16);
num2=23;
num3=5;
num=3200;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_6" /*White Sports Coat*/, 16);
num2=23;
num3=6;
num=3200;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_7" /*Warm Gray Sports Coat*/, 16);
num2=23;
num3=7;
num=3200;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_8" /*Cream Sports Coat*/, 16);
num2=23;
num3=8;
num=3200;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_9" /*Midnight Blue Sports Coat*/, 16);
num2=23;
num3=9;
num=3200;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_10" /*Off-White Sports Coat*/, 16);
num2=23;
num3=10;
num=3200;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_11" /*Charcoal Wool Sports Coat*/, 16);
num2=23;
num3=11;
num=3200;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_12" /*Charcoal Sports Coat*/, 16);
num2=23;
num3=12;
num=3200;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_13" /*Ash Plaid Sports Coat*/, 16);
num2=23;
num3=13;
num=3200;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_14" /*Beige Sports Coat*/, 16);
num2=23;
num3=14;
num=3200;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_15" /*Brown Sports Coat*/, 16);
num2=23;
num3=15;
num=3200;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_0" /*Charcoal Sweater*/, 16);
num2=24;
num3=0;
num=1350;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_1" /*Gray Sweater*/, 16);
num2=24;
num3=1;
num=1400;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_2" /*Beige Sweater*/, 16);
num2=24;
num3=2;
num=1200;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_3" /*Red Sweater*/, 16);
num2=24;
num3=3;
num=1250;
break;
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_4" /*Pale Blue Sweater*/, 16);
num2=24;
num3=4;
num=1350;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_5" /*Pale Amethyst Sweater*/, 16);
num2=24;
num3=5;
num=1300;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_6" /*Blue Sweater*/, 16);
num2=24;
num3=6;
num=1380;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_7" /*Pale Jade Sweater*/, 16);
num2=24;
num3=7;
num=1340;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_8" /*Orange Sweater*/, 16);
num2=24;
num3=8;
num=1380;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_9" /*Lemon Sweater*/, 16);
num2=24;
num3=9;
num=1250;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_0" /*Pale Blue Shirt*/, 16);
num2=25;
num3=0;
num=840;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_1" /*Pink Shirt*/, 16);
num2=25;
num3=1;
num=840;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_2" /*White Shirt*/, 16);
num2=25;
num3=2;
num=840;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_3" /*Gray Shirt*/, 16);
num2=25;
num3=3;
num=840;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_4" /*Charcoal Shirt*/, 16);
num2=25;
num3=4;
num=840;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_5" /*Blue Shirt*/, 16);
num2=25;
num3=5;
num=840;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_6" /*Topaz Shirt*/, 16);
num2=25;
num3=6;
num=840;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_7" /*Black Shirt*/, 16);
num2=25;
num3=7;
num=840;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_26_0" /*Bare Chested*/, 16);
num2=26;
num3=0;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=27;
num3=0;
flag=true;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_0" /*Eris White Sweater Vest*/, 16);
num2=28;
num3=0;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_1" /*Lobon Sweater Vest*/, 16);
num2=28;
num3=1;
num=130;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_2" /*Eris Blue Sweater Vest*/, 16);
num2=28;
num3=2;
num=110;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_29_0", 16);
num2=29;
num3=0;
flag=true;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_30_0" /*Gray Jacket*/, 16);
num2=30;
num3=0;
num=290;
break;
case 176:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_30_1" /*Black Jacket*/, 16);
num2=30;
num3=1;
num=320;
break;
case 177:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_0" /*Red Check Winter Shirt*/, 16);
num2=31;
num3=0;
num=59;
break;
case 178:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_1" /*Blue Check Winter Shirt*/, 16);
num2=31;
num3=1;
num=55;
break;
case 179:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_2" /*Black Winter Shirt*/, 16);
num2=31;
num3=2;
num=59;
break;
case 180:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_3" /*Brown Check Winter Shirt*/, 16);
num2=31;
num3=3;
num=49;
break;
default:
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_146(int iParam0) // Position - 0x1EF5E{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_0" /*Gray Jacket*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_0" /*Gray Jacket*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_2" /*Charcoal Jacket*/, 16);
num2=0;
num3=2;
num=3500;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_3" /*Slate Jacket*/, 16);
num2=0;
num3=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_4" /*Topaz Jacket*/, 16);
num2=0;
num3=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_5" /*Pale Blue Jacket*/, 16);
num2=0;
num3=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_6" /*Cream Jacket*/, 16);
num2=0;
num3=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_7" /*Olive Jacket*/, 16);
num2=0;
num3=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_8" /*Off-White Jacket*/, 16);
num2=0;
num3=8;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_9" /*Navy Jacket*/, 16);
num2=0;
num3=9;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_10" /*Beige Jacket*/, 16);
num2=0;
num3=10;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_11" /*Smoke Jacket*/, 16);
num2=0;
num3=11;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_12" /*Blue-Gray Jacket*/, 16);
num2=0;
num3=12;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_13" /*Ash Jacket*/, 16);
num2=0;
num3=13;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_14" /*Sand Jacket*/, 16);
num2=0;
num3=14;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_15" /*Black Jacket*/, 16);
num2=0;
num3=15;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
num=20;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=1;
num=18;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=2;
num=22;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=3;
num=25;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_4" /*Suburban Yellow T-Shirt*/, 16);
num2=2;
num3=4;
num=19;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_5" /*Rearwall Slate T-Shirt*/, 16);
num2=2;
num3=5;
num=20;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_6" /*Rearwall Blue T-Shirt*/, 16);
num2=2;
num3=6;
num=22;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_7" /*Rearwall Gray T-Shirt*/, 16);
num2=2;
num3=7;
num=18;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_8" /*Suburban Navy T-Shirt*/, 16);
num2=2;
num3=8;
num=39;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_9" /*Suburban Russet T-Shirt*/, 16);
num2=2;
num3=9;
num=32;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_10" /*Suburban Orange T-Shirt*/, 16);
num2=2;
num3=10;
num=35;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_11" /*Suburban Gray T-Shirt*/, 16);
num2=2;
num3=11;
num=35;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_12" /*White T-Shirt*/, 16);
num2=2;
num3=12;
num=210;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_13" /*Forest Green T-Shirt*/, 16);
num2=2;
num3=13;
num=250;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_14" /*Pale Blue T-Shirt*/, 16);
num2=2;
num3=14;
num=290;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_15" /*Ash T-Shirt*/, 16);
num2=2;
num3=15;
num=310;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=1;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_0" /*Brown Shooting Vest*/, 16);
num2=7;
num3=0;
num=150;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_1" /*Woodland Shooting Vest*/, 16);
num2=7;
num3=1;
num=160;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_2" /*Taupe Shooting Vest*/, 16);
num2=7;
num3=2;
num=150;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_3" /*Brown Woven Shooting Vest*/, 16);
num2=7;
num3=3;
num=150;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_4" /*Field Shooting Vest*/, 16);
num2=7;
num3=4;
num=160;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_5" /*Forest Shooting Vest*/, 16);
num2=7;
num3=5;
num=160;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_0" /*Blue-Gray Shirt*/, 16);
num2=8;
num3=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_1" /*White Shirt*/, 16);
num2=8;
num3=1;
num=52;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_2" /*Camel Shirt*/, 16);
num2=8;
num3=2;
num=52;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_3" /*Black Shirt*/, 16);
num2=8;
num3=3;
num=55;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_4" /*Citrus Hawaiian Shirt*/, 16);
num2=8;
num3=4;
num=55;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_5" /*Orange Grove Shirt*/, 16);
num2=8;
num3=5;
num=58;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_6" /*Parrot Print Shirt*/, 16);
num2=8;
num3=6;
num=58;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_7" /*Blue Geometric Shirt*/, 16);
num2=8;
num3=7;
num=62;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_8" /*Gray Patterned Shirt*/, 16);
num2=8;
num3=8;
num=65;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_9" /*Peach Patterned Shirt*/, 16);
num2=8;
num3=9;
num=65;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_10" /*Tropical Shirt*/, 16);
num2=8;
num3=10;
num=68;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_11" /*Navy Floral Shirt*/, 16);
num2=8;
num3=11;
num=68;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_12" /*Lime Plaid Shirt*/, 16);
num2=8;
num3=12;
num=55;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_13" /*Brown Patterned Shirt*/, 16);
num2=8;
num3=13;
num=62;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_14" /*Vintage Hawaiian Shirt*/, 16);
num2=8;
num3=14;
num=58;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_15" /*Blue Plaid Shirt*/, 16);
num2=8;
num3=15;
num=58;
break;
default:
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_147(int iParam0) // Position - 0x1F5E0{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=2;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_0_0" /*Lexington*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_1_0" /*The Wood*/, 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_2_0" /*Clippered Cut*/, 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_3_0" /*Grown Out*/, 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_4_0" /*Slicker*/, 16);
num2=4;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
default:
func_95(num6, iParam0, 6, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_148(int iParam0) // Position - 0x1F6C6{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=0;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=6;
break;
default:
func_95(num6, iParam0, 7, -1);
return;
}
func_88(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_149() // Position - 0x1F7BD{
Global_78341[0 /*14*/].f_1=-1;
Global_78341[0 /*14*/].f_2=-1;
Global_78341[0 /*14*/].f_5=-1;
Global_78341[0 /*14*/].f_3=-1;
Global_78341[0 /*14*/].f_4=-1;
Global_78341[0 /*14*/].f_7=0;
Global_78341[0 /*14*/].f_6=0;
Global_78341[0 /*14*/].f_13=-1;
Global_78341[0 /*14*/].f_12=0;
Global_78341[0 /*14*/]=0;
TEXT_LABEL_ASSIGN_STRING(&(Global_78341[0 /*14*/].f_8), "NO_LABEL", 16);
return;
}
BOOL func_150(Ped pedParam0, int iParam1, int iParam2) // Position - 0x1F835{
Hash entityModel;
int num;
int i;
ePedComponentType j;
int k;
var unk;
var unk18;
int l;
var unk28;
if(PED::IS_PED_INJURED(pedParam0)) return false;
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
Global_78341[1 /*14*/]={
func_85(entityModel, iParam1, iParam2, -1) 
};
if(!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)) return false;
if(iParam1==12){
unk={
func_81(entityModel, iParam2) 
};
for (i=0;
i <=14;
i=i + 1){
if(unk[i] !=-99 && i !=12 && i !=14){
if(!func_150(pedParam0, i, unk[i])){
if(i==13){
unk18={
func_78(entityModel, unk[i]) 
};
for (j=0;
j <=8;
j=j + 1){
if(!func_150(pedParam0, 14, unk18[j])){
for (k=0;
k <=19;
k=k + 1){
Global_78341[2 /*14*/]={
func_85(entityModel, 14, k, -1) 
};
if(Global_78341[2 /*14*/].f_12==j)if(func_150(pedParam0, 14, k))if(!func_40(entityModel, iParam2, 14, k, &unk, &Global_78341[2 /*14*/])) return false;
}}
}}else{
num=func_66(pedParam0, i);
Global_78341[2 /*14*/]={
func_85(entityModel, i, num, -1) 
};
if(!func_40(entityModel, iParam2, i, num, &unk, &Global_78341[2 /*14*/])) return false;
}}}}
return true;
}elseif(iParam1==13){
unk28={
func_78(entityModel, iParam2) 
};
for (l=0;
l <=8;
l=l + 1){
if(!func_150(pedParam0, 14, unk28[l])) return false;
}
return true;
}elseif(iParam1==14){
if(PED::GET_PED_PROP_INDEX(pedParam0, Global_78341[1 /*14*/].f_12, 1)==Global_78341[1 /*14*/].f_3 && PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, Global_78341[1 /*14*/].f_12)==Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3==-1) return true;
}elseif(Global_78341[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(pedParam0, func_77(iParam1)) && Global_78341[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(pedParam0, func_77(iParam1))){
return true;
}
return false;
}
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1FA8E{
eCharacter i;
Hash entityModel;
if(ENTITY::DOES_ENTITY_EXIST(pedParam0)){
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
for (i=CHAR_MICHAEL;
i <=CHAR_TREVOR;
i=i + 1){
if(_GET_CHARACTER_MODEL(i)==entityModel) return i;
}}
return _CHAR_NULL;
}
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x1FACB{
if(func_154(character)) return func_153(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_153(eCharacter echParam0) // Position - 0x1FAF0{
return Global_2028[echParam0 /*29*/];
}
BOOL func_154(eCharacter echParam0) // Position - 0x1FAFF{
return echParam0 < CHAR_MULTIPLAYER;
}


void func_155(const char* sParam0, int iParam1) // Position - 0x1FB0B{
STATS::STAT_SET_GXT_LABEL(joaat("SP_LAST_MISSION_NAME"), sParam0, true);
if(IS_BIT_SET(iParam1, 0)) STATS::STAT_SET_GXT_LABEL(joaat("SP0_LAST_MISSION_NAME"), sParam0, true);
if(IS_BIT_SET(iParam1, 1)) STATS::STAT_SET_GXT_LABEL(joaat("SP1_LAST_MISSION_NAME"), sParam0, true);
if(IS_BIT_SET(iParam1, 2)) STATS::STAT_SET_GXT_LABEL(joaat("SP2_LAST_MISSION_NAME"), sParam0, true);
return;
}

int func_156() // Position - 0x1FB5C{
func_157();
switch (Global_113648.f_2365.f_539.f_4321){
case CHAR_MICHAEL:
return 1;
case CHAR_FRANKLIN:
return 2;
case CHAR_TREVOR:
return 4;
}
return 0;
}


void func_157() // Position - 0x1FBA2{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_154(character) && !func_93(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_154(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
Global_113648.f_2365.f_539.f_4323=character;
Global_113648.f_2365.f_539.f_4321=character;
return;
}}else{
if(Global_113648.f_2365.f_539.f_4321 !=_CHAR_NULL) Global_113648.f_2365.f_539.f_4323=Global_113648.f_2365.f_539.f_4321;
return;
}}
Global_113648.f_2365.f_539.f_4321=145;
return;
}


struct<2> func_158(int iParam0) // Position - 0x1FC9F{
var unk;
var unk3;
TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
unk3={
func_159(iParam0) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&unk3)){}else{
TEXT_LABEL_ASSIGN_STRING(&unk, "RC_", 8);
TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
}
return unk;
}


struct<2> func_159(int iParam0) // Position - 0x1FCD6{
var unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "ABI1", 8);
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "ABI2", 8);
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "BA1", 8);
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "BA2", 8);
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "BA3", 8);
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "BA3A", 8);
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "BA3C", 8);
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "BA4", 8);
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "DRE1", 8);
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "EPS1", 8);
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "EPS2", 8);
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "EPS3", 8);
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "EPS4", 8);
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "EPS5", 8);
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "EPS6", 8);
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "EPS7", 8);
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "EPS8", 8);
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "EXT1", 8);
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "EXT2", 8);
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "EXT3", 8);
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "EXT4", 8);
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "FAN1", 8);
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "FAN2", 8);
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "FAN3", 8);
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAO1", 8);
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "HUN1", 8);
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "HUN2", 8);
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "JOS1", 8);
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "JOS2", 8);
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "JOS3", 8);
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "JOS4", 8);
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "MAU1", 8);
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "MIN1", 8);
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "MIN2", 8);
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "MIN3", 8);
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "MRS1", 8);
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "MRS2", 8);
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "NI1", 8);
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "NI1A", 8);
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "NI1B", 8);
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NI1C", 8);
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "NI1D", 8);
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "NI2", 8);
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "NI3", 8);
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "OME1", 8);
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "OME2", 8);
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "PA1", 8);
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "PA2", 8);
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "PA3", 8);
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "PA3A", 8);
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "PA3B", 8);
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "PA4", 8);
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "RAM1", 8);
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "RAM2", 8);
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "RAM3", 8);
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "RAM4", 8);
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "RAM5", 8);
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "SAS1", 8);
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "TON1", 8);
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "TON2", 8);
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "TON3", 8);
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "TON4", 8);
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "TON5", 8);
break;
default:
break;
}
return unk;
}


void func_160(int iParam0, int iParam1) // Position - 0x20124{
Global_78827=iParam1;
if(Global_63356) return;
if(Global_63383){
Global_63383=false;
return;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0){
if(Global_63356){
}
Global_63382=iParam0;
Global_63356=true;
Global_63367=1;
}
return;
}


void func_161(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2016E{
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, true);
}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
HUD::DISPLAY_HUD(true);
HUD::DISPLAY_RADAR(true);
CAM::SET_WIDESCREEN_BORDERS(false, 0);
MISC::SET_TIME_SCALE(1f);
func_174();
func_173(1, 1);
func_170();
func_168();
func_167(30000);
if(iParam1==1) func_162(iParam0, bParam2, bParam3);
HUD::SET_MISSION_NAME(false, 0);
return;
}


void func_162(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2020B{
var unk;
var unk33;
if(iParam0 !=-1){
func_164(iParam0, &unk);
TEXT_LABEL_COPY(&unk33,{
func_159(iParam0) 
}
, 4);
STATS::PLAYSTATS_MISSION_CHECKPOINT(&unk33, 0, Global_100718, 0);
func_163(&unk33, unk.f_3, Global_100718, bParam1, bParam2);
}
return;
}


void func_163(const char* sParam0, Any anParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2024A{
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_97751)) return;
if(MISC::COMPARE_STRINGS(sParam0, &Global_97751, false, -1) !=0) return;
STATS::PLAYSTATS_MISSION_OVER(sParam0, anParam1, iParam2, bParam3, bParam4, Global_94858);
TEXT_LABEL_ASSIGN_STRING(&Global_97751, "", 64);
return;
}


void func_164(int iParam0, var uParam1) // Position - 0x2028E{
switch (iParam0){
case 0:
func_165(uParam1, "Abigail1", func_158(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
break;
case 1:
func_165(uParam1, "Abigail2", func_158(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
break;
case 2:
func_165(uParam1, "Barry1", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
break;
case 3:
func_165(uParam1, "Barry2", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
break;
case 4:
func_165(uParam1, "Barry3", func_158(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_166(iParam0), 0, 0);
break;
case 5:
func_165(uParam1, "Barry3A", func_158(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
break;
case 6:
func_165(uParam1, "Barry3C", func_158(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
break;
case 7:
func_165(uParam1, "Barry4", func_158(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_166(iParam0), 0, 0);
break;
case 8:
func_165(uParam1, "Dreyfuss1", func_158(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
break;
case 9:
func_165(uParam1, "Epsilon1", func_158(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
break;
case 10:
func_165(uParam1, "Epsilon2", func_158(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
break;
case 11:
func_165(uParam1, "Epsilon3", func_158(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
break;
case 12:
func_165(uParam1, "Epsilon4", func_158(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
break;
case 13:
func_165(uParam1, "Epsilon5", func_158(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
break;
case 14:
func_165(uParam1, "Epsilon6", func_158(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_166(iParam0), 0, 1);
break;
case 15:
func_165(uParam1, "Epsilon7", func_158(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
break;
case 16:
func_165(uParam1, "Epsilon8", func_158(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
break;
case 17:
func_165(uParam1, "Extreme1", func_158(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
break;
case 18:
func_165(uParam1, "Extreme2", func_158(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
break;
case 19:
func_165(uParam1, "Extreme3", func_158(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
break;
case 20:
func_165(uParam1, "Extreme4", func_158(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
break;
case 21:
func_165(uParam1, "Fanatic1", func_158(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_166(iParam0), 1, 0);
break;
case 22:
func_165(uParam1, "Fanatic2", func_158(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_166(iParam0), 1, 0);
break;
case 23:
func_165(uParam1, "Fanatic3", func_158(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_166(iParam0), 0, 1);
break;
case 24:
func_165(uParam1, "Hao1", func_158(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_166(iParam0), 0, 1);
break;
case 25:
func_165(uParam1, "Hunting1", func_158(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
break;
case 26:
func_165(uParam1, "Hunting2", func_158(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
break;
case 27:
func_165(uParam1, "Josh1", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
break;
case 28:
func_165(uParam1, "Josh2", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
break;
case 29:
func_165(uParam1, "Josh3", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
break;
case 30:
func_165(uParam1, "Josh4", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
break;
case 31:
func_165(uParam1, "Maude1", func_158(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
break;
case 32:
func_165(uParam1, "Minute1", func_158(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
break;
case 33:
func_165(uParam1, "Minute2", func_158(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
break;
case 34:
func_165(uParam1, "Minute3", func_158(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
break;
case 35:
func_165(uParam1, "MrsPhilips1", func_158(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
break;
case 36:
func_165(uParam1, "MrsPhilips2", func_158(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
break;
case 37:
func_165(uParam1, "Nigel1", func_158(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_166(iParam0), 1, 0);
break;
case 38:
func_165(uParam1, "Nigel1A", func_158(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
break;
case 39:
func_165(uParam1, "Nigel1B", func_158(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_166(iParam0), 1, 1);
break;
case 40:
func_165(uParam1, "Nigel1C", func_158(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_166(iParam0), 1, 1);
break;
case 41:
func_165(uParam1, "Nigel1D", func_158(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_166(iParam0), 1, 1);
break;
case 42:
func_165(uParam1, "Nigel2", func_158(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
break;
case 43:
func_165(uParam1, "Nigel3", func_158(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
break;
case 44:
func_165(uParam1, "Omega1", func_158(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
break;
case 45:
func_165(uParam1, "Omega2", func_158(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
break;
case 46:
func_165(uParam1, "Paparazzo1", func_158(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
break;
case 47:
func_165(uParam1, "Paparazzo2", func_158(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
break;
case 48:
func_165(uParam1, "Paparazzo3", func_158(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_166(iParam0), 0, 0);
break;
case 49:
func_165(uParam1, "Paparazzo3A", func_158(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
break;
case 50:
func_165(uParam1, "Paparazzo3B", func_158(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
break;
case 51:
func_165(uParam1, "Paparazzo4", func_158(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
break;
case 52:
func_165(uParam1, "Rampage1", func_158(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
break;
case 54:
func_165(uParam1, "Rampage3", func_158(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
break;
case 55:
func_165(uParam1, "Rampage4", func_158(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
break;
case 56:
func_165(uParam1, "Rampage5", func_158(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
break;
case 53:
func_165(uParam1, "Rampage2", func_158(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
break;
case 57:
func_165(uParam1, "TheLastOne", func_158(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
break;
case 58:
func_165(uParam1, "Tonya1", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
break;
case 59:
func_165(uParam1, "Tonya2", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
break;
case 60:
func_165(uParam1, "Tonya3", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
break;
case 61:
func_165(uParam1, "Tonya4", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
break;
case 62:
func_165(uParam1, "Tonya5", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
break;
default:
break;
}
return;
}


void func_165(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x21443{
uParam0->f_4=iParam5;
*uParam0=sParam1;
uParam0->f_1={
uParam2 
};
uParam0->f_3=iParam4;
uParam0->f_5=iParam6;
uParam0->f_6={
fParam7 
};
uParam0->f_9=iParam10;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
uParam0->f_14=iParam12;
uParam0->f_15=iParam13;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
uParam0->f_22=iParam15;
uParam0->f_23=iParam16;
uParam0->f_24=iParam17;
uParam0->f_25=iParam18;
uParam0->f_26=iParam19;
uParam0->f_27=iParam20;
uParam0->f_28=iParam21;
uParam0->f_29=iParam22;
uParam0->f_30=iParam23;
uParam0->f_31=iParam24;
return;
}

int func_166(int iParam0) // Position - 0x214D4{
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 1;
case 4:
return 0;
case 5:
return 1;
case 6:
return 1;
case 7:
return 0;
case 8:
return 1;
case 9:
return 0;
case 10:
return 0;
case 11:
return 0;
case 12:
return 1;
case 13:
return 0;
case 14:
return 1;
case 15:
return 0;
case 16:
return 1;
case 17:
return 1;
case 18:
return 1;
case 19:
return 1;
case 20:
return 1;
case 21:
return 1;
case 22:
return 1;
case 23:
return 1;
case 24:
return 1;
case 25:
return 1;
case 26:
return 1;
case 27:
return 0;
case 28:
return 1;
case 29:
return 1;
case 30:
return 1;
case 31:
return 0;
case 32:
return 1;
case 33:
return 1;
case 34:
return 1;
case 35:
return 0;
case 36:
return 0;
case 37:
return 0;
case 38:
return 1;
case 39:
return 1;
case 40:
return 1;
case 41:
return 1;
case 42:
return 1;
case 43:
return 1;
case 44:
return 0;
case 45:
return 0;
case 46:
return 1;
case 47:
return 1;
case 48:
return 0;
case 49:
return 1;
case 50:
return 1;
case 51:
return 1;
case 52:
return 1;
case 54:
return 1;
case 55:
return 1;
case 56:
return 1;
case 53:
return 1;
case 57:
return 1;
case 58:
return 1;
case 59:
return 1;
case 60:
return 1;
case 61:
return 1;
case 62:
return 1;
default:
break;
}
return 0;
}


void func_167(int iParam0) // Position - 0x2181A{
Global_43808=MISC::GET_GAME_TIMER() + iParam0;
return;
}


void func_168() // Position - 0x2182C{
if(Global_97993){
func_157();
GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_169(Global_113648.f_2365.f_539.f_4321));
}else{
GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
}
return;
}


char* func_169(eCharacter echParam0) // Position - 0x2185E{
echParam0=echParam0;
return "";
}


void func_170() // Position - 0x2186D{
var textLabel;
if(MISC::IS_XBOX360_VERSION() || func_172()){
NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
}elseif(MISC::IS_PS3_VERSION() || func_171()){
TEXT_LABEL_ASSIGN_STRING(&textLabel, "PRESENCE_0_STR" /*Playing story*/, 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &textLabel);
}
return;
}
BOOL func_171() // Position - 0x218B0{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}
BOOL func_172() // Position - 0x218C6{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}


void func_173(int iParam0, int iParam1) // Position - 0x218DC{
Global_97988=iParam0;
Global_97989=iParam1;
return;
}


void func_174() // Position - 0x218F0{
Global_78813 !=6;
if(Global_78818){
HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
Global_78818=false;
Global_23270.f_8892=0;
}
Global_78813=6;
Global_78815=-1;
Global_78814=-1;
return;
}


void func_175(int iParam0) // Position - 0x21928{
if(*iParam0==-1) return;
if(!*iParam0==Global_43219){
*iParam0=-1;
return;
}
*iParam0=-1;
Global_43218=0;
Global_43220=0;
Global_43257=15;
Global_63359=0;
Global_63360=0;
return;
}


void func_176(int iParam0, BOOL bParam1) // Position - 0x21965{
var unk;
int newsStory;
BOOL flag;
int i;
var unk33;
int num;
int j;
var unk65;
int num2;
int num3;
func_164(iParam0, &unk);
if(!MISC::ARE_STRINGS_EQUAL(&(unk.f_16), "")){
while (!func_201(&(unk.f_16))){
SYSTEM::WAIT(0);
}}
if(unk.f_22 !=0) func_200(unk.f_22, 0);
func_191(iParam0, Global_78828);
if(!bParam1){
newsStory=func_190(iParam0);
if(newsStory !=0)if(!AUDIO::IS_MISSION_NEWS_STORY_UNLOCKED(newsStory)) AUDIO::UNLOCK_MISSION_NEWS_STORY(newsStory);
}
if(unk.f_24 !=-1){
flag=true;
if(unk.f_5 !=4){
for (i=0;
i < 63;
i=i + 1){
num=i;
if(num !=iParam0){
func_164(num, &unk33);
if(unk33.f_5==unk.f_5){
if(!IS_BIT_SET(Global_113648.f_18576[num /*6*/], 3)) flag=false;
if(!IS_BIT_SET(Global_113648.f_18576[num /*6*/], 0)) func_181(num);
}}}}
if(flag) func_181(unk.f_24);
}elseif(unk.f_25 !=4){
for (j=0;
j < 63;
j=j + 1){
num2=j;
if(num2 !=iParam0){
func_164(num2, &unk65);
if(unk65.f_5==unk.f_25) func_181(num2);
}}}
if(!IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 3)){
MISC::SET_BIT(&Global_113648.f_18576[iParam0 /*6*/], 3);
Global_112735[iParam0 /*10*/].f_5=1;
func_178(iParam0);
num3=func_177(iParam0);
if(num3 !=322) func_7(num3, 0, 0);
}
return;
}

int func_177(int iParam0) // Position - 0x21AE2{
switch (iParam0){
case 0:
return 109;
case 1:
return 322;
case 2:
return 69;
case 3:
return 70;
case 4:
return 322;
case 5:
return 71;
case 6:
return 71;
case 7:
return 72;
case 8:
return 68;
case 9:
return 73;
case 10:
return 74;
case 11:
return 75;
case 12:
return 76;
case 13:
return 77;
case 14:
return 78;
case 15:
return 79;
case 16:
return 80;
case 17:
return 81;
case 18:
return 82;
case 19:
return 83;
case 20:
return 84;
case 21:
return 85;
case 22:
return 86;
case 23:
return 87;
case 24:
return 106;
case 25:
return 178;
case 26:
return 179;
case 27:
return 88;
case 28:
return 89;
case 29:
return 90;
case 30:
return 91;
case 31:
return 107;
case 32:
return 92;
case 33:
return 93;
case 34:
return 94;
case 35:
return 110;
case 36:
return 111;
case 37:
return 95;
case 38:
return 96;
case 39:
return 97;
case 40:
return 98;
case 41:
return 99;
case 42:
return 100;
case 43:
return 101;
case 44:
return 66;
case 45:
return 67;
case 46:
return 102;
case 47:
return 103;
case 48:
return 322;
case 49:
return 104;
case 50:
return 104;
case 51:
return 105;
case 52:
return 194;
case 53:
return 195;
case 54:
return 196;
case 55:
return 197;
case 56:
return 198;
case 57:
return 108;
case 58:
return 208;
case 59:
return 209;
case 60:
return 210;
case 61:
return 211;
case 62:
return 212;
}
return 322;
}


void func_178(int iParam0) // Position - 0x21E69{
func_180(iParam0, true);
Global_113648.f_18576[iParam0 /*6*/].f_3=func_179();
Global_113648.f_18576.f_380=Global_113648.f_18576.f_380 + 1;
return;
}

int func_179() // Position - 0x21E9F{
return Global_113648.f_10018.f_21 + Global_113648.f_18576.f_380;
}


void func_180(int iParam0, BOOL bParam1) // Position - 0x21EBB{
int num;
int num2;
int num3;
num=55;
if(bParam1){
num2=iParam0;
if(num2==46) num=35;
elseif(num2==49) num=36;
elseif(num2==50) num=37;
elseif(num2==8) num=38;
elseif(num2==16) num=39;
elseif(num2==38) num=40;
elseif(num2==39) num=41;
elseif(num2==40) num=42;
elseif(num2==41) num=43;
elseif(num2==42) num=44;
elseif(num2==43) num=45;
elseif(num2==20) num=46;
}else{
num3=iParam0;
if(num3==53) num=0;
elseif(num3==1) num=1;
elseif(num3==2) num=2;
elseif(num3==17) num=3;
elseif(num3==19) num=4;
elseif(num3==43) num=5;
elseif(num3==44) num=6;
elseif(num3==63) num=8;
elseif(num3==12) num=9;
elseif(num3==13) num=10;
elseif(num3==64) num=11;
elseif(num3==20) num=12;
elseif(num3==30) num=13;
elseif(num3==31) num=14;
elseif(num3==41) num=15;
elseif(num3==38) num=16;
elseif(num3==9) num=18;
elseif(num3==59) num=19;
elseif(num3==45) num=20;
elseif(num3==10) num=21;
elseif(num3==14) num=22;
elseif(num3==16) num=24;
elseif(num3==39) num=25;
elseif(num3==46) num=26;
elseif(num3==60) num=27;
elseif(num3==22) num=28;
elseif(num3==48) num=30;
elseif(num3==61) num=31;
elseif(num3==49) num=32;
elseif(num3==27) num=34;
elseif(num3==3) num=47;
elseif(num3==4) num=48;
elseif(num3==5) num=49;
elseif(num3==6) num=50;
elseif(num3==7) num=51;
elseif(num3==58) num=53;
elseif(num3==90) num=7;
elseif(num3==74 || num3==75) num=17;
elseif(num3==93) num=23;
elseif(num3==69 || num3==70) num=29;
elseif(num3==84 || num3==85) num=33;
}
if(num !=55) Global_113648.f_20566.f_472=num;
return;
}


void func_181(int iParam0) // Position - 0x221DF{
if(iParam0==63 || iParam0==-1) return;
func_182(iParam0);
MISC::SET_BIT(&Global_113648.f_18576[iParam0 /*6*/], 0);
return;
}


void func_182(int iParam0) // Position - 0x22212{
switch (iParam0){
case 30:
func_183(22, 1, 0, true, 0);
break;
case 15:
func_230(37, false);
break;
default:
break;
}
return;
}


void func_183(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x22247{
if(iParam0 !=198){
if(Global_78558) Global_42791.f_227[iParam0]=iParam1;
else Global_113648.f_7263.f_227[iParam0]=iParam1;
Global_39797[iParam0]=bParam2;
Global_39996[iParam0]=1;
func_186(iParam0, bParam3, iParam4, false);
func_184(iParam0, iParam1);
}
return;
}


void func_184(int iParam0, int iParam1) // Position - 0x2229F{
switch (iParam0){
case 12:
if(iParam1==0) AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", false, false);
else AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", true, false);
break;
case 71:
if(iParam1 !=1) unk_0x14D7CA14E183F034("HEIST_SWEATSHOP_ZONES", 0, 0);
else unk_0x14D7CA14E183F034("HEIST_SWEATSHOP_ZONES", 1, 0);
break;
case 65:
if(iParam1==1) func_185(0, false);
else func_185(0, true);
break;
case 6:
if(iParam1==1) AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", true, false);
else AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", false, false);
break;
case 174:
if(iParam1==2) unk_0x2FF31AAA6E87720B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
break;
case 37:
if(iParam1==1){
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", false);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", false);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", false);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", false);
}
break;
}
return;
}


void func_185(int iParam0, BOOL bParam1) // Position - 0x22388{
if(bParam1) MISC::SET_BIT(&Global_112286, iParam0);
else MISC::CLEAR_BIT(&Global_112286, iParam0);
Global_112285=1;
return;
}
BOOL func_186(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x223B1{
BOOL flag;
int num;
int num2;
Vector3 vector;
Object rayfireMapObject;
BOOL flag2;
Interior interiorAtCoordsWithType;
Global_1925773=1;
flag=false;
vector.f_4=3;
vector.f_8=3;
vector.f_64=3;
vector.f_75=3;
vector.f_91=3;
func_189(&vector, iParam0);
if(func_187()) num=Global_113648.f_7263.f_227[iParam0];
else num=Global_42791.f_227[iParam0];
num2=Global_40195[iParam0];
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3){
Global_1925773=1;
}else{
flag2=true;
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=MISC::GET_HASH_KEY("standard_global_reg")){
if(iParam2==0){
if(Global_39797[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector, true) < 200f){
flag2=false;
Global_1925773=1;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID())){
if(!CAM::IS_SCREEN_FADED_OUT()){
flag2=false;
Global_1925773=1;
}}}}
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() !=5){
flag2=false;
Global_1925773=1;
}
if(flag2){
switch (vector.f_3){
case 0:
if(num==2){
}else{
if(vector.f_4[num] !=0) ENTITY::REMOVE_MODEL_HIDE(vector, 10f, vector.f_4[num], false);
if(vector.f_4[num2] !=0) ENTITY::CREATE_MODEL_HIDE(vector, 10f, vector.f_4[num2], true);
Global_41391[iParam0]=1;
}
flag=true;
break;
case 1:
if(num==0){
if(MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/])){
if(STREAMING::IS_IPL_ACTIVE(&vector.f_8[1 /*8*/])){
STREAMING::REMOVE_IPL(&vector.f_8[1 /*8*/]);
Global_1925773=1;
}
}
if(MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/])){
if(STREAMING::IS_IPL_ACTIVE(&vector.f_8[2 /*8*/])){
STREAMING::REMOVE_IPL(&vector.f_8[2 /*8*/]);
Global_1925773=1;
}
}
if(MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&vector.f_8[0 /*8*/])){
STREAMING::REQUEST_IPL(&vector.f_8[0 /*8*/]);
Global_1925773=1;
}
}
if(MISC::GET_HASH_KEY(&(vector.f_34)) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(vector.f_34))){
STREAMING::REQUEST_IPL(&(vector.f_34));
Global_1925773=1;
}
}}elseif(num==1){
if(MISC::GET_HASH_KEY(&(vector.f_34)) !=MISC::GET_HASH_KEY(""))if(STREAMING::IS_IPL_ACTIVE(&(vector.f_34))) STREAMING::REMOVE_IPL(&(vector.f_34));
if(MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))if(STREAMING::IS_IPL_ACTIVE(&vector.f_8[0 /*8*/])) STREAMING::REMOVE_IPL(&vector.f_8[0 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))if(STREAMING::IS_IPL_ACTIVE(&vector.f_8[2 /*8*/])) STREAMING::REMOVE_IPL(&vector.f_8[2 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY(""))if(!STREAMING::IS_IPL_ACTIVE(&vector.f_8[1 /*8*/])) STREAMING::REQUEST_IPL(&vector.f_8[1 /*8*/]);
}elseif(num==2){
if(MISC::GET_HASH_KEY(&(vector.f_34)) !=MISC::GET_HASH_KEY(""))if(STREAMING::IS_IPL_ACTIVE(&(vector.f_34))) STREAMING::REMOVE_IPL(&(vector.f_34));
if(MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))if(STREAMING::IS_IPL_ACTIVE(&vector.f_8[0 /*8*/])) STREAMING::REMOVE_IPL(&vector.f_8[0 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))if(STREAMING::IS_IPL_ACTIVE(&vector.f_8[1 /*8*/])) STREAMING::REMOVE_IPL(&vector.f_8[1 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))if(!STREAMING::IS_IPL_ACTIVE(&vector.f_8[2 /*8*/])) STREAMING::REQUEST_IPL(&vector.f_8[2 /*8*/]);
}
Global_41192[iParam0]=1;
Global_41391[iParam0]=1;
flag=true;
break;
case 2:
interiorAtCoordsWithType=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vector, &(vector.f_42));
if(interiorAtCoordsWithType !=0){
if(MISC::GET_HASH_KEY(&(vector.f_50)) !=MISC::GET_HASH_KEY(""))if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &(vector.f_50))) INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &(vector.f_50));
if(num==0){
if(MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY(""))if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[1 /*8*/])) INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[1 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[2 /*8*/])) INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[2 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY(""))if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[0 /*8*/])) INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[0 /*8*/]);
}
elseif(num==1){
if(MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY(""))if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[0 /*8*/])) INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[0 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[2 /*8*/])) INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[2 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY(""))if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[1 /*8*/])) INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[1 /*8*/]);
}
elseif(num==2){
if(MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY(""))if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[0 /*8*/])) INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[0 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY(""))if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[1 /*8*/])) INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[1 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[2 /*8*/])) INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[2 /*8*/]);
}
if(bParam1) INTERIOR::REFRESH_INTERIOR(interiorAtCoordsWithType);
}
Global_41391[iParam0]=1;
Global_41192[iParam0]=1;
flag=true;
break;
case 3:
if(MISC::GET_DISTANCE_BETWEEN_COORDS(vector, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 250f){
rayfireMapObject=OBJECT::GET_RAYFIRE_MAP_OBJECT(vector, 25f, &vector.f_8[0 /*8*/]);
if(OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(rayfireMapObject)){
if(num==0){
OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(rayfireMapObject, 3);
Global_41391[iParam0]=1;
flag=true;
}elseif(num==1){
if(OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(rayfireMapObject) !=6 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(rayfireMapObject) !=7 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(rayfireMapObject) !=8){
OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(rayfireMapObject, 10);
Global_41391[iParam0]=1;
flag=true;
}}elseif(num==2){
flag=true;
}
}}
break;
case 4:
if(num==0){
ENTITY::REMOVE_MODEL_SWAP(vector, 50f, vector.f_4[1], vector.f_4[0], false);
MISC::CLEAR_BIT(&Global_39543[iParam0 / 32], iParam0 % 32);
}elseif(num==1){
ENTITY::CREATE_MODEL_SWAP(vector, 50f, vector.f_4[0], vector.f_4[1], true);
MISC::SET_BIT(&Global_39543[iParam0 / 32], iParam0 % 32);
}
flag=true;
break;
}
if(flag){
Global_39996[iParam0]=0;
Global_40195[iParam0]=num;
if(!func_187()){
if(!Global_40792[iParam0]){
Global_40792[iParam0]=true;
Global_40991=Global_40991 + 1;
}}}}}
return flag;
}
BOOL func_187() // Position - 0x22D00{
if(func_9()==-1 || func_9()==999 && !func_188()==0) return true;
return false;
}

int func_188() // Position - 0x22D30{
return Global_32164;
}

int func_189(var uParam0, int iParam1) // Position - 0x22D3B{
int i;
for (i=0;
i < 3;
i=i + 1){
uParam0->f_4[i]=0;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[i /*8*/], "", 32);
uParam0->f_64[i]=0;
uParam0->f_75[i]=0;
uParam0->f_91[i]=0;
}
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0;
uParam0->f_33=0;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_34), "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_50), "", 32);
uParam0->f_58={
0f, 0f, 0f 
};
uParam0->f_61={
0f, 0f, 0f 
};
uParam0->f_68={
0f, 0f, 0f 
};
uParam0->f_71={
0f, 0f, 0f 
};
uParam0->f_74=0f;
uParam0->f_79={
0f, 0f, 0f 
};
uParam0->f_82={
0f, 0f, 0f 
};
uParam0->f_85={
0f, 0f, 0f 
};
uParam0->f_88={
0f, 0f, 0f 
};
switch (iParam1){
case 3:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "TRV1_Trail_start", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "TRV1_Trail_end", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "TRV1_Trail_Finish", 32);
uParam0->f_33=1;
*uParam0={
-24.685f, 3032.92f, 40.331f 
};
break;
case 4:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CS3_05_water_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS3_05_water_grp2", 32);
*uParam0={
-24.685f, 3032.92f, 40.331f 
};
break;
case 0:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "gasstation_ipl_group1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "gasstation_ipl_group2", 32);
*uParam0={
-93.4f, 6410.9f, 36.8f 
};
break;
case 1:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DES_Smash2_startimap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DES_Smash2_endimap", 32);
*uParam0={
890.3647f, -2367.289f, 28.10582f 
};
break;
case 2:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DES_StiltHouse_imapstart", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DES_StiltHouse_imapend", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "des_stilthouse_rebuild", 32);
uParam0->f_33=0;
*uParam0={
-1020.5f, 663.41f, 154.75f 
};
uParam0->f_58={
-1018.91345f, 603.2904f, 105.66109f 
};
uParam0->f_61={
-1038.9135f, 639.2904f, 135.66109f 
};
uParam0->f_64[0]=1;
uParam0->f_64[1]=0;
break;
case 5:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "bnkheist_apt_norm", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest", 32);
break;
case 196:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest_vfx", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
break;
case 6:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "crashed_cargoplane", 32);
break;
case 7:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_jb700_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 8:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_entityXF_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 9:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_cheetah_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 10:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_ztype_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 11:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "BH1_48_Killed_Michael", 32);
break;
case 12:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "cargoship", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "sunkcargoship", 32);
uParam0->f_68={
-162.89182f, -2365.7693f, 0f 
};
uParam0->f_71={
190.75f, 31.25f, 21f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
break;
case 13:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ship_occ_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ship_occ_grp2", 32);
break;
case 14:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "smboat", 32);
break;
case 15:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "gasparticle_grp2", 32);
*uParam0={
-95.2f, 6411.3f, 31.5f 
};
break;
case 16:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CS1_02_cf_offmission", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission1", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 17:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission2", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 18:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission3", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 19:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission4", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 20:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "jetstealtunnel", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
801.7f, -1810.8f, 23.3f 
};
break;
case 21:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Jetsteal_ipl_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Jetsteal_ipl_grp2", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
787.3967f, -1808.8584f, 29.8532f 
};
uParam0->f_58={
814f, -1750f, 20f 
};
uParam0->f_61={
790f, -1899f, 35f 
};
uParam0->f_64[0]=1;
uParam0->f_64[1]=0;
uParam0->f_64[2]=0;
break;
case 22:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "BH1_47_JoshHse_UnBurnt", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "BH1_47_JoshHse_Burnt", 32);
break;
case 23:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bh1_47_joshhse_firevfx", 32);
break;
case 24:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SC1_30_Keep_Closed", 32);
break;
case 25:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "triathlon2_VBprops", 32);
break;
case 26:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_REQUEST", 32);
*uParam0={
163.4f, -745.7f, 251f 
};
break;
case 27:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "FBI_colPLUG", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
74.29f, -736.05f, 46.76f 
};
break;
case 28:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FBI_repair", 32);
*uParam0={
74.29f, -736.05f, 46.76f 
};
break;
case 29:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_build1_h");
uParam0->f_4[1]=joaat("dt1_05_build1_damage");
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 30:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_build1_lod");
uParam0->f_4[1]=joaat("dt1_05_build1_damage_lod");
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 31:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_slod");
uParam0->f_4[1]=joaat("dt1_05_damage_slod");
*uParam0={
178.534f, -668.835f, 37.2113f 
};
break;
case 32:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "FIB_heist_lights", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 33:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FIB_heist_dmg", 32);
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 34:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_rubble", 32);
*uParam0={
74.29f, -736.05f, 46.76f 
};
break;
case 35:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "FIBlobbyfake", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FIBlobby", 32);
*uParam0={
105.4557f, -745.4835f, 44.7548f 
};
break;
case 36:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_05_HC_REMOVE", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_HC_REQ", 32);
*uParam0={
169f, -670.3f, 41.9f 
};
break;
case 37:
uParam0->f_3=1;
*uParam0={
50.2f, 3743.9f, 40.9f 
};
uParam0->f_79={
16.9757f, 3614.3074f, 30.0677f 
};
uParam0->f_82={
145.2451f, 3748.912f, 49.6958f 
};
uParam0->f_85={
16.9757f, 3614.3074f, 30.0677f 
};
uParam0->f_88={
145.2451f, 3748.912f, 49.6958f 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
break;
case 38:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkA_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkA_grp2", 32);
*uParam0={
50.2f, 3743.9f, 40.9f 
};
break;
case 39:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerA_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
50.2f, 3743.9f, 40.9f 
};
break;
case 40:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkB_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkB_grp2", 32);
*uParam0={
106.7f, 3732.1f, 40.8f 
};
break;
case 41:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerB_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
106.7f, 3732.1f, 40.8f 
};
break;
case 42:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkC_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkC_grp2", 32);
*uParam0={
72.7f, 3695.4f, 42f 
};
break;
case 43:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerC_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
72.7f, 3695.4f, 42f 
};
break;
case 44:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkD_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkD_grp2", 32);
*uParam0={
43.8f, 3699.7f, 41.3f 
};
break;
case 45:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerD_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
43.8f, 3699.7f, 41.3f 
};
break;
case 46:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkE_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkE_grp2", 32);
*uParam0={
28.5f, 3668f, 40.4f 
};
break;
case 47:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerE_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
28.5f, 3668f, 40.4f 
};
break;
case 48:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_34), "des_methtrailer", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "methtrailer_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "methtrailer_grp2", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "methtrailer_grp3", 32);
uParam0->f_33=1;
*uParam0={
29.4838f, 3735.593f, 38.688f 
};
uParam0->f_68={
31.134f, 3738.783f, 39.062f 
};
uParam0->f_71={
13.6f, 20f, 8.9f 
};
uParam0->f_74=48f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=1;
break;
case 49:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_meth_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
29.4838f, 3735.593f, 38.688f 
};
break;
case 50:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "des_farmhs_startimap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "des_farmhs_endimap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
2450.5955f, 4959.929f, 44.2575f 
};
uParam0->f_79={
2383.7556f, 4929.9883f, 39.52461f 
};
uParam0->f_82={
2505.7556f, 5023.9883f, 67.52461f 
};
break;
case 55:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "des_farmhs_start_occl", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "des_farmhs_end_occl", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
*uParam0={
2450.5955f, 4959.929f, 44.2575f 
};
break;
case 51:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "farm", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "farm", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "farm_burnt", 32);
uParam0->f_33=1;
*uParam0={
2444.8f, 4976.4f, 50.5f 
};
break;
case 52:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "farm_props", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "farm_burnt_props", 32);
uParam0->f_33=1;
*uParam0={
2447.9f, 4973.4f, 47.7f 
};
break;
case 53:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "des_farmhouse", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "des_farmhouse", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
2447.9f, 4973.4f, 47.7f 
};
break;
case 54:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "farmint_cap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "farmint", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
*uParam0={
2447.9f, 4973.4f, 47.7f 
};
break;
case 56:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "tankerexp_grp0", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "tankerexp_grp3", 32);
*uParam0={
1676.4154f, -1626.3705f, 111.4848f 
};
break;
case 57:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "tankerexp_grp1", 32);
*uParam0={
1676.4154f, -1626.3705f, 111.4848f 
};
break;
case 58:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "tankerexp_grp2", 32);
*uParam0={
1676.4154f, -1626.3705f, 111.4848f 
};
break;
case 59:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DES_tankerexp", 32);
*uParam0={
1676.4154f, -1626.3705f, 111.4848f 
};
break;
case 60:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "dockcrane1", 32);
*uParam0={
889.3f, -2910.9f, 40f 
};
break;
case 61:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CanyonRvrShallow", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CanyonRvrDeep", 32);
*uParam0={
-1600.6194f, 4443.4565f, 0.725f 
};
break;
case 62:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Garage_door_locked", 32);
*uParam0={
966.1f, -114.8f, 75.2f 
};
break;
case 63:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ch1_02_closed", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ch1_02_open", 32);
*uParam0={
-3086.4285f, 339.2523f, 6.3717f 
};
break;
case 64:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ferris_finale_Anim", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
-1675.1783f, -1143.6046f, 12.0175f 
};
break;
case 65:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "railing_start", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "railing_end", 32);
*uParam0={
-532.1309f, 4526.187f, 88.7955f 
};
break;
case 66:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "canyonriver01", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "canyonriver01_traincrash", 32);
*uParam0={
-532.1309f, 4526.187f, 88.7955f 
};
break;
case 67:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_05_WOFFM", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_FIB2_Mission", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "DT1_05_WOFFM", 32);
*uParam0={
131.29f, -631.22f, 261.85f 
};
break;
case 68:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "coronertrash", 32);
*uParam0={
233.9f, -1355f, 30.3f 
};
break;
case 69:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Coroner_Int_off", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Coroner_Int_on", 32);
*uParam0={
234.4f, -1355.6f, 40.5f 
};
break;
case 70:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "id2_14_pre_no_int", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 71:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "id2_14_during1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "id2_14_during2", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 72:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "id2_14_on_fire", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "id2_14_post_no_int", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 73:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "id2_14_during_door", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 74:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "burnt_switch_off", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 75:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "RC12B_Default", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "RC12B_Destroyed", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "RC12B_Fixed", 32);
uParam0->f_33=0;
*uParam0={
330.4596f, -584.8196f, 42.3174f 
};
break;
case 76:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "RC12B_HospitalInterior", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
330.4596f, -584.8196f, 42.3174f 
};
break;
case 105:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SM_15_BldGRAF1", 32);
*uParam0={
330.4596f, -584.8196f, 42.3174f 
};
break;
case 106:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CH3_RD2_BishopsChickenGraffiti", 32);
*uParam0={
1861.28f, 2402.11f, 58.53f 
};
break;
case 107:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FruitBB", 32);
*uParam0={
-1327.46f, -274.82f, 54.25f 
};
break;
case 108:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS5_04_MazeBillboardGraffiti", 32);
*uParam0={
2697.32f, 3162.18f, 58.1f 
};
break;
case 109:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS5_Roads_RonOilGraffiti", 32);
*uParam0={
2119.12f, 3058.21f, 53.25f 
};
break;
case 110:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ap1_03_bbrd_dcl", 32);
*uParam0={
-804.25f, -2276.88f, 23.59f 
};
break;
case 111:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "HW1_02_OldBill", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "HW1_02_NewBill", 32);
*uParam0={
296.5f, 173.3f, 100.4f 
};
break;
case 112:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "HW1_Emissive_OldBill", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "HW1_Emissive_NewBill", 32);
*uParam0={
296.5f, 173.3f, 100.4f 
};
break;
case 77:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=1;
*uParam0={
480.9554f, -1321.2096f, 28.2037f 
};
uParam0->f_85={
508.3f, -1299.3f, 39.4f 
};
uParam0->f_88={
459.9f, -1363.2f, 21.4f 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
uParam0->f_91[2]=0;
break;
case 78:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "TrevorsTrailer", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "TrevorsTrailerTrash", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "TrevorsTrailerTidy", 32);
*uParam0={
1973f, 3815f, 34f 
};
uParam0->f_33=0;
break;
case 79:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "scafstartimap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "scafendimap", 32);
*uParam0={
-1088.6f, -1650.6f, 6.4f 
};
break;
case 80:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "chop_props", 32);
*uParam0={
-13.83f, -1455.45f, 31.81f 
};
break;
case 113:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "AP1_04_TriAf01", 32);
*uParam0={
-1277.6292f, -2030.913f, 1.2823f 
};
break;
case 114:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS2_06_TriAf02", 32);
*uParam0={
2384.9692f, 4277.5825f, 30.379f 
};
break;
case 115:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS4_04_TriAf03", 32);
*uParam0={
1577.8813f, 3836.1074f, 30.7717f 
};
break;
case 87:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_21_prop_lift_on", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
-180.5771f, -1016.9276f, 28.2893f 
};
break;
case 88:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "jewel2fake", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "post_hiest_unload", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "bh1_16_refurb", 32);
*uParam0={
-630.4205f, -236.7843f, 37.057f 
};
uParam0->f_79={
-623.6868f - 11f, -231.93504f - 11f, 40.307034f - 3.25f 
};
uParam0->f_82={
-623.6868f + 11f, -231.93504f + 11f, 40.307034f + 3.25f 
};
break;
case 89:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "bh1_16_doors_shut", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "refit_unload", 32);
*uParam0={
-583.1606f, -282.3967f, 35.394f 
};
break;
case 90:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "v_tunnel_hole_swap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "v_tunnel_hole", 32);
*uParam0={
-14.651f, -604.3639f, 25.1823f 
};
break;
case 91:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "cs5_4_trains", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
2773.6099f, 2835.3274f, 35.1903f 
};
break;
case 94:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "airfield", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
1743.6821f, 3286.2512f, 40.0875f 
};
break;
case 95:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
1222.9f, 1877.9f, 79.9f 
};
uParam0->f_58={
1206.8f, 1803f, 43.9f 
};
uParam0->f_61={
1329f, 2060.4f, 143.9f 
};
uParam0->f_64[0]=0;
uParam0->f_64[1]=1;
uParam0->f_64[2]=0;
break;
case 104:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SC1_01_OldBill", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SC1_01_NewBill", 32);
*uParam0={
-351f, -1324f, 44.02f 
};
break;
case 103:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_17_OldBill", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_17_NewBill", 32);
*uParam0={
391.81f, -962.71f, 41.97f 
};
break;
case 102:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SC1_14_OldBill", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SC1_14_NewBill", 32);
*uParam0={
424.2f, -1944.31f, 33.09f 
};
break;
case 92:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ld_rail_01_track", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
2626.3743f, 2949.869f, 39.1409f 
};
break;
case 93:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ld_rail_02_track", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
2626.3743f, 2949.869f, 39.1409f 
};
break;
case 118:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_M_items", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_M_moved", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-811.2679f, 179.3344f, 75.7408f 
};
break;
case 116:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_D_items", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_D_Moved", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-802.0311f, 172.9131f, 75.7408f 
};
break;
case 117:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_S_items", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_S_items_swap", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808.033f, 172.1309f, 75.7406f 
};
break;
case 119:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_L_Items", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_L_Moved", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808.033f, 172.1309f, 75.7406f 
};
break;
case 120:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_M_items_swap", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808.033f, 172.1309f, 75.7406f 
};
break;
case 122:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_FameShame", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-802.0311f, 172.9131f, 75.7408f 
};
break;
case 121:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_JewelHeist", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 123:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Michael_premier", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 124:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_plane_ticket", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 170:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "burgershot_yoga", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 171:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_Scuba", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael_Garage", 32);
*uParam0={
-810.5301f, 187.7868f, 71.4786f 
};
break;
case 125:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_bed_tidy", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_bed_Messy", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-811.2679f, 179.3344f, 75.7408f 
};
break;
case 164:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Jewel_Gasmasks", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 165:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_53_Agency _Overalls", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 166:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_53_Agency_Blueprint", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 167:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_35_KitBag", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 168:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_35_Body_Armour", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 169:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_35_Fireman", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 126:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet1", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 127:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet3", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 128:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet2", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 129:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase1", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 130:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase3", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 131:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase2", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 132:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay1", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 133:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay3", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 134:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay2", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 179:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "shutter_open", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "shutter_closed", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-30.8793f, -1088.3356f, 25.4221f 
};
uParam0->f_68={
-29.3f, -1086.35f, 25.57f 
};
uParam0->f_71={
5.5f, 3f, 2f 
};
uParam0->f_74=-10f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
break;
case 174:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "csr_beforeMission", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "csr_afterMissionA", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "csr_afterMissionB", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_50), "csr_inMission", 32);
uParam0->f_33=0;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-59.7936f, -1098.784f, 27.2612f 
};
break;
case 175:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-49.21f, -1090.28f, 25.42f 
};
uParam0->f_68={
-49.21f, -1090.28f, 25.42f 
};
uParam0->f_71={
2.5f, 3f, 3f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 176:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-49.28f, -1092.66f, 25.42f 
};
uParam0->f_68={
-49.28f, -1092.66f, 25.42f 
};
uParam0->f_71={
3f, 1f, 3f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 177:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-53.07f, -1096.73f, 25.5f 
};
uParam0->f_68={
-53.07f, -1096.73f, 25.5f 
};
uParam0->f_71={
1f, 3f, 2f 
};
uParam0->f_74=-45f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 178:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "carshowroom_broken", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "carshowroom_boarded", 32);
uParam0->f_33=0;
*uParam0={
-59.7936f, -1098.784f, 27.2612f 
};
break;
case 173:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "shr_int", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "fakeint", 32);
uParam0->f_33=0;
*uParam0={
-59.7936f, -1098.784f, 27.2612f 
};
break;
case 180:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_03_Shutter", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "", 32);
*uParam0={
23.9346f, -669.7552f, 30.8853f 
};
break;
case 181:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Hospitaldoorsanim", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "Hospitaldoorsfixed", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_hospital", 32);
uParam0->f_33=0;
*uParam0={
300.9423f, -586.1784f, 42.2919f 
};
break;
case 135:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "swap_clean_apt", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_mess_A", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 136:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_mess_B", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 137:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_mess_C", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 138:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_sextoys_a", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 139:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_wade_shit", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 140:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_wade_sofa_A", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 141:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "layer_debra_pic", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 142:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_torture", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 143:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "swap_sofa_A", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_sofa_B", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 144:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_whiskey", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 145:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "swap_mrJam_A", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_mrJam_B", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 146:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_mrJam_C", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 147:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "vb_30_emissive", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "vb_30_murder", 32);
uParam0->f_33=0;
*uParam0={
-1150.0391f, -1521.761f, 9.6331f 
};
break;
case 148:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "vb_30_crimetape", 32);
uParam0->f_33=0;
*uParam0={
-1150.0391f, -1521.761f, 9.6331f 
};
break;
case 149:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "sheriff_cap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
1856.0288f, 3682.9983f, 33.2675f 
};
break;
case 150:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CS1_16_Sheriff_Cap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
-440.5073f, 6018.766f, 30.49f 
};
break;
case 151:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ufo", 32);
uParam0->f_33=0;
*uParam0={
487.31f, 5588.3857f, 793.0532f 
};
break;
case 152:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ufo_eye", 32);
uParam0->f_33=0;
*uParam0={
487.31f, 5588.3857f, 793.0532f 
};
break;
case 153:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_57_FranklinStuff", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_57_Franklin_LEFT", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13.9623f, -1440.6136f, 30.1015f 
};
break;
case 154:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_57_GangBandana", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13.9623f, -1440.6136f, 30.1015f 
};
break;
case 155:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_57_Safari", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13.9623f, -1440.6136f, 30.1015f 
};
break;
case 172:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_19_Trevor_Mess", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_strip3", 32);
*uParam0={
96.4811f, -1291.2944f, 28.2688f 
};
break;
case 182:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
139.57953f, -3092.9624f, 8.64631f 
};
uParam0->f_79={
{
8.64631f, -3092.9624f, 139.57953f 
}
-{
4.1875f, 24f, 33.3125f 
}};
uParam0->f_82={
{
8.64631f, -3092.9624f, 139.57953f 
}
+{
4.1875f, 24f, 33.3125f 
}};
uParam0->f_85={
{
8.64631f, -3092.9624f, 139.57953f 
}
-{
4.1875f, 24f, 33.3125f 
}};
uParam0->f_88={
{
8.64631f, -3092.9624f, 139.57953f 
}
+{
4.1875f, 24f, 33.3125f 
}};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
uParam0->f_91[2]=1;
break;
case 183:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
203.77838f, -3131.767f, 7.041344f 
};
uParam0->f_79={
{
7.041344f, -3131.767f, 203.77838f 
}
-{
2.5625f, 2.75f, 4.875f 
}};
uParam0->f_82={
{
7.041344f, -3131.767f, 203.77838f 
}
+{
2.5625f, 2.75f, 4.875f 
}};
break;
case 184:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
144.77055f, -2982.6594f, 7.952507f 
};
uParam0->f_79={
{
7.952507f, -2982.6594f, 144.77055f 
}
-{
3.125f, 3.4375f, 5.3125f 
}};
uParam0->f_82={
{
7.952507f, -2982.6594f, 144.77055f 
}
+{
3.125f, 3.4375f, 5.3125f 
}};
break;
case 185:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=1;
*uParam0={
-1154.9647f, -1520.9827f, 9.132731f 
};
uParam0->f_79={
-1154.9647f, -1520.9827f, 9.132731f 
};
uParam0->f_82={
-1158.9647f, -1524.9827f, 11.632731f 
};
break;
case 187:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=1;
*uParam0={
-1052.2039f, 371.9537f, 67.914f 
};
uParam0->f_79={
-1052.2039f, 371.9537f, 67.914f 
};
uParam0->f_82={
-1048.0645f, 368.0221f, 70.9128f 
};
break;
case 186:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=1;
*uParam0={
1954.9836f, 3792.991f, 30.3086f 
};
uParam0->f_79={
1954.9836f, 3792.991f, 30.3086f 
};
uParam0->f_82={
1983.45f, 3830.78f, 36.2726f 
};
break;
case 188:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=1;
*uParam0={
-1122.2018f, 48.5724f, 51.4652f 
};
uParam0->f_79={
-1122.2018f, 48.5724f, 51.4652f 
};
uParam0->f_82={
-1076.2333f, 92.1041f, 60.0617f 
};
break;
case 81:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "KorizTempWalls", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
-2199.1377f, 223.4648f, 181.1118f 
};
break;
case 82:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "mic3_chopper_debris", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
-2242.7847f, 263.4779f, 173.6154f 
};
break;
case 83:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "chemgrill_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
3832.9f, 3665.5f, -23.4f 
};
break;
case 84:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Plane_crash_trench", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
2814.7f, 4758.5f, 47.9f 
};
break;
case 85:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "golfflags", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
-1096.5055f, 4.5754f, 49.8103f 
};
break;
case 86:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "yogagame", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
-781.6566f, 186.8937f, 71.8352f 
};
break;
case 189:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Carwash_with_spinners", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Carwash_without_spinners", 32);
uParam0->f_33=0;
*uParam0={
55.7f, -1391.3f, 30.5f 
};
break;
case 190:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "KT_CarWash", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "KT_CarWash_NoBrush", 32);
uParam0->f_33=0;
*uParam0={
700.091f, -933.641f, 20.308f 
};
break;
case 191:
uParam0->f_3=1;
*uParam0={
-1096.3812f, -836.17f, 36.6755f 
};
uParam0->f_85={
*uParam0 -{
25f, 25f, 15f 
}};
uParam0->f_88={
*uParam0 +{
25f, 25f, 15f 
}};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 192:
uParam0->f_3=1;
*uParam0={
449.6558f, -980.1375f, 42.6918f 
};
uParam0->f_85={
*uParam0 -{
25f, 25f, 15f 
}};
uParam0->f_88={
*uParam0 +{
25f, 25f, 15f 
}};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 193:
uParam0->f_3=1;
*uParam0={
363.0175f, -1598.0793f, 35.9502f 
};
uParam0->f_85={
*uParam0 -{
25f, 25f, 15f 
}};
uParam0->f_88={
*uParam0 +{
25f, 25f, 15f 
}};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 194:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS3_07_MPGates", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
*uParam0={
-1601.4241f, 2808.2126f, 16.2598f 
};
break;
case 97:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_03_Gr_Closed", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
23.7318f, -647.2123f, 37.9549f 
};
break;
case 98:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FINBANK", 32);
*uParam0={
12.9689f, -648.4698f, 9.7693f 
};
break;
case 99:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "PAPER1_RCM_ALT", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "PAPER1_RCM", 32);
*uParam0={
-1459.1273f, 486.1281f, 115.2016f 
};
break;
case 100:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SP1_10_fake_interior", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SP1_10_real_interior", 32);
*uParam0={
-248.4916f, -2010.509f, 34.5743f 
};
break;
case 101:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "facelobbyfake", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "facelobby", 32);
*uParam0={
-1081.3467f, -263.1502f, 38.7152f 
};
break;
case 195:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "atriumglstatic", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "atriumglmission", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "atriumglcut", 32);
*uParam0={
136.1795f, -750.701f, 262.0516f 
};
break;
case 197:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "racetrack01", 32);
*uParam0={
2096f, 3168.7f, 42.9f 
};
break;
}
switch (iParam1){
case 156:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "showhome_only", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 157:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "franklin_unpacking", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 158:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "franklin_settled", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 163:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "progress_tshirt", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 159:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bong_and_wine", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 161:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "progress_flyer", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 162:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "progress_tux", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 160:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "locked", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "unlocked", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 96:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "chophillskennel", 32);
*uParam0={
19.0568f, 536.4818f, 169.6277f 
};
break;
}
return 1;
}

int func_190(int iParam0) // Position - 0x264D7{
switch (iParam0){
case 46:
return 42;
case 47:
return 43;
case 49:
return 44;
case 50:
return 45;
case 8:
if(IS_BIT_SET(Global_113648.f_18576.f_382, 0)) return 46;
break;
case 16:
return 47;
case 38:
return 48;
case 39:
return 49;
case 40:
return 50;
case 41:
return 51;
case 42:
return 52;
case 43:
if(Global_113648.f_9087.f_99.f_58[101]) return 53;
else return 54;
break;
case 20:
return 55;
}
return 0;
}


void func_191(int iParam0, BOOL bParam1) // Position - 0x265C6{
switch (iParam0){
case 46:
func_192(4, bParam1);
break;
case 16:
func_192(6, bParam1);
break;
case 37:
func_192(17, bParam1);
break;
case 31:
func_192(16, bParam1);
break;
}
return;
}


void func_192(int iParam0, BOOL bParam1) // Position - 0x26617{
int offset;
offset=iParam0;
if(offset >=0 && offset <=31){
if(!func_199(iParam0)){
MISC::SET_BIT(&(Global_113648.f_26436), offset);
if(!bParam1){
func_197(func_198(iParam0));
if(!func_196(68)) func_193("DI_HLP_STRY" /*Story characters become available in Rockstar Editor's 'Director Mode' as the GTAV story progresses.*/, 2, 0, 20000, 10000, 7, 0, 208, 0);
}}}
return;
}


void func_193(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x2667D{
func_194(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
return;
}


void func_194(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x2669E{
int i;
if(MISC::ARE_STRINGS_EQUAL(sParam0, "")) return;
if(iParam3 < 0) return;
if(iParam5 < 500 && iParam5 !=-1) return;
if(iParam4 < 0 && iParam4 !=-1) return;
if(iParam6 < 1 || iParam6 > 7) return;
if(iParam7==235) return;
if(iParam8==235) return;
for (i=0;
i < Global_113648.f_20412.f_145;
i=i + 1){
if(MISC::ARE_STRINGS_EQUAL(&Global_113648.f_20412[i /*16*/], sParam0)) return;
}
if(Global_113648.f_20412.f_145 < 9){
TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/], sParam0, 16);
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8=MISC::GET_GAME_TIMER() + iParam3;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9=iParam5;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11=iParam6;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12=iParam2;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13=iParam7;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14=iParam8;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15=iParam9;
if(iParam4 !=-1) Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=MISC::GET_GAME_TIMER() + iParam3 + iParam4;
else Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=-1;
Global_113648.f_20412.f_145=Global_113648.f_20412.f_145 + 1;
func_195();
}
return;
}


void func_195() // Position - 0x26871{
int i;
for (i=0;
i < 3;
i=i + 1){
Global_113648.f_20412.f_146[i]=0;
}
for (i=0;
i < Global_113648.f_20412.f_145;
i=i + 1){
if(IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 0))if(Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[0]) Global_113648.f_20412.f_146[0]=Global_113648.f_20412[i /*16*/].f_12;
if(IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 1))if(Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[1]) Global_113648.f_20412.f_146[1]=Global_113648.f_20412[i /*16*/].f_12;
if(IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 2))if(Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[2]) Global_113648.f_20412.f_146[2]=Global_113648.f_20412[i /*16*/].f_12;
}
return;
}
BOOL func_196(int iParam0) // Position - 0x26988{
int num;
int i;
num=iParam0;
for (i=0;
num > 31;
i=i + 1){
num=num - 32;
}
if(i < 3) return IS_BIT_SET(Global_113648.f_20412.f_150[i], num);
return false;
}


void func_197(char* sParam0) // Position - 0x269C8{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL("CHAR_ACTING_UP", "CHAR_ACTING_UP", false, 0, "DI_FEED_CHAR" /*Director Mode Actor Unlock*/, sParam0);
return;
}


char* func_198(int iParam0) // Position - 0x269EC{
switch (iParam0){
case 0:
return "CM_STOMIC" /*Michael*/;
case 1:
return "CM_STOFRA" /*Franklin*/;
case 2:
return "CM_STOTRE" /*Trevor*/;
case 3:
return "CM_STOAMA" /*Amanda*/;
case 4:
return "CM_STOBEV" /*Beverly*/;
case 5:
return "CM_STOBRA" /*Brad*/;
case 6:
return "CM_STOCHR" /*Cris Formage*/;
case 7:
return "CM_STODAV" /*Dave Norton*/;
case 8:
return "CM_STODEV" /*Devin*/;
case 9:
return "CM_STODRF" /*Dr Friedlander*/;
case 10:
return "CM_STOFAB" /*Fabien*/;
case 11:
return "CM_STOFLO" /*Floyd*/;
case 12:
return "CM_STOJIM" /*Jimmy*/;
case 13:
return "CM_STOLAM" /*Lamar*/;
case 14:
return "CM_STOLAZ" /*Lazlow*/;
case 15:
return "CM_STOLES" /*Lester*/;
case 16:
return "CM_STOMAU" /*Maude*/;
case 17:
return "CM_STOTHO" /*Mrs Thornhill*/;
case 18:
return "CM_STONER" /*Nervous Ron*/;
case 19:
return "CM_STOPAT" /*Patricia*/;
case 20:
return "CM_STOSIM" /*Simeon*/;
case 21:
return "CM_STOSOL" /*Solomon*/;
case 22:
return "CM_STOSTE" /*Steve Haines*/;
case 23:
return "CM_STOSTR" /*Stretch*/;
case 24:
return "CM_STOTAN" /*Tanisha*/;
case 25:
return "CM_STOTAO" /*Cheng Jr.*/;
case 26:
return "CM_STOTRA" /*Tracey*/;
case 27:
return "CM_STOWAD" /*Wade*/;
}
return "ERROR!";
}
BOOL func_199(int iParam0) // Position - 0x26BBF{
if(iParam0 !=-1 && iParam0 !=28) return IS_BIT_SET(Global_113648.f_26436, iParam0);
return false;
}


void func_200(int iParam0, int iParam1) // Position - 0x26BE9{
if(iParam0==235 || iParam0==0) return;
Global_113648.f_8615[iParam0]=1;
Global_113648.f_8615.f_236[iParam0]=MISC::GET_GAME_TIMER() + iParam1;
return;
}
BOOL func_201(const char* sParam0) // Position - 0x26C26{
eStackSize stackSize;
stackSize=DEFAULT;
if(!SCRIPT::DOES_SCRIPT_EXIST(sParam0)) return true;
if(MISC::ARE_STRINGS_EQUAL(sParam0, "controller_Races")){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("controller_races")) > 0) return true;
stackSize=MICRO;
}
SCRIPT::REQUEST_SCRIPT(sParam0);
if(SCRIPT::HAS_SCRIPT_LOADED(sParam0)){
SYSTEM::START_NEW_SCRIPT(sParam0, stackSize);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
return true;
}
return false;
}

int func_202() // Position - 0x26C86{
return func_203(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_203(const char* sParam0, int iParam1) // Position - 0x26C97{
int num;
const char* str;
Hash hashKey;
int i;
hashKey=MISC::GET_HASH_KEY(sParam0);
i=0;
for (i=0;
i < 63;
i=i + 1){
num=i;
func_164(num, &str);
if(MISC::GET_HASH_KEY(str)==hashKey) return num;
}
iParam1==0;
return -1;
}


void func_204(eCharacter echParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x26CE0{
int num;
Global_8939=echParam0;
if(Global_117[echParam0 /*10*/].f_8 !=169){
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(echParam1==4){
func_210(echParam0, 0, 1);
func_210(echParam0, 1, 1);
func_210(echParam0, 2, 1);
func_209(echParam0, 0, 1);
func_209(echParam0, 1, 1);
func_209(echParam0, 2, 1);
}else{
if(func_208(echParam0, echParam1)==1 && func_207(echParam0, echParam1)==1) bParam2=false;
num=echParam1;
func_210(echParam0, num, 1);
func_209(echParam0, num, 1);
if(echParam0==CHAR_SESSANTA && !Global_2793044.f_6891) bParam2=false;
if(echParam0==CHAR_ISLDJ4 && !Global_2793044.f_6890) bParam2=false;
if(echParam0==CHAR_KDJ && !Global_2793044.f_6890) bParam2=false;
}
if(bParam2){
if(!Global_78558){
if(echParam1 !=4){
if(Global_20383 !=echParam1){
Global_8912[echParam1 /*4*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8929[echParam1]=1;
Global_8934[echParam1]=echParam0;
}elseif(echParam0==Global_20383){
}else{
Global_8863[1 /*6*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8863[1 /*6*/].f_5=echParam1;
func_205();
}}else{
Global_8863[1 /*6*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8863[1 /*6*/].f_5=echParam1;
func_205();
}}else{
Global_8863[1 /*6*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8863[1 /*6*/].f_5=echParam1;
func_205();
}}}
return;
}


void func_205() // Position - 0x26E58{
var txdName;
var subject;
const char* filenameForAudioConversation;
TEXT_LABEL_ASSIGN_STRING(&txdName, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_8939 /*29*/].f_7)), 64);
if(Global_8958==0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
TEXT_LABEL_ASSIGN_STRING(&subject, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_8863[1 /*6*/]), 64);
filenameForAudioConversation=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /*New Contact*/);
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, filenameForAudioConversation, &subject);
}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /*New Contact:
~n~~a~*/);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_8863[1 /*6*/]);
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, "", 0);
}
MISC::CLEAR_BIT(&Global_8253, 0);
return;
}
struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x26ED3{
return Global_2028[character /*29*/].f_3;
}

int func_207(eCharacter echParam0, int iParam1) // Position - 0x26EE6{
if(iParam1 < 0 || iParam1 > 4) return 0;
return Global_2028[echParam0 /*29*/].f_24[iParam1];
}

int func_208(eCharacter echParam0, int iParam1) // Position - 0x26F10{
if(iParam1 < 0 || iParam1 > 4) return 0;
return Global_2028[echParam0 /*29*/].f_12[iParam1];
}


void func_209(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x26F3A{
if(iParam1 < 0 || iParam1 > 4) return;
Global_2028[echParam0 /*29*/].f_24[iParam1]=iParam2;
if(echParam0 < _CHAR_UNUSED) Global_113648.f_28052[echParam0 /*29*/].f_24[iParam1]=iParam2;
return;
}


void func_210(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x26F7F{
if(iParam1 < 0 || iParam1 > 4) return;
Global_2028[echParam0 /*29*/].f_12[iParam1]=iParam2;
if(echParam0 < _CHAR_UNUSED) Global_113648.f_28052[echParam0 /*29*/].f_12[iParam1]=iParam2;
return;
}


void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x26FC4{
if(func_93(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[0 /*29*/]) Global_20383=CHAR_MICHAEL;
elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[1 /*29*/]) Global_20383=CHAR_FRANKLIN;
elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[2 /*29*/]) Global_20383=CHAR_TREVOR;
else Global_20383=CHAR_MICHAEL;
}else{
Global_20383=_GET_CURRENT_PLAYER_CHARACTER();
if(Global_20383==_CHAR_NULL) Global_20383=CHAR_MULTIPLAYER;
if(Global_78558) Global_20383=CHAR_MULTIPLAYER;
if(Global_20383 > CHAR_MULTIPLAYER) Global_20383=CHAR_MULTIPLAYER;
}
return;
}
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x27066{
func_157();
return Global_113648.f_2365.f_539.f_4321;
}


void func_213(Ped* ppedParam0) // Position - 0x2707F{
if(ENTITY::DOES_ENTITY_EXIST(*ppedParam0)){
if(!ENTITY::IS_ENTITY_DEAD(*ppedParam0, false)) ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*ppedParam0)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*ppedParam0, true, false);
PED::DELETE_PED(ppedParam0);
}
return;
}


void func_214(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x270C0{
int i;
for (i=0;
i < 6;
i=i + 1){
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_28[i])) ENTITY::SET_ENTITY_PROOFS(uParam0->f_28[i], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
}
for (i=0;
i < 5;
i=i + 1){
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_35[i])) ENTITY::SET_ENTITY_PROOFS(uParam0->f_35[i], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
}
for (i=0;
i < 6;
i=i + 1){
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_41[i])) ENTITY::SET_ENTITY_PROOFS(uParam0->f_41[i], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), bParam1);
if(bParam2) WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
}
return;
}


void func_215(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x271B5{
Player playerIndex;
playerIndex=PLAYER::GET_PLAYER_INDEX();
PLAYER::SET_EVERYONE_IGNORE_PLAYER(playerIndex, false);
PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam3, 0);
func_217(false, true, false, false, false, false, false);
if(iParam2==1){
HUD::DISPLAY_RADAR(true);
HUD::DISPLAY_HUD(true);
}
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
if(iParam0==1) CAM::SET_WIDESCREEN_BORDERS(false, 0);
if(iParam1==1)if(hLocal_36 !=0 && hLocal_36 !=joaat("OBJECT") && hLocal_36 !=joaat("GADGET_PARACHUTE"))if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))if(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), hLocal_36, false)) WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), hLocal_36, false);
if(func_216(PLAYER::PLAYER_PED_ID())) PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
return;
}
BOOL func_216(Ped pedParam0) // Position - 0x2725F{
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))if(!PED::IS_PED_INJURED(pedParam0)) return true;
return false;
}


void func_217(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2727F{
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
func_225(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20383.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
if(!func_224()) Global_20383.f_1=3;
Global_21725=5;
}
func_223(true, bParam3, bParam2, false);
Global_63368=1;
Global_75696=1;
Global_78556=1;
}else{
func_225(0);
HUD::THEFEED_RESUME();
Global_63368=0;
if(bParam1) GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
func_223(false, bParam3, bParam2, false);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_221(PLAYER::PLAYER_ID()) && !_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0) && !func_218() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()) ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_221(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5) ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
Global_78556=0;
}
return;
}
BOOL func_218() // Position - 0x273CC{
return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}
BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0x273E6{
BOOL flag;
if(player==PLAYER::PLAYER_ID()) flag=func_220(-1, false)==8;
else flag=Global_1853910[player /*862*/].f_205==8;
if(bCheckTeam==1)if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)) flag=PLAYER::GET_PLAYER_TEAM(player)==8;
return flag;
}

int func_220(int iParam0, BOOL bParam1) // Position - 0x27431{
int num;
int num2;
num2=iParam0;
if(num2==-1) num2=func_12();
if(Global_1575040[num2]==1){
bParam1;
num=8;
}else{
num=Global_1574912[num2];
bParam1;
}
return num;
}
BOOL func_221(Player plParam0) // Position - 0x27472{
if(_NETWORK_IS_PLAYER_IN_SCTV(plParam0, 0)) return true;
if(func_222())if(plParam0==PLAYER::PLAYER_ID()) return true;
if(IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2)) return true;
return false;
}
BOOL func_222() // Position - 0x274B1{
return IS_BIT_SET(Global_2621446, 3);
}

int func_223(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x274BF{
int num;
num=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=bParam0 && bParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
num=1;
}}
return num;
}
BOOL func_224() // Position - 0x274F2{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}


void func_225(int iParam0) // Position - 0x27519{
if(iParam0==1) MISC::SET_BIT(&Global_8253, 13);
else MISC::CLEAR_BIT(&Global_8253, 13);
return;
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x2753C{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}
BOOL func_227(int iParam0) // Position - 0x2754F{
if(CAM::IS_SCREEN_FADED_IN()){
if(MISC::GET_GAME_TIMER() - Global_28 > iParam0) Global_27=MISC::GET_GAME_TIMER();
Global_28=MISC::GET_GAME_TIMER();
if(MISC::GET_GAME_TIMER() - Global_27 > iParam0){
if(func_228()){
Global_27=MISC::GET_GAME_TIMER();
return true;
}}}
return false;
}
BOOL func_228() // Position - 0x27599{
if(HUD::IS_PAUSE_MENU_ACTIVE()) return false;
if(PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE)) return true;
return false;
}


void func_229(int iParam0) // Position - 0x275CB{
if(iParam0==-1) return;
Global_77348[iParam0]=0;
Global_77348.f_69[iParam0]=0;
return;
}


void func_230(int iParam0, BOOL bParam1) // Position - 0x275F0{
if(iParam0==-1) return;
if(bParam1){
if(!func_232(iParam0, 0)){
func_231(iParam0, 1, false);
func_231(iParam0, 2, false);
func_231(iParam0, 3, false);
func_231(iParam0, 4, false);
func_231(iParam0, 0, true);
Global_77348[iParam0]=1;
}}else{
func_231(iParam0, 0, false);
}
return;
}


void func_231(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2764D{
if(iParam0==-1) return;
if(bParam2) MISC::SET_BIT(&Global_113648.f_32751[iParam0], iParam1);
else MISC::CLEAR_BIT(&Global_113648.f_32751[iParam0], iParam1);
return;
}
BOOL func_232(int iParam0, int iParam1) // Position - 0x27688{
if(iParam0==-1) return false;
return IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}


void func_233(int iParam0, BOOL bParam1) // Position - 0x276A8{
if(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())if(!CAM::IS_SCREEN_FADING_IN()) CAM::DO_SCREEN_FADE_IN(iParam0);
if(bParam1){
while (!CAM::IS_SCREEN_FADED_IN()){
SYSTEM::WAIT(0);
}}
return;
}


void func_234(float fParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, int iParam11, BOOL bParam12) // Position - 0x276E4{
Player playerIndex;
playerIndex=PLAYER::GET_PLAYER_INDEX();
if(PLAYER::IS_PLAYER_PLAYING(playerIndex)){
func_305(false);
if(bParam9) PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
if(bParam8){
switch (_GET_CURRENT_PLAYER_CHARACTER()){
case CHAR_MICHAEL:
if(func_150(PLAYER::PLAYER_PED_ID(), 8, 15)) func_36(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
if(func_150(PLAYER::PLAYER_PED_ID(), 9, 6)) func_36(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
break;
case CHAR_FRANKLIN:
if(func_150(PLAYER::PLAYER_PED_ID(), 8, 1) || func_150(PLAYER::PLAYER_PED_ID(), 8, 10)) func_36(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
break;
case CHAR_TREVOR:
if(func_150(PLAYER::PLAYER_PED_ID(), 8, 4)) func_36(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
break;
}}
if(iParam6==1) MISC::CLEAR_AREA_OF_PEDS(_GET_PLAYER_COORDS(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
if(iParam7==1) MISC::CLEAR_AREA_OF_OBJECTS(fParam0, 30f, 0);
if(bParam10) FIRE::STOP_FIRE_IN_RANGE(fParam0, 30f);
MISC::CLEAR_AREA_OF_PROJECTILES(fParam0, 30f, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL(playerIndex, 0, false);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(playerIndex, false);
PLAYER::SET_EVERYONE_IGNORE_PLAYER(playerIndex, true);
if(bParam12){
HUD::DISPLAY_RADAR(false);
HUD::DISPLAY_HUD(false);
}
HUD::CLEAR_PRINTS();
if(iParam11==1) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
if(iParam3==1) CAM::SET_WIDESCREEN_BORDERS(true, 0);
if(iParam4==1){
hLocal_36=0;
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID())){
hLocal_36=WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
}}
if(iParam5==1) func_233(500, false);
}
return;
}
Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x278A2{
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}


void func_236(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5) // Position - 0x278B5{
var unk;
float num;
if(ENTITY::DOES_ENTITY_EXIST(Global_104212.f_4)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_104212.f_4, false)){
if(func_284(24) !=Global_104212.f_4){
if(iParam4==1){
if(func_281(ENTITY::GET_ENTITY_COORDS(Global_104212.f_4, true), iParam5, &unk, &num)){
fParam0={
unk 
};
fParam3=num;
}}
func_237(Global_104212.f_4, fParam0, fParam3, 24, false);
}}}
return;
}


void func_237(Vehicle veParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, BOOL bParam6) // Position - 0x27930{
var unk;
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
if(iParam5 !=24 && iParam5 !=25) return;
if(iParam5==24)if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_484[25], false))if(Global_77348.f_484[25]==veParam0) return;
if(!bParam6)if(VEHICLE::IS_BIG_VEHICLE(veParam0) || ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("bus") || ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("tourbus")) return;
func_280(iParam5);
unk.f_9=49;
unk.f_59=2;
func_276(veParam0, &unk);
if(func_275(uParam1, 0f, 0f, 0f, false)){
uParam1={
ENTITY::GET_ENTITY_COORDS(veParam0, true) 
};
fParam4=ENTITY::GET_ENTITY_HEADING(veParam0);
}
if(iParam5==24)if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=joaat("vehicle_gen_controller")) Global_78336=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
func_271(iParam5, &unk, uParam1, fParam4, func_274(veParam0));
func_238(iParam5, veParam0, 0);
}
return;
}


void func_238(int iParam0, Vehicle veParam1, int iParam2) // Position - 0x27A59{
Vehicle vehicle;
if(iParam0==-1) return;
if(!func_268(&Global_77348.f_555[0 /*21*/], iParam0)) return;
if(!IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 12) && !IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10))if(Global_77348.f_555[0 /*21*/].f_4 !=ENTITY::GET_ENTITY_MODEL(veParam1)) return;
if(Global_78255 !=-1 && Global_78255 !=iParam0) return;
if(ENTITY::DOES_ENTITY_EXIST(veParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(veParam1)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veParam1, true, true);
if(iParam0==24) Global_113648.f_32751.f_4801=func_257();
if(veParam1 !=Global_77348.f_139[iParam0]){
if(iParam0==24){
vehicle=func_284(iParam0);
if(ENTITY::DOES_ENTITY_EXIST(vehicle) && VEHICLE::IS_VEHICLE_DRIVEABLE(vehicle, false) && veParam1 !=vehicle) func_239(vehicle, _CHAR_NULL);
}
Global_78254=veParam1;
Global_78255=iParam0;
Global_78256=iParam2;
}}}
return;
}


void func_239(Vehicle veParam0, eCharacter echParam1) // Position - 0x27B70{
Ped pedInVehicleSeat;
int i;
int j;
if(!func_240(veParam0)) return;
if(echParam1 !=CHAR_MICHAEL && echParam1 !=CHAR_FRANKLIN && echParam1 !=CHAR_TREVOR){
pedInVehicleSeat=VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
if(!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat)) pedInVehicleSeat=VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, -1);
if(ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))if(ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat)==joaat("Player_Zero")) echParam1=CHAR_MICHAEL;
elseif(ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat)==joaat("Player_One")) echParam1=CHAR_FRANKLIN;
elseif(ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat)==joaat("Player_Two")) echParam1=CHAR_TREVOR;
if(echParam1 !=CHAR_MICHAEL && echParam1 !=CHAR_FRANKLIN && echParam1 !=CHAR_TREVOR) echParam1=Global_113648.f_2365.f_539.f_4321;
}
for (i=0;
i < 3;
i=i + 1){
for (j=0;
j < 2;
j=j + 1){
if(ENTITY::GET_ENTITY_MODEL(veParam0)==Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_1))){
Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_66=0;
Global_113648.f_32751.f_5592[i]=j;
}}}}}
for (i=0;
i < 3;
i=i + 1){
if(ENTITY::GET_ENTITY_MODEL(veParam0)==Global_113648.f_32751.f_5600[i /*78*/].f_66)if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5600[i /*78*/].f_1)))if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113648.f_32751.f_5600[i /*78*/].f_1))) Global_113648.f_32751.f_5600[i /*78*/].f_66=0;
}
Global_113648.f_32751.f_5590=echParam1;
Global_78253=veParam0;
Global_113648.f_32751.f_5588=1;
func_276(veParam0, &(Global_113648.f_32751.f_5510));
return;
}
BOOL func_240(Vehicle veParam0) // Position - 0x27D72{
if(!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_255(veParam0, CHAR_MICHAEL, false) || func_255(veParam0, CHAR_FRANKLIN, false) || func_255(veParam0, CHAR_TREVOR, false) || func_274(veParam0) !=145 || func_254(veParam0) || func_253(veParam0) || func_252(veParam0) || func_251(veParam0) || !func_241(ENTITY::GET_ENTITY_MODEL(veParam0))){
func_253(veParam0);
func_253(veParam0);
func_255(veParam0, CHAR_MICHAEL, false);
func_255(veParam0, CHAR_FRANKLIN, false);
func_255(veParam0, CHAR_TREVOR, false);
func_274(veParam0) !=145;
return false;
}
return true;
}
BOOL func_241(Hash hParam0) // Position - 0x27E4F{
if(hParam0==0) return false;
if(!func_242(hParam0, false, -1)) return false;
if(VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0)) return false;
switch (hParam0){
case joaat("bus"):
case joaat("stretch"):
case joaat("barracks"):
case joaat("armytanker"):
case joaat("rhino"):
case joaat("armytrailer"):
case joaat("barracks2"):
case joaat("flatbed"):
case joaat("ripley"):
case joaat("towtruck"):
case joaat("towtruck2"):
case joaat("airbus"):
case joaat("coach"):
case joaat("rentalbus"):
case joaat("tourbus"):
case joaat("firetruk"):
case joaat("pbus"):
case joaat("trash"):
case joaat("benson"):
case joaat("boattrailer"):
case joaat("biff"):
case joaat("hauler"):
case joaat("docktrailer"):
case joaat("phantom"):
case joaat("pounder"):
case joaat("tractor2"):
case joaat("bulldozer"):
case joaat("handler"):
case joaat("tiptruck"):
case joaat("cutter"):
case joaat("dump"):
case joaat("mixer"):
case joaat("mixer2"):
case joaat("rubble"):
case joaat("scrap"):
case joaat("tiptruck2"):
case joaat("camper"):
case joaat("taco"):
case joaat("boxville"):
case joaat("boxville2"):
case joaat("boxville3"):
case joaat("journey"):
case joaat("mule"):
case joaat("mule2"):
case joaat("police"):
case joaat("police2"):
case joaat("police3"):
case joaat("police4"):
case joaat("policeb"):
case joaat("policeold1"):
case joaat("policeold2"):
case joaat("policet"):
case joaat("taxi"):
case joaat("submersible"):
case joaat("submersible2"):
case joaat("monster"):
return false;
}
return true;
}
BOOL func_242(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x28003{
int i;
Hash outData;
if(hParam0==0) return false;
if(!STREAMING::IS_MODEL_A_VEHICLE(hParam0)) return false;
if(hParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0==joaat("blimp2") || hParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!_IS_EXCLUSIVE_CONTENT_UNLOCKED()) return false;
}else{
for (i=0;
i < FILES::GET_NUM_DLC_VEHICLES();
i=i + 1){
if(FILES::GET_DLC_VEHICLE_DATA(i, &outData))if(hParam0==outData.f_1)if(FILES::IS_CONTENT_ITEM_LOCKED(outData)) return false;
}}
if(hParam0==joaat("blimp"))if(!func_249() && !func_248() && !func_247() && !func_246() && !_IS_EXCLUSIVE_CONTENT_UNLOCKED()) return false;
if(hParam0==joaat("hotknife") || hParam0==joaat("carbonrs") || hParam0==joaat("khamelion")){
if(func_172() || MISC::IS_PC_VERSION() || func_171()){
}elseif(!func_247()){
return false;
}}
if(bParam1)if(!func_245(hParam0, iParam2)) return false;
if(!func_243(hParam0)) return false;
return true;
}
BOOL func_243(Hash hParam0) // Position - 0x28185{
int num;
var unk;
var unk2;
if(!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM()) return true;
NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&num, &unk);
if(num==4) return true;
switch (hParam0){
case joaat("dune4"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_DUNE4_t0_v3", 64);
break;
case joaat("voltic2"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_VOLTIC2_t0_v3", 64);
break;
case joaat("ruiner2"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_RUINER2_t0_v3", 64);
break;
case joaat("phantom2"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_PHANTOM2_t0_v3", 64);
break;
case joaat("technical2"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_TECHNICAL2_t0_v3", 64);
break;
case joaat("boxville5"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BOXVILLE5_t0_v3", 64);
break;
case joaat("wastelander"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_WASTELANDER_t0_v3", 64);
break;
case joaat("blazer5"):
TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BLAZER5_t0_v3", 64);
break;
default:
return true;
}
if(!unk_0x0E4605546F88E7A3(&unk2)) return false;
return true;
}
BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x28251{
if(MISC::IS_PC_VERSION()) return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
return false;
}
BOOL func_245(Hash hParam0, int iParam1) // Position - 0x28268{
BOOL num;
int cloudTimeAsInt;
if(!Global_2764242 && iParam1 >=0 && iParam1 <=415)if(IS_BIT_SET(Global_1586468[iParam1 /*142*/].f_103, 2)) return true;
if(Global_2764241) return true;
num=1;
cloudTimeAsInt=NETWORK::GET_CLOUD_TIME_AS_INT();
if(hParam0==joaat("btype3"))if(!Global_262145.f_7059 && !Global_262145.f_13397 && cloudTimeAsInt < Global_262145.f_13398) num=0;
if(hParam0==joaat("faction3"))if(!Global_262145.f_14737 && cloudTimeAsInt < Global_262145.f_14749) num=0;
elseif(hParam0==joaat("virgo3") || hParam0==joaat("virgo2"))if(!Global_262145.f_14733 && cloudTimeAsInt < Global_262145.f_14745) num=0;
elseif(hParam0==joaat("sabregt2"))if(!Global_262145.f_14734 && cloudTimeAsInt < Global_262145.f_14746) num=0;
elseif(hParam0==joaat("tornado5"))if(!Global_262145.f_14735 && cloudTimeAsInt < Global_262145.f_14747) num=0;
elseif(hParam0==joaat("minivan2"))if(!Global_262145.f_14736 && cloudTimeAsInt < Global_262145.f_14748) num=0;
elseif(hParam0==joaat("slamvan3"))if(!Global_262145.f_14738 && cloudTimeAsInt < Global_262145.f_14750) num=0;
if(hParam0==joaat("prototipo"))if(!Global_262145.f_14739 && cloudTimeAsInt < Global_262145.f_14742) num=0;
elseif(hParam0==joaat("seven70"))if(!Global_262145.f_14740 && cloudTimeAsInt < Global_262145.f_14743) num=0;
elseif(hParam0==joaat("pfister811"))if(!Global_262145.f_14741 && cloudTimeAsInt < Global_262145.f_14744) num=0;
if(hParam0==joaat("bf400"))if(!Global_262145.f_17313 && cloudTimeAsInt < Global_262145.f_17278) num=0;
elseif(hParam0==joaat("brioso"))if(!Global_262145.f_17308 && cloudTimeAsInt < Global_262145.f_17273) num=0;
elseif(hParam0==joaat("cliffhanger"))if(!Global_262145.f_17312 && cloudTimeAsInt < Global_262145.f_17277) num=0;
elseif(hParam0==joaat("contender"))if(!Global_262145.f_17311 && cloudTimeAsInt < Global_262145.f_17276) num=0;
elseif(hParam0==joaat("le7b"))if(!Global_262145.f_17305 && cloudTimeAsInt < Global_262145.f_17270) num=0;
elseif(hParam0==joaat("omnis"))if(!Global_262145.f_17306 && cloudTimeAsInt < Global_262145.f_17271) num=0;
elseif(hParam0==joaat("trophytruck"))if(!Global_262145.f_17309 && cloudTimeAsInt < Global_262145.f_17274) num=0;
elseif(hParam0==joaat("trophytruck2"))if(!Global_262145.f_17310 && cloudTimeAsInt < Global_262145.f_17275) num=0;
elseif(hParam0==joaat("tropos"))if(!Global_262145.f_17307 && cloudTimeAsInt < Global_262145.f_17272) num=0;
elseif(hParam0==joaat("gargoyle"))if(!Global_262145.f_17315 && cloudTimeAsInt < Global_262145.f_17280) num=0;
elseif(hParam0==joaat("rallytruck"))if(!Global_262145.f_17316 && cloudTimeAsInt < Global_262145.f_17281) num=0;
elseif(hParam0==joaat("tampa2"))if(!Global_262145.f_17304 && cloudTimeAsInt < Global_262145.f_17269) num=0;
elseif(hParam0==joaat("tyrus"))if(!Global_262145.f_17303 && cloudTimeAsInt < Global_262145.f_17268) num=0;
elseif(hParam0==joaat("sheava"))if(!Global_262145.f_17302 && cloudTimeAsInt < Global_262145.f_17267) num=0;
elseif(hParam0==joaat("lynx"))if(!Global_262145.f_17314 && cloudTimeAsInt < Global_262145.f_17279) num=0;
elseif(hParam0==joaat("stalion2"))if(!Global_262145.f_17317 && cloudTimeAsInt < Global_262145.f_17282) num=0;
elseif(hParam0==joaat("gauntlet2"))if(!Global_262145.f_17318 && cloudTimeAsInt < Global_262145.f_17283) num=0;
elseif(hParam0==joaat("dominator2"))if(!Global_262145.f_17319 && cloudTimeAsInt < Global_262145.f_17284) num=0;
elseif(hParam0==joaat("buffalo3"))if(!Global_262145.f_17320 && cloudTimeAsInt < Global_262145.f_17285) num=0;
if(hParam0==joaat("defiler"))if(!Global_262145.f_17474 && cloudTimeAsInt < Global_262145.f_17496) num=0;
elseif(hParam0==joaat("nightblade"))if(!Global_262145.f_17475 && cloudTimeAsInt < Global_262145.f_17497) num=0;
elseif(hParam0==joaat("zombiea"))if(!Global_262145.f_17476 && cloudTimeAsInt < Global_262145.f_17498) num=0;
elseif(hParam0==joaat("esskey"))if(!Global_262145.f_17477 && cloudTimeAsInt < Global_262145.f_17499) num=0;
elseif(hParam0==joaat("avarus"))if(!Global_262145.f_17478 && cloudTimeAsInt < Global_262145.f_17500) num=0;
elseif(hParam0==joaat("zombieb"))if(!Global_262145.f_17479 && cloudTimeAsInt < Global_262145.f_17501) num=0;
elseif(hParam0==joaat("hakuchou2"))if(!Global_262145.f_17481 && cloudTimeAsInt < Global_262145.f_17502) num=0;
elseif(hParam0==joaat("vortex"))if(!Global_262145.f_17482 && cloudTimeAsInt < Global_262145.f_17503) num=0;
elseif(hParam0==joaat("shotaro"))if(!Global_262145.f_17483 && cloudTimeAsInt < Global_262145.f_17504) num=0;
elseif(hParam0==joaat("chimera"))if(!Global_262145.f_17484 && cloudTimeAsInt < Global_262145.f_17505) num=0;
elseif(hParam0==joaat("raptor"))if(!Global_262145.f_17485 && cloudTimeAsInt < Global_262145.f_17506) num=0;
elseif(hParam0==joaat("daemon2"))if(!Global_262145.f_17486 && cloudTimeAsInt < Global_262145.f_17507) num=0;
elseif(hParam0==joaat("blazer4"))if(!Global_262145.f_17487 && cloudTimeAsInt < Global_262145.f_17508) num=0;
elseif(hParam0==joaat("tornado6"))if(!Global_262145.f_17493 && cloudTimeAsInt < Global_262145.f_17515) num=0;
elseif(hParam0==joaat("youga2"))if(!Global_262145.f_17490 && cloudTimeAsInt < Global_262145.f_17511) num=0;
elseif(hParam0==joaat("wolfsbane"))if(!Global_262145.f_17491 && cloudTimeAsInt < Global_262145.f_17512) num=0;
elseif(hParam0==joaat("faggio3"))if(!Global_262145.f_17492 && cloudTimeAsInt < Global_262145.f_17513) num=0;
elseif(hParam0==joaat("faggio"))if(!Global_262145.f_17480 && cloudTimeAsInt < Global_262145.f_17514) num=0;
elseif(hParam0==joaat("bagger"))if(!Global_262145.f_17494 && cloudTimeAsInt < Global_262145.f_17516) num=0;
elseif(hParam0==joaat("sanctus"))if(!Global_262145.f_17488 && cloudTimeAsInt < Global_262145.f_17509) num=0;
elseif(hParam0==joaat("manchez"))if(!Global_262145.f_17489 && cloudTimeAsInt < Global_262145.f_17510) num=0;
elseif(hParam0==joaat("ratbike"))if(!Global_262145.f_17495 && cloudTimeAsInt < Global_262145.f_17517) num=0;
if(hParam0==joaat("voltic2"))if(!Global_262145.f_19131 && cloudTimeAsInt < Global_262145.f_19228) num=0;
elseif(hParam0==joaat("ruiner2"))if(!Global_262145.f_19132 && cloudTimeAsInt < Global_262145.f_19229) num=0;
elseif(hParam0==joaat("dune4"))if(!Global_262145.f_19133 && cloudTimeAsInt < Global_262145.f_19230) num=0;
elseif(hParam0==joaat("dune5"))if(!Global_262145.f_19134 && cloudTimeAsInt < Global_262145.f_19231) num=0;
elseif(hParam0==joaat("phantom2"))if(!Global_262145.f_19135 && cloudTimeAsInt < Global_262145.f_19232) num=0;
elseif(hParam0==joaat("technical2"))if(!Global_262145.f_19136 && cloudTimeAsInt < Global_262145.f_19233) num=0;
elseif(hParam0==joaat("boxville5"))if(!Global_262145.f_19137 && cloudTimeAsInt < Global_262145.f_19234) num=0;
elseif(hParam0==joaat("wastelander"))if(!Global_262145.f_19138 && cloudTimeAsInt < Global_262145.f_19235) num=0;
elseif(hParam0==joaat("blazer5"))if(!Global_262145.f_19139 && cloudTimeAsInt < Global_262145.f_19236) num=0;
elseif(hParam0==joaat("comet2"))if(!Global_262145.f_19140 && cloudTimeAsInt < Global_262145.f_19237) num=0;
elseif(hParam0==joaat("comet3"))if(!Global_262145.f_19141 && cloudTimeAsInt < Global_262145.f_19238) num=0;
elseif(hParam0==joaat("diablous"))if(!Global_262145.f_19142 && cloudTimeAsInt < Global_262145.f_19239) num=0;
elseif(hParam0==joaat("diablous2"))if(!Global_262145.f_19143 && cloudTimeAsInt < Global_262145.f_19240) num=0;
elseif(hParam0==joaat("elegy"))if(!Global_262145.f_19144 && cloudTimeAsInt < Global_262145.f_19241) num=0;
elseif(hParam0==joaat("elegy2"))if(!Global_262145.f_19145 && cloudTimeAsInt < Global_262145.f_19242) num=0;
elseif(hParam0==joaat("fcr"))if(!Global_262145.f_19146 && cloudTimeAsInt < Global_262145.f_19243) num=0;
elseif(hParam0==joaat("fcr2"))if(!Global_262145.f_19147 && cloudTimeAsInt < Global_262145.f_19244) num=0;
elseif(hParam0==joaat("italigtb"))if(!Global_262145.f_19148 && cloudTimeAsInt < Global_262145.f_19245) num=0;
elseif(hParam0==joaat("italigtb2"))if(!Global_262145.f_19149 && cloudTimeAsInt < Global_262145.f_19246) num=0;
elseif(hParam0==joaat("nero"))if(!Global_262145.f_19150 && cloudTimeAsInt < Global_262145.f_19247) num=0;
elseif(hParam0==joaat("nero2"))if(!Global_262145.f_19151 && cloudTimeAsInt < Global_262145.f_19248) num=0;
elseif(hParam0==joaat("penetrator"))if(!Global_262145.f_19152 && cloudTimeAsInt < Global_262145.f_19249) num=0;
elseif(hParam0==joaat("specter"))if(!Global_262145.f_19153 && cloudTimeAsInt < Global_262145.f_19250) num=0;
elseif(hParam0==joaat("specter2"))if(!Global_262145.f_19154 && cloudTimeAsInt < Global_262145.f_19251) num=0;
elseif(hParam0==joaat("tempesta"))if(!Global_262145.f_19155 && cloudTimeAsInt < Global_262145.f_19252) num=0;
if(hParam0==joaat("gp1"))if(!Global_262145.f_20212 && cloudTimeAsInt < Global_262145.f_20208) num=0;
elseif(hParam0==joaat("infernus2"))if(!Global_262145.f_20213 && cloudTimeAsInt < Global_262145.f_20209) num=0;
elseif(hParam0==joaat("ruston"))if(!Global_262145.f_20214 && cloudTimeAsInt < Global_262145.f_20210) num=0;
elseif(hParam0==joaat("turismo2"))if(!Global_262145.f_20215 && cloudTimeAsInt < Global_262145.f_20211) num=0;
if(hParam0==joaat("xa21"))if(!Global_262145.f_21094 && cloudTimeAsInt < Global_262145.f_21102) num=0;
elseif(hParam0==joaat("cheetah2"))if(!Global_262145.f_21095 && cloudTimeAsInt < Global_262145.f_21103) num=0;
elseif(hParam0==joaat("torero"))if(!Global_262145.f_21096 && cloudTimeAsInt < Global_262145.f_21104) num=0;
elseif(hParam0==joaat("vagner"))if(!Global_262145.f_21097 && cloudTimeAsInt < Global_262145.f_21105) num=0;
elseif(hParam0==joaat("ardent"))if(!Global_262145.f_21098 && cloudTimeAsInt < Global_262145.f_21106) num=0;
elseif(hParam0==joaat("nightshark"))if(!Global_262145.f_21099 && cloudTimeAsInt < Global_262145.f_21107) num=0;
if(hParam0==joaat("microlight"))if(!Global_262145.f_21893 && cloudTimeAsInt < Global_262145.f_21913) num=0;
elseif(hParam0==joaat("mogul"))if(!Global_262145.f_21905 && cloudTimeAsInt < Global_262145.f_21925) num=0;
elseif(hParam0==joaat("rogue"))if(!Global_262145.f_21896 && cloudTimeAsInt < Global_262145.f_21916) num=0;
elseif(hParam0==joaat("starling"))if(!Global_262145.f_21906 && cloudTimeAsInt < Global_262145.f_21926) num=0;
elseif(hParam0==joaat("seabreeze"))if(!Global_262145.f_21894 && cloudTimeAsInt < Global_262145.f_21914) num=0;
elseif(hParam0==joaat("tula"))if(!Global_262145.f_21910 && cloudTimeAsInt < Global_262145.f_21930) num=0;
elseif(hParam0==joaat("pyro"))if(!Global_262145.f_21908 && cloudTimeAsInt < Global_262145.f_21928) num=0;
elseif(hParam0==joaat("molotok"))if(!Global_262145.f_21909 && cloudTimeAsInt < Global_262145.f_21929) num=0;
elseif(hParam0==joaat("nokota"))if(!Global_262145.f_21904 && cloudTimeAsInt < Global_262145.f_21924) num=0;
elseif(hParam0==joaat("bombushka"))if(!Global_262145.f_21911 && cloudTimeAsInt < Global_262145.f_21931) num=0;
elseif(hParam0==joaat("hunter"))if(!Global_262145.f_21907 && cloudTimeAsInt < Global_262145.f_21927) num=0;
elseif(hParam0==joaat("havok"))if(!Global_262145.f_21903 && cloudTimeAsInt < Global_262145.f_21923) num=0;
elseif(hParam0==joaat("howard"))if(!Global_262145.f_21895 && cloudTimeAsInt < Global_262145.f_21915) num=0;
elseif(hParam0==joaat("alphaz1"))if(!Global_262145.f_21897 && cloudTimeAsInt < Global_262145.f_21917) num=0;
elseif(hParam0==joaat("cyclone"))if(!Global_262145.f_21898 && cloudTimeAsInt < Global_262145.f_21918) num=0;
elseif(hParam0==joaat("visione"))if(!Global_262145.f_21899 && cloudTimeAsInt < Global_262145.f_21919) num=0;
elseif(hParam0==joaat("vigilante"))if(!Global_262145.f_21900 && cloudTimeAsInt < Global_262145.f_21920) num=0;
elseif(hParam0==joaat("retinue"))if(!Global_262145.f_21901 && cloudTimeAsInt < Global_262145.f_21921) num=0;
elseif(hParam0==joaat("rapidgt3"))if(!Global_262145.f_21902 && cloudTimeAsInt < Global_262145.f_21922) num=0;
if(hParam0==joaat("deluxo"))if(!Global_262145.f_22861 && cloudTimeAsInt < Global_262145.f_22889) num=0;
elseif(hParam0==joaat("stromberg"))if(!Global_262145.f_22862 && cloudTimeAsInt < Global_262145.f_22890) num=0;
elseif(hParam0==joaat("riot2"))if(!Global_262145.f_22863 && cloudTimeAsInt < Global_262145.f_22891) num=0;
elseif(hParam0==joaat("chernobog"))if(!Global_262145.f_22864 && cloudTimeAsInt < Global_262145.f_22892) num=0;
elseif(hParam0==joaat("khanjali"))if(!Global_262145.f_22865 && cloudTimeAsInt < Global_262145.f_22893) num=0;
elseif(hParam0==joaat("akula"))if(!Global_262145.f_22866 && cloudTimeAsInt < Global_262145.f_22894) num=0;
elseif(hParam0==joaat("thruster"))if(!Global_262145.f_22867 && cloudTimeAsInt < Global_262145.f_22895) num=0;
elseif(hParam0==joaat("barrage"))if(!Global_262145.f_22868 && cloudTimeAsInt < Global_262145.f_22896) num=0;
elseif(hParam0==joaat("volatol"))if(!Global_262145.f_22869 && cloudTimeAsInt < Global_262145.f_22897) num=0;
elseif(hParam0==joaat("comet4"))if(!Global_262145.f_22870 && cloudTimeAsInt < Global_262145.f_22898) num=0;
elseif(hParam0==joaat("neon"))if(!Global_262145.f_22871 && cloudTimeAsInt < Global_262145.f_22899) num=0;
elseif(hParam0==joaat("streiter"))if(!Global_262145.f_22872 && cloudTimeAsInt < Global_262145.f_22900) num=0;
elseif(hParam0==joaat("sentinel3"))if(!Global_262145.f_22873 && cloudTimeAsInt < Global_262145.f_22901) num=0;
elseif(hParam0==joaat("yosemite"))if(!Global_262145.f_22874 && cloudTimeAsInt < Global_262145.f_22902) num=0;
elseif(hParam0==joaat("sc1"))if(!Global_262145.f_22875 && cloudTimeAsInt < Global_262145.f_22903) num=0;
elseif(hParam0==joaat("autarch"))if(!Global_262145.f_22876 && cloudTimeAsInt < Global_262145.f_22904) num=0;
elseif(hParam0==joaat("gt500"))if(!Global_262145.f_22877 && cloudTimeAsInt < Global_262145.f_22905) num=0;
elseif(hParam0==joaat("hustler"))if(!Global_262145.f_22878 && cloudTimeAsInt < Global_262145.f_22906) num=0;
elseif(hParam0==joaat("revolter"))if(!Global_262145.f_22879 && cloudTimeAsInt < Global_262145.f_22907) num=0;
elseif(hParam0==joaat("pariah"))if(!Global_262145.f_22880 && cloudTimeAsInt < Global_262145.f_22908) num=0;
elseif(hParam0==joaat("raiden"))if(!Global_262145.f_22881 && cloudTimeAsInt < Global_262145.f_22909) num=0;
elseif(hParam0==joaat("savestra"))if(!Global_262145.f_22882 && cloudTimeAsInt < Global_262145.f_22910) num=0;
elseif(hParam0==joaat("riata"))if(!Global_262145.f_22883 && cloudTimeAsInt < Global_262145.f_22911) num=0;
elseif(hParam0==joaat("hermes"))if(!Global_262145.f_22884 && cloudTimeAsInt < Global_262145.f_22912) num=0;
elseif(hParam0==joaat("comet5"))if(!Global_262145.f_22885 && cloudTimeAsInt < Global_262145.f_22913) num=0;
elseif(hParam0==joaat("z190"))if(!Global_262145.f_22886 && cloudTimeAsInt < Global_262145.f_22914) num=0;
elseif(hParam0==joaat("viseris"))if(!Global_262145.f_22887 && cloudTimeAsInt < Global_262145.f_22915) num=0;
elseif(hParam0==joaat("kamacho"))if(!Global_262145.f_22888 && cloudTimeAsInt < Global_262145.f_22916) num=0;
if(hParam0==joaat("gb200"))if(!Global_262145.f_24081 && cloudTimeAsInt < Global_262145.f_24097) num=0;
elseif(hParam0==joaat("fagaloa"))if(!Global_262145.f_24082 && cloudTimeAsInt < Global_262145.f_24098) num=0;
elseif(hParam0==joaat("ellie"))if(!Global_262145.f_24086 && cloudTimeAsInt < Global_262145.f_24102) num=0;
elseif(hParam0==joaat("issi3"))if(!Global_262145.f_24089 && cloudTimeAsInt < Global_262145.f_24105) num=0;
elseif(hParam0==joaat("michelli"))if(!Global_262145.f_24094 && cloudTimeAsInt < Global_262145.f_24110) num=0;
elseif(hParam0==joaat("flashgt"))if(!Global_262145.f_24088 && cloudTimeAsInt < Global_262145.f_24104) num=0;
elseif(hParam0==joaat("hotring"))if(!Global_262145.f_24080 && cloudTimeAsInt < Global_262145.f_24096) num=0;
elseif(hParam0==joaat("tezeract"))if(!Global_262145.f_24087 && cloudTimeAsInt < Global_262145.f_24103) num=0;
elseif(hParam0==joaat("tyrant"))if(!Global_262145.f_24093 && cloudTimeAsInt < Global_262145.f_24109) num=0;
elseif(hParam0==joaat("dominator3"))if(!Global_262145.f_24092 && cloudTimeAsInt < Global_262145.f_24108) num=0;
elseif(hParam0==joaat("taipan"))if(!Global_262145.f_24083 && cloudTimeAsInt < Global_262145.f_24099) num=0;
elseif(hParam0==joaat("entity2"))if(!Global_262145.f_24085 && cloudTimeAsInt < Global_262145.f_24101) num=0;
elseif(hParam0==joaat("jester3"))if(!Global_262145.f_24095 && cloudTimeAsInt < Global_262145.f_24111) num=0;
elseif(hParam0==joaat("cheburek"))if(!Global_262145.f_24091 && cloudTimeAsInt < Global_262145.f_24107) num=0;
elseif(hParam0==joaat("caracara"))if(!Global_262145.f_24084 && cloudTimeAsInt < Global_262145.f_24100) num=0;
elseif(hParam0==joaat("seasparrow"))if(!Global_262145.f_24090 && cloudTimeAsInt < Global_262145.f_24106) num=0;
if(hParam0==joaat("terbyte"))if(!Global_262145.f_24171 && cloudTimeAsInt < Global_262145.f_24158) num=0;
elseif(hParam0==joaat("pbus2"))if(!Global_262145.f_24172 && cloudTimeAsInt < Global_262145.f_24159) num=0;
elseif(hParam0==joaat("mule4"))if(!Global_262145.f_24177 && cloudTimeAsInt < Global_262145.f_24164) num=0;
elseif(hParam0==joaat("pounder2"))if(!Global_262145.f_24176 && cloudTimeAsInt < Global_262145.f_24163) num=0;
elseif(hParam0==joaat("swinger"))if(!Global_262145.f_24174 && cloudTimeAsInt < Global_262145.f_24161) num=0;
elseif(hParam0==joaat("menacer"))if(!Global_262145.f_24180 && cloudTimeAsInt < Global_262145.f_24167) num=0;
elseif(hParam0==joaat("scramjet"))if(!Global_262145.f_24182 && cloudTimeAsInt < Global_262145.f_24169) num=0;
elseif(hParam0==joaat("strikeforce"))if(!Global_262145.f_24183 && cloudTimeAsInt < Global_262145.f_24170) num=0;
elseif(hParam0==joaat("oppressor2"))if(!Global_262145.f_24181 && cloudTimeAsInt < Global_262145.f_24168) num=0;
elseif(hParam0==joaat("patriot2"))if(!Global_262145.f_24173 && cloudTimeAsInt < Global_262145.f_24160) num=0;
elseif(hParam0==joaat("stafford"))if(!Global_262145.f_24175 && cloudTimeAsInt < Global_262145.f_24162) num=0;
elseif(hParam0==joaat("freecrawler"))if(!Global_262145.f_24179 && cloudTimeAsInt < Global_262145.f_24166) num=0;
elseif(hParam0==joaat("blimp3"))if(!Global_262145.f_24178 && cloudTimeAsInt < Global_262145.f_24165) num=0;
if(hParam0==joaat("monster3")){}elseif(hParam0==joaat("cerberus")){}elseif(hParam0==joaat("cerberus2")){}elseif(hParam0==joaat("cerberus3")){}elseif(hParam0==joaat("brutus")){}elseif(hParam0==joaat("brutus2")){}elseif(hParam0==joaat("brutus3")){}elseif(hParam0==joaat("scarab")){}elseif(hParam0==joaat("scarab2")){}elseif(hParam0==joaat("scarab3")){}elseif(hParam0==joaat("imperator")){}elseif(hParam0==joaat("imperator2")){}elseif(hParam0==joaat("imperator3")){}elseif(hParam0==joaat("zr380")){}elseif(hParam0==joaat("zr3802")){}elseif(hParam0==joaat("zr3803")){}elseif(hParam0==joaat("impaler")){}elseif(hParam0==joaat("deveste")){
if(!Global_262145.f_26768 && cloudTimeAsInt < Global_262145.f_26770) num=0;
}elseif(hParam0==joaat("toros")){
if(!Global_262145.f_25781 && cloudTimeAsInt < Global_262145.f_25774) num=0;
}elseif(hParam0==joaat("clique")){
if(!Global_262145.f_25782 && cloudTimeAsInt < Global_262145.f_25775) num=0;
}elseif(hParam0==joaat("italigto")){
if(!Global_262145.f_25783 && cloudTimeAsInt < Global_262145.f_25776) num=0;
}elseif(hParam0==joaat("deviant")){
if(!Global_262145.f_25784 && cloudTimeAsInt < Global_262145.f_25777) num=0;
}elseif(hParam0==joaat("vamos")){
if(!Global_262145.f_26769 && cloudTimeAsInt < Global_262145.f_26771) num=0;
}elseif(hParam0==joaat("tulip")){
if(!Global_262145.f_25785 && cloudTimeAsInt < Global_262145.f_25778) num=0;
}elseif(hParam0==joaat("schlagen")){
if(!Global_262145.f_25786 && cloudTimeAsInt < Global_262145.f_25779) num=0;
}elseif(hParam0==joaat("rcbandito")){
if(!Global_262145.f_25787 && cloudTimeAsInt < Global_262145.f_25780) num=0;
}elseif(hParam0==joaat("thrax")){
if(!Global_262145.f_25792 && cloudTimeAsInt < Global_262145.f_25813) num=0;
}elseif(hParam0==joaat("drafter")){
if(!Global_262145.f_25793 && cloudTimeAsInt < Global_262145.f_25814) num=0;
}elseif(hParam0==joaat("locust")){
if(!Global_262145.f_25794 && cloudTimeAsInt < Global_262145.f_25815) num=0;
}elseif(hParam0==joaat("novak")){
if(!Global_262145.f_25795 && cloudTimeAsInt < Global_262145.f_25816) num=0;
}elseif(hParam0==joaat("zorrusso")){
if(!Global_262145.f_25796 && cloudTimeAsInt < Global_262145.f_25817) num=0;
}elseif(hParam0==joaat("gauntlet3")){
if(!Global_262145.f_25797 && cloudTimeAsInt < Global_262145.f_25818) num=0;
}elseif(hParam0==joaat("issi7")){
if(!Global_262145.f_25798 && cloudTimeAsInt < Global_262145.f_25819) num=0;
}elseif(hParam0==joaat("zion3")){
if(!Global_262145.f_25799 && cloudTimeAsInt < Global_262145.f_25820) num=0;
}elseif(hParam0==joaat("nebula")){
if(!Global_262145.f_25800 && cloudTimeAsInt < Global_262145.f_25821) num=0;
}elseif(hParam0==joaat("hellion")){
if(!Global_262145.f_25801 && cloudTimeAsInt < Global_262145.f_25822) num=0;
}elseif(hParam0==joaat("dynasty")){
if(!Global_262145.f_25802 && cloudTimeAsInt < Global_262145.f_25823) num=0;
}elseif(hParam0==joaat("rrocket")){
if(!Global_262145.f_25803 && cloudTimeAsInt < Global_262145.f_25824) num=0;
}elseif(hParam0==joaat("peyote2")){
if(!Global_262145.f_25804 && cloudTimeAsInt < Global_262145.f_25825) num=0;
}elseif(hParam0==joaat("gauntlet4")){
if(!Global_262145.f_25805 && cloudTimeAsInt < Global_262145.f_25826) num=0;
}elseif(hParam0==joaat("caracara2")){
if(!Global_262145.f_25806 && cloudTimeAsInt < Global_262145.f_25827) num=0;
}elseif(hParam0==joaat("jugular")){
if(!Global_262145.f_25807 && cloudTimeAsInt < Global_262145.f_25828) num=0;
}elseif(hParam0==joaat("s80")){
if(!Global_262145.f_25808 && cloudTimeAsInt < Global_262145.f_25829) num=0;
}elseif(hParam0==joaat("krieger")){
if(!Global_262145.f_25809 && cloudTimeAsInt < Global_262145.f_25830) num=0;
}elseif(hParam0==joaat("emerus")){
if(!Global_262145.f_25810 && cloudTimeAsInt < Global_262145.f_25831) num=0;
}elseif(hParam0==joaat("neo")){
if(!Global_262145.f_25811 && cloudTimeAsInt < Global_262145.f_25832) num=0;
}elseif(hParam0==joaat("paragon")){
if(!Global_262145.f_25812 && cloudTimeAsInt < Global_262145.f_25833) num=0;
}elseif(hParam0==joaat("asbo")){
if(!Global_262145.f_28613 && cloudTimeAsInt < Global_262145.f_28634) num=0;
}elseif(hParam0==joaat("kanjo")){
if(!Global_262145.f_28614 && cloudTimeAsInt < Global_262145.f_28635) num=0;
}elseif(hParam0==joaat("everon")){
if(!Global_262145.f_28615 && cloudTimeAsInt < Global_262145.f_28636) num=0;
}elseif(hParam0==joaat("retinue2")){
if(!Global_262145.f_28616 && cloudTimeAsInt < Global_262145.f_28637) num=0;
}elseif(hParam0==joaat("yosemite2")){
if(!Global_262145.f_28617 && cloudTimeAsInt < Global_262145.f_28638) num=0;
}elseif(hParam0==joaat("sugoi")){
if(!Global_262145.f_28618 && cloudTimeAsInt < Global_262145.f_28639) num=0;
}elseif(hParam0==joaat("sultan2")){
if(!Global_262145.f_28619 && cloudTimeAsInt < Global_262145.f_28640) num=0;
}elseif(hParam0==joaat("outlaw")){
if(!Global_262145.f_28620 && cloudTimeAsInt < Global_262145.f_28641) num=0;
}elseif(hParam0==joaat("vagrant")){
if(!Global_262145.f_28621 && cloudTimeAsInt < Global_262145.f_28642) num=0;
}elseif(hParam0==joaat("komoda")){
if(!Global_262145.f_28622 && cloudTimeAsInt < Global_262145.f_28643) num=0;
}elseif(hParam0==joaat("stryder")){
if(!Global_262145.f_28623 && cloudTimeAsInt < Global_262145.f_28644) num=0;
}elseif(hParam0==joaat("furia")){
if(!Global_262145.f_28624 && cloudTimeAsInt < Global_262145.f_28645) num=0;
}elseif(hParam0==joaat("zhaba")){
if(!Global_262145.f_28625 && cloudTimeAsInt < Global_262145.f_28646) num=0;
}elseif(hParam0==joaat("jb7002")){
if(!Global_262145.f_28626 && cloudTimeAsInt < Global_262145.f_28647) num=0;
}elseif(hParam0==joaat("firetruk")){
if(!Global_262145.f_28627 && cloudTimeAsInt < Global_262145.f_28648) num=0;
}elseif(hParam0==joaat("burrito2")){
if(!Global_262145.f_28628 && cloudTimeAsInt < Global_262145.f_28649) num=0;
}elseif(hParam0==joaat("boxville")){
if(!Global_262145.f_28629 && cloudTimeAsInt < Global_262145.f_28650) num=0;
}elseif(hParam0==joaat("stockade")){
if(!Global_262145.f_28630 && cloudTimeAsInt < Global_262145.f_28651) num=0;
}elseif(hParam0==joaat("minitank")){
if(!Global_262145.f_28631 && cloudTimeAsInt < Global_262145.f_28652) num=0;
}elseif(hParam0==joaat("lguard")){
if(!Global_262145.f_28632 && cloudTimeAsInt < Global_262145.f_28653) num=0;
}elseif(hParam0==joaat("blazer2")){
if(!Global_262145.f_28633 && cloudTimeAsInt < Global_262145.f_28654) num=0;
}elseif(hParam0==joaat("formula")){
if(!Global_262145.f_28656 && cloudTimeAsInt < Global_262145.f_28657 && !Global_262145.f_28611) num=0;
}elseif(hParam0==joaat("formula2")){
if(!Global_262145.f_28659 && cloudTimeAsInt < Global_262145.f_28660 && !Global_262145.f_28612) num=0;
}elseif(hParam0==joaat("imorgon")){
if(!Global_262145.f_28664 && cloudTimeAsInt < Global_262145.f_28667) num=0;
}elseif(hParam0==joaat("rebla")){
if(!Global_262145.f_28665 && cloudTimeAsInt < Global_262145.f_28668) num=0;
}elseif(hParam0==joaat("vstr")){
if(!Global_262145.f_28666 && cloudTimeAsInt < Global_262145.f_28669) num=0;
}elseif(hParam0==joaat("gauntlet5")){
if(!Global_262145.f_29682 && cloudTimeAsInt < Global_262145.f_29347) num=0;
}elseif(hParam0==joaat("club")){
if(!Global_262145.f_29333 && cloudTimeAsInt < Global_262145.f_29354) num=0;
}elseif(hParam0==joaat("dukes3")){
if(!Global_262145.f_29334 && cloudTimeAsInt < Global_262145.f_29340) num=0;
}elseif(hParam0==joaat("yosemite3")){
if(!Global_262145.f_29680 && cloudTimeAsInt < Global_262145.f_29348) num=0;
}elseif(hParam0==joaat("peyote3")){
if(!Global_262145.f_29681 && cloudTimeAsInt < Global_262145.f_29349) num=0;
}elseif(hParam0==joaat("glendale2")){
if(!Global_262145.f_29327 && cloudTimeAsInt < Global_262145.f_29346) num=0;
}elseif(hParam0==joaat("penumbra2")){
if(!Global_262145.f_29328 && cloudTimeAsInt < Global_262145.f_29355) num=0;
}elseif(hParam0==joaat("landstalker2")){
if(!Global_262145.f_29329 && cloudTimeAsInt < Global_262145.f_29345) num=0;
}elseif(hParam0==joaat("seminole2")){
if(!Global_262145.f_29330 && cloudTimeAsInt < Global_262145.f_29343) num=0;
}elseif(hParam0==joaat("tigon")){
if(!Global_262145.f_29676 && cloudTimeAsInt < Global_262145.f_29350) num=0;
}elseif(hParam0==joaat("openwheel1")){
if(!Global_262145.f_29677 && cloudTimeAsInt < Global_262145.f_29351) num=0;
}elseif(hParam0==joaat("openwheel2")){
if(!Global_262145.f_29678 && cloudTimeAsInt < Global_262145.f_29352) num=0;
}elseif(hParam0==joaat("coquette4")){
if(!Global_262145.f_29679 && cloudTimeAsInt < Global_262145.f_29353) num=0;
}elseif(hParam0==joaat("manana2")){
if(!Global_262145.f_29331 && cloudTimeAsInt < Global_262145.f_29342) num=0;
}elseif(hParam0==joaat("youga3")){
if(!Global_262145.f_29332 && cloudTimeAsInt < Global_262145.f_29344) num=0;
}elseif(hParam0==joaat("toreador")){
if(!Global_262145.f_30141 && cloudTimeAsInt < Global_262145.f_30124) num=0;
}elseif(hParam0==joaat("annihilator2")){
if(!Global_262145.f_30142 && cloudTimeAsInt < Global_262145.f_30125) num=0;
}elseif(hParam0==joaat("alkonost")){
if(!Global_262145.f_30143 && cloudTimeAsInt < Global_262145.f_30126) num=0;
}elseif(hParam0==joaat("patrolboat")){
if(!Global_262145.f_30144 && cloudTimeAsInt < Global_262145.f_30127) num=0;
}elseif(hParam0==joaat("longfin")){
if(!Global_262145.f_30145 && cloudTimeAsInt < Global_262145.f_30128) num=0;
}elseif(hParam0==joaat("winky")){
if(!Global_262145.f_30146 && cloudTimeAsInt < Global_262145.f_30129) num=0;
}elseif(hParam0==joaat("veto")){
if(!Global_262145.f_30147 && cloudTimeAsInt < Global_262145.f_30130) num=0;
}elseif(hParam0==joaat("veto2")){
if(!Global_262145.f_30148 && cloudTimeAsInt < Global_262145.f_30131) num=0;
}elseif(hParam0==joaat("italirsx")){
if(!Global_262145.f_30149 && cloudTimeAsInt < Global_262145.f_30132) num=0;
}elseif(hParam0==joaat("weevil")){
if(Global_262145.f_30158){
}elseif(!Global_262145.f_30150 && cloudTimeAsInt < Global_262145.f_30133){
num=0;
}}elseif(hParam0==joaat("manchez2")){
if(!Global_262145.f_30151 && cloudTimeAsInt < Global_262145.f_30134) num=0;
}elseif(hParam0==joaat("slamtruck")){
if(!Global_262145.f_30152 && cloudTimeAsInt < Global_262145.f_30135) num=0;
}elseif(hParam0==joaat("vetir")){
if(!Global_262145.f_30153 && cloudTimeAsInt < Global_262145.f_30136) num=0;
}elseif(hParam0==joaat("squaddie")){
if(!Global_262145.f_30154 && cloudTimeAsInt < Global_262145.f_30137) num=0;
}elseif(hParam0==joaat("brioso2")){
if(Global_262145.f_30159){
}elseif(!Global_262145.f_30155 && cloudTimeAsInt < Global_262145.f_30138){
num=0;
}}elseif(hParam0==joaat("dinghy5")){
if(!Global_262145.f_30156 && cloudTimeAsInt < Global_262145.f_30139) num=0;
}elseif(hParam0==joaat("verus")){
if(!Global_262145.f_30157 && cloudTimeAsInt < Global_262145.f_30140) num=0;
}elseif(hParam0==joaat("tailgater2")){
if(!Global_262145.f_31009 && cloudTimeAsInt < Global_262145.f_30992) num=0;
}elseif(hParam0==joaat("euros")){
if(!Global_262145.f_31010 && cloudTimeAsInt < Global_262145.f_30993) num=0;
}elseif(hParam0==joaat("sultan3")){
if(!Global_262145.f_31011 && cloudTimeAsInt < Global_262145.f_30994) num=0;
}elseif(hParam0==joaat("rt3000")){
if(!Global_262145.f_31012 && cloudTimeAsInt < Global_262145.f_30995) num=0;
}elseif(hParam0==joaat("vectre")){
if(!Global_262145.f_31013 && cloudTimeAsInt < Global_262145.f_30996) num=0;
}elseif(hParam0==joaat("zr350")){
if(!Global_262145.f_31014 && cloudTimeAsInt < Global_262145.f_30997) num=0;
}elseif(hParam0==joaat("warrener2")){
if(!Global_262145.f_31015 && cloudTimeAsInt < Global_262145.f_30998) num=0;
}elseif(hParam0==joaat("calico")){
if(!Global_262145.f_31016 && cloudTimeAsInt < Global_262145.f_30999) num=0;
}elseif(hParam0==joaat("remus")){
if(!Global_262145.f_31017 && cloudTimeAsInt < Global_262145.f_31000) num=0;
}elseif(hParam0==joaat("cypher")){
if(!Global_262145.f_31018 && cloudTimeAsInt < Global_262145.f_31001) num=0;
}elseif(hParam0==joaat("dominator7")){
if(!Global_262145.f_31019 && cloudTimeAsInt < Global_262145.f_31002) num=0;
}elseif(hParam0==joaat("jester4")){
if(!Global_262145.f_31020 && cloudTimeAsInt < Global_262145.f_31003) num=0;
}elseif(hParam0==joaat("futo2")){
if(!Global_262145.f_31021 && cloudTimeAsInt < Global_262145.f_31004) num=0;
}elseif(hParam0==joaat("dominator8")){
if(!Global_262145.f_31022 && cloudTimeAsInt < Global_262145.f_31005) num=0;
}elseif(hParam0==joaat("previon")){
if(!Global_262145.f_31023 && cloudTimeAsInt < Global_262145.f_31006) num=0;
}elseif(hParam0==joaat("growler")){
if(!Global_262145.f_31024 && cloudTimeAsInt < Global_262145.f_31007) num=0;
}elseif(hParam0==joaat("comet6")){
if(!Global_262145.f_31025 && cloudTimeAsInt < Global_262145.f_31008) num=0;
}elseif(hParam0==joaat("champion")){
if(!Global_262145.f_31889 && cloudTimeAsInt < Global_262145.f_31874) num=0;
}elseif(hParam0==joaat("buffalo4")){
if(!Global_262145.f_31890 && cloudTimeAsInt < Global_262145.f_31875) num=0;
}elseif(hParam0==joaat("deity")){
if(!Global_262145.f_31891 && cloudTimeAsInt < Global_262145.f_31876) num=0;
}elseif(hParam0==joaat("jubilee")){
if(!Global_262145.f_31892 && cloudTimeAsInt < Global_262145.f_31877) num=0;
}elseif(hParam0==joaat("ignus")){
if(!Global_262145.f_31893 && cloudTimeAsInt < Global_262145.f_31878) num=0;
}elseif(hParam0==joaat("cinquemila")){
if(!Global_262145.f_31894 && cloudTimeAsInt < Global_262145.f_31879) num=0;
}elseif(hParam0==joaat("astron")){
if(!Global_262145.f_31895 && cloudTimeAsInt < Global_262145.f_31880) num=0;
}elseif(hParam0==joaat("comet7")){
if(!Global_262145.f_31896 && cloudTimeAsInt < Global_262145.f_31881) num=0;
}elseif(hParam0==joaat("zeno")){
if(!Global_262145.f_31897 && cloudTimeAsInt < Global_262145.f_31882) num=0;
}elseif(hParam0==joaat("reever")){
if(!Global_262145.f_31898 && cloudTimeAsInt < Global_262145.f_31883) num=0;
}elseif(hParam0==joaat("iwagen")){
if(!Global_262145.f_31899 && cloudTimeAsInt < Global_262145.f_31884) num=0;
}elseif(hParam0==joaat("granger2")){
if(!Global_262145.f_31900 && cloudTimeAsInt < Global_262145.f_31885) num=0;
}elseif(hParam0==joaat("patriot3")){
if(!Global_262145.f_31901 && cloudTimeAsInt < Global_262145.f_31886) num=0;
}elseif(hParam0==joaat("shinobi")){
if(!Global_262145.f_31902 && cloudTimeAsInt < Global_262145.f_31887) num=0;
}elseif(hParam0==joaat("baller7")){
if(Global_262145.f_31967){
}elseif(!Global_262145.f_31903 && cloudTimeAsInt < Global_262145.f_31888){
num=0;
}}elseif(hParam0==joaat("brioso3")){
if(!*Global_262145.f_33131 && cloudTimeAsInt < *Global_262145.f_33112) num=0;
}elseif(hParam0==joaat("corsita")){
if(!*Global_262145.f_33125 && cloudTimeAsInt < *Global_262145.f_33106) num=0;
}elseif(hParam0==joaat("draugur")){
if(!*Global_262145.f_33129 && cloudTimeAsInt < *Global_262145.f_33110) num=0;
}elseif(hParam0==joaat("greenwood")){
if(!*Global_262145.f_33123 && cloudTimeAsInt < *Global_262145.f_33104) num=0;
}elseif(hParam0==joaat("kanjosj")){
if(!*Global_262145.f_33134 && cloudTimeAsInt < *Global_262145.f_33115) num=0;
}elseif(hParam0==joaat("lm87")){
if(!*Global_262145.f_33126 && cloudTimeAsInt < *Global_262145.f_33107) num=0;
}elseif(hParam0==joaat("postlude")){
if(!*Global_262145.f_33135 && cloudTimeAsInt < *Global_262145.f_33116) num=0;
}elseif(hParam0==joaat("rhinehart")){
if(!*Global_262145.f_33137 && cloudTimeAsInt < *Global_262145.f_33118) num=0;
}elseif(hParam0==joaat("sm722")){
if(!*Global_262145.f_33128 && cloudTimeAsInt < *Global_262145.f_33109) num=0;
}elseif(hParam0==joaat("tenf")){
if(!*Global_262145.f_33136 && cloudTimeAsInt < *Global_262145.f_33117) num=0;
}elseif(hParam0==joaat("tenf2")){
if(!*Global_262145.f_33139 && cloudTimeAsInt < *Global_262145.f_33120) num=0;
}elseif(hParam0==joaat("torero2")){
if(!*Global_262145.f_33124 && cloudTimeAsInt < *Global_262145.f_33105) num=0;
}elseif(hParam0==joaat("vigero2")){
if(!*Global_262145.f_33132 && cloudTimeAsInt < *Global_262145.f_33113) num=0;
}elseif(hParam0==joaat("weevil2")){
if(!*Global_262145.f_33138 && cloudTimeAsInt < *Global_262145.f_33119) num=0;
}elseif(hParam0==joaat("ruiner4")){
if(!*Global_262145.f_33130 && cloudTimeAsInt < *Global_262145.f_33111) num=0;
}elseif(hParam0==joaat("sentinel4")){
if(!*Global_262145.f_33140 && cloudTimeAsInt < *Global_262145.f_33121) num=0;
}elseif(hParam0==joaat("conada")){
if(!*Global_262145.f_33127 && cloudTimeAsInt < *Global_262145.f_33108) num=0;
}elseif(hParam0==joaat("omnisegt")){
if(!*Global_262145.f_33122 && cloudTimeAsInt < *Global_262145.f_33103) num=0;
}elseif(hParam0==1384502824){
if(!*Global_262145.f_33962 && cloudTimeAsInt < *Global_262145.f_33946) num=0;
}elseif(hParam0==-1576586413){
if(!*Global_262145.f_33962 && cloudTimeAsInt < *Global_262145.f_33946) num=0;
}elseif(hParam0==-1249788006){
if(!*Global_262145.f_33971 && cloudTimeAsInt < *Global_262145.f_33954) num=0;
}elseif(hParam0==-1386336041){
if(!*Global_262145.f_33965 && cloudTimeAsInt < *Global_262145.f_33949) num=0;
}elseif(hParam0==-1627077503){
if(!*Global_262145.f_33959 && cloudTimeAsInt < *Global_262145.f_33943) num=0;
}elseif(hParam0==-1035489563){
if(!*Global_262145.f_33960 && cloudTimeAsInt < *Global_262145.f_33944) num=0;
}elseif(hParam0==1748565021){
if(!*Global_262145.f_33957 && cloudTimeAsInt < *Global_262145.f_33941) num=0;
}elseif(hParam0==2100457220){
if(!*Global_262145.f_33968 && cloudTimeAsInt < *Global_262145.f_33952) num=0;
}elseif(hParam0==996383885){
if(!*Global_262145.f_33972 && cloudTimeAsInt < *Global_262145.f_33956) num=0;
}elseif(hParam0==-131348178){
if(!*Global_262145.f_33969 && cloudTimeAsInt < *Global_262145.f_33953) num=0;
}elseif(hParam0==268758436){
if(!*Global_262145.f_33958 && cloudTimeAsInt < *Global_262145.f_33942) num=0;
}elseif(hParam0==1076201208){
if(!*Global_262145.f_33961 && cloudTimeAsInt < *Global_262145.f_33945) num=0;
}elseif(hParam0==669204833){
if(!*Global_262145.f_33970 && cloudTimeAsInt < *Global_262145.f_33955) num=0;
}elseif(hParam0==1550581940){
if(!*Global_262145.f_33966 && cloudTimeAsInt < *Global_262145.f_33950) num=0;
}elseif(hParam0==-1933242328){
if(!*Global_262145.f_33967 && cloudTimeAsInt < *Global_262145.f_33951) num=0;
}elseif(hParam0==-461850249){
if(!*Global_262145.f_33964 && cloudTimeAsInt < *Global_262145.f_33948) num=0;
}elseif(hParam0==joaat("taxi")){
if(!*Global_262145.f_33963 && cloudTimeAsInt < *Global_262145.f_33947) num=0;
}
return num;
}
BOOL func_246() // Position - 0x2B898{
return false;
}
BOOL func_247() // Position - 0x2B8A1{
return true;
}
BOOL func_248() // Position - 0x2B8AA{
return true;
}
BOOL func_249() // Position - 0x2B8B3{
if(DLC::IS_DLC_PRESENT(-1226939934)) return true;
return false;
}
BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x2B8CC{
int profileSetting;
if(Global_152523==2) return true;
elseif(Global_152523==3) return false;
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(unk_0x8BD41D5945F5762B()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN()){
STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
MISC::SET_BIT(&profileSetting, 2);
MISC::SET_BIT(&profileSetting, 4);
MISC::SET_BIT(&profileSetting, 6);
MISC::SET_BIT(&Global_25, 2);
MISC::SET_BIT(&Global_25, 4);
MISC::SET_BIT(&Global_25, 6);
STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
profileSetting=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&profileSetting, 0);
STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
}
return true;
}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID())if(IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0)) return true;
return false;
}
BOOL func_251(Vehicle veParam0) // Position - 0x2B984{
Hash entityModel;
const char* vehicleNumberPlateText;
entityModel=ENTITY::GET_ENTITY_MODEL(veParam0);
vehicleNumberPlateText=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);
if(entityModel==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G ")) return true;
if(!func_242(entityModel, false, -1)) return true;
return false;
}
BOOL func_252(Vehicle veParam0) // Position - 0x2B9CB{
int i;
for (i=0;
i < 3;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(Global_98042[i]))if(Global_98042[i]==veParam0) return true;
}
return false;
}
BOOL func_253(Vehicle veParam0) // Position - 0x2BA06{
int i;
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
for (i=0;
i < 9;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98012[i], false))if(Global_98012[i]==veParam0 && ENTITY::GET_ENTITY_MODEL(Global_98012[i])==ENTITY::GET_ENTITY_MODEL(veParam0)) return true;
}}
return false;
}
BOOL func_254(Vehicle veParam0) // Position - 0x2BA82{
int i;
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[24]))if(veParam0==Global_77348.f_484[24]) return false;
for (i=0;
i < 68;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[i]))if(i !=24 && i !=21 && i !=22 && i !=23 && i !=27 && i !=30 && i !=33 && i !=28 && i !=31 && i !=34 && i !=26 && i !=29 && i !=32)if(veParam0==Global_77348.f_484[i]) return true;
}
return false;
}
BOOL func_255(Vehicle veParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x2BB6A{
int i;
var garageName;
int num;
if(!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)) return false;
for (i=0;
func_256(echParam1, i, &garageName, &num);
i=i + 1){
if(!bParam2 || IS_BIT_SET(Global_113648.f_7231[num], 0))if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0)) return true;
}
return false;
}
BOOL func_256(eCharacter echParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x2BBD8{
TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
switch (echParam0){
case CHAR_MICHAEL:
if(iParam1==0){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
*uParam3=0;
return true;
}elseif(iParam1==1){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
*uParam3=1;
return true;
}
break;
case CHAR_FRANKLIN:
if(iParam1==0){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
*uParam3=5;
return true;
}elseif(iParam1==1){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
*uParam3=6;
return true;
}
break;
case CHAR_TREVOR:
if(iParam1==0){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
*uParam3=2;
return true;
}elseif(iParam1==1){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
*uParam3=3;
return true;
}elseif(iParam1==2){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
*uParam3=4;
return true;
}
break;
}
return false;
}


var func__257() // Position - 0x2BCB0{
var unk;
func_267(&unk, CLOCK::GET_CLOCK_SECONDS());
func_266(&unk, CLOCK::GET_CLOCK_MINUTES());
func_265(&unk, CLOCK::GET_CLOCK_HOURS());
func_260(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_259(&unk, CLOCK::GET_CLOCK_MONTH());
func_258(&unk, CLOCK::GET_CLOCK_YEAR());
return unk;
}


void func_258(var uParam0, int iParam1) // Position - 0x2BCF6{
if(iParam1 <=0) return;
if(iParam1 > 2043 || iParam1 < 1979) return;
*uParam0=*uParam0 - *uParam0 & 2080374784;
if(iParam1 < 2011){
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
*uParam0=*uParam0 | -2147483648;
}else{
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
*uParam0=*uParam0 - *uParam0 & -2147483648;
}
return;
}


void func_259(var uParam0, int iParam1) // Position - 0x2BD7C{
if(iParam1 < 0 || iParam1 > 11) return;
*uParam0=*uParam0 - *uParam0 & 15;
*uParam0=*uParam0 || iParam1;
return;
}


void func_260(var uParam0, int iParam1) // Position - 0x2BDAF{
int num;
int num2;
num=func_264(*uParam0);
num2=func_262(*uParam0);
if(iParam1 < 1 || iParam1 > func_261(num, num2)) return;
*uParam0=*uParam0 - *uParam0 & 496;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
return;
}

int func_261(int iParam0, int iParam1) // Position - 0x2BE00{
if(iParam1 < 0) iParam1=0;
switch (iParam0){
case 0:
case 2:
case 4:
case 6:
case 7:
case 9:
case 11:
return 31;
case 3:
case 5:
case 8:
case 10:
return 30;
case 1:
if(iParam1 % 4==0)if(iParam1 % 100 !=0) return 29;
elseif(iParam1 % 400==0) return 29;
return 28;
}
return 30;
}

int func_262(int iParam0) // Position - 0x2BEA2{
return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 :
1) + 2011;
}


var func__263(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2BEC4{
if(bParam0) return uParam1;
return uParam2;
}

int func_264(int iParam0) // Position - 0x2BEDB{
return iParam0 & 15;
}


void func_265(var uParam0, int iParam1) // Position - 0x2BEE8{
if(iParam1 < 0 || iParam1 > 24) return;
*uParam0=*uParam0 - *uParam0 & 15872;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
return;
}


void func_266(var uParam0, int iParam1) // Position - 0x2BF22{
if(iParam1 < 0 || iParam1 >=60) return;
*uParam0=*uParam0 - *uParam0 & 1032192;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
return;
}


void func_267(var uParam0, int iParam1) // Position - 0x2BF5D{
if(iParam1 < 0 || iParam1 >=60) return;
*uParam0=*uParam0 - *uParam0 & 66060288;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
return;
}
BOOL func_268(var uParam0, int iParam1) // Position - 0x2BF99{
BOOL num;
int num2;
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), "", 16);
uParam0->f_9=0;
uParam0->f_10=0;
uParam0->f_11=0;
uParam0->f_12=145;
uParam0->f_13=-1;
uParam0->f_14=0;
uParam0->f_15={
0f, 0f, 0f 
};
uParam0->f_18={
0f, 0f, 0f 
};
switch (iParam1){
case 0:
*uParam0={
-831.8538f, 172.1154f, 69.9058f 
};
uParam0->f_3=157.5705f;
uParam0->f_4=func_269(CHAR_MICHAEL, 1);
uParam0->f_12=0;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 1:
*uParam0={
1970.9434f, 3801.6838f, 31.1396f 
};
uParam0->f_3=301.3964f;
uParam0->f_4=func_269(CHAR_MICHAEL, 1);
uParam0->f_12=0;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 2:
*uParam0={
-22.6297f, -1439.1368f, 29.6549f 
};
uParam0->f_3=180.0808f;
uParam0->f_4=func_269(CHAR_FRANKLIN, 1);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 3:
*uParam0={
-22.5229f, -1434.6986f, 29.6552f 
};
uParam0->f_3=141.6114f;
uParam0->f_4=func_269(CHAR_FRANKLIN, 2);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 19);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 4:
*uParam0={
10.9281f, 545.669f, 174.7951f 
};
uParam0->f_3=61.392f;
uParam0->f_4=func_269(CHAR_FRANKLIN, 1);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 5:
*uParam0={
6.1093f, 544.9742f, 174.2835f 
};
uParam0->f_3=92.1548f;
uParam0->f_4=func_269(CHAR_FRANKLIN, 2);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 19);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 6:
*uParam0={
1981.4163f, 3808.1313f, 31.1384f 
};
uParam0->f_3=117.2557f;
uParam0->f_4=func_269(CHAR_TREVOR, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 7:
*uParam0={
-1158.4875f, -1529.3673f, 3.8995f 
};
uParam0->f_3=35.7505f;
uParam0->f_4=func_269(CHAR_TREVOR, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 8:
*uParam0={
148.2868f, -1270.5695f, 28.2252f 
};
uParam0->f_3=208.4685f;
uParam0->f_4=func_269(CHAR_TREVOR, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
num=1;
break;
case 9:
*uParam0={
1459.5085f, -1380.45f, 78.3259f 
};
uParam0->f_3=99.6211f;
uParam0->f_4=joaat("scorcher");
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
case 10:
*uParam0={
-1518.947f, -1387.8655f, -0.5134f 
};
uParam0->f_3=98.3867f;
uParam0->f_4=joaat("seashark");
num=1;
MISC::SET_BIT(&(uParam0->f_9), 6);
break;
case 11:
*uParam0={
353.0926f, 3577.5925f, 32.351f 
};
uParam0->f_3=16.6205f;
uParam0->f_4=joaat("duster");
num=1;
MISC::SET_BIT(&(uParam0->f_9), 6);
break;
case 12:
uParam0->f_14=0;
*uParam0={
-1652.0043f, -3142.3484f, 12.9921f 
};
uParam0->f_3=329.1082f;
uParam0->f_12=0;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 13:
uParam0->f_14=1;
*uParam0={
-1271.6487f, -3380.6853f, 12.9451f 
};
uParam0->f_3=329.5137f;
uParam0->f_12=1;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 14:
uParam0->f_14=2;
*uParam0={
1735.5863f, 3294.5305f, 40.1651f 
};
uParam0->f_3=194.9525f;
uParam0->f_12=2;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 15:
uParam0->f_14=3;
*uParam0={
-846.27f, -1363.19f, 0.22f 
};
uParam0->f_3=108.78f;
uParam0->f_12=0;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 16:
uParam0->f_14=4;
*uParam0={
-849.47f, -1354.99f, 0.24f 
};
uParam0->f_3=109.84f;
uParam0->f_12=1;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 17:
uParam0->f_14=5;
*uParam0={
-852.47f, -1346.2f, 0.21f 
};
uParam0->f_3=108.76f;
uParam0->f_12=2;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 18:
uParam0->f_14=6;
*uParam0={
-745.857f, -1433.9036f, 4.0005f 
};
uParam0->f_12=0;
uParam0->f_13=360;
uParam0->f_15={
-756.2952f, -1441.6093f, 2.9184f 
};
uParam0->f_18={
-738.0606f, -1423.0676f, 8.2835f 
};
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 19:
uParam0->f_14=7;
*uParam0={
-761.8486f, -1453.8293f, 4.0005f 
};
uParam0->f_12=1;
uParam0->f_13=360;
uParam0->f_15={
-772.8158f, -1459.9572f, 3.2894f 
};
uParam0->f_18={
-754.3353f, -1440.836f, 8.3334f 
};
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 20:
uParam0->f_14=8;
*uParam0={
1769.3f, 3244f, 41.1f 
};
uParam0->f_12=2;
uParam0->f_13=360;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 28);
num=1;
break;
case 21:
uParam0->f_14=9;
*uParam0={
192.7897f, -1020.5385f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=0;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
num=1;
break;
case 22:
uParam0->f_14=10;
*uParam0={
192.7897f, -1020.5385f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=1;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
num=1;
break;
case 23:
uParam0->f_14=11;
*uParam0={
192.7897f, -1020.5385f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=2;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
num=1;
break;
case 26:
case 27:
case 28:
num2=iParam1 - 26;
uParam0->f_14=12 + num2;
*uParam0={
196.2794f, -1020.4791f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=0 + num2;
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
num=1;
break;
case 29:
case 30:
case 31:
num2=iParam1 - 29;
uParam0->f_14=15 + num2;
*uParam0={
199.8872f, -1020.048f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=0 + num2;
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
num=1;
break;
case 32:
case 33:
case 34:
num2=iParam1 - 32;
uParam0->f_14=18 + num2;
*uParam0={
203.6006f, -1019.7762f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=0 + num2;
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
num=1;
break;
case 24:
uParam0->f_14=21;
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 11);
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 12);
num=1;
break;
case 25:
uParam0->f_14=22;
*uParam0={
723.2515f, -632.0496f, 27.1484f 
};
uParam0->f_3=12.9316f;
uParam0->f_4=joaat("tailgater");
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 11);
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 12);
num=1;
break;
case 35:
*uParam0={
-51.23f, 3111.9f, 24.95f 
};
uParam0->f_3=46.78f;
uParam0->f_4=joaat("proptrailer");
MISC::SET_BIT(&(uParam0->f_9), 8);
num=1;
break;
case 36:
*uParam0={
-55.7984f, -1096.5856f, 25.4223f 
};
uParam0->f_3=308.0596f;
uParam0->f_4=joaat("bjxl");
uParam0->f_10=126;
uParam0->f_11=126;
MISC::SET_BIT(&(uParam0->f_9), 9);
MISC::SET_BIT(&(uParam0->f_9), 13);
num=1;
break;
case 37:
*uParam0={
-2892.93f, 3192.37f, 11.66f 
};
uParam0->f_3=-132.35f;
uParam0->f_4=joaat("velum");
uParam0->f_10=157;
uParam0->f_11=157;
MISC::SET_BIT(&(uParam0->f_9), 9);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 13);
num=1;
break;
case 38:
*uParam0={
1744.3083f, 3270.673f, 40.2076f 
};
uParam0->f_3=125f;
uParam0->f_4=joaat("cargobob3");
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 8);
num=1;
break;
case 39:
*uParam0={
1751.4397f, 3322.643f, 42.1855f 
};
uParam0->f_3=268.134f;
uParam0->f_4=joaat("submersible");
MISC::SET_BIT(&(uParam0->f_9), 23);
num=1;
break;
case 41:
*uParam0={
1377.1045f, -2076.2f, 52f 
};
uParam0->f_3=37.5f;
uParam0->f_4=joaat("towtruck");
MISC::SET_BIT(&(uParam0->f_9), 8);
num=1;
break;
case 40:
*uParam0={
1380.42f, -2072.7695f, 51.7607f 
};
uParam0->f_3=37.5f;
uParam0->f_4=joaat("trash");
MISC::SET_BIT(&(uParam0->f_9), 8);
num=1;
break;
case 42:
*uParam0={
1359.3892f, 3618.4407f, 33.8907f 
};
uParam0->f_3=108.2337f;
uParam0->f_4=joaat("barracks");
MISC::SET_BIT(&(uParam0->f_9), 8);
num=1;
break;
case 43:
*uParam0={
693.1154f, -1018.1551f, 21.6387f 
};
uParam0->f_3=177.6454f;
uParam0->f_4=joaat("firetruk");
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 8);
num=1;
break;
case 44:
*uParam0={
-73.6963f, 495.124f, 143.5226f 
};
uParam0->f_3=155.5994f;
uParam0->f_4=joaat("vacca");
num=1;
break;
case 45:
*uParam0={
-67.6314f, 891.8266f, 234.5348f 
};
uParam0->f_3=294.993f;
uParam0->f_4=joaat("surano");
num=1;
break;
case 46:
*uParam0={
533.9048f, -169.2469f, 53.7005f 
};
uParam0->f_3=1.2998f;
uParam0->f_4=joaat("tornado2");
num=1;
break;
case 47:
*uParam0={
-726.8914f, -408.6952f, 34.0416f 
};
uParam0->f_3=267.7392f;
uParam0->f_4=joaat("superd");
num=1;
break;
case 48:
*uParam0={
-1321.5186f, 261.3993f, 61.5709f 
};
uParam0->f_3=350.7697f;
uParam0->f_4=joaat("double");
num=1;
break;
case 49:
*uParam0={
-1267.9991f, 451.6463f, 93.7071f 
};
uParam0->f_3=48.9311f;
uParam0->f_4=joaat("double");
num=1;
break;
case 50:
*uParam0={
-1062.0762f, -226.7637f, 37.157f 
};
uParam0->f_3=234.2767f;
uParam0->f_4=joaat("double");
num=1;
break;
case 51:
*uParam0={
68.16914f, -1558.9581f, 29.469042f 
};
uParam0->f_3=49.905754f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
num=1;
break;
case 52:
*uParam0={
589.4399f, 2736.7078f, 42.033165f 
};
uParam0->f_3=-175.7105f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
num=1;
break;
case 53:
*uParam0={
-488.77396f, -344.57205f, 34.363564f 
};
uParam0->f_3=82.4042f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
num=1;
break;
case 54:
*uParam0={
288.88083f, -585.47284f, 43.15428f 
};
uParam0->f_3=-20.807068f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
num=1;
break;
case 55:
*uParam0={
304.82938f, -1383.6742f, 31.677443f 
};
uParam0->f_3=-41.116028f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
num=1;
break;
case 56:
*uParam0={
1126.1943f, -1481.486f, 34.701603f 
};
uParam0->f_3=-91.43369f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
num=1;
break;
case 57:
*uParam0={
-1598.36f, 5252.84f, 0f 
};
uParam0->f_3=28.14f;
uParam0->f_4=joaat("submersible");
uParam0->f_13=308;
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
case 58:
*uParam0={
-1602.62f, 5260.37f, 0.86f 
};
uParam0->f_3=25.32f;
uParam0->f_4=joaat("dinghy");
uParam0->f_13=404;
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
case 59:
*uParam0={
2116.571f, 4763.2793f, 40.1596f 
};
uParam0->f_3=198.723f;
uParam0->f_4=joaat("bfinjection");
num=1;
break;
case 60:
*uParam0={
1133.21f, 120.2f, 80.9f 
};
uParam0->f_3=134.4f;
if(_IS_EXCLUSIVE_CONTENT_UNLOCKED()) uParam0->f_4=joaat("blimp2");
else uParam0->f_4=joaat("blimp");
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 1);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 21);
num=1;
break;
case 61:
*uParam0={
-806.31f, -2679.65f, 13.9f 
};
uParam0->f_3=150.54f;
if(_IS_EXCLUSIVE_CONTENT_UNLOCKED()) uParam0->f_4=joaat("blimp2");
else uParam0->f_4=joaat("blimp");
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 1);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 21);
num=1;
break;
case 62:
*uParam0={
1985.85f, 3828.96f, 31.98f 
};
uParam0->f_3=-16.58f;
uParam0->f_4=joaat("blazer3");
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
case 63:
*uParam0={
3870.75f, 4464.67f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=joaat("submersible2");
uParam0->f_13=308;
MISC::SET_BIT(&(uParam0->f_9), 0);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
MISC::SET_BIT(&(uParam0->f_9), 30);
num=1;
break;
case 64:
*uParam0={
1257.7295f, -2564.474f, 41.717f 
};
uParam0->f_3=284.5561f;
uParam0->f_4=joaat("dukes2");
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
case 65:
*uParam0={
643.2823f, 3014.152f, 42.2733f 
};
uParam0->f_3=128.0554f;
uParam0->f_4=joaat("dukes2");
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
case 66:
*uParam0={
38.9368f, 850.8677f, 196.3f 
};
uParam0->f_3=311.6813f;
uParam0->f_4=joaat("dodo");
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
case 67:
*uParam0={
1333.8752f, 4262.2256f, 30.78f 
};
uParam0->f_3=262.5293f;
uParam0->f_4=joaat("dodo");
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
num=1;
break;
}
if(IS_BIT_SET(uParam0->f_9, 10)){
uParam0->f_4=Global_113648.f_32751.f_69[uParam0->f_14 /*78*/].f_66;
if(iParam1==14){
if(uParam0->f_4==joaat("miljet") || uParam0->f_4==joaat("besra") || uParam0->f_4==joaat("luxor") || uParam0->f_4==joaat("shamal") || uParam0->f_4==joaat("titan") || uParam0->f_4==joaat("luxor2")){
*uParam0={
1678.8f, 3229.6f, 41.8f 
};
uParam0->f_3=106.0906f;
}}
if(!func_275(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, false)) *uParam0={
Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] 
};
if(Global_113648.f_32751.f_1934[uParam0->f_14] !=-1f) uParam0->f_3=Global_113648.f_32751.f_1934[uParam0->f_14];
}
if(IS_BIT_SET(uParam0->f_9, 19)){
if(!func_275(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(IS_BIT_SET(uParam0->f_9, 20)){
if(!func_275(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return num;
}

int func_269(eCharacter echParam0, int iParam1) // Position - 0x2D69C{
int num;
if(func_154(echParam0)){
num.f_11=12;
num.f_31=49;
num.f_81=2;
func_270(echParam0, &num, iParam1);
return num;
}else{
echParam0 !=_CHAR_NULL;
}
return 0;
}


void func_270(eCharacter echParam0, var uParam1, int iParam2) // Position - 0x2D6DE{
int num;
uParam1->f_88=1;
uParam1->f_84=255;
uParam1->f_85=255;
uParam1->f_86=255;
uParam1->f_97=1;
uParam1->f_3=1000;
uParam1->f_1=0;
switch (echParam0){
case CHAR_MICHAEL:
num=joaat("tailgater");
if(Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131]) num=joaat("premier");
switch (num){
case joaat("tailgater"):
*uParam1=num;
uParam1->f_2=3f;
uParam1->f_4=0;
uParam1->f_9=1;
uParam1->f_11[0]=1;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
break;
case joaat("premier"):
*uParam1=num;
uParam1->f_2=14.9f;
uParam1->f_5=43;
uParam1->f_6=43;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_9=0;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
break;
}
break;
case CHAR_TREVOR:
num=joaat("bodhi2");
switch (num){
case joaat("bodhi2"):
*uParam1=num;
uParam1->f_2=14f;
uParam1->f_5=32;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=156;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
if(Global_113648.f_9087.f_99.f_58[119]) uParam1->f_11[1]=1;
break;
}
break;
case CHAR_FRANKLIN:
if(iParam2==1) num=joaat("buffalo2");
elseif(iParam2==2) num=joaat("bagger");
elseif(Global_113648.f_9087.f_99.f_58[118]) num=joaat("bagger");
else num=joaat("buffalo2");
switch (num){
case joaat("bagger"):
*uParam1=num;
uParam1->f_2=6f;
uParam1->f_5=53;
uParam1->f_6=0;
uParam1->f_7=59;
uParam1->f_8=156;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
break;
case joaat("buffalo2"):
*uParam1=num;
uParam1->f_2=0f;
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_10=1;
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
uParam1->f_11[0]=1;
uParam1->f_11[1]=1;
uParam1->f_11[2]=1;
uParam1->f_11[3]=1;
uParam1->f_11[4]=1;
uParam1->f_11[5]=1;
uParam1->f_11[6]=1;
uParam1->f_11[7]=1;
uParam1->f_11[8]=1;
break;
}
break;
default:
break;
}
return;
}


void func_271(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6) // Position - 0x2D93A{
if(func_268(&Global_77348.f_555[0 /*21*/], iParam0)){
if(IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10)){
func_273(iParam0);
func_272(uParam1, &Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]);
if(IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 11)){
Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/]={
uParam2 
};
Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14]=fParam5;
}else{
Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/]={
0f, 0f, 0f 
};
Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14]=-1f;
}
Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14]=iParam6 + 1;
func_230(iParam0, true);
}}
return;
}


void func_272(var uParam0, var uParam1) // Position - 0x2DA33{
uParam1->f_66=uParam0->f_66;
*uParam1=*uParam0;
uParam1->f_1={
uParam0->f_1 
};
uParam1->f_5=uParam0->f_5;
uParam1->f_6=uParam0->f_6;
uParam1->f_7=uParam0->f_7;
uParam1->f_8=uParam0->f_8;
uParam1->f_9={
uParam0->f_9 
};
uParam1->f_59={
uParam0->f_59 
};
uParam1->f_62=uParam0->f_62;
uParam1->f_63=uParam0->f_63;
uParam1->f_64=uParam0->f_64;
uParam1->f_65=uParam0->f_65;
uParam1->f_77=uParam0->f_77;
uParam1->f_67=uParam0->f_67;
uParam1->f_69=uParam0->f_69;
uParam1->f_68=uParam0->f_68;
uParam1->f_71=uParam0->f_71;
uParam1->f_72=uParam0->f_72;
uParam1->f_73=uParam0->f_73;
uParam1->f_74=uParam0->f_74;
uParam1->f_75=uParam0->f_75;
uParam1->f_76=uParam0->f_76;
return;
}


void func_273(int iParam0) // Position - 0x2DAFF{
if(iParam0==-1) return;
if(func_268(&Global_77348.f_555[0 /*21*/], iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_139[iParam0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77348.f_139[iParam0], true, true);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_77348.f_139[iParam0]);
Global_77348.f_139[iParam0]=0;
}
if(IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 13)) func_230(iParam0, false);
}
return;
}

int func_274(Vehicle veParam0) // Position - 0x2DB76{
int i;
if(!ENTITY::DOES_ENTITY_EXIST(veParam0)) return 145;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)) return 145;
for (i=0;
i < 9;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[i]))if(Global_98012[i]==veParam0) return Global_98022[i];
}
return 145;
}
BOOL func_275(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x2DBD9{
if(bParam6) return fParam0==fParam3 && fParam0.f_1==fParam3.f_1;
return fParam0==fParam3 && fParam0.f_1==fParam3.f_1 && fParam0.f_2==fParam3.f_2;
}


void func_276(Vehicle veParam0, var uParam1) // Position - 0x2DC20{
int i;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
func_26(uParam1);
uParam1->f_66=ENTITY::GET_ENTITY_MODEL(veParam0);
TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
*uParam1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
uParam1->f_65=VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
uParam1->f_67=VEHICLE::GET_VEHICLE_LIVERY(veParam0);
uParam1->f_69=unk_0xA79BA8CFAAB28820(veParam0);
uParam1->f_70=VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veParam0);
VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 2)) MISC::SET_BIT(&(uParam1->f_77), 28);
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 3)) MISC::SET_BIT(&(uParam1->f_77), 29);
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 0)) MISC::SET_BIT(&(uParam1->f_77), 30);
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 1)) MISC::SET_BIT(&(uParam1->f_77), 31);
if(uParam1->f_65==-1 && !func_279(uParam1->f_66)) uParam1->f_65=0;
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false)) uParam1->f_68=VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam0);
if(VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)){
if(VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(veParam0)){
switch (VEHICLE::GET_LANDING_GEAR_STATE(veParam0)){
case 3:
case 0:
MISC::CLEAR_BIT(&(uParam1->f_77), 23);
MISC::SET_BIT(&(uParam1->f_77), 22);
break;
case 4:
case 1:
MISC::CLEAR_BIT(&(uParam1->f_77), 23);
MISC::CLEAR_BIT(&(uParam1->f_77), 22);
break;
case 5:
MISC::SET_BIT(&(uParam1->f_77), 23);
break;
}}else{
MISC::SET_BIT(&(uParam1->f_77), 23);
}}
if(!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0)) MISC::SET_BIT(&(uParam1->f_77), 9);
if(VEHICLE::IS_VEHICLE_STOLEN(veParam0)) MISC::SET_BIT(&(uParam1->f_77), 10);
if(VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(veParam0)){
MISC::SET_BIT(&(uParam1->f_77), 13);
VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
}
if(VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(veParam0)) MISC::SET_BIT(&(uParam1->f_77), 12);
func_278(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
for (i=0;
i <=11;
i=i + 1){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1)) MISC::SET_BIT(&(uParam1->f_77), func_277(i + 1));
}
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0)) MISC::SET_BIT(&(uParam1->f_77), 11);
else MISC::CLEAR_BIT(&(uParam1->f_77), 11);
if(DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && unk_0x8FA309E9ECEE409A(veParam0, "IgnoredByQuickSave")) MISC::SET_BIT(&(uParam1->f_77), 27);
else MISC::CLEAR_BIT(&(uParam1->f_77), 27);
}
return;
}

int func_277(int iParam0) // Position - 0x2DECB{
switch (iParam0){
case 1:
return 0;
case 2:
return 1;
case 3:
return 2;
case 4:
return 3;
case 5:
return 4;
case 6:
return 5;
case 7:
return 6;
case 8:
return 7;
case 9:
return 8;
case 10:
return 24;
case 11:
return 25;
case 12:
return 26;
}
return 0;
}

int func_278(var uParam0, var uParam1, var uParam2) // Position - 0x2DF7B{
int i;
int modType;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false)) return 0;
if(VEHICLE::GET_NUM_MOD_KITS(*uParam0)==0) return 0;
for (i=0;
i < *uParam1;
i=i + 1){
modType=i;
if(modType==17 || modType==18 || modType==19 || modType==20 || modType==21){
uParam1->[i]=0;
if(VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType)) uParam1->[i]=1;
}elseif(modType==22){
if(VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType)){
switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0)){
case 255:
uParam1->[i]=1;
break;
case 0:
uParam1->[i]=2;
break;
case 1:
uParam1->[i]=3;
break;
case 2:
uParam1->[i]=4;
break;
case 3:
uParam1->[i]=5;
break;
case 4:
uParam1->[i]=6;
break;
case 5:
uParam1->[i]=7;
break;
case 6:
uParam1->[i]=8;
break;
case 7:
uParam1->[i]=9;
break;
case 8:
uParam1->[i]=10;
break;
case 9:
uParam1->[i]=11;
break;
case 10:
uParam1->[i]=12;
break;
case 11:
uParam1->[i]=13;
break;
case 12:
uParam1->[i]=14;
break;
case 13:
uParam1->[i]=15;
break;
}}else{
uParam1->[i]=0;
}}else{
uParam1->[i]=VEHICLE::GET_VEHICLE_MOD(*uParam0, i) + 1;
if(i==23) uParam2->[0]=VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
elseif(i==24) uParam2->[1]=VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
}}
return 1;
}
BOOL func_279(int iParam0) // Position - 0x2E16E{
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return true;
default:
}
return false;
}


void func_280(int iParam0) // Position - 0x2E18E{
iParam0 !=24 && iParam0 !=25;
func_273(iParam0);
func_230(iParam0, false);
return;
}
BOOL func_281(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5) // Position - 0x2E1B5{
int num;
num=func_282(uParam0, iParam3, 1);
switch (num){
case 0:
*uParam4={
-827.351f, 157.785f, 68.2143f 
};
*uParam5=85.1509f;
return true;
case 1:
case 2:
*uParam4={
1992.5234f, 3813.9158f, 31.1008f 
};
*uParam5=122.1498f;
return true;
case 3:
*uParam4={
-1184.2582f, -1496.5555f, 3.3895f 
};
*uParam5=303.2098f;
return true;
case 4:
*uParam4={
118.1067f, -1325.9058f, 28.3706f 
};
*uParam5=123.5016f;
return true;
case 5:
*uParam4={
-18.118f, -1455.1265f, 29.5004f 
};
*uParam5=273.2822f;
return true;
case 6:
*uParam4={
1.5947f, 543.4017f, 173.46439f 
};
*uParam5=310.7556f;
return true;
default:
break;
}
return false;
}

int func_282(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0x2E2CB{
int i;
float distanceBetweenCoords;
float num;
int num2;
num=1000000f;
num2=10;
for (i=0;
i <=10 - 1;
i=i + 1){
if(Global_95719[i /*10*/].f_7 !=263){
if(Global_95719[i /*10*/].f_9==iParam3 || iParam3==145){
if(func_283(i) || iParam4==0){
distanceBetweenCoords=MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_95719[i /*10*/].f_3, true);
if(distanceBetweenCoords < num){
num=distanceBetweenCoords;
num2=i;
}}}}}
return num2;
}
BOOL func_283(int iParam0) // Position - 0x2E35A{
return IS_BIT_SET(Global_113648.f_7231[iParam0], 0);
}
Vehicle func_284(int iParam0) // Position - 0x2E36F{
if(iParam0==-1) return 0;
return Global_77348.f_139[iParam0];
}


void func_285(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15) // Position - 0x2E38B{
func_286(fParam0, fParam3, fParam6, fParam7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
return;
}


void func_286(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, Vector3 vParam7, var uParam8, var uParam9, float fParam10, float fParam11, float fParam12, float fParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Position - 0x2E3B4{
Vehicle playersLastVehicle;
BOOL flag;
BOOL flag2;
int num;
var out1;
float out2;
var entityCoords;
Hash entityModel;
Ped pedInVehicleSeat;
int vehicleModelNumberOfSeats;
if(bParam15) bParam15=false;
flag2=true;
num=0;
playersLastVehicle=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(ENTITY::DOES_ENTITY_EXIST(playersLastVehicle)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, false);
num=1;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false)){
if(bParam18) func_291(playersLastVehicle);
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(playersLastVehicle, vParam0, vParam3, fParam6, false, true, 0)){
flag=true;
}else{
entityCoords={
ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true) 
};
if(entityCoords.f_2 > vParam0.f_2 && entityCoords.f_2 < vParam3.f_2 || entityCoords.f_2 > vParam3.f_2 && entityCoords.f_2 < vParam0.f_2)if(func_288(playersLastVehicle, vParam0, vParam3, fParam6)) flag=true;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false)){
if(VEHICLE::IS_VEHICLE_MODEL(playersLastVehicle, joaat("taxi"))){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, -1, false) !=PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, -1, false) !=0){
if(MISC::GET_DISTANCE_BETWEEN_COORDS((vParam0 + vParam3) /{
2f, 2f, 2f 
}
, ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true), true) < 20f){
flag=true;
flag2=false;
}}}}
if(bParam16)if(func_255(playersLastVehicle, _GET_CURRENT_PLAYER_CHARACTER(), true)) flag=false;
if(flag){
if(!_IS_NULL_VECTOR(fParam11)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false)){
entityModel=ENTITY::GET_ENTITY_MODEL(playersLastVehicle);
VEHICLE::GET_VEHICLE_SIZE(playersLastVehicle, &out1, &out2);
if(VEHICLE::IS_THIS_MODEL_A_HELI(entityModel)){
fParam11=fParam11 + 3f;
fParam11.f_1=fParam11.f_1 + 3f;
}
if(entityModel==joaat("zentorno") || entityModel==joaat("btype") || entityModel==joaat("dubsta3") || entityModel==joaat("monster")) fParam11={
fParam11 *{
1.1f, 1.1f, 1.1f 
}};
elseif(entityModel==joaat("t20") || entityModel==joaat("virgo")) fParam11={
fParam11 *{
1.2f, 1.2f, 1.2f 
}};
if(out2 - out1 > fParam11) flag2=false;
elseif(out2.f_1 - out1.f_1 > fParam11.f_1) flag2=false;
elseif(out2.f_2 - out1.f_2 > fParam11.f_2) flag2=false;
}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false)){
if(flag2){
MISC::CLEAR_AREA_OF_VEHICLES(vParam7, 5f, false, false, false, false, false, false, 0);
ENTITY::SET_ENTITY_HEADING(playersLastVehicle, fParam10);
ENTITY::SET_ENTITY_COORDS(playersLastVehicle, vParam7, true, false, false, true);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
if(bParam17){
VEHICLE::SET_VEHICLE_ENGINE_ON(playersLastVehicle, false, true, false);
VEHICLE::SET_VEHICLE_DOORS_SHUT(playersLastVehicle, true);
}}else{
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(playersLastVehicle, true)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, true);
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), playersLastVehicle, false)) ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true), true, false, false, true);
VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
}}}
if(bParam14) MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(vParam0, vParam3, fParam6, false, false, false, false, false, 0, 0);
if(num==1)if(ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle)) ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&playersLastVehicle);
}else{
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, false);
pedInVehicleSeat=VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, -1, false);
if(ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat)) ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
vehicleModelNumberOfSeats=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(playersLastVehicle));
if(vehicleModelNumberOfSeats <=2){
pedInVehicleSeat=VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, 0, false);
if(ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat)) ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
}
if(vehicleModelNumberOfSeats <=4){
pedInVehicleSeat=VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, 1, false);
if(ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat)) ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
pedInVehicleSeat=VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, 2, false);
if(ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat)) ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
}
VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
}}
return;
}
BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x2E7AA{
if(fParam0==0f && fParam0.f_1==0f && fParam0.f_2==0f) return true;
return false;
}
BOOL func_288(Vehicle veParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7) // Position - 0x2E7D4{
float num;
var unk3;
var unk6;
var unk9;
var unk12;
var unk15;
var unk18;
float minimum;
float maximum;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
uParam1.f_2=uParam4.f_2;
num={
func_290(uParam1 - uParam4) 
};
unk3={
num 
};
unk18=4;
num=-unk3.f_1;
num.f_1=unk3;
num.f_2=0f;
unk6={
uParam1 - (num *{
fParam7 / 2f, fParam7 / 2f, fParam7 / 2f 
}
) 
};
unk9={
uParam1 + (num *{
fParam7 / 2f, fParam7 / 2f, fParam7 / 2f 
}
) 
};
unk12={
uParam4 - (num *{
fParam7 / 2f, fParam7 / 2f, fParam7 / 2f 
}
) 
};
unk15={
uParam4 + (num *{
fParam7 / 2f, fParam7 / 2f, fParam7 / 2f 
}
) 
};
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veParam0), &minimum, &maximum);
unk18[0 /*3*/]={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, minimum, minimum.f_1, 0f) 
};
unk18[1 /*3*/]={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, minimum, maximum.f_1, 0f) 
};
unk18[2 /*3*/]={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, maximum, minimum.f_1, 0f) 
};
unk18[3 /*3*/]={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, maximum, maximum.f_1, 0f) 
};
if(func_289(unk18[0 /*3*/], unk18[1 /*3*/], unk6, unk9) || func_289(unk18[0 /*3*/], unk18[1 /*3*/], unk9, unk15) || func_289(unk18[0 /*3*/], unk18[1 /*3*/], unk12, unk15) || func_289(unk18[0 /*3*/], unk18[1 /*3*/], unk6, unk12) || func_289(unk18[1 /*3*/], unk18[3 /*3*/], unk6, unk9) || func_289(unk18[1 /*3*/], unk18[3 /*3*/], unk9, unk15) || func_289(unk18[1 /*3*/], unk18[3 /*3*/], unk12, unk15) || func_289(unk18[1 /*3*/], unk18[3 /*3*/], unk6, unk12) || func_289(unk18[3 /*3*/], unk18[2 /*3*/], unk6, unk9) || func_289(unk18[3 /*3*/], unk18[2 /*3*/], unk9, unk15) || func_289(unk18[3 /*3*/], unk18[2 /*3*/], unk12, unk15) || func_289(unk18[3 /*3*/], unk18[2 /*3*/], unk6, unk12) || func_289(unk18[2 /*3*/], unk18[0 /*3*/], unk6, unk9) || func_289(unk18[2 /*3*/], unk18[0 /*3*/], unk9, unk15) || func_289(unk18[2 /*3*/], unk18[0 /*3*/], unk12, unk15) || func_289(unk18[2 /*3*/], unk18[0 /*3*/], unk6, unk12)) return true;
}
return false;
}
BOOL func_289(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, var uParam10, var uParam11) // Position - 0x2EACA{
float num;
float num2;
float num3;
float num4;
var unk;
var unk2;
float num5;
float num6;
float num7;
float num8;
float num9;
float num10;
float num11;
float num12;
num=fParam0;
num2=fParam0.f_1;
num3=fParam3;
num4=fParam3.f_1;
unk=uParam6;
unk2=uParam6.f_1;
num5=fParam9;
num6=fParam9.f_1;
num7=num3 - num;
num8=num4 - num2;
num9=num5 - unk;
num10=num6 - unk2;
num11=((-num8 * (num - unk)) + (num7 * (num2 - unk2))) / ((-num9 * num8) + (num7 * num10));
num12=((num9 * (num2 - unk2)) - (num10 * (num - unk))) / ((-num9 * num8) + (num7 * num10));
if(num11 >=0f && num11 <=1f && num12 >=0f && num12 <=1f) return true;
return false;
}


Vector3 func__290(float fParam0, var uParam1, var uParam2) // Position - 0x2EB7E{
float num;
float num2;
num=SYSTEM::VMAG(fParam0);
if(num !=0f){
num2=1f / num;
fParam0={
fParam0 *{
num2, num2, num2 
}};
}else{
fParam0=0f;
fParam0.f_1=0f;
fParam0.f_2=0f;
}
return fParam0;
}


void func_291(Vehicle veParam0) // Position - 0x2EBBD{
if(ENTITY::DOES_ENTITY_EXIST(veParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
if(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(veParam0) <=200f) VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, 500f);
if(VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(veParam0) <=700f) VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, 900f);
if(ENTITY::GET_ENTITY_HEALTH(veParam0) < 200) VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, 500f);
}}
return;
}


void func_292() // Position - 0x2EC22{
int num;
num=func_202();
if(num==-1) return;
Global_112735[num /*10*/]=1;
return;
}
BOOL func_293(int iParam0, int iParam1, int iParam2) // Position - 0x2EC42{
int num;
num=1;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
if(!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
if(!func_300(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iParam1, 1, 1056964608, false, true, false)){
num=0;
}elseif(iParam2==1){
num=0;
if(!func_299(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_ANY_VEHICLE)) TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
}
if(ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) num=0;
}}
func_298();
if(_CONVERSATION_IS_DIALOGUE_IN_PROGRESS()){
func_295();
num=0;
}
if(num==0) return false;
if(iParam0==1)if(!func_294()) return false;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
return true;
}
BOOL func_294() // Position - 0x2ED16{
BOOL hasCutsceneLoaded;
hasCutsceneLoaded=CUTSCENE::HAS_CUTSCENE_LOADED();
if(!Global_78557)if(!hasCutsceneLoaded) Global_78557=true;
return hasCutsceneLoaded;
}


void func_295() // Position - 0x2ED39{
Global_20591=0;
func_296();
return;
}


void func_296() // Position - 0x2ED49{
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1==9 || Global_20382==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=6;
Global_20383.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(true);
Global_21725=6;
return;
}
return;
}
BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x2EDA0{
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) return true;
return false;
}


void func_298() // Position - 0x2EDC2{
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SPRINT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_AIM, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_JUMP, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ENTER, true);
return;
}
BOOL func_299(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x2EE13{
if(func_216(pedParam0))if(TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1)==1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1)==0) return true;
return false;
}
BOOL func_300(Vehicle veParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2EE46{
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ACCELERATE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_BRAKE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UD, true);
if(bParam5) PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
if(!bParam6){
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
}
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HORN, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_NEXT_RADIO, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PREV_RADIO, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_FRONT_BRAKE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_PEDAL, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_LR, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_UD, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_UP, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_DOWN, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_UNDERCARRIAGE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_NEXT_WEAPON, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_PREV_WEAPON, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_LEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_RIGHT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_BOOST, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_ASCEND, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_DESCEND, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_LR, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_PITCH_UD, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_UP, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_DOWN, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_LEFT, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_RIGHT, true);
CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
func_301(veParam0);
if(MISC::GET_GAME_TIMER() - Global_29 > 500) VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, iParam1, iParam2, bParam4);
Global_29=MISC::GET_GAME_TIMER();
if(!ENTITY::IS_ENTITY_DEAD(veParam0, false))if(MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <=iParam3) return true;
return false;
}


void func_301(Vehicle veParam0) // Position - 0x2EFDE{
if(!ENTITY::IS_ENTITY_DEAD(veParam0, false))if(VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))if(VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0)) VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);
return;
}


void func_302() // Position - 0x2F00A{
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID())){
func_307();
PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
if(iLocal_154==0){
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(veLocal_149)){
if(func_303(PLAYER::PLAYER_PED_ID(), veLocal_149, true) < 4f || ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 2f && func_303(PLAYER::PLAYER_PED_ID(), veLocal_149, true) < 6f){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
iLocal_154=1;
}}}}
return;
}


float func_303(Ped pedParam0, Vehicle veParam1, BOOL bParam2) // Position - 0x2F080{
Vector3 entityCoords;
Vector3 entityCoords2;
if(!ENTITY::IS_ENTITY_DEAD(pedParam0, false)) entityCoords={
ENTITY::GET_ENTITY_COORDS(pedParam0, true) 
};
else entityCoords={
ENTITY::GET_ENTITY_COORDS(pedParam0, false) 
};
if(!ENTITY::IS_ENTITY_DEAD(veParam1, false)) entityCoords2={
ENTITY::GET_ENTITY_COORDS(veParam1, true) 
};
else entityCoords2={
ENTITY::GET_ENTITY_COORDS(veParam1, false) 
};
return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}


void func_304(char* sParam0, BOOL bParam1) // Position - 0x2F0DE{
func_305(bParam1);
CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
return;
}


void func_305(BOOL bParam0) // Position - 0x2F0F4{
Player playerIndex;
playerIndex=PLAYER::GET_PLAYER_INDEX();
if(!PLAYER::IS_PLAYER_DEAD(playerIndex)){
if(bParam0){
}
PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam0, SPC_REMOVE_EXPLOSIONS);
PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam0, SPC_REMOVE_PROJECTILES);
}
func_217(true, true, false, false, false, false, false);
return;
}
BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0) // Position - 0x2F133{
if(ENTITY::DOES_ENTITY_EXIST(veParam0))if(!ENTITY::IS_ENTITY_DEAD(veParam0, false)) return true;
return false;
}


void func_307() // Position - 0x2F154{
func_309(0);
func_298();
func_308();
return;
}


void func_308() // Position - 0x2F169{
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))if(func_300(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 10.5f, 1, 1056964608, false, true, false))if(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_ANY_VEHICLE) !=1) TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
return;
}


void func_309(int iParam0) // Position - 0x2F1C1{
if(func_314()) return;
if(!Global_20383.f_1==1){
if(func_313(0)) func_310(iParam0);
MISC::SET_BIT(&Global_8254, 2);
}
return;
}


void func_310(int iParam0) // Position - 0x2F1F4{
if(func_314()) return;
if(Global_20584)if(func_312()) func_311(true, true);
else func_311(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_224()) Global_20383.f_1=3;
return;
}


void func_311(BOOL bParam0, BOOL bParam1) // Position - 0x2F27E{
if(bParam0){
if(func_313(0)){
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
BOOL func_312() // Position - 0x2F2F2{
return IS_BIT_SET(Global_1962996, 5);
}
BOOL func_313(int iParam0) // Position - 0x2F300{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_314() // Position - 0x2F357{
return IS_BIT_SET(Global_1962996, 19);
}


void func_315(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x2F366{
float num;
int value;
int alpha;
int value2;
var text;
float x;
float y;
int r;
int g;
int b;
var a;
eCharacter character;
if(Global_78813 !=6){
if(Global_78815==-1){
if(func_326(1, uParam0)){
if(Global_78816==3) num=1.5f;
else num=2.5f;
if(fLocal_21 > num){
Global_78815=MISC::GET_GAME_TIMER();
fLocal_22={
HUD::GET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT) 
};
fLocal_21=0f;
}else{
fLocal_21=fLocal_21 + MISC::GET_FRAME_TIME();
}}else{
fLocal_21=0f;
}}else{
if(!func_326(0, uParam0)) Global_78815=MISC::GET_GAME_TIMER() - 9000;
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
value=MISC::GET_GAME_TIMER() - Global_78815;
if(value < 9000 && !CAM::IS_SCREEN_FADED_OUT()){
alpha=255;
if(value < 1000){
alpha=SYSTEM::CEIL((SYSTEM::TO_FLOAT(value) / 1000f) * 255f);
}else{
value2=9000 - value;
if(value2 < 1000) alpha=SYSTEM::CEIL((SYSTEM::TO_FLOAT(value2) / 1000f) * 255f);
}
switch (Global_78813){
case 3:
case 5:
if(iParam6==1){
x=0f;
y=-0.07f;
}
elseif(iParam7==1){
x=0f;
y=-0.077f;
}
elseif(iParam8==1){
x=0f;
y=-0.05f;
}
elseif(iParam9==1){
x=0f;
y=-0.035f;
}
else{
x=0f;
y=-0.014f;
}
break;
default:
x=0f;
y=-0.014f;
break;
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
HUD::SET_TEXT_FONT(1);
HUD::SET_TEXT_JUSTIFICATION(2);
character=_GET_CURRENT_PLAYER_CHARACTER();
if(Global_78816==1 && Global_78814==62) character=Global_113648.f_2365.f_539.f_4322;
switch (character){
case CHAR_MICHAEL:
HUD::GET_HUD_COLOUR(HUD_COLOUR_MICHAEL, &r, &g, &b, &a);
break;
case CHAR_FRANKLIN:
HUD::GET_HUD_COLOUR(HUD_COLOUR_FRANKLIN, &r, &g, &b, &a);
break;
case CHAR_TREVOR:
HUD::GET_HUD_COLOUR(HUD_COLOUR_TREVOR, &r, &g, &b, &a);
break;
default:
r=240;
g=200;
b=80;
}
HUD::SET_TEXT_COLOUR(r, g, b, alpha);
HUD::SET_TEXT_DROP_SHADOW();
text={
func_317(Global_78814, Global_78816, iParam10) 
};
y==-0.014f;
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(x, y, 0f, 0.01f);
HUD::SET_TEXT_SCALE(0.67f, 0.67f);
if(!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF()) fLocal_26=0.14f;
else fLocal_26=0.17f;
if(y==-0.014f){
if(func_316(&text) > fLocal_26){
if(HUD::IS_HUD_COMPONENT_ACTIVE(HUD_SUBTITLE_TEXT)){
HUD::SET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT, fLocal_22, fLocal_22.f_1 + fLocal_25);
Global_78818=true;
}}}
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&text);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(x, y, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(Global_78817==1){
func_174();
fLocal_21=0f;
}}else{
func_174();
fLocal_21=0f;
}}}
return;
}


float func_316(const char* sParam0) // Position - 0x2F64B{
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}


struct<2> func_317(int iParam0, int iParam1, int iParam2) // Position - 0x2F65E{
var unk;
int num;
TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
switch (iParam1){
case 1:
unk={
func_325(iParam0) 
};
break;
case 7:
unk={
func_158(iParam0) 
};
break;
case 3:
num=iParam0;
switch (num){
case 0:
unk={
func_324(iParam2) 
};
break;
case 8:
unk={
func_323(iParam2) 
};
break;
case 7:
unk={
func_322(iParam2) 
};
break;
case 10:
unk={
func_321(iParam2) 
};
break;
case 5:
unk={
func_320(iParam2) 
};
break;
case 4:
unk={
func_319(iParam2) 
};
break;
default:
TEXT_LABEL_ASSIGN_STRING(&unk, func_318(num), 8);
break;
}
break;
default:
break;
}
return unk;
}


char* func_318(int iParam0) // Position - 0x2F734{
switch (iParam0){
case 0:
return "MG_BJUM" /*Base Jumping*/;
case 1:
return "MG_DART" /*Darts*/;
case 2:
return "MG_GOLF" /*Golf*/;
case 3:
return "MG_HUNT" /*Hunting*/;
case 4:
return "MG_OFFR" /*Offroad Races*/;
case 5:
return "MG_PILO" /*Flight School*/;
case 6:
return "MG_RMPG" /*Rampages*/;
case 7:
return "MG_SERA" /*Sea Races*/;
case 8:
return "MG_SRAC" /*Street Races*/;
case 9:
return "MG_STRP" /*Stripclub*/;
case 10:
return "MG_STNT" /*Stunt Planes*/;
case 11:
return "MG_SHTR" /*Shooting Range*/;
case 12:
return "MG_TAXI" /*Taxi Jobs*/;
case 13:
return "MG_TENN" /*Tennis*/;
case 14:
return "MG_TOWI" /*Towing*/;
case 15:
return "MG_TRFA" /*Trafficking - Air*/;
case 16:
return "MG_TRFG" /*Trafficking - Ground*/;
case 17:
return "MG_TRIA" /*Triathlon*/;
case 18:
return "MG_YOGA" /*Yoga*/;
case 19:
return "MG_CRCE" /*Stock Car Races*/;
}
return "INVALID!";
}


struct<2> func_319(int iParam0) // Position - 0x2F887{
var unk;
var unk3;
TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
TEXT_LABEL_ASSIGN_INT(&unk3, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&unk3)){}else{
TEXT_LABEL_ASSIGN_STRING(&unk, "MGOR_", 8);
TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
}
return unk;
}


struct<2> func_320(int iParam0) // Position - 0x2F8BA{
var unk;
var unk3;
TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
TEXT_LABEL_ASSIGN_INT(&unk3, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&unk3)){}else{
TEXT_LABEL_ASSIGN_STRING(&unk, "MGFS_", 8);
TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
}
return unk;
}


struct<2> func_321(int iParam0) // Position - 0x2F8ED{
var unk;
var unk3;
TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
TEXT_LABEL_ASSIGN_INT(&unk3, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&unk3)){}else{
TEXT_LABEL_ASSIGN_STRING(&unk, "MGSP_", 8);
TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
}
return unk;
}


struct<2> func_322(int iParam0) // Position - 0x2F920{
var unk;
var unk3;
TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
TEXT_LABEL_ASSIGN_INT(&unk3, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&unk3)){}else{
TEXT_LABEL_ASSIGN_STRING(&unk, "MGSR_", 8);
TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
}
return unk;
}


struct<2> func_323(int iParam0) // Position - 0x2F953{
var unk;
var unk3;
TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
TEXT_LABEL_ASSIGN_INT(&unk3, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&unk3) || iParam0==3){}else{
TEXT_LABEL_ASSIGN_STRING(&unk, "MGCR_", 8);
TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
}
return unk;
}


struct<2> func_324(int iParam0) // Position - 0x2F990{
var unk;
var unk3;
TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
TEXT_LABEL_ASSIGN_INT(&unk3, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&unk3)){}else{
TEXT_LABEL_ASSIGN_STRING(&unk, "MGBJ_", 8);
TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
}
return unk;
}


struct<2> func_325(int iParam0) // Position - 0x2F9C3{
var unk;
TEXT_LABEL_ASSIGN_STRING(&unk, "M_", 8);
TEXT_LABEL_APPEND_STRING(&unk, &(Global_91469[iParam0 /*34*/].f_8), 8);
if(iParam0==90){
switch (Global_113648.f_9087.f_99.f_205[7]){
case 1:
TEXT_LABEL_APPEND_STRING(&unk, "A", 8);
break;
case 2:
TEXT_LABEL_APPEND_STRING(&unk, "B", 8);
break;
default:
TEXT_LABEL_APPEND_STRING(&unk, "A", 8);
break;
}}
return unk;
}
BOOL func_326(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x2FA2C{
if(!func_328(0) || Global_78828 || Global_78817==1 || !CAM::IS_SCREEN_FADED_IN()) return false;
switch (Global_78813){
case 0:
if(MISC::ARE_STRINGS_EQUAL(&uParam1, "NONE" /*None*/) || MISC::IS_STRING_NULL_OR_EMPTY(&uParam1)) Global_78813=3;
else Global_78813=1;
break;
case 1:
if(CUTSCENE::HAS_CUTSCENE_LOADED()) Global_78813=2;
break;
case 2:
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
Global_78813=4;
return true;
}elseif(!CUTSCENE::IS_CUTSCENE_ACTIVE()){
Global_78813=3;
}
break;
case 3:
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
}else{
Global_78813=5;
return true;
}
break;
case 4:
if(CUTSCENE::IS_CUTSCENE_PLAYING()) return true;
elseif(iParam0==1) Global_78813=5;
break;
case 5:
if(CUTSCENE::IS_CUTSCENE_PLAYING() || func_313(0) || func_327(true)){
}else{
return true;
}
break;
}
return false;
}
BOOL func_327(BOOL bParam0) // Position - 0x2FB44{
if(bParam0) return Global_23131.f_4 && Global_23131.f_104==4;
return Global_23131.f_4;
}
BOOL func_328(int iParam0) // Position - 0x2FB6D{
if(Global_43257==15) return false;
if(_CAN_ENTER_FREEROAM_STATE(iParam0)) return false;
return true;
}
BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x2FB8F{
return func_330(iParam0, Global_43257);
}
BOOL func_330(int iParam0, int iParam1) // Position - 0x2FBA0{
if(iParam1==15) return 1;
if(iParam0==15) return 0;
switch (iParam0){
case 16:
switch (iParam1){
case 9:
case 10:
case 7:
case 13:
case 14:
return 0;
}
return 1;
case 0:
switch (iParam1){
case 5:
case 17:
return 1;
}
break;
case 2:
case 3:
switch (iParam1){
case 5:
case 6:
case 8:
case 17:
return 1;
}
break;
case 4:
if(iParam1==17) return 1;
break;
case 5:
break;
case 6:
case 8:
if(iParam1==5) return 1;
break;
case 7:
if(iParam1==6) return 1;
break;
case 9:
if(iParam1==5) return 1;
break;
case 10:
switch (iParam1){
case 5:
case 6:
case 17:
return 1;
}
break;
case 11:
if(iParam1==5) return 1;
break;
case 17:
switch (iParam1){
case 17:
case 12:
case 5:
return 1;
}
break;
case 18:
case 12:
switch (iParam1){
case 5:
case 6:
case 8:
return 1;
}
break;
case 13:
switch (iParam1){
case 5:
return 1;
}
break;
case 14:
switch (iParam1){
case 5:
return 1;
}
break;
}
return 0;
}


void func_331(var uParam0, var uParam1) // Position - 0x2FD81{
*uParam0=*uParam1;
*uParam1=0;
return;
}


void func_332() // Position - 0x2FD93{
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) STREAMING::NEW_LOAD_SCENE_STOP();
func_292();
func_333(&uLocal_88, 0, false, false);
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_333(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2FDB7{
func_343(uParam0, iParam1);
func_338(uParam0, bParam2);
func_334(uParam0, bParam3);
return;
}


void func_334(var uParam0, BOOL bParam1) // Position - 0x2FDD7{
func_335(&(uParam0->f_41), bParam1);
return;
}


void func_335(var uParam0, BOOL bParam1) // Position - 0x2FDE9{
int i;
i=0;
for (i=0;
i <=*uParam0 - 1;
i=i + 1){
if(bParam1) func_337(&uParam0->[i]);
else func_336(&uParam0->[i], false);
}
return;
}


void func_336(Object* pobParam0, BOOL bParam1) // Position - 0x2FE27{
if(ENTITY::DOES_ENTITY_EXIST(*pobParam0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*pobParam0)) ENTITY::DETACH_ENTITY(*pobParam0, true, true);
if(!bParam1) ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(pobParam0);
else OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*pobParam0);
}
return;
}


void func_337(Object* pobParam0) // Position - 0x2FE62{
if(ENTITY::DOES_ENTITY_EXIST(*pobParam0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*pobParam0)) ENTITY::DETACH_ENTITY(*pobParam0, true, true);
OBJECT::DELETE_OBJECT(pobParam0);
}
return;
}


void func_338(var uParam0, BOOL bParam1) // Position - 0x2FE8D{
func_339(&(uParam0->f_35), bParam1);
return;
}


void func_339(var uParam0, BOOL bParam1) // Position - 0x2FE9F{
int i;
i=0;
for (i=0;
i <=*uParam0 - 1;
i=i + 1){
if(bParam1) func_341(&uParam0->[i]);
else func_340(&uParam0->[i]);
}
return;
}


void func_340(Vehicle* pveParam0) // Position - 0x2FEDC{
if(ENTITY::DOES_ENTITY_EXIST(*pveParam0)){
ENTITY::IS_ENTITY_DEAD(*pveParam0, false);
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true)) ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
}
return;
}


void func_341(Vehicle* pveParam0) // Position - 0x2FF14{
if(ENTITY::DOES_ENTITY_EXIST(*pveParam0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0)) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*pveParam0, true, false);
if(func_342(*pveParam0)){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true)){
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
return;
}}
VEHICLE::DELETE_VEHICLE(pveParam0);
}}else{
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
return;
}}
VEHICLE::DELETE_VEHICLE(pveParam0);
}}
return;
}
BOOL func_342(Vehicle veParam0) // Position - 0x2FFB0{
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(!FILES::GET_DLC_VEHICLE_FLAGS(veParam0)) return true;
return false;
}


void func_343(var uParam0, int iParam1) // Position - 0x2FFDA{
func_344(&(uParam0->f_28), iParam1);
return;
}


void func_344(var uParam0, int iParam1) // Position - 0x2FFEC{
int i;
i=0;
for (i=0;
i <=*uParam0 - 1;
i=i + 1){
if(iParam1==1) func_213(&uParam0->[i]);
else func_345(&uParam0->[i], false, 1, 0);
}
return;
}


void func_345(Ped* ppedParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x3002F{
if(ENTITY::DOES_ENTITY_EXIST(*ppedParam0)){
if(!PED::IS_PED_INJURED(*ppedParam0)){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
if(iParam3==0) TASK::CLEAR_PED_SECONDARY_TASK(*ppedParam0);
PED::SET_PED_KEEP_TASK(*ppedParam0, bParam1);
if(iParam2==1) PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, false);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
}
return;
}


void func_346(BOOL bParam0) // Position - 0x3007F{
int num;
func_364();
if(!func_363()){
num=func_202();
if(num==-1) return;
if(!Global_112735[num /*10*/].f_4) return;
if(Global_112735[num /*10*/].f_5) return;
if(Global_112735[num /*10*/].f_6) return;
if(Global_94856==Global_100718) Global_113648.f_18576[num /*6*/].f_4=Global_113648.f_18576[num /*6*/].f_4 + 1;
Global_94856=Global_100718;
if(bParam0){
func_162(num, true, false);
func_347(SCRIPT::GET_THIS_SCRIPT_NAME(), num);
}else{
if(Global_112735[num /*10*/].f_9==-1){
}else{
func_175(&(Global_112735[num /*10*/].f_9));
}
func_161(num, 1, true, false);
}
Global_112735[num /*10*/].f_6=1;
}
return;
}


void func_347(const char* sParam0, int iParam1) // Position - 0x3014F{
if(Global_100681 !=12)if(func_348(sParam0, 6, iParam1)) Global_100681.f_1=iParam1;
return;
}
BOOL func_348(const char* sParam0, int iParam1, int iParam2) // Position - 0x30177{
Vehicle vehiclePedIsIn;
var unk;
int num;
func_18();
func_362();
Global_100681=0;
TEXT_LABEL_ASSIGN_STRING(&(Global_100681.f_3), sParam0, 32);
Global_100681.f_11=iParam1;
MISC::PAUSE_DEATH_ARREST_RESTART(true);
MISC::SET_FADE_OUT_AFTER_ARREST(false);
MISC::SET_FADE_OUT_AFTER_DEATH(false);
func_310(1);
func_360(true);
func_357(0);
func_356(1);
MISC::CLEAR_BIT(&(Global_100681.f_20), 9);
MISC::CLEAR_BIT(&(Global_100681.f_20), 6);
MISC::CLEAR_BIT(&(Global_100681.f_20), 20);
MISC::CLEAR_BIT(&(Global_100681.f_20), 21);
MISC::CLEAR_BIT(&(Global_100681.f_20), 5);
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(ENTITY::IS_ENTITY_UPSIDEDOWN(vehiclePedIsIn)) MISC::SET_BIT(&(Global_100681.f_20), 5);
}}}
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
HUD::CLEAR_PRINTS();
func_355(false);
func_21(1);
Global_100681.f_2=Global_100718;
if(func_354()){
if(func_353()){
if(Global_100718 >=func_350())if(!IS_BIT_SET(Global_91469[iParam2 /*34*/].f_15, 16))if(Global_113648.f_9087.f_330[iParam2 /*6*/].f_1 >=2) Global_94857=1;
}elseif(Global_100681.f_11==6){
func_164(iParam2, &unk);
if(unk.f_31==1)if(Global_113648.f_18576[iParam2 /*6*/].f_4 >=2) Global_94857=1;
}else{
num=func_349(SCRIPT::GET_THIS_SCRIPT_NAME());
if(num > -1)if(Global_113648.f_24988.f_4[num] >=2) Global_94857=1;
}}
return true;
}

int func_349(char* sParam0) // Position - 0x30306{
if(MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0)) return 0;
elseif(MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0)) return 1;
elseif(MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0)) return 2;
elseif(MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0)) return 3;
return -1;
}

int func_350() // Position - 0x3035C{
int num;
int num2;
num=func_351(&(Global_100681.f_3), false);
num2=0;
if(num==53) num2=1;
return num2;
}

int func_351(char* sParam0, BOOL bParam1) // Position - 0x30380{
Hash hashKey;
int num;
hashKey=MISC::GET_HASH_KEY(sParam0);
num=func_352(hashKey, true);
num==-1 && !bParam1;
return num;
}

int func_352(Hash hParam0, BOOL bParam1) // Position - 0x303AA{
int i;
for (i=0;
i < 94;
i=i + 1){
if(Global_91469[i /*34*/].f_6==hParam0) return i;
}
!bParam1;
return -1;
}
BOOL func_353() // Position - 0x303E0{
if(Global_100681.f_11==0 || Global_100681.f_11==1 || Global_100681.f_11==2 || Global_100681.f_11==3 || Global_100681.f_11==4) return true;
return false;
}
BOOL func_354() // Position - 0x30430{
if(Global_100681.f_11==0 || Global_100681.f_11==1 || Global_100681.f_11==2 || Global_100681.f_11==6 || Global_100681.f_11==3) return true;
if(Global_100681.f_11==5)if(func_349(&(Global_100681.f_3)) > -1) return true;
return false;
}


void func_355(BOOL bParam0) // Position - 0x3049C{
HUD::DISPLAY_HUD(bParam0);
HUD::DISPLAY_RADAR(bParam0);
return;
}


void func_356(int iParam0) // Position - 0x304B0{
if(iParam0==1){
HUD::THEFEED_PAUSE();
MISC::SET_BIT(&(Global_100681.f_20), 3);
}elseif(IS_BIT_SET(Global_100681.f_20, 3)){
HUD::THEFEED_RESUME();
MISC::CLEAR_BIT(&(Global_100681.f_20), 3);
}
return;
}


void func_357(int iParam0) // Position - 0x304EA{
if(iParam0==1){
if(IS_BIT_SET(Global_100681.f_20, 4)){
func_359();
MISC::CLEAR_BIT(&(Global_100681.f_20), 4);
}}else{
func_358();
MISC::SET_BIT(&(Global_100681.f_20), 4);
}
return;
}


void func_358() // Position - 0x30524{
Global_23131.f_5=1;
return;
}


void func_359() // Position - 0x30532{
Global_23131.f_5=0;
return;
}


void func_360(BOOL bParam0) // Position - 0x30540{
if(bParam0){
func_361();
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
Global_20383.f_1=1;
if(func_313(0)) func_310(0);
}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0) Global_20383.f_1=3;
}
return;
}


void func_361() // Position - 0x305A3{
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}
return;
}


void func_362() // Position - 0x305CC{
Global_94857=0;
Global_94858=false;
return;
}
BOOL func_363() // Position - 0x305DE{
if(Global_100681==13 || Global_100681==10 || Global_100681==11 || Global_100681==12) return false;
return true;
}


void func_364() // Position - 0x3061C{
Global_100716=1;
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78791)){
switch (_GET_CURRENT_PLAYER_CHARACTER()){
case CHAR_MICHAEL:
TEXT_LABEL_ASSIGN_STRING(&Global_78791, "CMN_MARRE" /*~s~Michael was arrested.*/, 16);
break;
case CHAR_FRANKLIN:
TEXT_LABEL_ASSIGN_STRING(&Global_78791, "CMN_FARRE" /*~s~Franklin was arrested.*/, 16);
break;
case CHAR_TREVOR:
TEXT_LABEL_ASSIGN_STRING(&Global_78791, "CMN_TARRE" /*~s~Trevor was arrested.*/, 16);
break;
}
TEXT_LABEL_ASSIGN_STRING(&Global_78795, "", 16);
}
Global_100716=0;
}elseif(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78791)){
switch (_GET_CURRENT_PLAYER_CHARACTER()){
case CHAR_MICHAEL:
TEXT_LABEL_ASSIGN_STRING(&Global_78791, "CMN_MDIED" /*~s~Michael died.*/, 16);
break;
case CHAR_FRANKLIN:
TEXT_LABEL_ASSIGN_STRING(&Global_78791, "CMN_FDIED" /*~s~Franklin died.*/, 16);
break;
case CHAR_TREVOR:
TEXT_LABEL_ASSIGN_STRING(&Global_78791, "CMN_TDIED" /*~s~Trevor died.*/, 16);
break;
}
TEXT_LABEL_ASSIGN_STRING(&Global_78795, "", 16);
}
Global_100716=0;
MISC::SET_BIT(&(Global_100681.f_20), 25);
}
return;
}


void func_365(char* sParam0) // Position - 0x30709{
!MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
return;
}


void func_366(var uParam0) // Position - 0x3071B{
func_367(&(uParam0->f_28));
func_367(&(uParam0->f_35));
func_367(&(uParam0->f_41));
return;
}


void func_367(var uParam0) // Position - 0x3073B{
int i;
i=0;
for (i=0;
i <=*uParam0 - 1;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->[i])) ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->[i], false, true);
}
return;
}

int func_368(eCharacter echParam0) // Position - 0x30775{
if(!func_154(echParam0)) return func_153(echParam0);
else echParam0 !=_CHAR_NULL;
return 0;
}