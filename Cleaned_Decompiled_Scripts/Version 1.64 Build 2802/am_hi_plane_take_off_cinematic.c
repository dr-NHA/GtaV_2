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
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
int iLocal_44=0;
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
float fLocal_62=0f;
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
var uLocal_86=0;
var uLocal_87=-1;
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
var uLocal_100=1;
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=1;
var uLocal_104=0;
var uLocal_105=0;
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
var uLocal_116=0;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
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
iLocal_41=1;
iLocal_42=65;
iLocal_43=49;
iLocal_44=64;
fLocal_62=(0.05f + 0.275f) - 0.01f;
func_287();
while (true){
func_286();
if(func_278()) break;
func_55();
}
func_1();
return;
}


void func_1() // Position - 0xA5{
func_3(&uLocal_95);
func_2();
return;
}


void func_2() // Position - 0xB7{
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_3(var uParam0) // Position - 0xC3{
var unk;
if(CUTSCENE::IS_CUTSCENE_ACTIVE()) CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_22)) PED::DELETE_PED(&(uParam0->f_22));
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_23)) PED::DELETE_PED(&(uParam0->f_23));
func_54(uParam0, 0);
CUTSCENE::REMOVE_CUTSCENE();
STREAMING::NEW_LOAD_SCENE_STOP();
STREAMING::CLEAR_FOCUS();
if(HUD::THEFEED_IS_PAUSED()) HUD::THEFEED_RESUME();
func_53(0);
_STOPWATCH_DESTROY(&(uParam0->f_18));
func_4(true, false, false, true);
unk.f_5=1;
unk.f_8=1;
*uParam0={
unk 
};
return;
}


void func_4(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x148{
func_50();
if(bParam0){
func_48(true);
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
}
HUD::CLEAR_PRINTS();
func_40();
GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
func_36(false, true, true, false, false, bParam2, false);
func_35();
func_34(12, false, -1);
func_33(1);
CAM::SET_WIDESCREEN_BORDERS(false, -1);
HUD::DISPLAY_RADAR(true);
HUD::DISPLAY_HUD(true);
func_32();
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(bParam3)if(NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
func_31(0);
if(func_30()==0 && func_29()==false && bParam1 && !func_28(PLAYER::PLAYER_ID()) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && func_26()) _SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), true, 0, false);
Global_2672505.f_3541=0;
func_5();
return;
}


void func_5() // Position - 0x21A{
int i;
Player player;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && _STOPWATCH_IS_INITIALIZED(&Global_2802588)){
if(!_STOPWATCH_HAS_TIME_PASSED(&Global_2802588, 3500, true) || NETWORK::NETWORK_IS_PLAYER_FADING(PLAYER::PLAYER_ID())){
if(!func_12()){
if(CAM::IS_SCREEN_FADED_OUT()){
_STOPWATCH_RESET(&Global_2802588, true, false);
}elseif(!_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_PARACHUTE) !=1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_PARACHUTE) !=0){
NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(true);
NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PLAYER::PLAYER_ID(), true);
}
ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, false);
}}else{
_STOPWATCH_RESET(&Global_2802588, true, false);
}}else{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) ENTITY::RESET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID());
_STOPWATCH_DESTROY(&Global_2802588);
}}
if(Global_2802592 > 0){
for (i=0;
i < 32;
i=i + 1){
if(IS_BIT_SET(Global_2802592, i)){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(_NETWORK_IS_PLAYER_VALID(player, true, true)) func_6(player);
}}}
return;
}


void func_6(Player plParam0) // Position - 0x324{
if(IS_BIT_SET(Global_2802592, plParam0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!_STOPWATCH_HAS_TIME_PASSED(&Global_2802593[plParam0 /*2*/], 3500, true) || NETWORK::NETWORK_IS_PLAYER_FADING(plParam0)){
if(!func_12()){
if(CAM::IS_SCREEN_FADED_OUT()){
_STOPWATCH_RESET(&Global_2802593[plParam0 /*2*/], true, false);
}elseif(!_NETWORK_IS_PLAYER_IN_SCTV(plParam0, 0)){
NETWORK::SET_PLAYER_VISIBLE_LOCALLY(plParam0, true);
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(plParam0), false)) ENTITY::SET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(plParam0), 255, false);
}}else{
_STOPWATCH_RESET(&Global_2802593[plParam0 /*2*/], true, false);
}}else{
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(plParam0), false)) ENTITY::RESET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(plParam0));
_STOPWATCH_DESTROY(&Global_2802593[plParam0 /*2*/]);
MISC::CLEAR_BIT(&Global_2802592, plParam0);
}}
return;
}
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x3F3{
Player player;
player=player;
if(player !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)){
if(bIsPlaying)if(!PLAYER::IS_PLAYER_PLAYING(player)) return false;
if(bUnk)if(player==Global_2672505.f_3) return Global_2672505.f_2;
elseif(Global_2657589[player /*466*/] !=4) return false;
return true;
}}
return false;
}
BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0x453{
BOOL flag;
if(player==PLAYER::PLAYER_ID()) flag=func_9(-1, false)==8;
else flag=Global_1853910[player /*862*/].f_205==8;
if(bCheckTeam==1)if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)) flag=PLAYER::GET_PLAYER_TEAM(player)==8;
return flag;
}

int func_9(int iParam0, BOOL bParam1) // Position - 0x49E{
int num;
int num2;
num2=iParam0;
if(num2==-1) num2=func_10();
if(Global_1575040[num2]==1){
bParam1;
num=8;
}else{
num=Global_1574912[num2];
bParam1;
}
return num;
}

int func_10() // Position - 0x4DF{
return Global_1574918;
}


void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x4EB{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(!useAccurateTime) *pStopwatch=NETWORK::GET_NETWORK_TIME();
else *pStopwatch=NETWORK::GET_NETWORK_TIME_ACCURATE();
else *pStopwatch=MISC::GET_GAME_TIMER();
pStopwatch->f_1=1;
return;
}
BOOL func_12() // Position - 0x528{
if(CUTSCENE::IS_CUTSCENE_PLAYING() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) return true;
return false;
}
BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0x546{
if(millis==-1) return true;
_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >=millis) return true;
elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >=millis) return true;
return false;
}


void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x5A4{
if(pStopwatch->f_1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)if(!useAccurateTime) *pStopwatch=NETWORK::GET_NETWORK_TIME();
else *pStopwatch=NETWORK::GET_NETWORK_TIME_ACCURATE();
else *pStopwatch=MISC::GET_GAME_TIMER();
pStopwatch->f_1=1;
}
return;
}
BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x5E9{
return uParam0->f_1;
}


void _SET_PLAYER_CONTROL_EX(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, BOOL bParam3) // Position - 0x5F5{
eSetPlayerControlFlags flags;
BOOL flag;
BOOL flag2;
BOOL flag3;
BOOL flag4;
BOOL flag5;
BOOL flag6;
BOOL flag7;
BOOL flag8;
BOOL flag9;
BOOL flag10;
BOOL flag11;
BOOL flag12;
BOOL flag13;
BOOL flag14;
BOOL flag15;
BOOL toggle;
BOOL toggle2;
BOOL flag16;
BOOL flag17;
BOOL flag18;
BOOL flag19;
BOOL flag20;
BOOL flag21;
BOOL flag22;
BOOL flag23;
BOOL flag24;
Ped playerPed;
eSetPlayerControlFlags flags2;
if(bParam1)if(SCRIPT::GET_NO_LOADING_SCREEN()) SCRIPT::SET_NO_LOADING_SCREEN(false);
if(func_25())if(bParam1) return;
else bParam3=true;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
flags=espcfParam2;
PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags);
}else{
flag=true;
flag2=espcfParam2 & SPC_AMBIENT_SCRIPT !=0;
flag3=espcfParam2 & SPC_CLEAR_TASKS !=0;
flag4=espcfParam2 & SPC_REMOVE_FIRES !=0;
flag5=espcfParam2 & SPC_REMOVE_EXPLOSIONS !=0;
flag6=espcfParam2 & SPC_REMOVE_PROJECTILES !=0;
flag7=espcfParam2 & SPC_DEACTIVATE_GADGETS !=0;
flag8=espcfParam2 & SPC_REENABLE_CONTROL_ON_DEATH !=0;
flag9=espcfParam2 & SPC_LEAVE_CAMERA_CONTROL_ON !=0;
flag10=espcfParam2 & SPC_ALLOW_PLAYER_DAMAGE !=0;
flag11=espcfParam2 & SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER !=0;
flag12=espcfParam2 & SPC_PREVENT_EVERYBODY_BACKOFF !=0;
flag13=espcfParam2 & SPC_ALLOW_PAD_SHAKE !=0;
flag14=espcfParam2 & 8192 !=0;
flag15=espcfParam2 & 16384 !=0;
toggle=espcfParam2 & 32768 !=0;
toggle2=espcfParam2 & 65536 !=0;
flag16=espcfParam2 & 131072 !=0;
flag17=espcfParam2 & 262144 !=0;
flag18=espcfParam2 & 524288 !=0;
flag19=espcfParam2 & 1048576 !=0;
flag20=espcfParam2 & 2097152 !=0;
flag21=espcfParam2 & 4194304 !=0;
flag22=espcfParam2 & 8388608 !=0;
flag23=espcfParam2 & 16777216 !=0;
if(espcfParam2 & 33554432 !=0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) flag=false;
if(!func_26()){
flag24=false;
if(bParam1==true) flag24=true;
if(toggle==false && !flag19) flag24=true;
if(flag10==true) flag24=true;
if(flag24) return;
}
flag16;
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && PLAYER::IS_PLAYER_PLAYING(plParam0) || bParam3==true){
if(bParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(plParam0), false)) return;
playerPed=PLAYER::GET_PLAYER_PED(plParam0);
if(!flag18){
if(flag17 && bParam1==false && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) NETWORK::FADE_OUT_LOCAL_PLAYER(true);
elseif(flag14 || !_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0) && !func_24()) ENTITY::SET_ENTITY_VISIBLE(playerPed, !flag14, false);
if(!flag14){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !flag17) NETWORK::FADE_OUT_LOCAL_PLAYER(false);
Global_2657589[plParam0 /*466*/].f_254=0;
}}
if(bParam1){
if(flag){
func_21(false, 0, 0);
if(flag23) STREAMING::CLEAR_FOCUS();
}
if(!func_20(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))if(!flag20) ENTITY::SET_ENTITY_COLLISION(playerPed, true, false);
if(!ENTITY::IS_ENTITY_ATTACHED(playerPed)){
if(!flag19) ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
}elseif(!flag19){
ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
}
PED::SET_PED_CAN_BE_TARGETTED(playerPed, true);
PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(plParam0, false);
if(PED::HAS_PED_HEAD_BLEND_FINISHED(playerPed) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(playerPed)) PED::FINALIZE_HEAD_BLEND(playerPed);
PED::SET_PED_DIES_WHEN_INJURED(playerPed, true);
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())==false){
func_19();
func_18();
}
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()) !flag21;
STREAMING::IS_NEW_LOAD_SCENE_ACTIVE();
Global_2657589[plParam0 /*466*/].f_255=0;
if(!flag22) flag3=true;
if(Global_2635559.f_2681) Global_2635559.f_2681=0;
}else{
if(!func_20(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed)){
if(!flag20) ENTITY::SET_ENTITY_COLLISION(playerPed, !flag15, false);
if(!ENTITY::IS_ENTITY_ATTACHED(playerPed)){
if(!flag19) ENTITY::FREEZE_ENTITY_POSITION(playerPed, toggle);
if(!toggle) ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
}
if(func_17(*Global_4718592.f_166301)) ENTITY::FREEZE_ENTITY_POSITION(playerPed, true);
}
if(Global_1575035) flag10=false;
if(flag10) PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
else PLAYER::SET_PLAYER_INVINCIBLE(plParam0, true);
PED::SET_PED_CAN_BE_TARGETTED(playerPed, toggle2);
if(flag3)if(!PED::IS_PED_FATALLY_INJURED(playerPed) && !PED::IS_PED_IN_ANY_VEHICLE(playerPed, false)) TASK::CLEAR_PED_TASKS_IMMEDIATELY(playerPed);
}
flags2=0;
if(flag2) flags2=flags2 | SPC_AMBIENT_SCRIPT;
if(flag3) flags2=flags2 | SPC_CLEAR_TASKS;
if(flag4) flags2=flags2 | SPC_REMOVE_FIRES;
if(flag5) flags2=flags2 | SPC_REMOVE_EXPLOSIONS;
if(flag6) flags2=flags2 | SPC_REMOVE_PROJECTILES;
if(flag7) flags2=flags2 | SPC_DEACTIVATE_GADGETS;
if(flag8) flags2=flags2 | SPC_REENABLE_CONTROL_ON_DEATH;
if(flag9) flags2=flags2 | SPC_LEAVE_CAMERA_CONTROL_ON;
if(flag10) flags2=flags2 | SPC_ALLOW_PLAYER_DAMAGE;
if(flag11) flags2=flags2 | SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER;
if(flag12) flags2=flags2 | SPC_PREVENT_EVERYBODY_BACKOFF;
if(flag13) flags2=flags2 | SPC_ALLOW_PAD_SHAKE;
PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags2);
}}
return;
}
BOOL func_17(int iParam0) // Position - 0xA83{
return iParam0==17;
}


void func_18() // Position - 0xA90{
var unk;
Global_2672505.f_1023=0;
Global_2672505.f_1024=0;
Global_2672505.f_1025={
9999.9f, 9999.9f, 9999.9f 
};
Global_2672505.f_1030=-1;
Global_2672505.f_1031=0;
Global_2635559.f_2692={
unk 
};
return;
}


void func_19() // Position - 0xADD{
Global_2635559.f_702=0;
Global_2635559.f_2735=0;
Global_2635559.f_515=0;
Global_2635559.f_606=0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=0;
Global_2635559.f_2690=0;
return;
}
BOOL func_20(Ped pedParam0) // Position - 0xB1B{
int scriptTaskStatus;
if(PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true)){
return true;
}else{
scriptTaskStatus=TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_ENTER_VEHICLE);
if(scriptTaskStatus==0) return true;
}
return false;
}


void func_21(BOOL bParam0, Ped pedParam1, int iParam2) // Position - 0xB4C{
int num;
eViewModeContext i;
ENTITY::IS_ENTITY_DEAD(pedParam1, false);
if(bParam0==true)if(ENTITY::DOES_ENTITY_EXIST(pedParam1))if(PED::IS_PED_A_PLAYER(pedParam1))if(!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam1))) num=1;
if(num==0){
if(iParam2==1){
if(bParam0==true){
func_23();
}elseif(!IS_BIT_SET(Global_2621446.f_67, 1)){
if(IS_BIT_SET(Global_2621446.f_67, 2)){
for (i=ON_FOOT;
i < 8;
i=i + 1){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(i, Global_2621446.f_58[i]);
}}
MISC::SET_BIT(&(Global_2621446.f_67), 1);
}}
if(_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0)) NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, pedParam1, true);
else NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, pedParam1);
HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, pedParam1);
_MPPLY_STAT_SET_BOOL(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
}
return;
}


void _MPPLY_STAT_SET_BOOL(Hash hParam0, BOOL bParam1) // Position - 0xC1C{
Hash statName;
statName=hParam0;
if(statName !=0) STATS::STAT_SET_BOOL(statName, bParam1, true);
return;
}


void func_23() // Position - 0xC38{
eViewModeContext i;
if(!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
if(!IS_BIT_SET(Global_2621446.f_67, 2)){
for (i=ON_FOOT;
i < 8;
i=i + 1){
Global_2621446.f_58[i]=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(i);
}
MISC::SET_BIT(&(Global_2621446.f_67), 2);
MISC::SET_BIT(&(Global_2621446.f_67), 0);
}}
return;
}
BOOL func_24() // Position - 0xC90{
return IS_BIT_SET(Global_2621446, 3);
}
BOOL func_25() // Position - 0xC9E{
if(IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216==-1) return true;
return false;
}
BOOL func_26() // Position - 0xCCF{
if(func_27()==0) return true;
return false;
}

int func_27() // Position - 0xCE4{
return Global_1574632.f_18;
}
BOOL func_28(Player plParam0) // Position - 0xCF2{
if(_NETWORK_IS_PLAYER_IN_SCTV(plParam0, 0)) return true;
if(func_24())if(plParam0==PLAYER::PLAYER_ID()) return true;
if(IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2)) return true;
return false;
}
BOOL func_29() // Position - 0xD31{
return IS_BIT_SET(Global_2683862, 7);
}

int func_30() // Position - 0xD3F{
return Global_1575060;
}


void func_31(int iParam0) // Position - 0xD4B{
if(iParam0==1) MISC::SET_BIT(&Global_8253, 13);
else MISC::CLEAR_BIT(&Global_8253, 13);
return;
}


void func_32() // Position - 0xD6E{
Global_23131.f_5=0;
return;
}


void func_33(int iParam0) // Position - 0xD7C{
Global_2793044.f_4628=iParam0;
return;
}


void func_34(int iParam0, BOOL bParam1, int iParam2) // Position - 0xD8D{
switch (iParam0){
case 5:
if(iParam2 > -1) Global_1653913.f_137[iParam2]=bParam1;
break;
default:
if(bParam1) MISC::SET_BIT(&(Global_1653913.f_1046), iParam0);
else MISC::CLEAR_BIT(&(Global_1653913.f_1046), iParam0);
break;
}
return;
}


void func_35() // Position - 0xDDC{
func_33(1);
func_34(4, false, -1);
func_34(6, false, -1);
func_34(7, false, -1);
func_34(3, false, -1);
func_34(1, false, -1);
func_34(2, false, -1);
func_34(11, false, -1);
func_34(13, false, -1);
func_34(14, false, -1);
func_34(16, false, -1);
return;
}


void func_36(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xE33{
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
func_31(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20383.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
if(!func_39()) Global_20383.f_1=3;
Global_21725=5;
}
func_38(true, bParam3, bParam2, false);
Global_63368=1;
Global_75696=1;
Global_78556=1;
}else{
func_31(0);
HUD::THEFEED_RESUME();
Global_63368=0;
if(bParam1) GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
func_38(false, bParam3, bParam2, false);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_28(PLAYER::PLAYER_ID()) && !_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0) && !func_37() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()) ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_28(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5) ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
Global_78556=0;
}
return;
}
BOOL func_37() // Position - 0xF80{
return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

int func_38(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xF9A{
int num;
num=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=bParam0 && bParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
num=1;
}}
return num;
}
BOOL func_39() // Position - 0xFCD{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}


void func_40() // Position - 0xFF4{
func_41(false);
return;
}


void func_41(BOOL bParam0) // Position - 0x1001{
if(bParam0){
func_47();
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
Global_20383.f_1=1;
if(func_46(0)) func_42(0);
}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0) Global_20383.f_1=3;
}
return;
}


void func_42(int iParam0) // Position - 0x1064{
if(func_45()) return;
if(Global_20584)if(func_44()) func_43(true, true);
else func_43(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_39()) Global_20383.f_1=3;
return;
}


void func_43(BOOL bParam0, BOOL bParam1) // Position - 0x10EE{
if(bParam0){
if(func_46(0)){
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
BOOL func_44() // Position - 0x1162{
return IS_BIT_SET(Global_1962996, 5);
}
BOOL func_45() // Position - 0x1170{
return IS_BIT_SET(Global_1962996, 19);
}
BOOL func_46(int iParam0) // Position - 0x117F{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}


void func_47() // Position - 0x11D6{
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}
return;
}


void func_48(BOOL bParam0) // Position - 0x11FF{
int i;
i=0;
for (i=0;
i < Global_112300;
i=i + 1){
HUD::CLEAR_FLOATING_HELP(i, bParam0);
func_49(i);
}
return;
}


void func_49(int iParam0) // Position - 0x122D{
Global_112300[iParam0 /*28*/].f_21=0;
TEXT_LABEL_ASSIGN_STRING(&Global_112300[iParam0 /*28*/], "", 16);
TEXT_LABEL_ASSIGN_STRING(&(Global_112300[iParam0 /*28*/].f_4), "", 64);
Global_112300[iParam0 /*28*/].f_23=0;
Global_112300[iParam0 /*28*/].f_24={
0f, 0f, 0f 
};
Global_112300[iParam0 /*28*/].f_27=0;
Global_112300[iParam0 /*28*/].f_20=0;
Global_112300[iParam0 /*28*/].f_22=0;
return;
}


void func_50() // Position - 0x1295{
if(!Global_1574747) return;
func_51();
return;
}


void func_51() // Position - 0x12AC{
Global_1574747=false;
TEXT_LABEL_ASSIGN_STRING(&(Global_1574747.f_1), "", 32);
Global_1574747.f_9=0;
return;
}


void _STOPWATCH_DESTROY(var uParam0) // Position - 0x12CA{
uParam0->f_1=0;
return;
}


void func_53(int iParam0) // Position - 0x12D7{
Global_1057410=iParam0;
return;
}


void func_54(var uParam0, BOOL bParam1) // Position - 0x12E5{
uParam0->f_6=bParam1;
if(bParam1)if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("MUTES_RADIO_SCENE")) AUDIO::START_AUDIO_SCENE("MUTES_RADIO_SCENE");
elseif(AUDIO::IS_AUDIO_SCENE_ACTIVE("MUTES_RADIO_SCENE")) AUDIO::STOP_AUDIO_SCENE("MUTES_RADIO_SCENE");
return;
}


void func_55() // Position - 0x131B{
if(func_56(&uLocal_95)) func_1();
return;
}
BOOL func_56(var uParam0) // Position - 0x1330{
func_273();
switch (func_272(uParam0)){
case 0:
func_156(uParam0);
break;
case 1:
func_71(uParam0);
break;
case 2:
func_70(uParam0);
break;
case 3:
func_59(uParam0);
break;
case 4:
return func_57(uParam0);
}
return false;
}
BOOL func_57(var uParam0) // Position - 0x1393{
func_58();
if(CAM::IS_SCREEN_FADED_OUT()){
if(uParam0->f_3){
func_4(true, false, false, true);
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
}
CUTSCENE::STOP_CUTSCENE(false);
return 1;
}
if(!CAM::IS_SCREEN_FADING_OUT()) CAM::DO_SCREEN_FADE_OUT(800);
return 0;
}


void func_58() // Position - 0x13D8{
STREAMING::SET_FOCUS_POS_AND_VEL(CAM::GET_FINAL_RENDERED_CAM_COORD(), 0f, 0f, 0f);
return;
}


void func_59(var uParam0) // Position - 0x13EB{
BOOL flag;
func_58();
func_66(uParam0);
flag=uParam0->f_7;
if(flag)if(func_65()) func_64(uParam0, 4);
if(!CUTSCENE::IS_CUTSCENE_PLAYING() || CUTSCENE::GET_CUTSCENE_TIME() > CUTSCENE::GET_CUTSCENE_END_TIME() - 800){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))if(!func_61(uParam0->f_24, 0, false, false, false, false, true, false, true)) func_60(uParam0->f_24);
func_64(uParam0, 4);
}
return;
}


void func_60(Vehicle veParam0) // Position - 0x1462{
Ped pedInVehicleSeat;
int i;
int vehicleMaxNumberOfPassengers;
if(ENTITY::DOES_ENTITY_EXIST(veParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
pedInVehicleSeat=VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
if(ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))if(!PED::IS_PED_INJURED(pedInVehicleSeat)) TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedInVehicleSeat);
else PED::DELETE_PED(&pedInVehicleSeat);
vehicleMaxNumberOfPassengers=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veParam0);
for (i=0;
i < vehicleMaxNumberOfPassengers;
i=i + 1){
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, i, false)){
pedInVehicleSeat=VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, i, false);
if(ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))if(!PED::IS_PED_INJURED(pedInVehicleSeat)) TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedInVehicleSeat);
else PED::DELETE_PED(&pedInVehicleSeat);
}}}}
return;
}
BOOL func_61(Vehicle veParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x14FE{
int i;
int num;
Ped ped;
Player playerIndexFromPed;
num=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veParam0) + 1;
if(bParam4 || !ENTITY::IS_ENTITY_DEAD(veParam0, false)){
for (i=0;
i < num;
i=i + 1){
ped=func_63(veParam0, i - 1, bParam6, bParam7);
if(ENTITY::DOES_ENTITY_EXIST(ped)){
if(bParam3 && ped==PLAYER::PLAYER_PED_ID()){
}elseif(bParam2){
if(PED::IS_PED_A_PLAYER(ped)){
playerIndexFromPed=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped);
if(!PED::IS_PED_INJURED(ped) && playerIndexFromPed !=_INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(playerIndexFromPed, true, true) || bParam8)if(PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped))==0)if(!bParam5) return false;
else return false;
}}elseif(iParam1==0){
return false;
}elseif(!PED::IS_PED_INJURED(ped)){
return false;
}}}}
return true;
}
Player _INVALID_PLAYER_INDEX() // Position - 0x15E2{
return -1;
}
Ped func_63(Vehicle veParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x15EB{
Ped pedInVehicleSeat;
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, iParam1, bParam3)) pedInVehicleSeat=VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, iParam1, bParam3);
if(bParam2){
if(!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !ENTITY::IS_ENTITY_DEAD(veParam0, false)){
pedInVehicleSeat=VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, iParam1);
if(!ENTITY::IS_ENTITY_DEAD(pedInVehicleSeat, false))if(TASK::GET_SCRIPT_TASK_STATUS(pedInVehicleSeat, SCRIPT_TASK_LEAVE_VEHICLE)==1 || TASK::GET_SCRIPT_TASK_STATUS(pedInVehicleSeat, SCRIPT_TASK_LEAVE_ANY_VEHICLE)==1)if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veParam0, false), ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, false)) < 10f) return pedInVehicleSeat;
pedInVehicleSeat=-1;
}}
return pedInVehicleSeat;
}


void func_64(var uParam0, int iParam1) // Position - 0x1686{
*uParam0=iParam1;
return;
}
BOOL func_65() // Position - 0x1693{
if(HUD::IS_PAUSE_MENU_ACTIVE()) return false;
if(PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE)) return true;
return false;
}


void func_66(var uParam0) // Position - 0x16C5{
char* cutsceneEntName;
if(uParam0->f_20==0) return;
if(!CUTSCENE::IS_CUTSCENE_PLAYING()) return;
cutsceneEntName=uParam0->f_20==joaat("nimbus") ? "Plane_1" :
"Plane";
if(CUTSCENE::DOES_CUTSCENE_HANDLE_EXIST(cutsceneEntName) !=2) return;
uParam0->f_24=ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(cutsceneEntName, uParam0->f_20));
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24)) return;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_24, false)) return;
func_67(uParam0);
if(STATS::PLAYSTATS_BUSINESS_BATTLE_ENDED(uParam0->f_24, 0) < 0.0001f){
VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_24, true, true, false);
VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_24, 2);
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_22) && !PED::IS_PED_INJURED(uParam0->f_22) && !PED::IS_PED_IN_VEHICLE(uParam0->f_22, uParam0->f_24, false)){
ENTITY::SET_ENTITY_COLLISION(uParam0->f_22, true, false);
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_22, false);
TASK::TASK_ENTER_VEHICLE(uParam0->f_22, uParam0->f_24, -1, -1, 3f, 16, 0);
}}else{
VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_24, false, true, false);
VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_24, 4);
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_22) && !PED::IS_PED_INJURED(uParam0->f_22) && PED::IS_PED_IN_VEHICLE(uParam0->f_22, uParam0->f_24, false)) TASK::TASK_LEAVE_VEHICLE(uParam0->f_22, uParam0->f_24, 16);
}
switch (uParam0->f_20){
case joaat("nimbus"):
VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_24, 111, 28);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_24, 1, 6);
break;
case joaat("velum2"):
VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_24, 111, 27);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_24, 111, 0);
VEHICLE::SET_VEHICLE_LIVERY(uParam0->f_24, 2);
break;
}
return;
}
BOOL func_67(var uParam0) // Position - 0x1854{
if(uParam0->f_20==0) return true;
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_22)) return true;
STREAMING::REQUEST_MODEL(func_68());
if(!STREAMING::HAS_MODEL_LOADED(func_68())) return false;
uParam0->f_22=PED::CREATE_PED(PED_TYPE_CIVMALE, func_68(), uParam0->f_9, 0f, false, false);
ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_22, true);
ENTITY::SET_ENTITY_VISIBLE(uParam0->f_22, false, false);
ENTITY::SET_ENTITY_COLLISION(uParam0->f_22, false, false);
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_22, true);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_68());
return true;
}
Hash func_68() // Position - 0x18D4{
return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}


var func__69(BOOL bParam0, var uParam1, var uParam2) // Position - 0x18E4{
if(bParam0) return uParam1;
return uParam2;
}


void func_70(var uParam0) // Position - 0x18FB{
func_58();
CAM::DO_SCREEN_FADE_IN(800);
func_64(uParam0, 3);
return;
}


void func_71(var uParam0) // Position - 0x1915{
func_155(uParam0);
if(uParam0->f_5)if(CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY()) CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
if(!CUTSCENE::HAS_THIS_CUTSCENE_LOADED(uParam0->f_1)){
_STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_18), Global_262145.f_30917, false);
return;
}
if(uParam0->f_5){
if(!_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_23)) PED::RESURRECT_PED(uParam0->f_23);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_23, "MP_1", 0, 0, 64);
}
func_75(uParam0);
func_72(true, true, false);
CUTSCENE::START_CUTSCENE(0);
_STOPWATCH_DESTROY(&(uParam0->f_18));
MISC::CLEAR_AREA_OF_PROJECTILES(uParam0->f_9, 100f, 0);
func_58();
func_64(uParam0, 2);
return;
}


void func_72(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x19BB{
func_74();
func_48(true);
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
HUD::CLEAR_PRINTS();
func_36(true, true, true, false, false, false, bParam2);
func_73();
func_34(12, true, -1);
func_33(0);
CAM::SET_WIDESCREEN_BORDERS(true, -1);
HUD::DISPLAY_RADAR(false);
HUD::DISPLAY_HUD(false);
func_48(true);
func_31(1);
Global_2672505.f_3541=1;
if(bParam0)if(!NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, bParam1);
return;
}


void func_73() // Position - 0x1A28{
func_33(0);
func_34(4, 1, -1);
func_34(6, true, -1);
func_34(7, true, -1);
func_34(3, true, -1);
func_34(1, true, -1);
func_34(2, true, -1);
func_34(11, true, -1);
func_34(13, true, -1);
func_34(14, true, -1);
func_34(16, true, -1);
return;
}


void func_74() // Position - 0x1A7F{
Global_1574747=true;
TEXT_LABEL_ASSIGN_STRING(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574747.f_9=MISC::GET_HASH_KEY(&(Global_1574747.f_1));
return;
}


void func_75(var uParam0) // Position - 0x1AA8{
var unk;
if(uParam0->f_20 !=0){
if(_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_24)){
unk.f_9=49;
unk.f_59=2;
unk.f_78=-1;
unk.f_79=-1;
unk.f_96=-1;
unk.f_97=1;
unk.f_99=132;
unk.f_100=-1;
switch (uParam0->f_20){
case joaat("nimbus"):
VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_24, 111, 28);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_24, 1, 6);
break;
case joaat("velum2"):
unk.f_66=joaat("velum2");
TEXT_LABEL_ASSIGN_STRING(&(unk.f_1), "24SGX816", 16);
unk.f_5=111;
unk.f_6=27;
unk.f_7=111;
unk.f_8=0;
unk.f_97=1;
unk.f_99=132;
unk.f_98=0;
unk.f_67=2;
unk.f_62=255;
unk.f_63=255;
unk.f_64=255;
unk.f_74=255;
unk.f_76=255;
func_76(uParam0->f_24, &unk, false, true, false);
break;
}
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_24, uParam0->f_21, 0, 0, 64);
}}
return;
}


void func_76(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1BA3{
Hash entityModel;
float num;
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
entityModel=ENTITY::GET_ENTITY_MODEL(veParam0);
if(PLAYER::PLAYER_ID() !=_INVALID_PLAYER_INDEX()) uParam1->f_100=PLAYER::PLAYER_ID();
if(uParam1->f_70==0) uParam1->f_70=1;
func_130(veParam0, uParam1, bParam2, bParam3);
if(uParam1->f_102 !=0){
if(uParam1->f_102==2){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, true);
VEHICLE::SET_DRIFT_TYRES(veParam0, false);
}elseif(uParam1->f_102==1){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, false);
VEHICLE::SET_DRIFT_TYRES(veParam0, false);
}elseif(uParam1->f_102==3){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, true);
VEHICLE::SET_DRIFT_TYRES(veParam0, true);
}}
if(func_129(ENTITY::GET_ENTITY_MODEL(veParam0)))if(uParam1->f_9[44]==2) VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, false, true);
else VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, true, true);
if(!uParam1->f_78==-1 && uParam1->f_9[14]==-1) AUDIO::OVERRIDE_VEH_HORN(veParam0, true, uParam1->f_78);
if(!uParam1->f_79==-1) AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(veParam0, uParam1->f_79);
if(func_128(uParam1->f_66, &num) && uParam1->f_80 !=num) uParam1->f_80=num;
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(veParam0, uParam1->f_80);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(veParam0, uParam1->f_97);
if(uParam1->f_99 >=0) VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(veParam0, uParam1->f_99);
if(func_127(veParam0)) func_121(veParam0, func_124(uParam1->f_74, uParam1->f_75, uParam1->f_76));
if(VEHICLE::GET_VEHICLE_LIVERY2_COUNT(veParam0) > 1 && uParam1->f_98 >=0) VEHICLE::SET_VEHICLE_LIVERY2(veParam0, uParam1->f_98);
if(IS_BIT_SET(uParam1->f_95, 0)) func_92(veParam0, &(uParam1->f_81));
if(!func_83(4) && !bParam4 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) func_80(veParam0);
if(func_79(entityModel)){
switch (uParam1->f_9[5]){
case 0:
VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
break;
case 1:
VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
if(VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3"))) VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 0, false);
else VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
break;
case 2:
VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
if(VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3"))) VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 1, false);
else VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 3, false);
break;
case 3:
VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
if(VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3"))) VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
else VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 4, false);
break;
default:
if(uParam1->f_9[5] !=-1){
VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
if(VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3"))) VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
else VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 4, false);
}
break;
}}
if(func_78(ENTITY::GET_ENTITY_MODEL(veParam0))){
switch (uParam1->f_9[5]){
case 1:
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(veParam0, false);
VEHICLE::SET_VEHICLE_STRONG(veParam0, true);
if(uParam1->f_9[16]==5) VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, Global_262145.f_21747 + 0.05f);
else VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, Global_262145.f_21747);
VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(veParam0, true);
break;
default:
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(veParam0, false);
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, 1f);
VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(veParam0, true);
break;
}}
switch (uParam1->f_94){
case 0:
break;
case 1:
if(IS_BIT_SET(uParam1->f_95, 1) && IS_BIT_SET(uParam1->f_95, 2)){
if(IS_BIT_SET(uParam1->f_95, 3)){
}}elseif(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", INT)){
DECORATOR::DECOR_SET_INT(veParam0, "Player_Vehicle", -1);
}
break;
case 2:
if(IS_BIT_SET(uParam1->f_95, 1) && IS_BIT_SET(uParam1->f_95, 2))if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", INT)) DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
elseif(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", INT))if(IS_GAMER_HANDLE_VALID(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81))) DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
else DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", -1);
break;
case 3:
break;
case 4:
break;
}}}
return;
}
BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x207A{
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}
BOOL func_78(Hash hParam0) // Position - 0x208A{
return func_129(hParam0);
}
BOOL func_79(Hash hParam0) // Position - 0x2098{
switch (hParam0){
case joaat("pounder2"):
case joaat("mule4"):
case joaat("speedo4"):
case joaat("imperator"):
case joaat("deathbike"):
case joaat("cerberus"):
case joaat("bruiser"):
case joaat("dominator4"):
case joaat("zr380"):
case joaat("issi4"):
case joaat("imperator2"):
case joaat("deathbike2"):
case joaat("cerberus2"):
case joaat("bruiser2"):
case joaat("dominator5"):
case joaat("zr3802"):
case joaat("issi5"):
case joaat("imperator3"):
case joaat("deathbike3"):
case joaat("cerberus3"):
case joaat("bruiser3"):
case joaat("dominator6"):
case joaat("zr3803"):
case joaat("issi6"):
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
case joaat("brutus"):
case joaat("brutus2"):
case joaat("brutus3"):
return true;
}
return false;
}


void func_80(Vehicle veParam0) // Position - 0x2199{
Hash entityModel;
if(Global_262145.f_20156){
if(ENTITY::DOES_ENTITY_EXIST(veParam0)){
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(veParam0)){
entityModel=ENTITY::GET_ENTITY_MODEL(veParam0);
entityModel.f_1=MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0));
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", INT)){
if(!DECORATOR::DECOR_EXIST_ON(veParam0, "RandomID")){
entityModel.f_2=MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
DECORATOR::DECOR_SET_INT(veParam0, "RandomID", entityModel.f_2);
}else{
entityModel.f_2=DECORATOR::DECOR_GET_INT(veParam0, "RandomID");
}}
func_81(entityModel);
}}}
return;
}


void func_81(var uParam0, var uParam1, var uParam2) // Position - 0x2224{
struct<5> eventData;
eventData=-2060526162;
eventData.f_1=PLAYER::PLAYER_ID();
eventData.f_2=uParam0;
eventData.f_2.f_1=uParam0.f_1;
eventData.f_2.f_2=uParam0.f_2;
SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 5, _GET_LOBBY_SCRIPT_EVENT_BITS(true, true));
return;
}
int _GET_LOBBY_SCRIPT_EVENT_BITS(BOOL includeLocalPlayer, BOOL includeSpectators) // Position - 0x2263{
int address;
int i;
Player player;
for (i=0;
i < 32;
i=i + 1){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(_NETWORK_IS_PLAYER_VALID(player, false, false))if(player !=PLAYER::PLAYER_ID() || includeLocalPlayer)if(includeSpectators) MISC::SET_BIT(&address, i);
elseif(!_NETWORK_IS_PLAYER_IN_SCTV(player, 0)) MISC::SET_BIT(&address, i);
}
return address;
}
BOOL func_83(int iParam0) // Position - 0x22C8{
int i;
if(func_91()){
for (i=0;
i < 60;
i=i + 1){
if(func_90(i)==iParam0)if(func_84(i)) return true;
}}
return false;
}
BOOL func_84(int iParam0) // Position - 0x2303{
return func_85(iParam0, 6, true);
}
BOOL func_85(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2313{
if(iParam0==-1) return false;
if(bParam2) return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(func_89()==0) return IS_BIT_SET(_MPCHAR_STAT_GET_INT(func_88(iParam0), -1, 0), iParam1);
else return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
return false;
}
int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x2374{
Hash statHash;
int outValue;
if(empsParam0 !=14192){
iParam2==0;
statHash=Global_2805027[empsParam0 /*3*/][func_87(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
}
return 0;
}

int func_87(int iParam0) // Position - 0x23B1{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_10();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}
eMPStat func_88(int iParam0) // Position - 0x23E5{
switch (iParam0){
case 0:
return MP_STAT_SHOPFM_HAIRDO_01_BH;
case 1:
return MP_STAT_SHOPFM_HAIRDO_02_SC;
case 2:
return MP_STAT_SHOPFM_HAIRDO_03_V;
case 3:
return MP_STAT_SHOPFM_HAIRDO_04_SS;
case 4:
return MP_STAT_SHOPFM_HAIRDO_05_MP;
case 5:
return MP_STAT_SHOPFM_HAIRDO_06_HW;
case 6:
return MP_STAT_SHOPFM_HAIRDO_07_PB;
case 7:
return MP_STAT_SHOPFM_CLOTHES_L_01_SC;
case 8:
return MP_STAT_SHOPFM_CLOTHES_L_02_GS;
case 9:
return MP_STAT_SHOPFM_CLOTHES_L_03_DT;
case 10:
return MP_STAT_SHOPFM_CLOTHES_L_04_CS;
case 11:
return MP_STAT_SHOPFM_CLOTHES_L_05_GSD;
case 12:
return MP_STAT_SHOPFM_CLOTHES_L_06_VC;
case 13:
return MP_STAT_SHOPFM_CLOTHES_L_07_PB;
case 14:
return MP_STAT_SHOPFM_CLOTHES_M_01_SM;
case 15:
return MP_STAT_SHOPFM_CLOTHES_M_03_H;
case 16:
return MP_STAT_SHOPFM_CLOTHES_M_04_HW;
case 17:
return MP_STAT_SHOPFM_CLOTHES_M_05_GOH;
case 18:
return MP_STAT_SHOPFM_CLOTHES_H_01_BH;
case 19:
return MP_STAT_SHOPFM_CLOTHES_H_02_B;
case 20:
return MP_STAT_SHOPFM_CLOTHES_H_03_MW;
case 21:
return MP_STAT_SHOPFM_CLOTHES_A_01_VB;
case 22:
return MP_STAT_SHOPFM_TATTOO_01_HW;
case 23:
return MP_STAT_SHOPFM_TATTOO_02_SS;
case 24:
return MP_STAT_SHOPFM_TATTOO_03_PB;
case 25:
return MP_STAT_SHOPFM_TATTOO_04_VC;
case 26:
return MP_STAT_SHOPFM_TATTOO_05_ELS;
case 27:
return MP_STAT_SHOPFM_TATTOO_06_GOH;
case 28:
return MP_STAT_SHOPFM_GUN_01_DT;
case 29:
return MP_STAT_SHOPFM_GUN_02_SS;
case 30:
return MP_STAT_SHOPFM_GUN_03_HW;
case 31:
return MP_STAT_SHOPFM_GUN_04_ELS;
case 32:
return MP_STAT_SHOPFM_GUN_05_PB;
case 33:
return MP_STAT_SHOPFM_GUN_06_LS;
case 34:
return MP_STAT_SHOPFM_GUN_07_MW;
case 35:
return MP_STAT_SHOPFM_GUN_08_CS;
case 36:
return MP_STAT_SHOPFM_GUN_09_GOH;
case 37:
return MP_STAT_SHOPFM_GUN_10_VWH;
case 38:
return MP_STAT_SHOPFM_GUN_11_ID1;
case 39:
return MP_STAT_SHOPFM_CARMOD_01_AP;
case 40:
return MP_STAT_SHOPFM_CARMOD_05_ID2;
case 41:
return MP_STAT_SHOPFM_CARMOD_06_BT1;
case 42:
return MP_STAT_SHOPFM_CARMOD_07_CS1;
case 43:
return MP_STAT_SHOPFM_CARMOD_08_CS6;
case 44:
return MP_STAT_RAYPISTOL_FM_AMMO_CURRENT;
case 45:
return MP_STAT_SHOPFM_PERS_GAR;
case 46:
return MP_STAT_SHOPFM_PERS_GUN;
case 47:
return MP_STAT_SHOPFM_PERS_GUN_OSPREY;
case 48:
return MP_STAT_SHOPFM_PERS_GUN_HTRUCK;
case 49:
return MP_STAT_SHOPFM_PERS_GUN_ARENA;
case 52:
return MP_STAT_SHOPFM_PERS_GUN_ARCADE;
case 50:
return MP_STAT_SHOPFM_HAIRDO_CASINO_APT;
case 51:
return MP_STAT_SHOPFM_CLOTHES_CASINO;
case 53:
return MP_STAT_SHOPFM_PERS_GUN_SUB;
case 54:
return MP_STAT_SHOPFM_TATTOO_07_CCT;
case 55:
return MP_STAT_SHOPFM_CLOTHES_CAR_MEET;
case 56:
return MP_STAT_SHOPFM_PERS_GUN_FIXER;
case 57:
return MP_STAT_SHOPFM_CLOTHES_STUDIO;
case 58:
return MP_STAT_GBTELTIMESPLAYEDGOONPREV;
case 59:
return MP_STAT_TAMPA3_FMINI_HELDTIME;
default:
break;
}
return 14192;
}

int func_89() // Position - 0x277E{
return Global_32163;
}

int func_90(int iParam0) // Position - 0x2789{
switch (iParam0){
case -1:
return 6;
case 0:
return 0;
case 1:
return 0;
case 2:
return 0;
case 3:
return 0;
case 4:
return 0;
case 5:
return 0;
case 6:
return 0;
case 50:
return 0;
case 7:
return 1;
case 8:
return 1;
case 9:
return 1;
case 10:
return 1;
case 11:
return 1;
case 12:
return 1;
case 13:
return 1;
case 14:
return 1;
case 15:
return 1;
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
return 2;
case 23:
return 2;
case 24:
return 2;
case 25:
return 2;
case 26:
return 2;
case 27:
return 2;
case 28:
return 3;
case 29:
return 3;
case 30:
return 3;
case 31:
return 3;
case 32:
return 3;
case 33:
return 3;
case 34:
return 3;
case 35:
return 3;
case 36:
return 3;
case 37:
return 3;
case 38:
return 3;
case 39:
return 4;
case 40:
return 4;
case 41:
return 4;
case 42:
return 4;
case 43:
return 4;
case 44:
return 4;
case 45:
return 5;
case 46:
return 3;
case 47:
return 3;
case 48:
return 3;
case 49:
return 3;
case 52:
return 3;
case 51:
return 1;
case 53:
return 3;
case 54:
return 2;
case 55:
return 1;
case 56:
return 3;
case 57:
return 1;
case 58:
return 3;
case 59:
return 3;
}
return 6;
}
BOOL func_91() // Position - 0x2AB2{
return Global_100733.f_388 > 0;
}

int func_92(Vehicle veParam0, Any* panParam1) // Position - 0x2AC3{
int vehicleCrewEmblemRequestState;
Player playerFromGamerHandle;
if(!func_102(veParam0, panParam1)) return 1;
vehicleCrewEmblemRequestState=0;
if(!ENTITY::IS_ENTITY_DEAD(veParam0, false)) vehicleCrewEmblemRequestState=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(veParam0, 0);
if(vehicleCrewEmblemRequestState==0){
if(!func_100(veParam0)){
playerFromGamerHandle=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
if(func_95(&veParam0, playerFromGamerHandle)){
}else{
return 1;
}}else{
return 1;
}}elseif(vehicleCrewEmblemRequestState >=3){
return 1;
}elseif(func_93(veParam0)){}
return 0;
}
BOOL func_93(Vehicle veParam0) // Position - 0x2B40{
int vehicleCrewEmblemRequestState;
int networkTime;
int num;
int num2;
vehicleCrewEmblemRequestState=0;
if(!ENTITY::IS_ENTITY_DEAD(veParam0, false)) vehicleCrewEmblemRequestState=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(veParam0, 0);
if(vehicleCrewEmblemRequestState==1 || vehicleCrewEmblemRequestState==2){
if(vehicleCrewEmblemRequestState==1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) networkTime=NETWORK::GET_NETWORK_TIME();
else networkTime=MISC::GET_GAME_TIMER();
num=MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(networkTime, Global_1577913));
num2=20000;
if(Global_1836597) num2=2000;
if(num > num2){
GRAPHICS::ABORT_VEHICLE_CREW_EMBLEM_REQUEST(veParam0);
func_94(veParam0);
return false;
}}
return true;
}
return false;
}


void func_94(Vehicle veParam0) // Position - 0x2BCD{
int int;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset")) int=DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
if(!IS_BIT_SET(int, 16)){
MISC::SET_BIT(&int, 16);
DECORATOR::DECOR_SET_INT(veParam0, "MPBitset", int);
}
return;
}
BOOL func_95(var uParam0, Player plParam1) // Position - 0x2C29{
func_99();
if(Global_1574632.f_18 !=0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*uParam0)){
Global_1949998.f_11=VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*uParam0);
if(Global_1949998.f_11 < 0f) Global_1949998.f_11=0f;
}
func_97(*uParam0, &Global_1949998, &(Global_1949998.f_1), &(Global_1949998.f_4), &(Global_1949998.f_7), &(Global_1949998.f_10));
Global_1949998.f_1.f_2=Global_1949998.f_1.f_2 - Global_1949998.f_11;
if(Global_1949998.f_4.f_2 < 0f) Global_1949998.f_12=1;
Global_1949998.f_13=200;
if(ENTITY::GET_ENTITY_MODEL(*uParam0)==joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*uParam0)==joaat("comet4")) Global_1949998.f_13=255;
if(Global_1949998.f_12){
if(func_96(uParam0, plParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) Global_1577913=NETWORK::GET_NETWORK_TIME();
else Global_1577913=MISC::GET_GAME_TIMER();
return true;
}}else{
Global_1949998.f_14={
Global_1949998.f_1 
};
Global_1949998.f_14=Global_1949998.f_14 * -1f;
Global_1949998.f_17={
Global_1949998.f_4 
};
Global_1949998.f_17=Global_1949998.f_17 * -1f;
Global_1949998.f_20={
Global_1949998.f_7 
};
Global_1949998.f_20.f_1=Global_1949998.f_20.f_1 * -1f;
Global_1949998.f_20.f_2=Global_1949998.f_20.f_2 * -1f;
if(!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*uParam0, 0)) Global_1949998.f_23=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 0);
else Global_1949998.f_23=3;
Global_1949998.f_24=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 1);
if(!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*uParam0, 1)) Global_1949998.f_24=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 1);
else Global_1949998.f_24=3;
if(Global_1949998.f_23==0 && func_96(uParam0, plParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13) || Global_1949998.f_23 !=0 && Global_1949998.f_24==0 && func_96(uParam0, plParam1, Global_1949998, Global_1949998.f_14, Global_1949998.f_17, Global_1949998.f_20, Global_1949998.f_10, 1, Global_1949998.f_13) || Global_1949998.f_24 !=0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) Global_1577913=NETWORK::GET_NETWORK_TIME();
else Global_1577913=MISC::GET_GAME_TIMER();
return true;
}}
return false;
}
BOOL func_96(var uParam0, Player plParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, Vector3 vParam6, var uParam7, var uParam8, Vector3 vParam9, var uParam10, var uParam11, float fParam12, int iParam13, int iParam14) // Position - 0x2ED4{
return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(plParam1), iParam2, vParam3, vParam6, vParam9, fParam12, iParam13, iParam14);
}

int func_97(Vehicle veParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5) // Position - 0x2EFD{
if(!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)) return 0;
*iParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
if(!func_98(Global_1950024, 0f, 0f, 0f, false) && !func_98(Global_1950027, 0f, 0f, 0f, false) && !func_98(Global_1950030, 0f, 0f, 0f, false) && !Global_1950033==0f){
*uParam2={
Global_1950024 
};
*uParam3={
Global_1950027 
};
*uParam4={
Global_1950030 
};
*fParam5=Global_1950033;
return 1;
}
switch (ENTITY::GET_ENTITY_MODEL(veParam0)){
case joaat("dominator"):
*iParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("feltzer2"):
*iParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("adder"):
*uParam2={
0f, 1.54f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("akuma"):
*uParam2={
0f, 0.06f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.18f;
break;
case joaat("asea"):
*uParam2={
0f, 1.5f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("asterope"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("bagger"):
*uParam2={
-1f, 0.16f, 0.283f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.09f;
break;
case joaat("baller"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("baller2"):
*uParam2={
0f, 1.55f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("banshee"):
*uParam2={
0f, 0.94f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.4f;
break;
case joaat("bati"):
*uParam2={
0f, 0.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.15f;
break;
case joaat("bati2"):
*uParam2={
0f, 0.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.15f;
break;
case joaat("bfinjection"):
*uParam2={
-1f, 0.08f, 0.19f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("bison"):
*uParam2={
0f, 1.99f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("bjxl"):
*uParam2={
0f, 1.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.4f;
break;
case joaat("blista"):
*uParam2={
0f, 1.49f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.29f;
break;
case joaat("bobcatxl"):
*uParam2={
0f, 1.68f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.65f;
break;
case joaat("bodhi2"):
*uParam2={
0f, 1.95f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("buccaneer"):
*uParam2={
0f, 2.01f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.37f;
break;
case joaat("buffalo"):
*uParam2={
0f, 1.6f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("buffalo2"):
*uParam2={
0f, 2.24f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.2f;
break;
case joaat("bullet"):
*uParam2={
-1.57f, 0.07f, 0.16f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("carbonrs"):
*uParam2={
0f, 0.09f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.18f;
break;
case joaat("carbonizzare"):
*uParam2={
0f, 1.45f, 1f 
};
*uParam3={
0f, -0.11f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("cavalcade"):
*uParam2={
0f, 1.51f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.55f;
break;
case joaat("cavalcade2"):
*uParam2={
0f, 1.59f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("cheetah"):
*uParam2={
-1.61f, 0.26f, 0.17f 
};
*uParam3={
0.9f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("cogcabrio"):
*uParam2={
0f, 1.42f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("comet2"):
*uParam2={
0f, 1.35f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("coquette"):
*uParam2={
0f, 0.96f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.22f;
break;
case joaat("daemon"):
*uParam2={
0f, 0.06f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.15f;
break;
case joaat("dilettante"):
*uParam2={
0f, 1.59f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("dloader"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("double"):
*uParam2={
0f, 0.08f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.2f;
break;
case joaat("dubsta"):
*uParam2={
-1.71f, 0.31f, 0.27f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("dubsta2"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.75f;
break;
case joaat("elegy2"):
*uParam2={
0f, 1.14f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.35f;
break;
case joaat("emperor"):
*uParam2={
0f, 1.31f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("emperor2"):
*uParam2={
0f, 1.31f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("entityxf"):
*uParam2={
-1.52f, 0.41f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("exemplar"):
*uParam2={
0f, 1.32f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("f620"):
*uParam2={
0f, 1.28f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.45f;
break;
case joaat("faggio2"):
*uParam2={
-1f, -0.48f, -0.11f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.15f;
break;
case joaat("felon"):
*uParam2={
0f, 1.24f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.35f;
break;
case joaat("felon2"):
*uParam2={
0f, 1.24f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.35f;
break;
case joaat("fq2"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("fugitive"):
*uParam2={
0f, 1.62f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("fusilade"):
*uParam2={
0f, 0.98f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.2f;
break;
case joaat("futo"):
*uParam2={
0f, 1.28f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.45f;
break;
case joaat("gauntlet"):
*uParam2={
0f, 1.735f, 1.05f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.33f;
break;
case joaat("granger"):
*uParam2={
0f, 2.07f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("gresley"):
*uParam2={
0f, 1.75f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("habanero"):
*uParam2={
0f, 1.69f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("hexer"):
*uParam2={
0f, -0.46f, 1f 
};
*uParam3={
0f, 1f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.14f;
break;
case joaat("hotknife"):
*uParam2={
-1.43f, -0.14f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("infernus"):
*uParam2={
-1f, 0.33f, 0.08f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.06f 
};
*fParam5=0.25f;
break;
case joaat("ingot"):
*uParam2={
0f, 1.58f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("intruder"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("issi2"):
*uParam2={
0f, 1.21f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.3f;
break;
case joaat("jackal"):
*uParam2={
0f, 1.36f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.4f;
break;
case joaat("jb700"):
*uParam2={
0f, 1.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.37f;
break;
case joaat("khamelion"):
*uParam2={
0f, 1.46f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.475f;
break;
case joaat("landstalker"):
*uParam2={
0f, 1.83f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("manana"):
*uParam2={
0f, 0.86f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.37f;
break;
case joaat("mesa"):
*uParam2={
0f, 1.47f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("mesa3"):
*uParam2={
0f, 1.47f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("minivan"):
*uParam2={
0f, 1.95f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("monroe"):
*uParam2={
0f, 1.23f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.43f;
break;
case joaat("nemesis"):
*uParam2={
0f, 0.14f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.1f;
break;
case joaat("ninef"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("ninef2"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("oracle"):
*uParam2={
0f, 1.6f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("oracle2"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("patriot"):
*uParam2={
0f, 1.75f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("pcj"):
*uParam2={
0f, 0.02f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.15f;
break;
case joaat("penumbra"):
*uParam2={
0f, 1.46f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("peyote"):
*uParam2={
-1f, -0.36f, 0.2125f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("phoenix"):
*uParam2={
0f, 1.833f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.44f;
break;
case joaat("picador"):
*uParam2={
0f, 1.43f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.425f;
break;
case joaat("prairie"):
*uParam2={
0f, 1.41f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.31f;
break;
case joaat("premier"):
*uParam2={
0f, 1.6f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("primo"):
*uParam2={
0f, 1.62f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("radi"):
*uParam2={
0f, 1.74f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("rancherxl"):
*uParam2={
0f, 1.54f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("rapidgt"):
*uParam2={
0f, 1.263f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("rapidgt2"):
*uParam2={
0f, 1.263f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("ratloader"):
*uParam2={
-1.78f, 0.52f, 0.52f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("rebel"):
*uParam2={
-1.22f, 0.6f, 0.44f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("rebel2"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("regina"):
*uParam2={
0f, 1.473f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("rocoto"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("romero"):
*uParam2={
0f, 1.83f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("ruffian"):
*uParam2={
0f, -0.02f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.19f;
break;
case joaat("ruiner"):
*uParam2={
0f, 1.34f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("sabregt"):
*uParam2={
-1f, 0f, 0.14f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.015f 
};
*fParam5=0.35f;
break;
case joaat("sadler"):
*uParam2={
0f, 2.26f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("sandking"):
*uParam2={
0f, 2.496f, 1.55f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("sandking2"):
*uParam2={
0f, 2.286f, 1.55f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("schafter2"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.28f;
break;
case joaat("schwarzer"):
*uParam2={
0f, 1.43f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.28f;
break;
case joaat("seminole"):
*uParam2={
0f, 1.45f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("sentinel"):
*uParam2={
0f, 1.18f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("sentinel2"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("serrano"):
*uParam2={
0f, 1.68f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.49f;
break;
case joaat("stanier"):
*uParam2={
0f, 1.55f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("stinger"):
*uParam2={
0f, 1.3f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("stingergt"):
*uParam2={
-1f, -0.17f, 0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("stratum"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("sultan"):
*uParam2={
0f, 1.77f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.33f;
break;
case joaat("superd"):
*uParam2={
0f, 1.62f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("surano"):
*uParam2={
0f, 1.38f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("surfer"):
*uParam2={
0f, 2.48f, 0.26f 
};
*uParam3={
0f, -1f, -0.212f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.32f;
break;
case joaat("surfer2"):
*uParam2={
0f, 2.48f, 0.26f 
};
*uParam3={
0f, -1f, -0.212f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.32f;
break;
case joaat("surge"):
*uParam2={
0f, 1.69f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("tailgater"):
*uParam2={
0f, 1.783f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.4f;
break;
case joaat("tornado"):
*uParam2={
-1.23f, 0.11f, -0.21f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("tornado2"):
*uParam2={
0f, 1.44f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("tornado3"):
*uParam2={
0f, 1.44f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("vacca"):
*uParam2={
0f, 1.76f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.35f;
break;
case joaat("vader"):
*uParam2={
0f, 0.08f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.15f;
break;
case joaat("vigero"):
*uParam2={
-1f, 0.11f, -0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("voltic"):
*uParam2={
0f, 1.763f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.29f;
break;
case joaat("voodoo2"):
*uParam2={
0f, 1.48f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("washington"):
*uParam2={
0f, 1.61f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("youga"):
*uParam2={
0f, 2.352f, 1.003f 
};
*uParam3={
0f, -1f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.175f;
break;
case joaat("zion"):
*uParam2={
0f, 1.48f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.45f;
break;
case joaat("zion2"):
*uParam2={
0f, 1.48f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.45f;
break;
case joaat("ztype"):
*uParam2={
-0.96f, -0.69f, 0.35f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
default:
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, 0f, -1f 
};
*fParam5=0.5f;
break;
}
switch (ENTITY::GET_ENTITY_MODEL(veParam0)){
case joaat("kalahari"):
*uParam2={
-1f, 0.18f, 0.1f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("paradise"):
*uParam2={
0f, 2.23f, 1f 
};
*uParam3={
0f, -0.22f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("alpha"):
*uParam2={
-1f, 0.18f, -0.05f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("huntley"):
*uParam2={
0f, 1.52f, 0.99f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.4f;
break;
case joaat("zentorno"):
*uParam2={
-1.24f, 0.3f, -0.07f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("jester"):
*uParam2={
-1f, 0.17f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.05f 
};
*fParam5=0.33f;
break;
case joaat("massacro"):
*uParam2={
0f, 1.37f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.33f;
break;
case joaat("turismor"):
*uParam2={
-1f, 0.3f, 0.27f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("thrust"):
*uParam2={
-1f, 0.405f, 0.4625f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1625f;
break;
case joaat("btype"):
*uParam2={
0f, 1.143f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.7125f;
break;
case joaat("rhapsody"):
*uParam2={
-1f, -0.47f, -0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.2625f;
break;
case joaat("glendale"):
*uParam2={
0f, 1.683f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.775f;
break;
case joaat("warrener"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.775f;
break;
case joaat("blade"):
*uParam2={
-1f, 0.445f, 0.2075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.325f;
break;
case joaat("panto"):
*uParam2={
-1f, 0f, 0.335f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("dubsta3"):
*uParam2={
-1f, 0.34f, 0.2975f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("pigalle"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("coquette2"):
*uParam2={
-1f, -0.1775f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("innovation"):
*uParam2={
0f, 0.15f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.18f;
break;
case joaat("hakuchou"):
*uParam2={
0f, 0.27f, 0.845f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.16f;
break;
case joaat("furoregt"):
*uParam2={
-1f, 0f, 0.2075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("ratloader2"):
*uParam2={
-1.78f, 0.52f, 0.52f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("slamvan"):
*uParam2={
-1f, 0.275f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("dukes2"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.375f;
break;
case joaat("dukes"):
*uParam2={
-1f, 0f, 0.0375f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3875f;
break;
case joaat("stalion"):
*uParam2={
-1f, 0f, 0.0925f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4375f;
break;
case joaat("blista2"):
*uParam2={
-1f, 0.5325f, 0.245f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.2875f;
break;
case joaat("casco"):
*uParam2={
0f, 0.94f, 1.03f 
};
*uParam3={
0f, -0.03f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.3f;
break;
case joaat("enduro"):
*uParam2={
0f, -0.17f, 1f 
};
*uParam3={
0f, 0.34f, -0.786f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.15f;
break;
case joaat("gburrito2"):
*uParam2={
0f, 2.32f, 0.94f 
};
*uParam3={
0f, -0.182f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.4f;
break;
case joaat("guardian"):
*uParam2={
-1.94f, 1.07f, 0.38f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("kuruma"):
case joaat("kuruma2"):
*uParam2={
-1f, 0.2475f, -0.175f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.435f;
break;
case joaat("lectro"):
*uParam2={
0f, 0.3f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.09f;
break;
case joaat("feltzer3"):
*iParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
*uParam2={
0f, 1.597f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.45f;
break;
case joaat("osiris"):
*uParam2={
-1f, 0.27f, -0.03f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("virgo"):
*uParam2={
-1.05f, 0f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("windsor"):
*uParam2={
-1.2f, -0.39f, 0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.55f;
break;
case joaat("brawler"):
*uParam2={
-1f, -0.21f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("chino"):
*uParam2={
-1.05f, 0f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("coquette3"):
*uParam2={
-1f, -0.1775f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("t20"):
*uParam2={
-1f, 0.4f, -0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.2f;
break;
case joaat("vindicator"):
*uParam2={
-1f, 0.21f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("faction"):
*uParam2={
-1f, 0f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("faction2"):
*uParam2={
-1f, 0f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("buccaneer2"):
*uParam2={
0f, 2.01f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.37f;
break;
case joaat("chino2"):
*uParam2={
-1.05f, 0f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("moonbeam"):
*uParam2={
0f, 1.713f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("moonbeam2"):
*uParam2={
0f, 1.713f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("primo2"):
*uParam2={
-1f, 0.42f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("voodoo"):
*uParam2={
-1.12f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("faction3"):
*uParam2={
-1f, 0f, 0.5f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("sabregt2"):
*uParam2={
-1f, 0f, 0.14f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.015f 
};
*fParam5=0.35f;
break;
case joaat("tornado5"):
*uParam2={
-1f, 0.15f, -0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("virgo2"):
*uParam2={
-1f, 0f, 0.1225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.375f;
break;
case joaat("virgo3"):
*uParam2={
-1f, 0f, 0.1225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.375f;
break;
case joaat("minivan2"):
*uParam2={
0f, 1.95f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("slamvan3"):
*uParam2={
-1f, 0.275f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("btype2"):
*uParam2={
-1f, -0.1f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("lurcher"):
*uParam2={
-1f, 0f, 0.3f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("baller3"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("baller4"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("baller5"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("baller6"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("cog55"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("cog552"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("cognoscenti"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("cognoscenti2"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("mamba"):
*uParam2={
-1f, -0.18f, 0.21f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("nightshade"):
*uParam2={
-1f, -0.2f, 0.17f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("schafter3"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.28f;
break;
case joaat("schafter4"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.28f;
break;
case joaat("schafter5"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.28f;
break;
case joaat("schafter6"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.28f;
break;
case joaat("verlierer2"):
*uParam2={
-1f, -0.21f, 0.03f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("tampa"):
*uParam2={
-1f, 0f, 0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("banshee2"):
*uParam2={
-1f, -0.4f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("sultanrs"):
*uParam2={
0f, 1.77f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.33f;
break;
case joaat("btype3"):
*uParam2={
-1f, -0.1f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("bestiagts"):
*uParam2={
-1f, -0.06f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("seven70"):
*uParam2={
-1f, -0.21f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("fmj"):
*uParam2={
-1f, -0.06f, 0.21f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("pfister811"):
*uParam2={
-1f, 0.06f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("prototipo"):
*uParam2={
-1f, 0.3f, 0.27f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("reaper"):
*uParam2={
-1f, 0.48f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("rumpo3"):
*uParam2={
0f, 2.103f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("windsor2"):
*uParam2={
-1.2f, 0.03f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.55f;
break;
case joaat("xls"):
*uParam2={
-1f, 0.36f, -0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("xls2"):
*uParam2={
-1f, 0.36f, -0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("brioso"):
*uParam2={
-1f, -0.06f, 0.565f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("contender"):
*uParam2={
0f, 2.33f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("le7b"):
*uParam2={
-1f, -0.12f, 0.235f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("omnis"):
*uParam2={
-1f, 0.03f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("tropos"):
*uParam2={
-1f, 0f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("avarus"):
*uParam2={
-1f, 0.27f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case joaat("daemon2"):
*uParam2={
-1f, 0.27f, 0.29f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case joaat("defiler"):
*uParam2={
-1f, 0f, 0.34f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.125f;
break;
case joaat("esskey"):
*uParam2={
-1f, 0.335f, 0.31f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.09f;
break;
case joaat("hakuchou2"):
*uParam2={
0f, 0.27f, 0.845f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.15f;
break;
case joaat("nightblade"):
*uParam2={
0f, -0.133f, 0.61f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.125f;
break;
case joaat("ratbike"):
*uParam2={
-1f, 0.31f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case joaat("shotaro"):
*uParam2={
-1f, 0.06f, 0.325f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case joaat("zombiea"):
*uParam2={
-1f, 0.3f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case joaat("zombieb"):
*uParam2={
-1f, 0.2f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case joaat("vortex"):
*uParam2={
-1f, 0.18f, 0.37f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.095f;
break;
case joaat("tornado6"):
*uParam2={
-1f, -0.03f, -0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("youga2"):
*uParam2={
0f, 2.352f, 0.253f 
};
*uParam3={
0f, -1f, -0.256f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.175f;
break;
case joaat("wolfsbane"):
*uParam2={
-1f, 0.33f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case joaat("faggio3"):
*uParam2={
-1f, -0.54f, -0.11f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.15f;
break;
case joaat("faggio"):
*uParam2={
-0.9875f, -0.0175f, -0.01f 
};
*uParam3={
0.8975f, -0.26f, -0.0725f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1625f;
break;
case joaat("comet3"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("diablous"):
*uParam2={
-1f, 0.006f, 0.382f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case joaat("diablous2"):
*uParam2={
-1f, 0.225f, 0.541f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case joaat("elegy"):
*uParam2={
0f, 1.14f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.35f;
break;
case joaat("fcr"):
*uParam2={
-1f, 0.234f, 0.376f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case joaat("fcr2"):
*uParam2={
-1f, 0.234f, 0.376f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case joaat("italigtb"):
*uParam2={
-1f, -0.024f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("italigtb2"):
*uParam2={
-1f, -0.024f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("nero"):
*uParam2={
-1f, 0.237f, 0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("nero2"):
*uParam2={
-1f, 0.237f, 0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("penetrator"):
*uParam2={
-1f, 0.153f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("ruiner2"):
*uParam2={
0.363f, 1.34f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.4f;
break;
case joaat("ruiner3"):
*uParam2={
0.363f, 1.34f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.4f;
break;
case joaat("specter"):
*uParam2={
-1f, -0.273f, -0.02f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.2f;
break;
case joaat("specter2"):
*uParam2={
-1f, -0.273f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.2f;
break;
case joaat("technical2"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("tempesta"):
*uParam2={
-1f, 0f, 0.253f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("voltic2"):
*uParam2={
0f, 1.763f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.29f;
break;
case joaat("infernus2"):
*uParam2={
-1f, 0.33f, 0.06f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.06f 
};
*fParam5=0.2f;
break;
case joaat("ruston"):
*uParam2={
-1f, -0.273f, 0.084f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.15f;
break;
case joaat("turismo2"):
*uParam2={
-1f, 0.159f, -0.193f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("ardent"):
*uParam2={
-1f, 0.309f, 0.276f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.2f;
break;
case joaat("cheetah2"):
*uParam2={
-1f, 0.159f, -0.127f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("halftrack"):
*uParam2={
-1f, 0.501f, 0.531f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("nightshark"):
*uParam2={
-1.5f, 0.42f, 0.584f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("oppressor"):
*uParam2={
-1f, 0.306f, 0.355f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.08f;
break;
case joaat("tampa3"):
*uParam2={
0f, 1.515f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.275f;
break;
case joaat("technical3"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.43f;
break;
case joaat("torero"):
*uParam2={
-1f, 0.201f, 0.114f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("vagner"):
*uParam2={
-1.5f, 0.906f, 0.071f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case joaat("xa21"):
*uParam2={
-1f, 0.441f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("phantom3"):
*uParam2={
-1.3f, 2.045f, 0.802f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("hauler2"):
*uParam2={
-1.627f, 2.456f, 0.745f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("cyclone"):
*uParam2={
-1f, 0.186f, 0.382f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.2f;
break;
case joaat("visione"):
*uParam2={
-1f, 0.432f, 0.031f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.15f;
break;
case joaat("vigilante"):
*uParam2={
-1f, 0.232f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.175f;
break;
case joaat("retinue"):
*uParam2={
-1f, -0.018f, 0.253f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("rapidgt3"):
*uParam2={
0f, 1.972f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.18f;
break;
case joaat("avenger"):
*uParam2={
-2.02f, 6.45f, -0.716f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("deluxo"):
*uParam2={
-1f, -0.291f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.2f;
break;
case joaat("stromberg"):
*uParam2={
-1f, 0.23f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.2f;
break;
case joaat("riot2"):
*uParam2={
-1.891f, 2.144f, 0.657f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("chernobog"):
*uParam2={
-2.127f, 5.413f, 1.132f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.34f;
break;
case joaat("khanjali"):
*uParam2={
-0.897f, 1.391f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.4f;
break;
case joaat("barrage"):
*uParam2={
-1.51f, 0.71f, 0.451f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("comet4"):
*uParam2={
-1f, 0.298f, 0.257f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.36f;
break;
case joaat("neon"):
*uParam2={
-1f, 0.181f, -0.066f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("streiter"):
*uParam2={
-1f, 0.301f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("sentinel3"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("yosemite"):
*uParam2={
-1f, 0.252f, 0.201f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("sc1"):
*uParam2={
-1f, 0.616f, -0.131f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("autarch"):
*uParam2={
-1f, 0f, 0.116f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("gt500"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("hustler"):
*uParam2={
-1f, -0.228f, 0.321f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("revolter"):
*uParam2={
-1f, 0.203f, 0.126f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("pariah"):
*uParam2={
-1f, -0.126f, 0.208f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("raiden"):
*uParam2={
-1f, 0.252f, -0.095f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("savestra"):
*uParam2={
-1f, 0f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("riata"):
*uParam2={
-1.3f, 0.18f, 0.511f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("hermes"):
*uParam2={
-1f, -0.134f, 0.158f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("comet5"):
*uParam2={
-1f, 0.002f, 0.031f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("z190"):
*uParam2={
-1f, -0.175f, 0.242f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("viseris"):
*uParam2={
-1f, 0f, 0.244f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.275f;
break;
case joaat("kamacho"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
}
switch (ENTITY::GET_ENTITY_MODEL(veParam0)){
case joaat("gb200"):
*uParam2={
-1f, 0f, 0.407f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.225f;
break;
case joaat("fagaloa"):
*uParam2={
-1f, 0f, 0.225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("ellie"):
*uParam2={
-1f, 0.441f, -0.128f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("issi3"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("michelli"):
*uParam2={
-1f, 0f, 0.0805f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("flashgt"):
*uParam2={
0f, 1.592f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.25f;
break;
case joaat("hotring"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("tezeract"):
*uParam2={
-1f, 0.679f, 0.514f 
};
*uParam3={
1f, 0f, -0.75f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.175f;
break;
case joaat("tyrant"):
*uParam2={
-1.588f, 0.315f, 0.337f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("dominator3"):
*uParam2={
-1f, 0f, 0.221f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("taipan"):
*uParam2={
-1f, 0f, 0.219f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("entity2"):
*uParam2={
-1.52f, 0.41f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("jester3"):
*uParam2={
-1f, 0f, 0.297f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("cheburek"):
*uParam2={
-1f, 0.393f, 0.162f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.375f;
break;
case joaat("caracara"):
*uParam2={
-1f, 1.266f, 0.4115f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("speedo4"):
*uParam2={
-1.5f, 0.833f, 0.391f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.2f;
break;
case joaat("mule4"):
*uParam2={
-1.125f, 2.691f, 0.318f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("pounder2"):
*uParam2={
-1.5f, 1.853f, 0.779f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.38f;
break;
case joaat("swinger"):
*uParam2={
-1f, 0.195f, 0.105f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("menacer"):
*uParam2={
-1.73f, 0.159f, 0.61f 
};
*uParam3={
1f, 0.12f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("scramjet"):
*uParam2={
-1f, -0.188f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("patriot2"):
*uParam2={
-1.213f, 1.546f, 0.511f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("stafford"):
*uParam2={
-1f, 0.036f, 0.096f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("freecrawler"):
*uParam2={
-1f, 0.249f, 0.511f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("oppressor2"):
*uParam2={
-1f, 0.306f, 0.355f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.08f;
break;
case joaat("terbyte"):
*uParam2={
-1.73f, 3.397f, 0.724f 
};
*uParam3={
1f, 0.12f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("bruiser"):
*uParam2={
0f, 2.12f, 1.241f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0.084f 
};
*fParam5=0.775f;
break;
case joaat("bruiser2"):
*uParam2={
0f, 2.12f, 1.241f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0.084f 
};
*fParam5=0.775f;
break;
case joaat("bruiser3"):
*uParam2={
0f, 2.12f, 1.241f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0.084f 
};
*fParam5=0.775f;
break;
case joaat("brutus"):
*uParam2={
-1f, 0.446f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("brutus2"):
*uParam2={
-1f, 0.446f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("brutus3"):
*uParam2={
-1f, 0.446f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("cerberus"):
*uParam2={
-1.432f, 1.443f, 1.292f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("cerberus2"):
*uParam2={
-1.432f, 1.443f, 1.292f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("cerberus3"):
*uParam2={
-1.432f, 1.443f, 1.292f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("clique"):
*uParam2={
-1f, 0.167f, 0.159f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("deveste"):
*uParam2={
-1.5f, 1.066f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.15f;
break;
case joaat("deviant"):
*uParam2={
-1f, 0.111f, 0.123f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("dominator4"):
*uParam2={
-1f, 0f, 0.417f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("dominator5"):
*uParam2={
-1f, 0f, 0.417f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("dominator6"):
*uParam2={
-1f, 0f, 0.417f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("impaler"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("impaler2"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("impaler3"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("impaler4"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("imperator"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("imperator2"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("imperator3"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("issi4"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("issi5"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("issi6"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("italigto"):
*uParam2={
-1f, -0.091f, 0.207f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("monster3"):
*uParam2={
-1.78f, 0.445f, 0.81f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("monster4"):
*uParam2={
-1.78f, 0.445f, 0.81f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("monster5"):
*uParam2={
-1.78f, 0.445f, 0.81f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("schlagen"):
*uParam2={
-1f, -0.105f, 0.262f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("slamvan4"):
*uParam2={
-1f, 0.152f, 0.537f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("slamvan5"):
*uParam2={
-1f, 0.152f, 0.537f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("slamvan6"):
*uParam2={
-1f, 0.152f, 0.537f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("toros"):
*uParam2={
-1f, 0.415f, 0.394f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("tulip"):
*uParam2={
-1f, 0.171f, 0.223f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("vamos"):
*uParam2={
-1f, 0f, 0.163f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("zr380"):
*uParam2={
-1f, 0f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("zr3802"):
*uParam2={
-1f, 0f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("zr3803"):
*uParam2={
-1f, 0f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("caracara2"):
*uParam2={
-1f, 0.687f, 0.4115f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("drafter"):
*uParam2={
-1.045f, 0.15f, 0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("dynasty"):
*uParam2={
-1f, 0.12f, 0.334f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("emerus"):
*uParam2={
-1f, 0.372f, 0.439f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case joaat("gauntlet3"):
*uParam2={
-1f, 0f, 0.222f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.33f;
break;
case joaat("gauntlet4"):
*uParam2={
-1f, 0f, 0.222f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.33f;
break;
case joaat("hellion"):
*uParam2={
-1f, 0.27f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("issi7"):
*uParam2={
-1f, 0.195f, -0.063f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("jugular"):
*uParam2={
-1f, 0.213f, 0.213f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("krieger"):
*uParam2={
-1f, 0.576f, -0.123f 
};
*uParam3={
0.997f, -0.105f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("locust"):
*uParam2={
-1f, -0.207f, 0.042f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.2f;
break;
case joaat("nebula"):
*uParam2={
-1f, 0.012f, 0.147f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("neo"):
*uParam2={
-1f, 0.216f, 0.216f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("novak"):
*uParam2={
-1f, 0.24f, 0.255f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("paragon"):
*uParam2={
-1f, 0f, 0.156f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("paragon2"):
*uParam2={
-1f, 0f, 0.156f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("peyote2"):
*uParam2={
-1f, -0.36f, 0.2125f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("s80"):
*uParam2={
-1f, 0.357f, 0.256f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.2f;
break;
case joaat("thrax"):
*uParam2={
-1f, 0.426f, 0.339f 
};
*uParam3={
1f, 0.06f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("zion3"):
*uParam2={
-1f, 0.108f, 0.234f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("zorrusso"):
*uParam2={
-1f, 0.273f, -0.06f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("slamvan2"):
*uParam2={
-1f, 0.35f, 0.456f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("rebla"):
*uParam2={
0f, 1.9002f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.3f;
break;
case joaat("asbo"):
*uParam2={
-1f, 0.104f, 0.339f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("sugoi"):
*uParam2={
-1f, 0.104f, 0.223f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("komoda"):
*uParam2={
-1f, 0.104f, 0.155f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("vstr"):
*uParam2={
-1f, 0.104f, 0.155f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("sultan2"):
*uParam2={
-1f, 0.313f, 0.16f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("kanjo"):
*uParam2={
-1f, 0.313f, 0.16f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("jb7002"):
*uParam2={
0f, 1.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.37f;
break;
case joaat("yosemite2"):
*uParam2={
-1f, 0.252f, 0.201f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("retinue2"):
*uParam2={
-1f, -0.018f, 0.253f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("furia"):
*uParam2={
-1f, 0.0965f, 0.149f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.5f;
break;
case joaat("everon"):
*uParam2={
0f, 2.019f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.5f;
break;
case joaat("imorgon"):
*uParam2={
-1.5f, 0.42f, -0.2f 
};
*uParam3={
1f, -0.0997f, 0.0415f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("zhaba"):
*uParam2={
-1.202f, 0.034f, 0.6635f 
};
*uParam3={
1f, -0.002f, 0f 
};
*uParam4={
0f, -0.7398f, 0f 
};
*fParam5=0.4f;
break;
case joaat("gauntlet5"):
*uParam2={
-1.5f, 0.379f, 0.297f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.24f;
break;
case joaat("dukes3"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.375f;
break;
case joaat("manana2"):
*uParam2={
-1.76f, 0.105f, 0.009f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.22f;
break;
case joaat("club"):
*uParam2={
0f, 1.252f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.31f;
break;
case joaat("glendale2"):
*uParam2={
0f, 2.135f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.205f;
break;
case joaat("youga3"):
*uParam2={
0f, 2.352f, 0.3f 
};
*uParam3={
0f, -1f, -0.256f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.135f;
break;
case joaat("yosemite3"):
*uParam2={
-1f, 0.252f, 0.203f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.21f;
break;
case joaat("seminole2"):
*uParam2={
0f, 1.654f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.25f;
break;
case joaat("penumbra2"):
*uParam2={
-1.08f, 0.28f, -0.093f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("landstalker2"):
*uParam2={
-1.64f, 0.7f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("coquette4"):
*uParam2={
-1f, -0.021f, 0.273f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case joaat("tigon"):
*uParam2={
-1f, 0.156f, 0.099f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("peyote3"):
*uParam2={
-1.5f, -0.36f, 0.2125f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("brioso2"):
*uParam2={
-1f, 0.275f, 0.215f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("slamtruck"):
*uParam2={
-1f, 1.454f, 0.485f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("italirsx"):
*uParam2={
-1f, 0.109f, 0.129f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("toreador"):
*uParam2={
-1f, 0.194f, 0.342f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.15f;
break;
case joaat("weevil"):
*uParam2={
-1f, 0.111f, 0.168f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("zr350"):
*uParam2={
0f, 1.632f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.19f;
break;
case joaat("calico"):
*uParam2={
-1f, 0.497f, 0.212f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("jester4"):
*uParam2={
-1f, 0f, 0.181f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("comet6"):
*uParam2={
-1f, 0.205f, 0.074f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("warrener2"):
*uParam2={
-1f, 0.408f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("remus"):
*uParam2={
-1f, 0.204f, 0.357f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("vectre"):
*uParam2={
-1f, 0.249f, 0.164f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("dominator7"):
*uParam2={
-1f, 0.253f, 0.142f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("cypher"):
*uParam2={
-1f, 0.223f, 0.185f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("rt3000"):
*uParam2={
-1f, 0f, 0.189f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("sultan3"):
*uParam2={
-1f, 0.42f, 0.309f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.23f;
break;
case joaat("tailgater2"):
*uParam2={
-1f, 0.337f, 0.283f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("previon"):
*uParam2={
-1f, 0.14f, -0.155f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("dominator8"):
*uParam2={
-1f, 0.153f, -0.006f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("futo2"):
*uParam2={
-1f, 0.318f, -0.013f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("euros"):
*uParam2={
-1f, 0.101f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("growler"):
*uParam2={
-1f, 0.151f, 0.149f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("cinquemila"):
*uParam2={
-1f, 0.533f, 0.197f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("champion"):
*uParam2={
-1f, 0.076f, 0.122f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("granger2"):
*uParam2={
-1f, 0.461f, 0.264f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("deity"):
*uParam2={
-1f, 0.279f, 0.235f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("buffalo4"):
*uParam2={
-1f, 0.251f, 0.149f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("baller7"):
*uParam2={
-1.194f, 0.182f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("zeno"):
*uParam2={
-1.194f, 0.409f, 0.199f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.22f;
break;
case joaat("comet7"):
*uParam2={
-1f, 0.05f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("astron"):
*uParam2={
-1f, 0.249f, 0.39f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("patriot3"):
*uParam2={
-1.2f, 0.474f, 0.335f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.23f;
break;
case joaat("jubilee"):
*uParam2={
-1.037f, 0.438f, 0.31f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("shinobi"):
*uParam2={
0f, 0.306f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.045f;
break;
case joaat("reever"):
*uParam2={
-1f, 0.292f, 0.29f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case joaat("iwagen"):
*uParam2={
-1f, 0.387f, 0.209f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("brioso3"):
*uParam2={
-1f, 0.15f, 0.2f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("corsita"):
*uParam2={
-1f, 0.1f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("greenwood"):
*uParam2={
-1f, 0.2f, 0.138f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("kanjosj"):
*uParam2={
-1f, 0.1f, 0.26f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("postlude"):
*uParam2={
-1f, 0f, 0.28f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("rhinehart"):
*uParam2={
0f, 1.317f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.33f;
break;
case joaat("tenf"):
*uParam2={
-1f, 0.74f, 0.19f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.28f;
break;
case joaat("tenf2"):
*uParam2={
-1f, 0.74f, 0.19f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.28f;
break;
case joaat("torero2"):
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case joaat("vigero2"):
*uParam2={
-1f, -0.07f, 0.3f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("weevil2"):
*uParam2={
-1f, 0.07f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.45f;
break;
case joaat("draugur"):
*uParam2={
-1f, 0.5f, 0.48f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("ruiner4"):
*uParam2={
-1f, 0.5f, 0.182f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.28f;
break;
case joaat("sentinel4"):
*uParam2={
-1f, 0.147f, 0.239f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case joaat("sm722"):
*uParam2={
-1f, -0.4f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case joaat("omnisegt"):
*uParam2={
0f, 1.462f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.29f;
break;
case -1386336041:
*uParam2={
-1f, 0.3f, 0.37f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case 1748565021:
*uParam2={
-1f, 0.5f, 0.225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.25f;
break;
case 1384502824:
*uParam2={
-1f, 0.066f, 0.329f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.1f;
break;
case -1035489563:
*uParam2={
-1f, 1.19f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case 996383885:
*uParam2={
-1f, 0.25f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.4f;
break;
case -1249788006:
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*fParam5=0.7f;
break;
case 268758436:
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case 1076201208:
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case 669204833:
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case 1550581940:
*uParam2={
-1f, 0.3f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case -1933242328:
*uParam2={
-1f, -0.4f, 0.375f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case 2100457220:
*uParam2={
-1f, 0.069f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.3f;
break;
case -461850249:
*uParam2={
-1f, -0.253f, 0.39f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.35f;
break;
case -131348178:
*uParam2={
-1f, 0.101f, 0.227f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*fParam5=0.6f;
break;
}
return 1;
}
BOOL func_98(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x8467{
if(bParam6) return fParam0==fParam3 && fParam0.f_1==fParam3.f_1;
return fParam0==fParam3 && fParam0.f_1==fParam3.f_1 && fParam0.f_2==fParam3.f_2;
}


void func_99() // Position - 0x84AE{
Global_1949998=0;
Global_1949998.f_1={
0f, 0f, 0f 
};
Global_1949998.f_4={
0f, 0f, 0f 
};
Global_1949998.f_7={
0f, 0f, 0f 
};
Global_1949998.f_10=0f;
Global_1949998.f_11=0f;
Global_1949998.f_12=0;
Global_1949998.f_13=0;
Global_1949998.f_14={
0f, 0f, 0f 
};
Global_1949998.f_17={
0f, 0f, 0f 
};
Global_1949998.f_20={
0f, 0f, 0f 
};
Global_1949998.f_23=0;
Global_1949998.f_24=0;
return;
}
BOOL func_100(Vehicle veParam0) // Position - 0x8527{
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0) || func_101(veParam0)) return true;
return false;
}
BOOL func_101(Vehicle veParam0) // Position - 0x855F{
int int;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT)){
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
if(DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset")){
int=DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
return IS_BIT_SET(int, 16);
}}}
return false;
}
BOOL func_102(Vehicle veParam0, Any* panParam1) // Position - 0x85A7{
Player playerFromGamerHandle;
BOOL flag;
if(NETWORK::NETWORK_IS_HANDLE_VALID(panParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(panParam1)) playerFromGamerHandle=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
else playerFromGamerHandle=_INVALID_PLAYER_INDEX();
flag=false;
if(playerFromGamerHandle==PLAYER::PLAYER_ID())if(func_113(15, false)) flag=true;
elseif(func_109(true)) flag=true;
else flag=true;
if(!(ENTITY::DOES_ENTITY_EXIST(veParam0) && !ENTITY::IS_ENTITY_DEAD(veParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || !(NETWORK::NETWORK_IS_HANDLE_VALID(panParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(panParam1)) || playerFromGamerHandle==_INVALID_PLAYER_INDEX() || !_NETWORK_IS_PLAYER_VALID(playerFromGamerHandle, false, false) || !flag || func_103(veParam0)) return false;
return true;
}
BOOL func_103(Vehicle veParam0) // Position - 0x868E{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return true;
if(func_105(PLAYER::PLAYER_ID())==3)if(func_104(veParam0) !=-1) return true;
if(Global_1950023) return true;
switch (ENTITY::GET_ENTITY_MODEL(veParam0)){
case joaat("sanchez"):
case joaat("sanchez2"):
case joaat("blazer"):
case joaat("blazer3"):
case joaat("surfer"):
case joaat("surfer2"):
case joaat("bifta"):
case joaat("sovereign"):
case joaat("hexer"):
case joaat("dune"):
case joaat("dune2"):
case joaat("dune4"):
case joaat("dune5"):
case joaat("insurgent"):
case joaat("insurgent2"):
case joaat("blista3"):
case joaat("stalion2"):
case joaat("gauntlet2"):
case joaat("dominator2"):
case joaat("buffalo3"):
case joaat("massacro2"):
case joaat("jester2"):
case joaat("omnis"):
case joaat("bf400"):
case joaat("tropos"):
case joaat("brioso"):
case joaat("trophytruck"):
case joaat("trophytruck2"):
case joaat("cliffhanger"):
case joaat("tampa2"):
case joaat("gargoyle"):
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
case joaat("le7b"):
case joaat("tyrus"):
case joaat("lynx"):
case joaat("sheava"):
case joaat("chimera"):
case joaat("sanctus"):
case joaat("blazer4"):
case joaat("manchez"):
case joaat("raptor"):
case joaat("blazer5"):
case joaat("stryder"):
case joaat("formula"):
case joaat("formula2"):
case joaat("minitank"):
case joaat("outlaw"):
case joaat("vagrant"):
case joaat("openwheel1"):
case joaat("openwheel2"):
case joaat("manchez2"):
case joaat("squaddie"):
case joaat("winky"):
case joaat("veto"):
case joaat("veto2"):
case joaat("verus"):
case joaat("lm87"):
return true;
case joaat("youga"):
case joaat("youga2"):
if(VEHICLE::GET_VEHICLE_MOD(veParam0, 7) !=-1) return true;
break;
case joaat("surano"):
if(VEHICLE::GET_VEHICLE_MOD(veParam0, 5)==1) return true;
break;
case joaat("gp1"):
return true;
case joaat("apc"):
case joaat("dune3"):
case joaat("insurgent3"):
case joaat("trailerlarge"):
case joaat("trailersmall2"):
case joaat("phantom3"):
case joaat("hauler2"):
return true;
case joaat("thruster"):
return true;
case joaat("terbyte"):
return true;
case joaat("rcbandito"):
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
case joaat("rrocket"):
case joaat("blazer2"):
case joaat("burrito2"):
case joaat("ignus"):
case joaat("draugur"):
case -1576586413:
case -1627077503:
return true;
case joaat("club"):
if(VEHICLE::GET_VEHICLE_MOD(veParam0, 7)==0 || VEHICLE::GET_VEHICLE_MOD(veParam0, 7)==1 || VEHICLE::GET_VEHICLE_MOD(veParam0, 7)==7) return true;
break;
case joaat("yosemite3"):
if(VEHICLE::GET_VEHICLE_MOD(veParam0, 45)==4 || VEHICLE::GET_VEHICLE_MOD(veParam0, 45)==5 || VEHICLE::GET_VEHICLE_MOD(veParam0, 45)==6) return true;
break;
}
return false;
}

int func_104(Vehicle veParam0) // Position - 0x8984{
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", INT))if(DECORATOR::DECOR_EXIST_ON(veParam0, "FMDeliverableID")) return DECORATOR::DECOR_GET_INT(veParam0, "FMDeliverableID");
return -1;
}

int func_105(Player plParam0) // Position - 0x89B0{
if(func_108(plParam0)==233) return func_106(plParam0);
return -1;
}

int func_106(Player plParam0) // Position - 0x89CD{
if(func_107(plParam0, false)) return Global_1894573[plParam0 /*608*/].f_10.f_182;
return -1;
}
BOOL func_107(Player plParam0, BOOL bParam1) // Position - 0x89F0{
if(Global_1894573[plParam0 /*608*/].f_10.f_33 !=-1 || bParam1 && Global_1894573[plParam0 /*608*/].f_10.f_32 !=-1) return true;
return false;
}

int func_108(Player plParam0) // Position - 0x8A2B{
if(func_107(plParam0, false)) return Global_1894573[plParam0 /*608*/].f_10.f_33;
return -1;
}
BOOL func_109(BOOL bParam0) // Position - 0x8A4E{
return func_110(PLAYER::PLAYER_ID(), bParam0);
}
BOOL func_110(Player plParam0, BOOL bParam1) // Position - 0x8A60{
return func_111(plParam0, bParam1, 1);
}
BOOL func_111(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x8A71{
Player player;
if(plParam0==_INVALID_PLAYER_INDEX()) return 0;
if(!bParam1)if(func_112(plParam0, iParam2)) return 0;
player=Global_1894573[plParam0 /*608*/].f_10;
if(player !=_INVALID_PLAYER_INDEX() && Global_1894573[player /*608*/].f_10.f_428==iParam2) return 1;
return 0;
}
BOOL func_112(Player plParam0, int iParam1) // Position - 0x8ACD{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10==plParam0 && Global_1894573[plParam0 /*608*/].f_10.f_428==iParam1) return true;
return false;
}
BOOL func_113(int iParam0, BOOL bParam1) // Position - 0x8B1C{
int num;
int num2;
if(bParam1)if(iParam0==15) return true;
if(func_118(PLAYER::PLAYER_ID())){
switch (iParam0){
case 4:
case 5:
case 12:
case 15:
return true;
}}
num=func_115(iParam0);
num2=iParam0;
return IS_BIT_SET(num, func_114(num2));
}

int func_114(int iParam0) // Position - 0x8B7A{
return iParam0 % 32;
}

int func_115(int iParam0) // Position - 0x8B87{
int num;
num=_MPCHAR_STAT_GET_INT(func_116(iParam0), -1, 0);
return num;
}
eMPStat func_116(int iParam0) // Position - 0x8B9F{
int num;
int num2;
num=iParam0;
num2=func_117(num);
switch (num2){
case 0:
return MP_STAT_CHAR_CREWUNLOCK_1_UNLCK;
}
return MP_STAT_CHAR_CREWUNLOCK_1_UNLCK;
}

int func_117(int iParam0) // Position - 0x8BCC{
return iParam0 / 32;
}
BOOL func_118(Player plParam0) // Position - 0x8BD9{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(func_119(plParam0) && Global_2657589[plParam0 /*466*/].f_321.f_10==plParam0) return true;
return false;
}
BOOL func_119(Player plParam0) // Position - 0x8C0E{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_120(Global_2657589[plParam0 /*466*/].f_321.f_7)==22;
return false;
}

int func_120(int iParam0) // Position - 0x8C55{
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
return 0;
case 60:
case 61:
case 62:
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
case 69:
return 1;
case 22:
case 23:
case 24:
case 25:
case 26:
case 27:
case 28:
case 29:
case 30:
case 31:
case 32:
case 33:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 40:
case 41:
return 2;
case 43:
case 42:
case 44:
case 45:
case 46:
case 47:
case 48:
case 49:
case 50:
case 51:
case 52:
case 53:
case 54:
case 55:
case 56:
case 57:
case 58:
case 59:
case 98:
case 99:
case 100:
case 112:
case 113:
case 114:
case 115:
case 119:
case 116:
case 118:
case 120:
case 121:
case 126:
case 127:
case 134:
case 135:
case 136:
case 137:
case 138:
case 139:
case 140:
case 141:
case 142:
case 143:
case 144:
return 3;
case 70:
case 71:
case 72:
case 73:
case 74:
case 75:
case 76:
case 77:
case 78:
case 79:
case 80:
return 4;
case 81:
return 5;
case 82:
return 6;
case 83:
case 84:
case 85:
case 86:
case 87:
return 7;
case 88:
return 8;
case 89:
case 90:
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
return 9;
case 101:
return 10;
case 102:
case 103:
case 104:
case 105:
case 106:
case 107:
case 108:
case 109:
case 110:
case 111:
return 11;
case 117:
return 12;
case 122:
return 13;
case 123:
return 14;
case 124:
return 15;
case 125:
return 16;
case 128:
case 129:
case 130:
case 131:
case 132:
case 133:
return 17;
case 145:
return 18;
case 146:
return 19;
case 147:
return 20;
case 148:
return 21;
case 149:
case 151:
case 153:
case 152:
case 150:
return 22;
case 154:
return 23;
case 155:
case 156:
case 157:
case 158:
return 24;
case 159:
return 25;
case 160:
return 26;
case 161:
return 27;
}
return -1;
}


void func_121(Vehicle veParam0, int iParam1) // Position - 0x9109{
int num;
int num2;
num2=func_123(iParam1);
func_122(num2, &num);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(veParam0, num);
return;
}
BOOL func_122(int iParam0, var uParam1) // Position - 0x912A{
*uParam1=-1;
switch (iParam0){
case 0:
*uParam1=4;
break;
case 1:
*uParam1=5;
break;
case 2:
*uParam1=6;
break;
case 3:
*uParam1=7;
break;
case 4:
*uParam1=111;
break;
case 5:
*uParam1=112;
break;
case 6:
*uParam1=107;
break;
case 7:
*uParam1=104;
break;
case 8:
*uParam1=98;
break;
case 9:
*uParam1=100;
break;
case 10:
*uParam1=102;
break;
case 11:
*uParam1=99;
break;
case 12:
*uParam1=105;
break;
case 13:
*uParam1=106;
break;
case 14:
*uParam1=37;
break;
case 15:
*uParam1=90;
break;
case 16:
*uParam1=88;
break;
case 17:
*uParam1=89;
break;
case 18:
*uParam1=91;
break;
case 19:
*uParam1=38;
break;
case 20:
*uParam1=138;
break;
case 21:
*uParam1=36;
break;
case 22:
*uParam1=27;
break;
case 23:
*uParam1=28;
break;
case 24:
*uParam1=29;
break;
case 25:
*uParam1=150;
break;
case 26:
*uParam1=30;
break;
case 27:
*uParam1=31;
break;
case 28:
*uParam1=32;
break;
case 29:
*uParam1=35;
break;
case 30:
*uParam1=135;
break;
case 31:
*uParam1=137;
break;
case 32:
*uParam1=136;
break;
case 33:
*uParam1=71;
break;
case 34:
*uParam1=145;
break;
case 35:
*uParam1=63;
break;
case 36:
*uParam1=64;
break;
case 37:
*uParam1=65;
break;
case 38:
*uParam1=66;
break;
case 39:
*uParam1=67;
break;
case 40:
*uParam1=68;
break;
case 41:
*uParam1=69;
break;
case 42:
*uParam1=73;
break;
case 43:
*uParam1=70;
break;
case 44:
*uParam1=74;
break;
case 45:
*uParam1=51;
break;
case 46:
*uParam1=53;
break;
case 47:
*uParam1=54;
break;
case 48:
*uParam1=92;
break;
}
return *uParam1 !=-1;
}

int func_123(int iParam0) // Position - 0x93EC{
switch (iParam0){
case 0:
return 1;
case 1:
return 36;
case 2:
return 35;
case 3:
return 46;
case 4:
return 48;
case 5:
return 16;
case 6:
return 14;
case 7:
return 19;
case 8:
return 22;
case 9:
return 31;
case 10:
return 30;
case 11:
return 33;
case 12:
return 34;
default:
}
return 0;
}

int func_124(int iParam0, int iParam1, int iParam2) // Position - 0x948A{
if(iParam0==222 && iParam1==222 && iParam2==255) return 0;
if(iParam0==2 && iParam1==21 && iParam2==255) return 1;
if(iParam0==3 && iParam1==83 && iParam2==255) return 2;
if(iParam0==0 && iParam1==255 && iParam2==140) return 3;
if(iParam0==94 && iParam1==255 && iParam2==1) return 4;
if(iParam0==255 && iParam1==255 && iParam2==0) return 5;
if(iParam0==255 && iParam1==150 && iParam2==5) return 6;
if(iParam0==255 && iParam1==62 && iParam2==0) return 7;
if(iParam0==255 && iParam1==1 && iParam2==1) return 8;
if(iParam0==255 && iParam1==50 && iParam2==100) return 9;
if(iParam0==255 && iParam1==5 && iParam2==190) return 10;
if(iParam0==35 && iParam1==1 && iParam2==255) return 11;
if(iParam0==15 && iParam1==3 && iParam2==255) return 12;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_125() && Global_1576216)if(iParam0==Global_1576217 && iParam1==Global_1576218 && iParam2==Global_1576219) return 13;
return 0;
}
BOOL func_125() // Position - 0x966C{
var gamerHandle;
if(PLAYER::IS_PLAYER_ONLINE()){
if(NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
gamerHandle={
GET_LOCAL_GAMER_HANDLE() 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle)) return true;
}}
return false;
}
struct<13> GET_LOCAL_GAMER_HANDLE() // Position - 0x96B4{
var gamerHandle;
NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle, 13);
return gamerHandle;
}
BOOL func_127(Vehicle veParam0) // Position - 0x96C9{
switch (ENTITY::GET_ENTITY_MODEL(veParam0)){
case joaat("deathbike2"):
return true;
}
return false;
}
BOOL func_128(int iParam0, var uParam1) // Position - 0x96EA{
*uParam1=-1f;
switch (iParam0){
case joaat("dune5"):
*uParam1=1f;
break;
case joaat("boxville5"):
*uParam1=1f;
break;
case joaat("wastelander"):
*uParam1=1f;
break;
case joaat("alphaz1"):
*uParam1=0.2f;
break;
case joaat("bombushka"):
*uParam1=0.15f;
break;
case joaat("howard"):
*uParam1=0.3f;
break;
case joaat("hunter"):
*uParam1=0.5f;
break;
case joaat("microlight"):
*uParam1=0.3f;
break;
case joaat("mogul"):
*uParam1=0.4f;
break;
case joaat("molotok"):
*uParam1=0.3f;
break;
case joaat("nokota"):
*uParam1=0.4f;
break;
case joaat("pyro"):
*uParam1=0.4f;
break;
case joaat("rogue"):
*uParam1=0.4f;
break;
case joaat("seabreeze"):
*uParam1=0.3f;
break;
case joaat("starling"):
*uParam1=0.5f;
break;
case joaat("tula"):
*uParam1=0.15f;
break;
case joaat("khanjali"):
*uParam1=0.6f;
break;
case joaat("bruiser"):
*uParam1=1f;
break;
case joaat("bruiser2"):
*uParam1=1f;
break;
case joaat("bruiser3"):
*uParam1=1f;
break;
case joaat("brutus"):
*uParam1=1f;
break;
case joaat("brutus2"):
*uParam1=1f;
break;
case joaat("brutus3"):
*uParam1=1f;
break;
case joaat("cerberus"):
*uParam1=1f;
break;
case joaat("cerberus2"):
*uParam1=1f;
break;
case joaat("cerberus3"):
*uParam1=1f;
break;
case joaat("deathbike"):
*uParam1=1f;
break;
case joaat("deathbike2"):
*uParam1=1f;
break;
case joaat("deathbike3"):
*uParam1=1f;
break;
case joaat("dominator4"):
*uParam1=1f;
break;
case joaat("dominator5"):
*uParam1=1f;
break;
case joaat("dominator6"):
*uParam1=1f;
break;
case joaat("impaler2"):
*uParam1=1f;
break;
case joaat("impaler3"):
*uParam1=1f;
break;
case joaat("impaler4"):
*uParam1=1f;
break;
case joaat("imperator"):
*uParam1=1f;
break;
case joaat("imperator2"):
*uParam1=1f;
break;
case joaat("imperator3"):
*uParam1=1f;
break;
case joaat("issi4"):
*uParam1=1f;
break;
case joaat("issi5"):
*uParam1=1f;
break;
case joaat("issi6"):
*uParam1=1f;
break;
case joaat("monster3"):
*uParam1=1f;
break;
case joaat("monster4"):
*uParam1=1f;
break;
case joaat("monster5"):
*uParam1=1f;
break;
case joaat("scarab"):
*uParam1=1f;
break;
case joaat("scarab2"):
*uParam1=1f;
break;
case joaat("scarab3"):
*uParam1=1f;
break;
case joaat("slamvan4"):
*uParam1=1f;
break;
case joaat("slamvan5"):
*uParam1=1f;
break;
case joaat("slamvan6"):
*uParam1=1f;
break;
case joaat("zr380"):
*uParam1=1f;
break;
case joaat("zr3802"):
*uParam1=1f;
break;
case joaat("zr3803"):
*uParam1=1f;
break;
}
return *uParam1 !=-1f;
}
BOOL func_129(Hash hParam0) // Position - 0x99EB{
switch (hParam0){
case joaat("deity"):
case joaat("granger2"):
case joaat("buffalo4"):
case joaat("jubilee"):
case joaat("patriot3"):
case joaat("champion"):
case joaat("greenwood"):
case joaat("omnisegt"):
case 669204833:
case 1076201208:
return true;
}
return false;
}


void func_130(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9A3E{
int num;
int num2;
int i;
int j;
int k;
int l;
int m;
int n;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
uParam1->f_66 !=0;
if(!func_152(veParam0)){
if(MISC::GET_HASH_KEY(&(uParam1->f_1)) !=0) VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(veParam0, &(uParam1->f_1));
if(*uParam1 >=0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()) VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0, *uParam1);
}
if(uParam1->f_66==joaat("sovereign")){
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=111;
}elseif(uParam1->f_66==joaat("casco")){
num=1;
if(IS_BIT_SET(uParam1->f_77, func_151(num + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_151(num + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
num2=1;
if(IS_BIT_SET(uParam1->f_77, func_151(num2 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_151(num2 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
for (i=1;
i <=9;
i=i + 1){
if(IS_BIT_SET(uParam1->f_77, func_151(i))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_151(i));
}}}elseif(uParam1->f_66==joaat("openwheel1")){
for (j=1;
j <=6;
j=j + 1){
if(IS_BIT_SET(uParam1->f_77, func_151(j))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_151(j));
}}}elseif(uParam1->f_66==joaat("openwheel2")){
for (k=1;
k <=11;
k=k + 1){
if(k !=9 && k !=10){
if(IS_BIT_SET(uParam1->f_77, func_151(k))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_151(k));
}}}}elseif(uParam1->f_66==-1035489563){
for (l=1;
l <=2;
l=l + 1){
if(IS_BIT_SET(uParam1->f_77, func_151(l))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_151(l));
}}}elseif(uParam1->f_66==joaat("dinghy5")){
if(IS_BIT_SET(uParam1->f_77, func_151(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_151(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(veParam0, 10) !=0) MISC::SET_BIT(&(uParam1->f_77), 0);
}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_151(1));
}elseif(uParam1->f_66==joaat("hotknife")){
for (m=1;
m <=2;
m=m + 1){
if(IS_BIT_SET(uParam1->f_77, func_151(m))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_151(m));
}}}
if(uParam1->f_66==joaat("nightshark")){
VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, false);
if(VEHICLE::GET_VEHICLE_MOD(veParam0, 5) !=-1) VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, true);
}
if(IS_BIT_SET(uParam1->f_77, 13)) VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
else VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0);
if(IS_BIT_SET(uParam1->f_77, 12)) VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
else VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0);
if(uParam1->f_5 !=-1 && uParam1->f_6 !=-1){
if(func_149(uParam1->f_5) || func_149(uParam1->f_6)){
}else{
VEHICLE::SET_VEHICLE_COLOURS(veParam0, uParam1->f_5, uParam1->f_6);
}}
if(uParam1->f_7 < 0) uParam1->f_7=0;
if(uParam1->f_8 < 0) uParam1->f_8=0;
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veParam0, uParam1->f_7, uParam1->f_8);
if(IS_BIT_SET(uParam1->f_77, 15) || func_148(veParam0) || uParam1->f_62==0 && uParam1->f_63==0 && uParam1->f_64==0 && uParam1->f_9[20] > 0 && func_147()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif(uParam1->f_62==0 && uParam1->f_63==0 && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_146(uParam1->f_66)){
VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
}else{
VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, uParam1->f_65);
}
if(IS_BIT_SET(uParam1->f_77, 9)){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, false);
VEHICLE::SET_DRIFT_TYRES(veParam0, false);
}
if(bParam2) VEHICLE::SET_VEHICLE_DOORS_LOCKED(veParam0, uParam1->f_70);
VEHICLE::SET_VEHICLE_NEON_COLOUR(veParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 2, IS_BIT_SET(uParam1->f_77, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 3, IS_BIT_SET(uParam1->f_77, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 0, IS_BIT_SET(uParam1->f_77, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 1, IS_BIT_SET(uParam1->f_77, 31));
VEHICLE::SET_VEHICLE_IS_STOLEN(veParam0, IS_BIT_SET(uParam1->f_77, 10));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(veParam0) > 1 && uParam1->f_67 >=0) VEHICLE::SET_VEHICLE_LIVERY(veParam0, uParam1->f_67);
if(uParam1->f_69 > -1 && uParam1->f_69 < 255)if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(veParam0)))if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(veParam0)))if(uParam1->f_69==6) func_145(veParam0, uParam1->f_69);
else func_145(veParam0, uParam1->f_69);
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))if(uParam1->f_68==0 || uParam1->f_68==3 || uParam1->f_68==5) VEHICLE::RAISE_CONVERTIBLE_ROOF(veParam0, true);
else VEHICLE::LOWER_CONVERTIBLE_ROOF(veParam0, true);
if(bParam3) func_137(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
for (n=0;
n <=11;
n=n + 1){
if(IS_BIT_SET(uParam1->f_77, func_151(n + 1)))if(!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1)) VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, false);
elseif(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1)) VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, true);
}}
if(ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("sheava") || ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("omnis") || ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("le7b"))if(VEHICLE::GET_VEHICLE_MOD(veParam0, 0)==-1) VEHICLE::SET_VEHICLE_EXTRA(veParam0, 1, false);
if(func_131() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(veParam0) && !VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("avenger")))if(!IS_BIT_SET(uParam1->f_77, 23))if(IS_BIT_SET(uParam1->f_77, 22)) VEHICLE::CONTROL_LANDING_GEAR(veParam0, 2);
else VEHICLE::CONTROL_LANDING_GEAR(veParam0, 3);
else VEHICLE::CONTROL_LANDING_GEAR(veParam0, 4);
if(IS_BIT_SET(uParam1->f_77, 27)) unk_0xEC687B9B4DF9224E(veParam0, "IgnoredByQuickSave", 1);
else unk_0xEC687B9B4DF9224E(veParam0, "IgnoredByQuickSave", 0);
}
return;
}
BOOL func_131() // Position - 0xA123{
if(*Global_4718592.f_104427==6 || *Global_4718592.f_104427==7 || *Global_4718592.f_104427==18 || *Global_4718592.f_104427==19 && Global_4718592.f_2==20) return false;
if(func_135(7))if(func_133(Global_2672505.f_4.f_16) || func_132(Global_2672505.f_4.f_16)) return false;
return true;
}
BOOL func_132(int iParam0) // Position - 0xA1B2{
int num;
num=iParam0;
if(num !=-1) return Global_1890444[num /*129*/].f_77.f_51 !=0;
return false;
}
BOOL func_133(int iParam0) // Position - 0xA1D6{
int num;
num=iParam0;
if(num !=-1) return func_134(iParam0, 9);
return false;
}
BOOL func_134(int iParam0, int iParam1) // Position - 0xA1F4{
return IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}
BOOL func_135(int iParam0) // Position - 0xA20C{
return func_136(&(Global_2672505.f_183), iParam0);
}
BOOL func_136(var uParam0, int iParam1) // Position - 0xA220{
int num;
int num2;
int num3;
num=iParam1;
num2=num / 32;
num3=num % 32;
return IS_BIT_SET(uParam0->[num2], num3);
}

int func_137(var uParam0, var uParam1, var uParam2) // Position - 0xA243{
int i;
int modType;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false)) return 0;
if(VEHICLE::GET_NUM_MOD_KITS(*uParam0)==0) return 0;
VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);
for (i=0;
i < *uParam1;
i=i + 1){
modType=i;
if(modType==17 || modType==18 || modType==19 || modType==20 || modType==21){
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, uParam1->[i] > 0);
}elseif(modType==22){
if(uParam1->[i] > 0){
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, true);
if(uParam1->[i]==1) VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
else VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, uParam1->[i] - 2);
}else{
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, false);
}}elseif(VEHICLE::GET_VEHICLE_MOD(*uParam0, modType) !=uParam1->[i] - 1){
VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, modType);
if(uParam1->[i] > 0){
if(modType==23){
VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[0] > 0);
}elseif(modType==24){
VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[1] > 0);
}elseif(func_143(*uParam0, modType, uParam1->[i] - 1)){
}else{
VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, false);
}}}}
if(func_142(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) !=func_140(*uParam0, uParam1->[38] - 1)) VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_140(*uParam0, uParam1->[38] - 1), false);
func_139(uParam0);
if(func_138(*uParam0)){
VEHICLE::SET_VEHICLE_STRONG(*uParam0, true);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
}
return 1;
}
BOOL func_138(Vehicle veParam0) // Position - 0xA41D{
int i;
int modType;
Hash hashKey;
var unk;
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
for (i=0;
i < 49;
i=i + 1){
modType=i;
if(modType==17 || modType==18 || modType==19 || modType==20 || modType==21 || modType==22){
}elseif(VEHICLE::GET_VEHICLE_MOD(veParam0, modType) !=-1){
TEXT_LABEL_ASSIGN_STRING(&unk, VEHICLE::GET_MOD_TEXT_LABEL(veParam0, modType, VEHICLE::GET_VEHICLE_MOD(veParam0, modType)), 32);
hashKey=MISC::GET_HASH_KEY(&unk);
if(hashKey !=0)if(hashKey==MISC::GET_HASH_KEY("MNU_CAGE" /*Roll Cage and Chassis Upgrade*/) || hashKey==MISC::GET_HASH_KEY("SABRE_CAG" /*Stunt Cage*/)) return true;
}}}
return false;
}


void func_139(var uParam0) // Position - 0xA4F7{
switch (ENTITY::GET_ENTITY_MODEL(*uParam0)){
case joaat("starling"):
if(VEHICLE::GET_VEHICLE_MOD(*uParam0, 4)==0) VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
else VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
break;
case joaat("slamtruck"):
VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
break;
default:
break;
}
return;
}

int func_140(Vehicle veParam0, int iParam1) // Position - 0xA54E{
int value;
int value2;
float num;
int num2;
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
switch (ENTITY::GET_ENTITY_MODEL(veParam0)){
case joaat("tornado5"):
switch (iParam1){
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
return 4;
}
break;
case joaat("faction3"):
return 3;
}
value=func_141(veParam0, 38) + 1;
value2=func_141(veParam0, 24) + 1;
num=SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(value);
num2=SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value2) * num) - 1;
if(num2 < 0) num2=0;
if(num2 >=value) num2=value - 1;
return num2;
}
return 0;
}

int func_141(Vehicle veParam0, int iParam1) // Position - 0xA637{
int i;
if(STREAMING::IS_MODEL_VALID(Global_152535) && VEHICLE::IS_VEHICLE_MODEL(veParam0, Global_152535) && Global_152536==iParam1) return Global_152537;
for (i=VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) - 1;
i >=0 && func_143(veParam0, iParam1, i);
i=i - 1){}
return i;
}
BOOL func_142(Hash hParam0, int iParam1) // Position - 0xA699{
switch (hParam0){
case joaat("faction2"):
case joaat("buccaneer2"):
case joaat("chino2"):
case joaat("moonbeam2"):
case joaat("primo2"):
case joaat("voodoo"):
return true;
case joaat("tenf2"):
case joaat("weevil2"):
case joaat("brioso3"):
case joaat("sentinel4"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("sabregt2"):
if(!Global_262145.f_14734) return false;
else return true;
break;
case joaat("tornado5"):
if(!Global_262145.f_14735) return false;
else return true;
break;
case joaat("virgo2"):
if(!Global_262145.f_14733) return false;
else return true;
break;
case joaat("minivan2"):
if(!Global_262145.f_14736) return false;
else return true;
break;
case joaat("slamvan3"):
if(!Global_262145.f_14738) return false;
else return true;
break;
case joaat("faction3"):
if(!Global_262145.f_14737) return false;
else return true;
break;
case joaat("sultanrs"):
case joaat("banshee2"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("comet3"):
if(Global_262145.f_19141){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("diablous2"):
if(Global_262145.f_19143){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("fcr2"):
if(Global_262145.f_19147){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("elegy"):
if(Global_262145.f_19144){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("nero2"):
if(Global_262145.f_19151){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("italigtb2"):
if(Global_262145.f_19149){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("specter2"):
if(Global_262145.f_19154){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("technical3"):
if(Global_262145.f_21100){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("insurgent3"):
if(Global_262145.f_21101){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("issi4"):
case joaat("issi5"):
case joaat("issi6"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("youga3"):
case joaat("gauntlet5"):
case joaat("yosemite3"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("manana2"):
case joaat("peyote3"):
case joaat("glendale2"):
return true;
}
return false;
}
BOOL func_143(Vehicle veParam0, int iParam1, int iParam2) // Position - 0xAA78{
if(!func_144() && PED::APPLY_PED_BLOOD_SPECIFIC(veParam0, iParam1, iParam2)) return true;
return false;
}
BOOL func_144() // Position - 0xAA9C{
return false;
}


void func_145(Vehicle veParam0, int iParam1) // Position - 0xAAA5{
int vehicleMod;
int vehicleModVariation;
if(VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
vehicleMod=VEHICLE::GET_VEHICLE_MOD(veParam0, 24);
vehicleModVariation=VEHICLE::GET_VEHICLE_MOD_VARIATION(veParam0, 24);
VEHICLE::SET_VEHICLE_WHEEL_TYPE(veParam0, iParam1);
if(ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("peyote2")) return;
if(vehicleMod==-1) VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 24);
else VEHICLE::SET_VEHICLE_MOD(veParam0, 24, vehicleMod, vehicleModVariation==1);
}
return;
}
BOOL func_146(int iParam0) // Position - 0xAB1D{
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return true;
default:
}
return false;
}
BOOL func_147() // Position - 0xAB3D{
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}
BOOL func_148(Vehicle veParam0) // Position - 0xAB4E{
int int;
if(ENTITY::DOES_ENTITY_EXIST(veParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT)){
if(DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset")) int=DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
return IS_BIT_SET(int, 4);
}}}
return false;
}

int func_149(var uParam0) // Position - 0xAB93{
if(!func_144() && func_150(uParam0)) return 1;
return 0;
}
BOOL func_150(int iParam0) // Position - 0xABB3{
switch (iParam0){
case 161:
case 164:
case 170:
case 171:
case 183:
case 191:
case 199:
case 209:
case 216:
case 218:
return true;
}
return false;
}

int func_151(int iParam0) // Position - 0xAC06{
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
BOOL func_152(Vehicle veParam0) // Position - 0xACB6{
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))if(!_IS_PLAYER_IN_VEHICLE_SEAT(PLAYER::PLAYER_ID(), -1)) veParam0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(!ENTITY::DOES_ENTITY_EXIST(veParam0)) return false;
if(ENTITY::IS_ENTITY_DEAD(veParam0, false)) return false;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)) return false;
if(func_105(PLAYER::PLAYER_ID())==3)if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(func_104(veParam0) !=-1) return true;
return false;
}
BOOL _IS_PLAYER_IN_VEHICLE_SEAT(Player plParam0, int iParam1) // Position - 0xAD3D{
Vehicle vehiclePedIsIn;
if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(plParam0), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(plParam0), false);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, iParam1, false)) return true;
}}
return false;
}
BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0xAD8A{
if(ENTITY::DOES_ENTITY_EXIST(pedParam0))if(!ENTITY::IS_ENTITY_DEAD(pedParam0, false)) return true;
return false;
}


void func_155(var uParam0) // Position - 0xADAB{
const char* cutsceneName;
if(!uParam0->f_16){
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1)){
func_64(uParam0, 4);
return;
}
cutsceneName=uParam0->f_1;
if(uParam0->f_2) CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(cutsceneName, uParam0->f_17, 24);
else CUTSCENE::REQUEST_CUTSCENE(cutsceneName, 8);
uParam0->f_16=1;
}
return;
}


void func_156(var uParam0) // Position - 0xADF9{
if(func_271(PLAYER::PLAYER_ID(), false, false)) return;
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) !=0) PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
if(!func_158(uParam0)) return;
if(!func_67(uParam0)) return;
if(!uParam0->f_15)if(!STREAMING::NEW_LOAD_SCENE_START(uParam0->f_9, func_157(uParam0->f_12), 4000f, 0)) return;
else uParam0->f_15=1;
if(!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || !STREAMING::IS_NEW_LOAD_SCENE_LOADED())if(!_STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_18), Global_262145.f_30917, false)) return;
else STREAMING::NEW_LOAD_SCENE_STOP();
_STOPWATCH_DESTROY(&(uParam0->f_18));
func_64(uParam0, 1);
return;
}


Vector3 func__157(float fParam0, var uParam1, var uParam2) // Position - 0xAEB3{
return -SYSTEM::SIN(fParam0.f_2) * SYSTEM::COS(fParam0), SYSTEM::COS(fParam0.f_2) * SYSTEM::COS(fParam0), SYSTEM::SIN(fParam0);
}
BOOL func_158(var uParam0) // Position - 0xAEE0{
Player player;
if(!uParam0->f_5) return true;
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_23)) return true;
if(!_DOES_ENTITY_EXIST_AND_IS_ALIVE(func_270())) return false;
player=func_265();
if(player==_INVALID_PLAYER_INDEX()) return false;
if(player==PLAYER::PLAYER_ID()){
uParam0->f_23=PED::CLONE_PED_ALT(func_270(), false, false, true, true);
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23)) return false;
}else{
uParam0->f_23=PED::CLONE_PED_ALT(func_270(), false, false, false, false);
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23)) return false;
func_159(uParam0->f_23, &Global_1887707[player /*53*/], false, -1);
}
ENTITY::SET_ENTITY_VISIBLE(uParam0->f_23, uParam0->f_8, false);
ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_23, true);
ENTITY::SET_ENTITY_COLLISION(uParam0->f_23, false, false);
PED::SET_PED_HELMET(uParam0->f_23, false);
PED::REMOVE_PED_HELMET(uParam0->f_23, true);
return true;
}


void func_159(Ped pedParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0xAFB7{
var unk;
int characterType;
BOOL flag;
BOOL flag2;
BOOL flag3;
int i;
int j;
int numTattooShopDlcItems;
Hash outComponent;
int num;
if(!PED::IS_PED_INJURED(pedParam0)){
PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(pedParam0);
characterType=func_264(pedParam0);
flag=func_261(pedParam0, false);
flag2=func_253(pedParam0);
flag3=func_176(pedParam0, iParam3);
if(bParam2) flag2=true;
for (i=0;
i < 127;
i=i + 1){
if(IS_BIT_SET(uParam1->[i / 32], i % 32))if(func_168(&unk, i, characterType, pedParam0, -1))if(func_161(pedParam0, &unk, i, unk.f_4, unk.f_8, flag, flag2, bParam2, flag3)) STATS::GET_PACKED_TU_INT_STAT_KEY(pedParam0, unk.f_4, unk.f_5);
}
if(IS_BIT_SET(uParam1->[123 / 32], 123 % 32))if(PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) !=7) STATS::GET_PACKED_TU_INT_STAT_KEY(pedParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
numTattooShopDlcItems=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(characterType);
for (j=0;
j < numTattooShopDlcItems;
j=j + 1){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(characterType, j, &outComponent)){
if(!FILES::IS_CONTENT_ITEM_LOCKED(outComponent)){
num=129 + j;
if(num / 32 >=*uParam1){
}elseif(IS_BIT_SET(uParam1->[num / 32], num % 32)){
if(func_161(pedParam0, &(outComponent.f_7), num, outComponent.f_2, outComponent.f_6, flag, flag2, bParam2, flag3)){
STATS::GET_PACKED_TU_INT_STAT_KEY(pedParam0, outComponent.f_2, outComponent.f_3);
func_160(pedParam0, outComponent.f_2, outComponent.f_3);
}}}}}}
return;
}


void func_160(Ped pedParam0, int iParam1, int iParam2) // Position - 0xB120{
switch (iParam1){
case 1841427399:
switch (iParam2){
case -507124931:
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1841427399, -435695677);
break;
case -2045170715:
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1841427399, 1684098164);
break;
}
break;
case joaat("mpSecurity_overlays"):
switch (iParam2){
case joaat("MP_Security_Tee_000_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSecurity_overlays"), joaat("MP_Security_Tee_001_M"));
break;
case joaat("MP_Security_Tee_000_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSecurity_overlays"), joaat("MP_Security_Tee_001_F"));
break;
}
break;
case joaat("mpTuner_overlays"):
switch (iParam2){
case joaat("MP_Tuner_Tee_000_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_001_M"));
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
break;
case joaat("MP_Tuner_Tee_002_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
break;
case joaat("MP_Tuner_Tee_003_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_004_M"));
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
break;
case joaat("MP_Tuner_Tee_005_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
break;
case joaat("MP_Tuner_Tee_006_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
break;
case joaat("MP_Tuner_Tee_008_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_M"));
break;
case joaat("MP_Tuner_Tee_010_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_M"));
break;
case joaat("MP_Tuner_Tee_000_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_001_F"));
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
break;
case joaat("MP_Tuner_Tee_002_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
break;
case joaat("MP_Tuner_Tee_003_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_004_F"));
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
break;
case joaat("MP_Tuner_Tee_005_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
break;
case joaat("MP_Tuner_Tee_006_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
break;
case joaat("MP_Tuner_Tee_008_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_F"));
break;
case joaat("MP_Tuner_Tee_010_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_F"));
break;
}
break;
case joaat("mpHeist4_overlays"):
switch (iParam2){
case joaat("MP_Heist4_Tee_039_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_040_M"));
break;
case joaat("MP_Heist4_Tee_041_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_042_M"));
break;
case joaat("MP_Heist4_Tee_043_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_044_M"));
break;
case joaat("MP_Heist4_Tee_049_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_050_M"));
break;
case joaat("MP_Heist4_Tee_051_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_052_M"));
break;
case joaat("MP_Heist4_Tee_055_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_056_M"));
break;
case joaat("MP_Heist4_Tee_057_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_058_M"));
break;
case joaat("MP_Heist4_Tee_059_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_060_M"));
break;
case joaat("MP_Heist4_Tee_061_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_062_M"));
break;
case joaat("MP_Heist4_Tee_063_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_064_M"));
break;
case joaat("MP_Heist4_Tee_065_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_066_M"));
break;
case joaat("MP_Heist4_Tee_039_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_040_F"));
break;
case joaat("MP_Heist4_Tee_041_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_042_F"));
break;
case joaat("MP_Heist4_Tee_043_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_044_F"));
break;
case joaat("MP_Heist4_Tee_049_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_050_F"));
break;
case joaat("MP_Heist4_Tee_051_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_052_F"));
break;
case joaat("MP_Heist4_Tee_055_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_056_F"));
break;
case joaat("MP_Heist4_Tee_057_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_058_F"));
break;
case joaat("MP_Heist4_Tee_059_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_060_F"));
break;
case joaat("MP_Heist4_Tee_061_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_062_F"));
break;
case joaat("MP_Heist4_Tee_063_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_064_F"));
break;
case joaat("MP_Heist4_Tee_065_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_066_F"));
break;
}
break;
case joaat("mpVinewood_overlays"):
switch (iParam2){
case joaat("CasinoTop_M_0"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_M"));
break;
case joaat("CasinoTop_M_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
break;
case joaat("CasinoTop_M_2"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
break;
case joaat("CasinoTop_M_3"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
break;
case joaat("CasinoTop_M_4"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
break;
case joaat("CasinoTop_M_5"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
break;
case joaat("CasinoTop_M_6"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
break;
case joaat("CasinoTop_M_7"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_M"));
break;
case joaat("CasinoTop_M_8"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_M"));
break;
case joaat("CasinoTop_M_9"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
break;
case joaat("CasinoTop_M_10"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
break;
case joaat("CasinoTop_M_11"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_M"));
break;
case joaat("CasinoTop_M_12"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_M"));
break;
case joaat("CasinoTop_M_13"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_M"));
break;
case joaat("CasinoTop_M_14"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_M"));
break;
case joaat("CasinoTop_M_15"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_M"));
break;
case joaat("CasinoTop_M_16"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_M"));
break;
case joaat("CasinoTop_M_17"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_M"));
break;
case joaat("CasinoTop_M_18"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_M"));
break;
case joaat("CasinoTop_M_19"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_M"));
break;
case joaat("CasinoTop_M_20"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_M"));
break;
case joaat("CasinoTop_M_21"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
break;
case joaat("CasinoTop_M_22"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
break;
case joaat("CasinoTop_M_23"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_M"));
break;
case joaat("CasinoTop_M_24"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
break;
case joaat("CasinoTop_M_25"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
break;
case joaat("CasinoTop_M_26"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_M"));
break;
case joaat("CasinoTop_M_27"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
break;
case joaat("CasinoTop_M_28"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
break;
case joaat("CasinoTop_M_29"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
break;
case joaat("CasinoTop_M_30"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
break;
case joaat("CasinoTop_M_31"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
break;
case joaat("CasinoTop_M_32"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
break;
case joaat("CasinoTop_M_33"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
break;
case joaat("CasinoTop_M_34"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
break;
case joaat("CasinoTop_M_35"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
break;
case joaat("CasinoTop_M_36"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
break;
case joaat("CasinoTop_M_37"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
break;
case joaat("CasinoTop_M_38"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
break;
case joaat("CasinoTop_M_39"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
break;
case joaat("CasinoTop_M_40"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
break;
case joaat("CasinoTop_M_41"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
break;
case joaat("CasinoTop_M_42"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
break;
case joaat("CasinoTop_M_43"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
break;
case joaat("CasinoTop_M_44"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
break;
}
switch (iParam2){
case joaat("CasinoTop_F_0"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_F"));
break;
case joaat("CasinoTop_F_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
break;
case joaat("CasinoTop_F_2"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
break;
case joaat("CasinoTop_F_3"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
break;
case joaat("CasinoTop_F_4"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
break;
case joaat("CasinoTop_F_5"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
break;
case joaat("CasinoTop_F_6"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
break;
case joaat("CasinoTop_F_7"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_F"));
break;
case joaat("CasinoTop_F_8"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_F"));
break;
case joaat("CasinoTop_F_9"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
break;
case joaat("CasinoTop_F_10"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
break;
case joaat("CasinoTop_F_11"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_F"));
break;
case joaat("CasinoTop_F_12"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_F"));
break;
case joaat("CasinoTop_F_13"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_F"));
break;
case joaat("CasinoTop_F_14"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_F"));
break;
case joaat("CasinoTop_F_15"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_F"));
break;
case joaat("CasinoTop_F_16"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_F"));
break;
case joaat("CasinoTop_F_17"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_F"));
break;
case joaat("CasinoTop_F_18"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_F"));
break;
case joaat("CasinoTop_F_19"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_F"));
break;
case joaat("CasinoTop_F_20"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_F"));
break;
case joaat("CasinoTop_F_21"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
break;
case joaat("CasinoTop_F_22"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
break;
case joaat("CasinoTop_F_23"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_F"));
break;
case joaat("CasinoTop_F_24"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
break;
case joaat("CasinoTop_F_25"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
break;
case joaat("CasinoTop_F_26"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_F"));
break;
case joaat("CasinoTop_F_27"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
break;
case joaat("CasinoTop_F_28"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
break;
case joaat("CasinoTop_F_29"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
break;
case joaat("CasinoTop_F_30"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
break;
case joaat("CasinoTop_F_31"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
break;
case joaat("CasinoTop_F_32"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
break;
case joaat("CasinoTop_F_33"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
break;
case joaat("CasinoTop_F_34"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
break;
case joaat("CasinoTop_F_35"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
break;
case joaat("CasinoTop_F_36"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
break;
case joaat("CasinoTop_F_37"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
break;
case joaat("CasinoTop_F_38"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
break;
case joaat("CasinoTop_F_39"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
break;
case joaat("CasinoTop_F_40"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
break;
case joaat("CasinoTop_F_41"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
break;
case joaat("CasinoTop_F_42"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
break;
case joaat("CasinoTop_F_43"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
break;
case joaat("CasinoTop_F_44"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
break;
}
break;
case joaat("mpBattle_overlays"):
switch (iParam2){
case joaat("MP_Battle_Clothing_000_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_M"));
break;
}
switch (iParam2){
case joaat("MP_Battle_Clothing_000_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_F"));
break;
}
break;
case joaat("mpSmuggler_overlays"):
switch (iParam2){
case joaat("M_TankTop_Smug_5_3_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_M"));
break;
case joaat("M_TankTop_Smug_5_17_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_M"));
break;
case joaat("M_TankTop_Smug_5_10_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_M"));
break;
case joaat("M_TankTop_Smug_5_11_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_M"));
break;
case joaat("M_TankTop_Smug_5_12_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_M"));
break;
case joaat("M_TankTop_Smug_5_13_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_M"));
break;
case joaat("M_TankTop_Smug_5_20_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_M"));
break;
case joaat("M_TankTop_Smug_5_21_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_M"));
break;
case joaat("M_TankTop_Smug_5_23_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_M"));
break;
case joaat("M_TankTop_Smug_5_22_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_M"));
break;
case joaat("M_TankTop_Smug_5_5_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_M"));
break;
case joaat("M_TankTop_Smug_5_18_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_M"));
break;
case joaat("M_TankTop_Smug_5_0_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_M"));
break;
case joaat("M_TankTop_Smug_5_3_b"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_M"));
break;
case joaat("M_TankTop_Smug_5_25_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_M"));
break;
case joaat("M_TankTop_Smug_5_7_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_M"));
break;
case joaat("M_TankTop_Smug_5_4_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_M"));
break;
case joaat("M_TankTop_Smug_5_1_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_M"));
break;
case joaat("M_TankTop_Smug_5_9_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_M"));
break;
}
switch (iParam2){
case joaat("F_TankTop_Smug_5_3_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_F"));
break;
case joaat("F_TankTop_Smug_5_17_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_F"));
break;
case joaat("F_TankTop_Smug_5_10_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_F"));
break;
case joaat("F_TankTop_Smug_5_11_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_F"));
break;
case joaat("F_TankTop_Smug_5_12_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_F"));
break;
case joaat("F_TankTop_Smug_5_13_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_F"));
break;
case joaat("F_TankTop_Smug_5_20_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_F"));
break;
case joaat("F_TankTop_Smug_5_21_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_F"));
break;
case joaat("F_TankTop_Smug_5_23_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_F"));
break;
case joaat("F_TankTop_Smug_5_22_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_F"));
break;
case joaat("F_TankTop_Smug_5_5_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_F"));
break;
case joaat("F_TankTop_Smug_5_18_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_F"));
break;
case joaat("F_TankTop_Smug_5_0_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_F"));
break;
case joaat("F_TankTop_Smug_5_3_b"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_F"));
break;
case joaat("F_TankTop_Smug_5_25_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_F"));
break;
case joaat("F_TankTop_Smug_5_7_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_F"));
break;
case joaat("F_TankTop_Smug_5_4_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_F"));
break;
case joaat("F_TankTop_Smug_5_1_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_F"));
break;
case joaat("F_TankTop_Smug_5_9_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_F"));
break;
}
break;
case joaat("mpGunrunning_overlays"):
switch (iParam2){
case joaat("MP_Gunrunning_Award_020_M_ALT"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_M"));
break;
case joaat("MP_Gunrunning_Award_020_F_ALT"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_F"));
break;
}
break;
case joaat("mpExecutive_overlays"):
switch (iParam2){
case joaat("MP_Securoserv_000_Mb"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_M"));
break;
case joaat("MP_Securoserv_000_Fb"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_F"));
break;
}
break;
case joaat("mpHeist_overlays"):
switch (iParam2){
case joaat("MP_Elite_M_Tshirt_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_M_Tshirt_2"));
break;
case joaat("MP_Elite_F_Tshirt_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_F_Tshirt_2"));
break;
}
break;
case joaat("mpLuxe2_overlays"):
switch (iParam2){
case joaat("MP_Luxe_Tat_029_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_030_M"));
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_031_M"));
break;
case joaat("MP_Luxe_Tat_029_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_030_F"));
PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_031_F"));
break;
}
break;
}
return;
}
BOOL func_161(Ped pedParam0, const char* sParam1, int iParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0xC3B6{
Hash entityModel;
int num;
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
if(hParam4==0){
num=func_167(entityModel, sParam1, hParam4);
hParam4=MISC::GET_HASH_KEY(func_166(num));
}
if(iParam3==joaat("mpDummy")) return false;
switch (hParam4){
case joaat("CHEST_FULL"):
case joaat("CHEST_LEFT"):
case joaat("CHEST_MID"):
case joaat("CHEST_RIGHT"):
case joaat("CHEST_STOM"):
case joaat("CHEST_STOM_FULL"):
case joaat("SIDE_RIGHT"):
case joaat("TORSO_SIDE_LEFT"):
case joaat("TORSO_SIDE_RIGHT"):
case -1238079313:
case joaat("STOMACH_FULL"):
case joaat("STOMACH_LEFT"):
case joaat("STOMACH_LOWER_LEFT"):
case joaat("STOMACH_LOWER_RIGHT"):
case joaat("STOMACH_MID"):
case joaat("STOMACH_RIGHT"):
if(bParam5) return false;
if(hParam4==joaat("CHEST_FULL") || hParam4==joaat("CHEST_MID") && entityModel==joaat("MP_F_Freemode_01") || hParam4==joaat("CHEST_RIGHT") || hParam4==joaat("CHEST_STOM") || hParam4==joaat("CHEST_STOM_FULL")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_162(13, -1)){
return false;
}elseif(func_162(14, -1)){
return false;
}elseif(func_162(15, -1)){
return false;
}elseif(func_162(16, -1)){
return false;
}elseif(func_162(71, -1)){
return false;
}elseif(func_162(72, -1)){
}
}}elseif(Global_4540628==13){
return false;
}elseif(Global_4540628==14){
return false;
}elseif(Global_4540628==15){
return false;
}elseif(Global_4540628==16){
return false;
}elseif(Global_4540628==71){
return false;
}elseif(Global_4540628==72){
}}}elseif(hParam4==joaat("CHEST_LEFT")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_162(13, -1)){
return false;
}elseif(func_162(14, -1)){
return false;
}elseif(func_162(15, -1)){
return false;
}elseif(func_162(16, -1)){
return false;
}elseif(func_162(71, -1)){
return false;
}elseif(func_162(72, -1)){
}
}}elseif(Global_4540628==13){
return false;
}elseif(Global_4540628==14){
return false;
}elseif(Global_4540628==15){
return false;
}elseif(Global_4540628==16){
return false;
}elseif(Global_4540628==71){
return false;
}elseif(Global_4540628==72){
}}}elseif(hParam4==joaat("STOMACH_FULL") || hParam4==joaat("STOMACH_MID") || hParam4==joaat("STOMACH_LEFT")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_162(13, -1)){
}elseif(func_162(14, -1)){
return false;
}elseif(func_162(15, -1)){
return false;
}elseif(func_162(16, -1)){
}elseif(func_162(71, -1)){
return false;
}elseif(func_162(72, -1)){
}
}}elseif(Global_4540628==13){
}elseif(Global_4540628==14){
return false;
}elseif(Global_4540628==15){
return false;
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
return false;
}elseif(Global_4540628==72){
}}}elseif(hParam4==joaat("BACK_UPPER")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_162(13, -1)){
}elseif(func_162(14, -1)){
}elseif(func_162(15, -1)){
}elseif(func_162(16, -1)){
}elseif(func_162(71, -1)){
}elseif(func_162(72, -1)){
}
}}elseif(Global_4540628==13){
}elseif(Global_4540628==14){
}elseif(Global_4540628==15){
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
}}}
break;
case joaat("BACK_1"):
case joaat("BACK_FULL"):
case joaat("BACK_FULL_ARMS_FULL_BACK"):
case joaat("BACK_FULL_SHORT"):
case joaat("BACK_LOWER"):
case joaat("BACK_MID"):
case joaat("BACK_UPPER"):
case joaat("BACK_UPPER_LEFT"):
case joaat("BACK_UPPER_RIGHT"):
if(bParam8) return false;
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_162(13, -1)){
}
elseif(func_162(14, -1)){
}
elseif(func_162(15, -1)){
return false;
}
elseif(func_162(16, -1)){
}
elseif(func_162(71, -1)){
}
elseif(func_162(72, -1)){
return false;
}}}elseif(Global_4540628==13){
}elseif(Global_4540628==14){
}elseif(Global_4540628==15){
return false;
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
return false;
}}
break;
case joaat("crewLogo"):
if(bParam8)if(entityModel==joaat("MP_M_Freemode_01"))if(Global_4540628==-1)if(!Global_100733.f_1570)if(func_162(15, -1)) return false;
elseif(Global_4540628==15) return false;
if(bParam6) return false;
if(bParam5){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_162(13, -1)){
return false;
}
elseif(func_162(14, -1)){
return false;
}
elseif(func_162(15, -1)){
if(!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB" /*Crew Emblem Back*/)) return false;
}
elseif(func_162(16, -1)){
}
elseif(func_162(71, -1)){
}
elseif(func_162(72, -1)){
}}}elseif(Global_4540628==13){
return false;
}elseif(Global_4540628==14){
return false;
}elseif(Global_4540628==15){
if(!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB" /*Crew Emblem Back*/)) return false;
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
}}
break;
case 0:
case 2:
case joaat("rank"):
if(bParam5){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
switch (MISC::GET_HASH_KEY(sParam1)){
case joaat("TAT_FM_011"):
case joaat("TAT_FM_012"):
case joaat("TAT_FM_019"):
case joaat("TAT_FM_020"):
case joaat("TAT_FM_021"):
case joaat("TAT_FM_218"):
case joaat("TAT_FM_219"):
case joaat("TAT_FM_220"):
case joaat("TAT_FM_225"):
case joaat("TAT_FM_226"):
case joaat("TAT_FM_230"):
case joaat("TAT_FM_233"):
case joaat("TAT_FM_235"):
case joaat("TAT_FM_237"):
case joaat("TAT_FM_245"):
return false;
}}}
if(entityModel==joaat("MP_M_Freemode_01")){
}elseif(entityModel==joaat("MP_F_Freemode_01")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_162(13, -1)){
}elseif(func_162(14, -1)){
}elseif(func_162(15, -1)){
}elseif(func_162(16, -1)){
}elseif(func_162(71, -1)){
}elseif(func_162(72, -1)){
}
}}elseif(Global_4540628==13){
return false;
}elseif(Global_4540628==14){
}elseif(Global_4540628==15){
return false;
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
}}}
break;
case joaat("torsoDecal"):
if(bParam7) return false;
break;
}
return true;
}
BOOL func_162(int iParam0, int iParam1) // Position - 0xCBDC{
int num;
int num2;
if(iParam0==-1) return false;
num=func_163(iParam0, iParam1);
num2=func_114(iParam0);
if(num2 < 0 || num2 >=32) return false;
return IS_BIT_SET(num, num2);
}

int func_163(int iParam0, int iParam1) // Position - 0xCC1B{
eMPStat stat;
int num;
stat=func_165(iParam0);
if(stat==14192)if(func_89()==2 && func_164()==2) return 0;
else return 0;
num=_MPCHAR_STAT_GET_INT(stat, iParam1, 0);
return num;
}

int func_164() // Position - 0xCC62{
return Global_32164;
}
eMPStat func_165(int iParam0) // Position - 0xCC6D{
int num;
int num2;
num=iParam0;
num2=func_117(num);
if(func_89()==0 || func_164()==0 || func_89()==999 && func_164()==999){
switch (num2){
case 0:
return 1049;
case 1:
return 1050;
case 2:
return 1051;
case 3:
return 1052;
case 4:
return 1053;
case 5:
return 1054;
case 6:
return 1488;
case 7:
return 1489;
case 8:
return 1490;
case 9:
return 1491;
case 10:
return 1949;
case 11:
return 1950;
case 12:
return 1951;
case 13:
return 2425;
case 14:
return 2445;
case 15:
return 2448;
case 16:
return 2451;
case 17:
return 2615;
case 18:
return 2618;
case 19:
return 2621;
case 20:
return 3787;
case 21:
return 3790;
case 22:
return 3865;
case 23:
return 3868;
case 24:
return 3871;
case 25:
return 3874;
case 26:
return 5365;
case 27:
return 5368;
case 28:
return 5470;
case 29:
return 5473;
case 30:
return 6432;
case 31:
return 6435;
case 32:
return 7256;
case 33:
return 7259;
case 34:
return 7262;
case 35:
return 7971;
case 36:
return 7974;
case 37:
return 7977;
case 38:
return 7980;
case 39:
return 8502;
case 40:
return 8505;
case 41:
return 8508;
case 42:
return 8511;
case 43:
return 8907;
case 44:
return 8910;
case 45:
return 8913;
case 46:
return 10288;
case 47:
return 10291;
case 48:
return 10414;
case 49:
return 10417;
case 50:
return 11825;
case 51:
return 11828;
case 52:
break;
}
return 14192;
}
if(func_89()==2 && func_164()==2) return 14192;
return 14192;
}


char* func_166(int iParam0) // Position - 0xCFF0{
switch (iParam0){
case 0:
return "ARM_LEFT_FULL_SLEEVE";
case 1:
return "ARM_LEFT_SHORT_SLEEVE";
case 2:
return "ARM_LEFT_LOWER_SLEEVE";
case 3:
return "ARM_LEFT_LOWER_INNER";
case 4:
return "ARM_LEFT_LOWER_OUTER";
case 5:
return "ARM_LEFT_WRIST";
case 6:
return "ARM_LEFT_UPPER_SLEEVE";
case 7:
return "ARM_LEFT_UPPER_TRICEP";
case 8:
return "ARM_LEFT_UPPER_SIDE";
case 9:
return "ARM_LEFT_UPPER_BICEP";
case 10:
return "ARM_LEFT_SHOULDER";
case 11:
return "ARM_LEFT_ELBOW";
case 12:
return "ARM_RIGHT_FULL_SLEEVE";
case 13:
return "ARM_RIGHT_SHORT_SLEEVE";
case 14:
return "ARM_RIGHT_LOWER_SLEEVE";
case 15:
return "ARM_RIGHT_LOWER_INNER";
case 16:
return "ARM_RIGHT_LOWER_OUTER";
case 17:
return "ARM_RIGHT_WRIST";
case 18:
return "ARM_RIGHT_UPPER_SLEEVE";
case 19:
return "ARM_RIGHT_UPPER_TRICEP";
case 20:
return "ARM_RIGHT_UPPER_SIDE";
case 21:
return "ARM_RIGHT_UPPER_BICEP";
case 22:
return "ARM_RIGHT_SHOULDER";
case 23:
return "ARM_RIGHT_ELBOW";
case 24:
return "HAND_LEFT";
case 25:
return "HAND_RIGHT";
case 26:
return "BACK_FULL";
case 27:
return "BACK_FULL_ARMS_FULL_BACK";
case 28:
return "BACK_FULL_SHORT";
case 29:
return "BACK_MID";
case 30:
return "BACK_UPPER";
case 31:
return "BACK_UPPER_LEFT";
case 32:
return "BACK_UPPER_RIGHT";
case 33:
return "BACK_LOWER";
case 34:
return "BACK_LOWER_LEFT";
case 35:
return "BACK_LOWER_MID";
case 36:
return "BACK_LOWER_RIGHT";
case 37:
return "CHEST_FULL";
case 38:
return "CHEST_STOM";
case 39:
return "CHEST_STOM_FULL";
case 40:
return "CHEST_LEFT";
case 41:
return "CHEST_UPPER_LEFT";
case 42:
return "CHEST_RIGHT";
case 43:
return "CHEST_UPPER_RIGHT";
case 44:
return "CHEST_MID";
case 45:
return "TORSO_SIDE_RIGHT";
case 46:
return "TORSO_SIDE_LEFT";
case 47:
return "STOMACH_FULL";
case 48:
return "STOMACH_UPPER";
case 49:
return "STOMACH_UPPER_LEFT";
case 50:
return "STOMACH_UPPER_RIGHT";
case 51:
return "STOMACH_LOWER";
case 52:
return "STOMACH_LOWER_LEFT";
case 53:
return "STOMACH_LOWER_RIGHT";
case 54:
return "STOMACH_LEFT";
case 55:
return "STOMACH_RIGHT";
case 56:
return "FACE";
case 57:
return "HEAD_LEFT";
case 58:
return "HEAD_RIGHT";
case 59:
return "NECK_FRONT";
case 60:
return "NECK_BACK";
case 61:
return "NECK_LEFT_FULL";
case 62:
return "NECK_LEFT_BACK";
case 63:
return "NECK_RIGHT_FULL";
case 64:
return "NECK_RIGHT_BACK";
case 65:
return "LEG_LEFT_FULL_SLEEVE";
case 66:
return "LEG_LEFT_FULL_FRONT";
case 67:
return "LEG_LEFT_FULL_BACK";
case 68:
return "LEG_LEFT_UPPER_SLEEVE";
case 69:
return "LEG_LEFT_UPPER_FRONT";
case 70:
return "LEG_LEFT_UPPER_BACK";
case 71:
return "LEG_LEFT_UPPER_OUTER";
case 72:
return "LEG_LEFT_UPPER_INNER";
case 73:
return "LEG_LEFT_LOWER_SLEEVE";
case 74:
return "LEG_LEFT_LOWER_FRONT";
case 75:
return "LEG_LEFT_LOWER_BACK";
case 76:
return "LEG_LEFT_LOWER_OUTER";
case 77:
return "LEG_LEFT_LOWER_INNER";
case 78:
return "LEG_LEFT_KNEE";
case 79:
return "LEG_LEFT_ANKLE";
case 80:
return "LEG_LEFT_CALF";
case 81:
return "LEG_RIGHT_FULL_SLEEVE";
case 82:
return "LEG_RIGHT_FULL_FRONT";
case 83:
return "LEG_RIGHT_FULL_BACK";
case 84:
return "LEG_RIGHT_UPPER_SLEEVE";
case 85:
return "LEG_RIGHT_UPPER_FRONT";
case 86:
return "LEG_RIGHT_UPPER_BACK";
case 87:
return "LEG_RIGHT_UPPER_OUTER";
case 88:
return "LEG_RIGHT_UPPER_INNER";
case 89:
return "LEG_RIGHT_LOWER_SLEEVE";
case 90:
return "LEG_RIGHT_LOWER_FRONT";
case 91:
return "LEG_RIGHT_LOWER_BACK";
case 92:
return "LEG_RIGHT_LOWER_OUTER";
case 93:
return "LEG_RIGHT_LOWER_INNER";
case 94:
return "LEG_RIGHT_KNEE";
case 95:
return "LEG_RIGHT_ANKLE";
case 96:
return "LEG_RIGHT_CALF";
case 97:
return "FOOT_LEFT";
case 98:
return "FOOT_RIGHT";
}
return "";
}

int func_167(Hash hParam0, const char* sParam1, int iParam2) // Position - 0xD62D{
switch (iParam2){
case joaat("crewLogo"):
case joaat("hairOverlay"):
case joaat("torsoDecal"):
return -1;
}
switch (iParam2){
case joaat("ARM_LEFT_FULL_SLEEVE"):
return 0;
case joaat("ARM_LEFT_SHORT_SLEEVE"):
return 1;
case joaat("ARM_LEFT_LOWER_SLEEVE"):
return 2;
case joaat("ARM_LEFT_LOWER_INNER"):
return 3;
case joaat("ARM_LEFT_LOWER_OUTER"):
return 4;
case joaat("ARM_LEFT_WRIST"):
return 5;
case joaat("ARM_LEFT_UPPER_SLEEVE"):
return 6;
case joaat("ARM_LEFT_UPPER_TRICEP"):
return 7;
case joaat("ARM_LEFT_UPPER_SIDE"):
return 8;
case joaat("ARM_LEFT_UPPER_BICEP"):
return 9;
case joaat("ARM_LEFT_SHOULDER"):
return 10;
case joaat("ARM_LEFT_ELBOW"):
return 11;
case joaat("ARM_RIGHT_FULL_SLEEVE"):
return 12;
case joaat("ARM_RIGHT_SHORT_SLEEVE"):
return 13;
case joaat("ARM_RIGHT_LOWER_SLEEVE"):
return 14;
case joaat("ARM_RIGHT_LOWER_INNER"):
return 15;
case joaat("ARM_RIGHT_LOWER_OUTER"):
return 16;
case joaat("ARM_RIGHT_WRIST"):
return 17;
case joaat("ARM_RIGHT_UPPER_SLEEVE"):
return 18;
case joaat("ARM_RIGHT_UPPER_TRICEP"):
return 19;
case joaat("ARM_RIGHT_UPPER_SIDE"):
return 20;
case joaat("ARM_RIGHT_UPPER_BICEP"):
return 21;
case joaat("ARM_RIGHT_SHOULDER"):
return 22;
case joaat("ARM_RIGHT_ELBOW"):
return 23;
case joaat("HAND_LEFT"):
return 24;
case joaat("HAND_RIGHT"):
return 25;
case joaat("BACK_FULL"):
return 26;
case joaat("BACK_FULL_ARMS_FULL_BACK"):
return 27;
case joaat("BACK_FULL_SHORT"):
return 28;
case joaat("BACK_MID"):
return 29;
case joaat("BACK_UPPER"):
return 30;
case joaat("BACK_UPPER_LEFT"):
return 31;
case joaat("BACK_UPPER_RIGHT"):
return 32;
case joaat("BACK_LOWER"):
return 33;
case joaat("BACK_LOWER_LEFT"):
return 34;
case joaat("BACK_LOWER_MID"):
return 35;
case joaat("BACK_LOWER_RIGHT"):
return 36;
case joaat("CHEST_FULL"):
return 37;
case joaat("CHEST_STOM"):
return 38;
case joaat("CHEST_STOM_FULL"):
return 39;
case joaat("CHEST_LEFT"):
return 40;
case joaat("CHEST_UPPER_LEFT"):
return 41;
case joaat("CHEST_RIGHT"):
return 42;
case joaat("CHEST_UPPER_RIGHT"):
return 43;
case joaat("CHEST_MID"):
return 44;
case joaat("TORSO_SIDE_RIGHT"):
return 45;
case joaat("TORSO_SIDE_LEFT"):
return 46;
case joaat("STOMACH_FULL"):
return 47;
case joaat("STOMACH_UPPER"):
return 48;
case joaat("STOMACH_UPPER_LEFT"):
return 49;
case joaat("STOMACH_UPPER_RIGHT"):
return 50;
case joaat("STOMACH_LOWER"):
return 51;
case joaat("STOMACH_LOWER_LEFT"):
return 52;
case joaat("STOMACH_LOWER_RIGHT"):
return 53;
case joaat("STOMACH_LEFT"):
return 54;
case joaat("STOMACH_RIGHT"):
return 55;
case joaat("Face"):
return 56;
case joaat("HEAD_LEFT"):
return 57;
case joaat("HEAD_RIGHT"):
return 58;
case joaat("NECK_FRONT"):
return 59;
case joaat("NECK_BACK"):
return 60;
case joaat("NECK_LEFT_FULL"):
return 61;
case joaat("NECK_LEFT_BACK"):
return 62;
case joaat("NECK_RIGHT_FULL"):
return 63;
case joaat("NECK_RIGHT_BACK"):
return 64;
case joaat("LEG_LEFT_FULL_SLEEVE"):
return 65;
case joaat("LEG_LEFT_FULL_FRONT"):
return 66;
case joaat("LEG_LEFT_FULL_BACK"):
return 67;
case joaat("LEG_LEFT_UPPER_SLEEVE"):
return 68;
case joaat("LEG_LEFT_UPPER_FRONT"):
return 69;
case joaat("LEG_LEFT_UPPER_BACK"):
return 70;
case joaat("LEG_LEFT_UPPER_OUTER"):
return 71;
case joaat("LEG_LEFT_UPPER_INNER"):
return 72;
case joaat("LEG_LEFT_LOWER_SLEEVE"):
return 73;
case joaat("LEG_LEFT_LOWER_FRONT"):
return 74;
case joaat("LEG_LEFT_LOWER_BACK"):
return 75;
case joaat("LEG_LEFT_LOWER_OUTER"):
return 76;
case joaat("LEG_LEFT_LOWER_INNER"):
return 77;
case joaat("LEG_LEFT_KNEE"):
return 78;
case joaat("LEG_LEFT_ANKLE"):
return 79;
case joaat("LEG_LEFT_CALF"):
return 80;
case joaat("LEG_RIGHT_FULL_SLEEVE"):
return 81;
case joaat("LEG_RIGHT_FULL_FRONT"):
return 82;
case joaat("LEG_RIGHT_FULL_BACK"):
return 83;
case joaat("LEG_RIGHT_UPPER_SLEEVE"):
return 84;
case joaat("LEG_RIGHT_UPPER_FRONT"):
return 85;
case joaat("LEG_RIGHT_UPPER_BACK"):
return 86;
case joaat("LEG_RIGHT_UPPER_OUTER"):
return 87;
case joaat("LEG_RIGHT_UPPER_INNER"):
return 88;
case joaat("LEG_RIGHT_LOWER_SLEEVE"):
return 89;
case joaat("LEG_RIGHT_LOWER_FRONT"):
return 90;
case joaat("LEG_RIGHT_LOWER_BACK"):
return 91;
case joaat("LEG_RIGHT_LOWER_OUTER"):
return 92;
case joaat("LEG_RIGHT_LOWER_INNER"):
return 93;
case joaat("LEG_RIGHT_KNEE"):
return 94;
case joaat("LEG_RIGHT_ANKLE"):
return 95;
case joaat("LEG_RIGHT_CALF"):
return 96;
case joaat("FOOT_LEFT"):
return 97;
case joaat("FOOT_RIGHT"):
return 98;
}
switch (MISC::GET_HASH_KEY(sParam1)){
case joaat("NO_LABEL"):
return -1;
case joaat("TAT_FM_204"):
return 12;
case joaat("TAT_FM_205"):
return 12;
case joaat("TAT_FM_209"):
if(hParam0==joaat("MP_M_Freemode_01")) return 75;
else return 65;
break;
case joaat("TAT_FM_221"):
return 26;
case joaat("TAT_FM_219"):
return 47;
case joaat("TAT_FM_201"):
return 1;
case joaat("TAT_FM_222"):
return 75;
case joaat("TAT_FM_202"):
return 1;
case joaat("TAT_FM_210"):
return 89;
case joaat("TAT_FM_211"):
return 73;
case joaat("TAT_FM_247"):
return 22;
case joaat("TAT_FM_223"):
return 91;
case joaat("TAT_FM_213"):
return 26;
case joaat("TAT_FM_224"):
return 73;
case joaat("TAT_FM_225"):
return 38;
case joaat("TAT_FM_218"):
if(hParam0==joaat("MP_M_Freemode_01")) return 40;
else return 42;
break;
case joaat("TAT_FM_214"):
return 31;
case joaat("TAT_FM_226"):
return 42;
case joaat("TAT_FM_220"):
return 47;
case joaat("TAT_FM_227"):
return 75;
case joaat("TAT_FM_228"):
return 20;
case joaat("TAT_FM_215"):
return 32;
case joaat("TAT_FM_229"):
return 14;
case joaat("TAT_FM_230"):
return 52;
case joaat("TAT_FM_231"):
return 30;
case joaat("TAT_FM_232"):
return 6;
case joaat("TAT_FM_233"):
return 80;
case joaat("TAT_FM_207"):
return 13;
case joaat("TAT_FM_234"):
if(hParam0==joaat("MP_M_Freemode_01")) return 67;
else return 75;
break;
case joaat("TAT_FM_235"):
if(hParam0==joaat("MP_M_Freemode_01")) return 40;
else return 42;
break;
case joaat("TAT_FM_236"):
return 73;
case joaat("TAT_FM_237"):
return 47;
case joaat("TAT_FM_238"):
return 73;
case joaat("TAT_FM_203"):
return 10;
case joaat("TAT_FM_216"):
return 26;
case joaat("TAT_FM_011"):
return 42;
case joaat("TAT_FM_212"):
return 89;
case joaat("TAT_FM_239"):
return 16;
case joaat("TAT_FM_240"):
return 91;
case joaat("TAT_FM_241"):
return 82;
case joaat("TAT_FM_208"):
return 13;
case joaat("TAT_FM_017"):
return 75;
case joaat("TAT_FM_217"):
return 26;
case joaat("TAT_FM_242"):
return 10;
case joaat("TAT_FM_243"):
return 90;
case joaat("TAT_FM_244"):
return 89;
case joaat("TAT_FM_245"):
return 38;
case joaat("TAT_FM_010"):
return 20;
case joaat("TAT_FM_246"):
return 26;
case joaat("TAT_FM_206"):
return 18;
case joaat("TAT_FM_008"):
return 56;
case joaat("TAT_FM_009"):
return 3;
case joaat("TAT_FM_012"):
return 47;
case joaat("TAT_FM_013"):
if(hParam0==joaat("MP_M_Freemode_01")) return 28;
else return 26;
break;
case joaat("TAT_FM_014"):
return 89;
case joaat("TAT_FM_015"):
return 6;
case joaat("TAT_FM_016"):
return 33;
case joaat("TAT_FM_018"):
return 16;
case joaat("TAT_FM_019"):
return 40;
case joaat("TAT_FM_020"):
return 40;
case joaat("TAT_FM_021"):
return 40;
case joaat("TAT_FM_022"):
return 33;
case joaat("TAT_FM_023"):
return 6;
case joaat("TAT_FM_024"):
if(hParam0==joaat("MP_M_Freemode_01")) return 28;
else return 26;
break;
case joaat("TAT_FM_025"):
if(hParam0==joaat("MP_M_Freemode_01")) return 28;
else return 26;
break;
case joaat("TAT_FM_026"):
if(hParam0==joaat("MP_M_Freemode_01")) return 28;
else return 26;
break;
case joaat("TAT_FM_027"):
if(hParam0==joaat("MP_M_Freemode_01")) return 28;
else return 26;
break;
case joaat("TAT_BB_000"):
return 44;
case joaat("TAT_BB_001"):
return 32;
case joaat("TAT_BB_002"):
return 3;
case joaat("TAT_BB_003"):
return 33;
case joaat("TAT_BB_004"):
return 31;
case joaat("TAT_BB_005"):
return 33;
case joaat("TAT_BB_006"):
return 45;
case joaat("TAT_BB_007"):
return 89;
case joaat("TAT_BB_008"):
return 64;
case joaat("TAT_BB_009"):
return 53;
case joaat("TAT_BB_010"):
return 52;
case joaat("TAT_BB_011"):
return 30;
case joaat("TAT_BB_012"):
return 41;
case joaat("TAT_BB_013"):
return 43;
case joaat("TAT_BB_014"):
return 52;
case joaat("TAT_BB_015"):
return 20;
case joaat("TAT_BB_016"):
return 8;
case joaat("TAT_BB_017"):
return 10;
case joaat("TAT_BB_018"):
return 28;
case joaat("TAT_BB_019"):
return 40;
case joaat("TAT_BB_020"):
return 42;
case joaat("TAT_BB_021"):
return 56;
case joaat("TAT_BB_022"):
return 57;
case joaat("TAT_BB_023"):
return 52;
case joaat("TAT_BB_024"):
return 8;
case joaat("TAT_BB_025"):
return 91;
case joaat("TAT_BB_026"):
return 20;
case joaat("TAT_BB_027"):
return 75;
case joaat("TAT_BB_028"):
return 62;
case joaat("TAT_BB_029"):
return 63;
case joaat("TAT_BB_030") /* collision:
TORSO_P2_4_4 */:
return 20;
case joaat("TAT_BB_031") /* collision:
TORSO_P2_4_5 */:
return 58;
case joaat("TAT_BB_032") /* collision:
TORSO_P2_4_6 */:
return 47;
case joaat("TAT_BUS_F_002"):
return 37;
case joaat("TAT_BUS_F_000"):
return 33;
case joaat("TAT_BUS_F_006"):
return 80;
case joaat("TAT_BUS_F_007"):
return 64;
case joaat("TAT_BUS_F_008"):
return 62;
case joaat("TAT_BUS_F_010"):
return 96;
case joaat("TAT_BUS_F_009"):
return 15;
case joaat("TAT_BUS_F_011"):
return 48;
case joaat("TAT_BUS_F_003"):
return 37;
case joaat("TAT_BUS_F_001"):
return 33;
case joaat("TAT_BUS_F_005"):
return 3;
case joaat("TAT_BUS_F_004"):
return 41;
case joaat("TAT_BUS_F_012"):
return 52;
case joaat("TAT_BUS_F_013"):
return 53;
case joaat("TAT_BUS_005"):
return 59;
case joaat("TAT_BUS_003"):
return 3;
case joaat("TAT_BUS_011"):
return 48;
case joaat("TAT_BUS_000"):
return 33;
case joaat("TAT_BUS_006"):
return 64;
case joaat("TAT_BUS_007"):
return 62;
case joaat("TAT_BUS_008"):
return 60;
case joaat("TAT_BUS_009"):
return 20;
case joaat("TAT_BUS_001"):
return 40;
case joaat("TAT_BUS_002"):
return 42;
case joaat("TAT_BUS_004"):
return 11;
case joaat("TAT_BUS_010"):
return 15;
case joaat("TAT_BUS_012"):
return 40;
case joaat("TAT_BUS_013"):
return 22;
case joaat("TAT_BUS_F_014"):
return 40;
case joaat("TAT_BUS_F_015"):
return 22;
case joaat("TAT_HP_000"):
return 30;
case joaat("TAT_HP_001"):
return 19;
case joaat("TAT_HP_002"):
return 40;
case joaat("TAT_HP_003"):
return 4;
case joaat("TAT_HP_004"):
return 15;
case joaat("TAT_HP_005"):
return 62;
case joaat("TAT_HP_006"):
return 45;
case joaat("TAT_HP_007"):
return 24;
case joaat("TAT_HP_008"):
return 22;
case joaat("TAT_HP_009"):
return 80;
case joaat("TAT_HP_010"):
return 25;
case joaat("TAT_HP_011"):
return 30;
case joaat("TAT_HP_012"):
return 30;
case joaat("TAT_HP_013"):
return 44;
case joaat("TAT_HP_014"):
return 15;
case joaat("TAT_HP_015"):
return 9;
case joaat("TAT_HP_016"):
return 3;
case joaat("TAT_HP_017"):
return 16;
case joaat("TAT_HP_018"):
return 17;
case joaat("TAT_HP_019"):
return 75;
case joaat("TAT_HP_020"):
return 23;
case joaat("TAT_HP_021"):
return 64;
case joaat("TAT_HP_022"):
return 16;
case joaat("TAT_HP_023"):
return 25;
case joaat("TAT_HP_024"):
return 32;
case joaat("TAT_HP_025"):
return 31;
case joaat("TAT_HP_026"):
return 10;
case joaat("TAT_HP_027"):
return 5;
case joaat("TAT_HP_028"):
return 4;
case joaat("TAT_HP_029"):
return 52;
case joaat("TAT_HP_030"):
return 35;
case joaat("TAT_HP_031"):
return 30;
case joaat("TAT_HP_032"):
return 32;
case joaat("TAT_HP_033"):
return 38;
case joaat("TAT_HP_034"):
return 24;
case joaat("TAT_HP_035"):
return 52;
case joaat("TAT_HP_036"):
return 20;
case joaat("TAT_HP_037"):
return 10;
case joaat("TAT_HP_038"):
return 92;
case joaat("TAT_HP_039"):
return 0;
case joaat("TAT_HP_040"):
return 80;
case joaat("TAT_HP_041"):
return 34;
case joaat("TAT_HP_042"):
return 91;
case joaat("TAT_HP_043"):
return 10;
case joaat("TAT_HP_044"):
return 22;
case joaat("TAT_HP_045"):
return 14;
case joaat("TAT_HP_046"):
return 30;
case joaat("TAT_HP_047"):
return 40;
case joaat("TAT_HP_048"):
return 24;
}
if(iParam2==0 && MISC::IS_STRING_NULL_OR_EMPTY(sParam1)) return -1;
switch (iParam2){
case joaat("rank"):
return -1;
}
return -1;
}
BOOL func_168(char* sParam0, int iParam1, int iParam2, Ped pedParam3, int iParam4) // Position - 0xE65F{
Hash entityModel;
int num;
func_175(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
if(ENTITY::DOES_ENTITY_EXIST(pedParam3) && !PED::IS_PED_INJURED(pedParam3)) entityModel=ENTITY::GET_ENTITY_MODEL(pedParam3);
switch (iParam2){
case 0:
switch (iParam1){
case 0:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
break;
case 1:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
break;
case 2:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
break;
case 3:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
break;
case 4:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
break;
case 5:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
break;
case 6:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
break;
case 7:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
break;
case 8:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
break;
case 9:
if(func_174() || func_173()){
num=400;
if(_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_171() || func_170()) num=0;
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, num, 2);
}
break;
case 10:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
break;
case 11:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
break;
case 12:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
break;
case 13:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
break;
case 14:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
break;
case 15:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
break;
case 16:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
break;
case 17:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
break;
case 18:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
break;
case 19:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
break;
case 20:
func_175(sParam0, iParam1, pedParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
break;
default:
func_169(sParam0, iParam2, iParam1, 21);
break;
}
break;
case 1:
switch (iParam1){
case 0:
if(func_174() || func_173()){
num=450;
if(_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_171() || func_170()) num=0;
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, num, 0);
}
break;
case 1:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
break;
case 2:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
break;
case 3:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
break;
case 4:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
break;
case 5:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
break;
case 6:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
break;
case 7:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
break;
case 8:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
break;
case 9:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
break;
case 10:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
break;
case 11:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
break;
case 12:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
break;
case 13:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
break;
case 14:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
break;
case 15:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
break;
case 16:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
break;
case 17:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
break;
case 18:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
break;
case 19:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
break;
case 20:
break;
case 21:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
break;
case 22:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
break;
case 23:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
break;
case 24:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
break;
case 25:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
break;
case 26:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
break;
case 27:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
break;
case 28:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
break;
case 29:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
break;
case 30:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
break;
case 31:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
break;
case 32:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
break;
case 33:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
break;
case 34:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
break;
case 35:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
break;
case 36:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
break;
case 37:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
break;
case 38:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
break;
case 39:
func_175(sParam0, iParam1, pedParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
break;
default:
func_169(sParam0, iParam2, iParam1, 40);
break;
}
break;
case 2:
switch (iParam1){
case 0:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
break;
case 1:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
break;
case 2:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
break;
case 3:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
break;
case 4:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
break;
case 5:
if(func_174() || func_173()){
num=380;
if(_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_171() || func_170()) num=0;
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, num, 3);
}
break;
case 6:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
break;
case 7:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
break;
case 8:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
break;
case 9:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
break;
case 10:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
break;
case 11:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
break;
case 12:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
break;
case 13:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
break;
case 14:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
break;
case 15:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
break;
case 16:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
break;
case 17:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
break;
case 18:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
break;
case 19:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
break;
case 20:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
break;
case 21:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
break;
case 22:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
break;
case 23:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
break;
case 24:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
break;
case 25:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
break;
case 26:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
break;
case 27:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
break;
case 28:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
break;
case 29:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
break;
case 30:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
break;
case 31:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
break;
case 32:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
break;
case 33:
func_175(sParam0, iParam1, pedParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
break;
default:
func_169(sParam0, iParam2, iParam1, 34);
break;
}
break;
case 3:
case 4:
switch (iParam1){
case 0:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(20000) * Global_262145.f_2917), 0);
break;
case 1:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1400) * Global_262145.f_2918), 2);
break;
case 2:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(9750) * Global_262145.f_2919), 3);
break;
case 3:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2150) * Global_262145.f_2920), 0);
break;
case 4:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2921), 0);
break;
case 54:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12400) * Global_262145.f_2922), 1);
break;
case 5:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3500) * Global_262145.f_2923), 0);
break;
case 6:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4950) * Global_262145.f_2924), 2);
break;
case 55:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1350) * Global_262145.f_2925), 1);
break;
case 7:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1450) * Global_262145.f_2926), 0);
break;
case 8:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2700) * Global_262145.f_2927), 7);
break;
case 9:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1200) * Global_262145.f_2928), 0);
break;
case 10:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1500) * Global_262145.f_2929), 0);
break;
case 11:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2650) * Global_262145.f_2930), 0);
break;
case 56:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1900) * Global_262145.f_2931), 1);
break;
case 12:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4950) * Global_262145.f_2932), 2);
break;
case 57:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2400) * Global_262145.f_2933), 1);
break;
case 58:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2934), 1);
break;
case 59:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7400) * Global_262145.f_2935), 1);
break;
case 60:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2936), 1);
break;
case 17:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2400) * Global_262145.f_2941), 2);
break;
case 18:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2942), 2);
break;
case 19:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3600) * Global_262145.f_2943), 2);
break;
case 20:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2944), 3);
break;
case 21:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12500) * Global_262145.f_2945), 3);
break;
case 22:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2946), 3);
break;
case 23:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2947), 3);
break;
case 24:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2948), 3);
break;
case 25:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3750) * Global_262145.f_2949), 2);
break;
case 26:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3750) * Global_262145.f_2950), 3);
break;
case 27:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4800) * Global_262145.f_2951), 3);
break;
case 28:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3500) * Global_262145.f_2952), 3);
break;
case 61:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12350) * Global_262145.f_2953), 1);
break;
case 62:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1900) * Global_262145.f_2954), 1);
break;
case 63:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4500) * Global_262145.f_2955), 1);
break;
case 64:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12250) * Global_262145.f_2956), 1);
break;
case 65:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12300) * Global_262145.f_2957), 1);
break;
case 29:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2500) * Global_262145.f_2958), 0);
break;
case 30:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2959), 0);
break;
case 31:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2960), 0);
break;
case 66:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2961), 1);
break;
case 32:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2962), 2);
break;
case 33:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7300) * Global_262145.f_2963), 3);
break;
case 34:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7250) * Global_262145.f_2964), 2);
break;
case 35:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(11900) * Global_262145.f_2965), 0);
break;
case 36:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2750) * Global_262145.f_2966), 0);
break;
case 37:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1750) * Global_262145.f_2967), 0);
break;
case 38:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7300) * Global_262145.f_2968), 3);
break;
case 39:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3250) * Global_262145.f_2969), 2);
break;
case 40:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1000) * Global_262145.f_2970), 0);
break;
case 67:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2971), 1);
break;
case 41:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2972), 2);
break;
case 68:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2973), 1);
break;
case 42:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5050) * Global_262145.f_2974), 0);
break;
case 43:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2450) * Global_262145.f_2975), 2);
break;
case 44:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4950) * Global_262145.f_2976), 0);
break;
case 45:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2977), 0);
break;
case 46:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12250) * Global_262145.f_2978), 0);
break;
case 47:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1150) * Global_262145.f_2979), 3);
break;
case 48:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2980), 3);
break;
case 49:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7600) * Global_262145.f_2981), 3);
break;
case 50:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2600) * Global_262145.f_2982), 2);
break;
case 51:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2500) * Global_262145.f_2983), 3);
break;
case 52:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7450) * Global_262145.f_2984), 3);
break;
case 53:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2985), 0);
break;
case 69:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2986), 1);
break;
case 70:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2500) * Global_262145.f_2987), 2);
break;
}
if(entityModel==joaat("MP_M_Freemode_01")){
switch (iParam1){
case 73:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
break;
case 74:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
break;
case 75:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
break;
case 76:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
break;
case 77:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
break;
case 78:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
break;
case 79:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
break;
case 80:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
break;
case 81:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
break;
case 82:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
break;
case 83:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
break;
case 84:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
break;
case 85:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
break;
case 86:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
break;
case 90:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
break;
case 91:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
break;
case 124:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
break;
case 125:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
break;
case 87:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2988), 0);
break;
case 88:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2989), 0);
break;
case 89:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2990), 0);
break;
case 93:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 94:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
break;
case 95:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
break;
case 96:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
break;
case 97:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
break;
case 98:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
break;
case 99:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
break;
case 100:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
break;
case 101:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
break;
case 102:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
break;
case 103:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
break;
case 104:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
break;
case 105:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
break;
case 106:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
break;
case 107:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
break;
case 108:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 109:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 110:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 111:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 112:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 113:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 114:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 115:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 116:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 117:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 123:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
break;
case 13:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_100" /*Crew Emblem Small*/, "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2937), 0);
break;
case 14:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_101" /*Crew Emblem Large*/, "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2938), 0);
break;
case 15:
func_175(sParam0, iParam1, pedParam3, "TAT_FMM_CLB" /*Crew Emblem Back*/, "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2939), 2);
break;
case 16:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_100" /*Crew Emblem Small*/, "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2940), 0);
break;
case 71:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_101" /*Crew Emblem Large*/, "multiplayer_overlays", "000_E", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2940), 0);
break;
case 72:
func_175(sParam0, iParam1, pedParam3, "TAT_FMM_CLB" /*Crew Emblem Back*/, "multiplayer_overlays", "000_F", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2940), 0);
break;
}}elseif(entityModel==joaat("MP_F_Freemode_01")){
switch (iParam1){
case 73:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
break;
case 74:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
break;
case 75:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
break;
case 76:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
break;
case 77:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
break;
case 78:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
break;
case 79:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
break;
case 80:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
break;
case 81:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
break;
case 82:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
break;
case 83:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
break;
case 84:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
break;
case 85:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
break;
case 92:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
break;
case 87:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2988), 0);
break;
case 88:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2989), 0);
break;
case 89:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2990), 0);
break;
case 93:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 94:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
break;
case 95:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
break;
case 96:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
break;
case 97:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
break;
case 98:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
break;
case 99:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
break;
case 100:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
break;
case 101:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
break;
case 102:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
break;
case 103:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
break;
case 104:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
break;
case 105:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
break;
case 106:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
break;
case 107:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
break;
case 108:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 109:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 110:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 111:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 112:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 113:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 114:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 115:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 116:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 117:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 118:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 119:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 120:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 121:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 122:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 123:
func_175(sParam0, iParam1, pedParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
break;
case 13:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_100" /*Crew Emblem Small*/, "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2937), 0);
break;
case 14:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_100" /*Crew Emblem Small*/, "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2938), 0);
break;
case 15:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_101" /*Crew Emblem Large*/, "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2939), 2);
break;
case 16:
func_175(sParam0, iParam1, pedParam3, "TAT_FM_101" /*Crew Emblem Large*/, "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2940), 0);
break;
}}
break;
}
if(iParam2==3 || iParam2==4 && iParam1 >=129) func_169(sParam0, iParam2, iParam1, 129);
if(iParam4==22) sParam0->f_7=sParam0->f_7 * 2;
return sParam0->f_11 !=-1;
}


void func_169(char* sParam0, int iParam1, int iParam2, int iParam3) // Position - 0x11605{
int decorationIndex;
int numTattooShopDlcItems;
Hash outComponent;
decorationIndex=iParam2 - iParam3;
numTattooShopDlcItems=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iParam1);
if(numTattooShopDlcItems > 0 && decorationIndex < numTattooShopDlcItems){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iParam1, decorationIndex, &outComponent)){
if(!FILES::IS_CONTENT_ITEM_LOCKED(outComponent)){
sParam0->f_11=iParam2;
TEXT_LABEL_COPY(sParam0,{
outComponent.f_7 
}
, 4);
sParam0->f_5=outComponent.f_3;
sParam0->f_4=outComponent.f_2;
sParam0->f_8=outComponent.f_6;
sParam0->f_6=iParam1;
sParam0->f_7=outComponent.f_4;
sParam0->f_9=iParam2 / 32;
sParam0->f_10=iParam2 % 32;
sParam0->f_12=outComponent.f_5;
}}}
return;
}

int func_170() // Position - 0x11697{
int outValue;
int outValue2;
Hash statHash;
int profileSetting;
int profileSetting2;
if(IS_BIT_SET(Global_25, 5))if(IS_BIT_SET(Global_25, 1) || IS_BIT_SET(Global_25, 3)) return 1;
else return 0;
if(STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &outValue, -1))if(IS_BIT_SET(outValue, 5))if(IS_BIT_SET(outValue, 1) || IS_BIT_SET(outValue, 3)) return 1;
else return 0;
if(STATS::STAT_SLOT_IS_LOADED(0)){
if(Global_152525.f_3){
statHash=joaat("MPPLY_PLAT_UP_LB_CHECK");
if(STATS::STAT_GET_INT(statHash, &outValue2, -1))if(IS_BIT_SET(outValue2, 5)) return 1;
}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
profileSetting=MISC::GET_PROFILE_SETTING(866);
if(IS_BIT_SET(profileSetting, 1) || IS_BIT_SET(profileSetting, 3)) return 1;
}
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(unk_0x8BD41D5945F5762B()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT()){
STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting2, -1);
MISC::SET_BIT(&profileSetting2, 1);
MISC::SET_BIT(&profileSetting2, 3);
MISC::SET_BIT(&profileSetting2, 5);
MISC::SET_BIT(&Global_25, 1);
MISC::SET_BIT(&Global_25, 3);
MISC::SET_BIT(&Global_25, 5);
STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting2, true);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
profileSetting2=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&profileSetting2, 1);
MISC::SET_BIT(&profileSetting2, 3);
STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting2);
}
return 1;
}}}
return 0;
}

int func_171() // Position - 0x117D0{
int outValue;
int outValue2;
Hash statHash;
int profileSetting;
if(IS_BIT_SET(Global_25, 6))if(IS_BIT_SET(Global_25, 2) || IS_BIT_SET(Global_25, 4)) return 1;
else return 0;
if(STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &outValue, -1))if(IS_BIT_SET(outValue, 6))if(IS_BIT_SET(outValue, 2) || IS_BIT_SET(outValue, 4)) return 1;
else return 0;
if(STATS::STAT_SLOT_IS_LOADED(0)){
if(Global_152525.f_3){
statHash=joaat("MPPLY_PLAT_UP_LB_CHECK");
if(STATS::STAT_GET_INT(statHash, &outValue2, -1))if(IS_BIT_SET(outValue2, 8)) return 1;
}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
profileSetting=MISC::GET_PROFILE_SETTING(866);
if(IS_BIT_SET(profileSetting, 2) || IS_BIT_SET(profileSetting, 4)) return 1;
}
return 0;
}
BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x11886{
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

int func_173() // Position - 0x1193E{
return 1;
}

int func_174() // Position - 0x11947{
return 1;
}


void func_175(char* sParam0, int iParam1, Ped pedParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9) // Position - 0x11950{
var unk;
sParam0->f_11=iParam1;
TEXT_LABEL_ASSIGN_STRING(sParam0, sParam3, 16);
sParam0->f_4=MISC::GET_HASH_KEY(sParam4);
sParam0->f_5=MISC::GET_HASH_KEY(sParam5);
sParam0->f_8=MISC::GET_HASH_KEY(sParam6);
sParam0->f_6=iParam7;
sParam0->f_7=iParam8;
sParam0->f_9=iParam1 / 32;
sParam0->f_10=iParam1 % 32;
sParam0->f_12=iParam9;
if(ENTITY::DOES_ENTITY_EXIST(pedParam2) && !PED::IS_PED_INJURED(pedParam2)){
if(sParam0->f_6==0 || sParam0->f_6==1 || sParam0->f_6==2){
}elseif(sParam0->f_6==3 || sParam0->f_6==4){
TEXT_LABEL_ASSIGN_STRING(&unk, "", 32);
if(sParam0->f_11==13 || sParam0->f_11==14 || sParam0->f_11==15 || sParam0->f_11==16 || sParam0->f_11==71 || sParam0->f_11==72){
TEXT_LABEL_APPEND_STRING(&unk, "FM_", 32);
TEXT_LABEL_APPEND_STRING(&unk, "CREW_", 32);
if(ENTITY::GET_ENTITY_MODEL(pedParam2)==joaat("MP_M_Freemode_01")) TEXT_LABEL_APPEND_STRING(&unk, "M_", 32);
else TEXT_LABEL_APPEND_STRING(&unk, "F_", 32);
TEXT_LABEL_APPEND_STRING(&unk, sParam5, 32);
}elseif(MISC::ARE_STRINGS_EQUAL(sParam6, "torsoDecal") || MISC::ARE_STRINGS_EQUAL(sParam6, "hairOverlay")){
TEXT_LABEL_ASSIGN_STRING(&unk, sParam5, 32);
}else{
if(sParam0->f_11==0 || sParam0->f_11==1 || sParam0->f_11==2 || sParam0->f_11==4 || sParam0->f_11==3 || sParam0->f_11==54 || sParam0->f_11==5 || sParam0->f_11==6 || sParam0->f_11==55 || sParam0->f_11==7 || sParam0->f_11==8 || sParam0->f_11==9 || sParam0->f_11==10 || sParam0->f_11==11 || sParam0->f_11==56 || sParam0->f_11==12 || sParam0->f_11==57 || sParam0->f_11==58 || sParam0->f_11==59 || sParam0->f_11==60) TEXT_LABEL_APPEND_STRING(&unk, "FM_Tat_Award_", 32);
else TEXT_LABEL_APPEND_STRING(&unk, "FM_Tat_", 32);
if(ENTITY::GET_ENTITY_MODEL(pedParam2)==joaat("MP_M_Freemode_01") || sParam0->f_11==20) TEXT_LABEL_APPEND_STRING(&unk, "M_", 32);
else TEXT_LABEL_APPEND_STRING(&unk, "F_", 32);
TEXT_LABEL_APPEND_STRING(&unk, sParam5, 32);
}
sParam0->f_5=MISC::GET_HASH_KEY(&unk);
if(PED::GET_PED_DECORATION_ZONE_FROM_HASHES(sParam0->f_4, sParam0->f_5)==7) sParam0->f_11=-1;
}}
return;
}
BOOL func_176(Ped pedParam0, int iParam1) // Position - 0x11C05{
int pedDrawableVariation;
int pedTextureVariation;
int num;
int num2;
Hash componentHash;
int num3;
Hash componentHash2;
if(!PED::IS_PED_INJURED(pedParam0)){
if(ENTITY::GET_ENTITY_MODEL(pedParam0)==joaat("MP_M_Freemode_01")){
pedDrawableVariation=PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB);
num=_MPCHAR_STAT_GET_INT(MP_STAT_TSHIRT_DECAL_HASH, -1, 0);
if(iParam1 !=-1) num=iParam1;
if(pedDrawableVariation > 15){
num2=func_181(pedParam0, 11, PV_COMP_INVALID);
if(num2 >=237){
componentHash=func_177(joaat("MP_M_Freemode_01"), num2, 11, 3);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("MULTI_DECAL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("TAT_DECL_NO_SAVE"), 0)){
switch (num){
case joaat("MP_Elite_M_Tshirt_1"):
case joaat("MP_Battle_Clothing_000_M"):
case joaat("MP_Heist4_Tee_039_M"):
case joaat("MP_Heist4_Tee_041_M"):
case joaat("MP_Heist4_Tee_043_M"):
case joaat("MP_Heist4_Tee_049_M"):
case joaat("MP_Heist4_Tee_051_M"):
case joaat("MP_Heist4_Tee_055_M"):
case joaat("MP_Heist4_Tee_057_M"):
case joaat("MP_Heist4_Tee_059_M"):
case joaat("MP_Heist4_Tee_061_M"):
case joaat("MP_Heist4_Tee_063_M"):
case joaat("MP_Heist4_Tee_065_M"):
case joaat("MP_Tuner_Tee_000_M"):
case joaat("MP_Tuner_Tee_002_M"):
case joaat("MP_Tuner_Tee_003_M"):
case joaat("MP_Tuner_Tee_005_M"):
case joaat("MP_Tuner_Tee_006_M"):
case joaat("MP_Tuner_Tee_008_M"):
case joaat("MP_Tuner_Tee_010_M"):
case -507124931:
return 1;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("BIKER_VEST"), 0)){
return 1;
}
return 0;
}}
return 0;
}elseif(ENTITY::GET_ENTITY_MODEL(pedParam0)==joaat("MP_F_Freemode_01")){
pedDrawableVariation=PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB);
pedTextureVariation=PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_JBIB);
num=_MPCHAR_STAT_GET_INT(MP_STAT_TSHIRT_DECAL_HASH, -1, 0);
if(iParam1 !=-1) num=iParam1;
if(pedDrawableVariation==3){
if(pedTextureVariation==14) return 1;
}elseif(pedDrawableVariation > 15){
num3=func_181(pedParam0, 11, PV_COMP_INVALID);
if(num3 >=256){
componentHash2=func_177(joaat("MP_F_Freemode_01"), num3, 11, 4);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("MULTI_DECAL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("TAT_DECL_NO_SAVE"), 0)){
switch (num){
case joaat("MP_Elite_F_Tshirt_1"):
case joaat("MP_Battle_Clothing_000_F"):
case joaat("MP_Heist4_Tee_039_F"):
case joaat("MP_Heist4_Tee_041_F"):
case joaat("MP_Heist4_Tee_043_F"):
case joaat("MP_Heist4_Tee_049_F"):
case joaat("MP_Heist4_Tee_051_F"):
case joaat("MP_Heist4_Tee_055_F"):
case joaat("MP_Heist4_Tee_057_F"):
case joaat("MP_Heist4_Tee_059_F"):
case joaat("MP_Heist4_Tee_061_F"):
case joaat("MP_Heist4_Tee_063_F"):
case joaat("MP_Heist4_Tee_065_F"):
case joaat("MP_Tuner_Tee_000_F"):
case joaat("MP_Tuner_Tee_002_F"):
case joaat("MP_Tuner_Tee_003_F"):
case joaat("MP_Tuner_Tee_005_F"):
case joaat("MP_Tuner_Tee_006_F"):
case joaat("MP_Tuner_Tee_008_F"):
case joaat("MP_Tuner_Tee_010_F"):
case -2045170715:
return 1;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("BIKER_VEST"), 0)){
return 1;
}
return 0;
}}
return 0;
}}
return 0;
}
Hash func_177(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x11EC7{
var outProp;
int componentId;
int num;
var outComponent;
int componentId2;
int num2;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&outProp);
componentId=iParam1 - func_180(hParam0);
if(componentId < 0) return -1;
num=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
if(num <=componentId) return -1;
FILES::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
return outProp.f_1;
}else{
FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
componentId2=iParam1 - func_178(hParam0, func_179(iParam2));
if(componentId2 < 0) return -1;
if(hParam0==Global_78491.f_26[iParam2] && iParam1==Global_78491[iParam2] && Global_78491.f_13[iParam2] !=0) return Global_78491.f_13[iParam2];
num2=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_179(iParam2));
if(num2 <=componentId2) return -1;
FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
Global_78491.f_13[iParam2]=outComponent.f_1;
Global_78491[iParam2]=iParam1;
Global_78491.f_26[iParam2]=hParam0;
return outComponent.f_1;
}
return -1;
}

int func_178(Hash hParam0, int iParam1) // Position - 0x11FE1{
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
ePedComponentType func_179(int iParam0) // Position - 0x12388{
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

int func_180(Hash hParam0) // Position - 0x12438{
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

int func_181(Ped pedParam0, int iParam1, ePedComponentType epctParam2) // Position - 0x12499{
int i;
int j;
if(!PED::IS_PED_INJURED(pedParam0)){
if(iParam1==12){
for (i=0;
i <=53;
i=i + 1){
if(func_190(pedParam0, iParam1, i)) return i;
}}elseif(iParam1==13){
for (j=0;
j <=19;
j=j + 1){
if(func_190(pedParam0, iParam1, j)) return j;
}
return 31;
}elseif(iParam1==14){
if(epctParam2==PV_COMP_INVALID){
}else{
return func_184(pedParam0, epctParam2);
}}else{
return func_182(pedParam0, iParam1);
}}
return -99;
}

int func_182(Ped pedParam0, int iParam1) // Position - 0x1253A{
ePedComponentType componentId;
int pedDrawableVariation;
int pedTextureVariation;
if(iParam1==12 || iParam1==13 || iParam1==14 || PED::IS_PED_INJURED(pedParam0)) return -99;
componentId=func_179(iParam1);
pedDrawableVariation=PED::GET_PED_DRAWABLE_VARIATION(pedParam0, componentId);
pedTextureVariation=PED::GET_PED_TEXTURE_VARIATION(pedParam0, componentId);
return func_183(pedParam0, pedDrawableVariation, pedTextureVariation, iParam1);
}

int func_183(Ped pedParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1259A{
ePedComponentType componentId;
int numberOfPedDrawableVariations;
int num;
int i;
componentId=func_179(iParam3);
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

int func_184(Ped pedParam0, ePedComponentType epctParam1) // Position - 0x125F1{
int pedPropIndex;
int pedPropTextureIndex;
if(PED::IS_PED_INJURED(pedParam0)) return -99;
pedPropIndex=PED::GET_PED_PROP_INDEX(pedParam0, epctParam1, 1);
if(pedPropIndex==-1) return func_189(epctParam1);
pedPropTextureIndex=PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, epctParam1);
return func_185(pedParam0, pedPropIndex, pedPropTextureIndex, epctParam1);
}

int func_185(Ped pedParam0, int iParam1, int iParam2, ePedComponentType epctParam3) // Position - 0x12638{
Hash entityModel;
Hash hashNameForProp;
int numberOfPedPropDrawableVariations;
int num;
int i;
int j;
int numberOfPedPropTextureVariations;
if(iParam1==-1) return func_189(epctParam3);
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
hashNameForProp=FILES::GET_HASH_NAME_FOR_PROP(pedParam0, epctParam3, iParam1, iParam2);
if(hashNameForProp !=-1 && hashNameForProp !=0)if(entityModel==joaat("MP_M_Freemode_01")) return func_187(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 3);
elseif(entityModel==joaat("MP_F_Freemode_01")) return func_187(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 4);
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
num=num + func_186(pedParam0, epctParam3);
return num;
}else{
num=num + 1;
}}}}
return func_189(epctParam3);
}

int func_186(Ped pedParam0, ePedComponentType epctParam1) // Position - 0x12734{
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

int func_187(Hash hParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x12872{
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
if(unk.f_1==hParam1) return func_188(hParam0) + i;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
shopPedQueryPropIndex=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(hParam1);
if(shopPedQueryPropIndex !=-1) return func_180(hParam0) + shopPedQueryPropIndex;
}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_179(iParam2));
shopPedQueryComponentIndex=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(hParam1);
if(shopPedQueryComponentIndex !=-1) return func_178(hParam0, func_179(iParam2)) + shopPedQueryComponentIndex;
}
return -99;
}

int func_188(Hash hParam0) // Position - 0x1292D{
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

int func_189(ePedComponentType epctParam0) // Position - 0x1298C{
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
BOOL func_190(Ped pedParam0, int iParam1, int iParam2) // Position - 0x12A12{
Hash entityModel;
int num;
Hash hash;
Hash hash2;
int num2;
ePedComponentType i;
int j;
int k;
var unk;
var unk18;
int l;
var unk28;
int m;
Hash nameHash;
var enumValue;
var anchorPoint;
int shopPedApparelVariantPropCount;
var outProp;
int num3;
if(PED::IS_PED_INJURED(pedParam0)) return false;
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
Global_78341[1 /*14*/]={
func_206(entityModel, iParam1, iParam2, -1) 
};
hash=Global_2883588;
hash2=Global_2883589;
if(!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)) return false;
if(iParam1==12){
unk={
func_202(entityModel, iParam2) 
};
for (k=0;
k < 7;
k=k + 1){
switch (k){
case 0:
num2=1;
break;
case 1:
num2=4;
break;
case 2:
num2=6;
break;
case 3:
num2=7;
break;
case 4:
num2=8;
break;
case 5:
num2=11;
break;
case 6:
num2=13;
break;
}
if(unk[num2] !=-99){
if(!func_190(pedParam0, num2, unk[num2])){
Global_2883588=hash;
Global_2883589=hash2;
return false;
if(num2==13){
unk18={
func_199(entityModel, unk[num2]) 
};
for (i=0;
i <=8;
i=i + 1){
if(!func_190(pedParam0, 14, unk18[i])){
for (j=0;
j <=19;
j=j + 1){
Global_78341[2 /*14*/]={
func_206(entityModel, 14, j, -1) 
};
if(Global_78341[2 /*14*/].f_12==i){
if(func_190(pedParam0, 14, j)){
if(!func_194(entityModel, iParam2, 14, j, &unk, &Global_78341[2 /*14*/])){
Global_2883588=hash;
Global_2883589=hash2;
return false;
}
}
}}}
}}else{
num=func_182(pedParam0, num2);
Global_78341[2 /*14*/]={
func_206(entityModel, num2, num, -1) 
};
if(!func_194(entityModel, iParam2, num2, num, &unk, &Global_78341[2 /*14*/])){
Global_2883588=hash;
Global_2883589=hash2;
return false;
}}}}}
if(unk[10] !=0 && unk[10] !=joaat("0") && unk.f_16){
if(_MPCHAR_STAT_GET_INT(MP_STAT_TSHIRT_DECAL_HASH, Global_78338, 0) !=unk[10]){
Global_2883588=hash;
Global_2883589=hash2;
return false;
}}
Global_2883588=hash;
Global_2883589=hash2;
return true;
}elseif(iParam1==13){
unk28={
func_199(entityModel, iParam2) 
};
for (l=0;
l <=8;
l=l + 1){
if(!func_190(pedParam0, 14, unk28[l])) return false;
}
return true;
}elseif(iParam1==14){
if(PED::GET_PED_PROP_INDEX(pedParam0, Global_78341[1 /*14*/].f_12, 1)==Global_78341[1 /*14*/].f_3 && PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, Global_78341[1 /*14*/].f_12)==Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3==-1) return true;
if(Global_78341[1 /*14*/].f_12==PV_COMP_HEAD && IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HELMET"), 1) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0){
shopPedApparelVariantPropCount=FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
for (m=0;
m < shopPedApparelVariantPropCount;
m=m + 1){
FILES::GET_VARIANT_PROP(Global_2883588, m, &nameHash, &enumValue, &anchorPoint);
if(nameHash !=0 && nameHash !=joaat("0")){
FILES::INIT_SHOP_PED_PROP(&outProp);
FILES::GET_SHOP_PED_PROP(nameHash, &outProp);
if(outProp.f_3==PED::GET_PED_PROP_INDEX(pedParam0, Global_78341[1 /*14*/].f_12, 1) && outProp.f_4==PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, Global_78341[1 /*14*/].f_12)) return true;
}}}}else{
if(Global_78341[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(pedParam0, func_179(iParam1)) && Global_78341[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(pedParam0, func_179(iParam1))) return true;
if(iParam1==4){
Global_78340=Global_78340 + 1;
if(Global_78340==1)if(func_193(entityModel, 11, func_182(pedParam0, 11), -1))if(func_192(entityModel, 4, iParam2, &num3)) return func_190(pedParam0, 4, num3);
elseif(func_191(entityModel, 4, iParam2, &num3)) return func_190(pedParam0, 4, num3);
Global_78340=Global_78340 - 1;
}}
return false;
}
BOOL func_191(Hash hParam0, int iParam1, int iParam2, var uParam3) // Position - 0x12E6E{
Hash componentHash;
int shopPedApparelVariantComponentCount;
int i;
Hash nameHash;
var enumValue;
int componentType;
switch (hParam0){
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
componentHash=func_177(hParam0, iParam2, iParam1, 4);
if(componentHash !=-1){
shopPedApparelVariantComponentCount=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(componentHash);
for (i=0;
i < shopPedApparelVariantComponentCount;
i=i + 1){
FILES::GET_VARIANT_COMPONENT(componentHash, i, &nameHash, &enumValue, &componentType);
if(componentType==4){
if(nameHash !=0 && nameHash !=joaat("0")){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(nameHash, joaat("DRESS_LEGS"), 0)){
*uParam3=func_187(hParam0, nameHash, iParam1, 4);
return true;
}
}}}
}}
break;
}
break;
}
return false;
}
BOOL func_192(Hash hParam0, int iParam1, int iParam2, var uParam3) // Position - 0x12F17{
Hash componentHash;
int shopPedApparelVariantComponentCount;
int i;
Hash nameHash;
var enumValue;
int componentType;
switch (hParam0){
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
componentHash=func_177(hParam0, iParam2, iParam1, 4);
if(componentHash !=-1){
shopPedApparelVariantComponentCount=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(componentHash);
for (i=0;
i < shopPedApparelVariantComponentCount;
i=i + 1){
FILES::GET_VARIANT_COMPONENT(componentHash, i, &nameHash, &enumValue, &componentType);
if(componentType==4){
if(nameHash !=0 && nameHash !=joaat("0")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(nameHash, joaat("DRESS_LEGS"), 0)){
*uParam3=func_187(hParam0, nameHash, iParam1, 4);
return true;
}
}}}
}}
break;
}
break;
}
return false;
}
BOOL func_193(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x12FBF{
switch (hParam0){
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 11:
if(iParam2 >=256){
if(hParam3==-1) hParam3=func_177(hParam0, iParam2, 11, 4);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("DRESS"), 0);
}
break;
}
break;
}
return false;
}
BOOL func_194(Hash hParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5) // Position - 0x13012{
var unk;
int i;
if(uParam4->[iParam2]==iParam3) return true;
if(uParam4->[iParam2]==-99 && iParam2 !=14 && iParam2 !=13) return true;
if(iParam2==13 || iParam2==14 && uParam4->[13]==31)if(iParam3==0 || iParam3==1 || iParam3==2 || iParam3==3 || iParam3==4 || iParam3==5 || iParam3==6 || iParam3==7 || iParam3==8) return true;
if(iParam3==-99 || iParam5->f_1==-1) return true;
if(iParam2==14){
unk={
func_199(hParam0, uParam4->[13]) 
};
for (i=0;
i <=8;
i=i + 1){
if(unk[i]==iParam3) return true;
}}
if(func_198(hParam0, iParam2, iParam3)) return true;
if(hParam0==joaat("Player_Zero")){
if(func_197(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==10 || iParam1==11 || iParam1==12 || iParam1==18 || iParam1==50) return false;
return true;
}elseif(func_196(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==4 || iParam1==5 || iParam1==10 || iParam1==11 || iParam1==12 || iParam1==14 || iParam1==18 || iParam1==50) return false;
if(iParam2==8)if(uParam4->[8] !=0) return false;
elseif(iParam2==9)if(uParam4->[9] !=0) return false;
return true;
}elseif(func_195(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==4 || iParam1==5 || iParam1==10 || iParam1==11 || iParam1==12 || iParam1==14 || iParam1==18 || iParam1==50) return false;
return true;
}}elseif(hParam0==joaat("Player_One")){
if(func_197(hParam0, iParam2, iParam3, -1)){
if(iParam1==3 || iParam1==5 || iParam1==7) return false;
return true;
}elseif(func_196(hParam0, iParam2, iParam3, -1)){
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
}elseif(func_195(hParam0, iParam2, iParam3, -1)){
if(iParam1==3 || iParam1==3 || iParam1==5 || iParam1==7 || iParam1==8 || iParam1==21) return false;
return true;
}elseif(iParam2==14){
if(iParam3 >=159 && iParam3 <=174) return true;
}}elseif(hParam0==joaat("Player_Two")){
if(iParam1==2)if(iParam2==14 && iParam3==0) return true;
if(func_197(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==6 || iParam1==8 || iParam1==45 || iParam1==12) return false;
return true;
}elseif(func_196(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==3 || iParam1==6 || iParam1==8 || iParam1==11 || iParam1==45 || iParam1==12) return false;
if(iParam2==8)if(uParam4->[8] !=15) return false;
elseif(iParam2==9)if(uParam4->[9] !=0) return false;
return true;
}elseif(func_195(hParam0, iParam2, iParam3, -1)){
if(iParam1==1 || iParam1==2 || iParam1==3 || iParam1==6 || iParam1==8 || iParam1==11 || iParam1==12) return false;
return true;
}}
return false;
}
BOOL func_195(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x13616{
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
if(hParam3==-1) hParam3=func_177(hParam0, iParam2, 14, 3);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_177(hParam0, iParam2, 14, 3), -1842686353, 1);
}
break;
case 1:
if(iParam2 >=26){
if(hParam3==-1) hParam3=func_177(hParam0, iParam2, 1, 3);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_177(hParam0, iParam2, 1, 3), -1842686353, 0);
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
if(hParam3==-1) hParam3=func_177(hParam0, iParam2, 14, 4);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_177(hParam0, iParam2, 14, 4), -1842686353, 1);
}
break;
case 1:
if(iParam2 >=26){
if(hParam3==-1) hParam3=func_177(hParam0, iParam2, 1, 4);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_177(hParam0, iParam2, 1, 4), -1842686353, 0);
}
break;
}
break;
}
return false;
}
BOOL func_196(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x13893{
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
if(hParam3==-1) hParam3=func_177(hParam0, iParam2, 1, 3);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAIR_SHRINK"), 0)) return false;
}
return true;
}}}elseif(hParam0==joaat("MP_F_Freemode_01")){
if(iParam1==1){
if(iParam2 > 0){
if(iParam2 >=26){
if(hParam3==-1) hParam3=func_177(hParam0, iParam2, 1, 4);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAIR_SHRINK"), 0)) return false;
}
return true;
}}}
return false;
}
BOOL func_197(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x13CB8{
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
if(hParam3==-1) hParam3=func_177(hParam0, iParam2, 14, 3);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("GLASSES"), 1);
}}
break;
case joaat("MP_F_Freemode_01"):
if(iParam1==14){
if(iParam2 >=155 && iParam2 <=318){
return true;
}elseif(iParam2 >=327){
if(hParam3==-1) hParam3=func_177(hParam0, iParam2, 14, 4);
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("GLASSES"), 1);
}}
break;
}
return false;
}
BOOL func_198(Hash hParam0, int iParam1, int iParam2) // Position - 0x13FAB{
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


struct<10> func_199(Hash hParam0, int iParam1) // Position - 0x14048{
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
func_201(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_201(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_201(&unk, 19, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_201(&unk, 14, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_201(&unk, 18, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_201(&unk, 0, 59, 112, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_201(&unk, 0, 60, 112, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_201(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_201(&unk, 0, 60, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_201(&unk, 55, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_201(&unk, 0, 1, 112, 3, 4, 5, 6, 7, 8);
break;
default:
func_200(&unk, hParam0, iParam1, 10);
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 31:
func_201(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_201(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_201(&unk, 0, 82, 158, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_201(&unk, 0, 1, 158, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_201(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_201(&unk, 41, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_201(&unk, 40, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_201(&unk, 41, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_201(&unk, 0, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_201(&unk, 69, 95, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_200(&unk, hParam0, iParam1, 9);
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 31:
func_201(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_201(&unk, 11, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_201(&unk, 17, 90, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_201(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_201(&unk, 0, 88, 154, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_201(&unk, 0, 1, 154, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_201(&unk, 16, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_201(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_201(&unk, 0, 123, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_201(&unk, 69, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_200(&unk, hParam0, iParam1, 9);
break;
}
break;
case joaat("MP_M_Freemode_01"):
switch (iParam1){
case 31:
func_201(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_201(&unk, 129, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_201(&unk, 90, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_201(&unk, 23, 251, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_201(&unk, 36, 262, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_201(&unk, 88, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_201(&unk, 125, 175, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_201(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_201(&unk, 44, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_201(&unk, 52, 189, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_201(&unk, 0, 261, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_201(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_201(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_201(&unk, 0, 212, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_201(&unk, 64, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 14:
func_201(&unk, 61, 207, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_201(&unk, 0, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_201(&unk, 0, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_201(&unk, 0, 229, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_201(&unk, 36, 249, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_201(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_201(&unk, 0, 174, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_201(&unk, 35, 180, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_201(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_201(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 24:
func_201(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_200(&unk, hParam0, iParam1, 25);
break;
}
break;
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 31:
func_201(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_201(&unk, 35, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_201(&unk, 36, 178, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_201(&unk, 53, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_201(&unk, 38, 170, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_201(&unk, 37, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_201(&unk, 113, 203, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_201(&unk, 114, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_201(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_201(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_201(&unk, 0, 199, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_201(&unk, 0, 182, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_201(&unk, 0, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_201(&unk, 107, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_201(&unk, 109, 170, 2, 3, 4, 5, 323, 7, 8);
break;
case 14:
func_201(&unk, 119, 237, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_201(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_201(&unk, 114, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_201(&unk, 35, 268, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_201(&unk, 0, 266, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_201(&unk, 42, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_201(&unk, 76, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_201(&unk, 39, 235, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_201(&unk, 41, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_201(&unk, 111, 194, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_200(&unk, hParam0, iParam1, 25);
break;
}
break;
}
return unk;
}


void func_200(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x14977{
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
if(FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(itemHash.f_1, i, &outPropVariant) && outPropVariant.f_2 !=-1)if(outPropVariant !=0 && outPropVariant !=-1 && outPropVariant !=joaat("0")) uParam0->[outPropVariant.f_2]=func_187(hParam1, outPropVariant, 14, num);
elseif(outPropVariant.f_1 !=-1) uParam0->[outPropVariant.f_2]=outPropVariant.f_1;
}}}
return;
}


void func_201(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x14AA1{
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
struct<17> func_202(Hash hParam0, int iParam1) // Position - 0x14AE9{
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
if(Global_113648.f_9087.f_99.f_58[120]) func_205(&unk, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
else func_205(&unk, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_205(&unk, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
break;
case 2:
func_205(&unk, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
break;
case 3:
func_205(&unk, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
break;
case 4:
func_205(&unk, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
break;
case 5:
func_205(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
break;
case 6:
func_205(&unk, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_205(&unk, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 8:
func_205(&unk, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_205(&unk, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_205(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
break;
case 11:
func_205(&unk, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
break;
case 12:
func_205(&unk, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_205(&unk, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_205(&unk, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
break;
case 15:
func_205(&unk, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
break;
case 16:
func_205(&unk, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_205(&unk, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_205(&unk, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
break;
case 19:
func_205(&unk, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_205(&unk, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_205(&unk, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_205(&unk, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_205(&unk, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_205(&unk, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_205(&unk, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_205(&unk, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_205(&unk, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_205(&unk, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_205(&unk, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_205(&unk, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_205(&unk, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
break;
case 32:
func_205(&unk, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_205(&unk, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_205(&unk, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
break;
case 35:
func_205(&unk, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_205(&unk, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_205(&unk, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_205(&unk, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_205(&unk, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_205(&unk, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_205(&unk, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_205(&unk, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_205(&unk, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_205(&unk, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_205(&unk, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 46:
func_205(&unk, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_205(&unk, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 48:
func_205(&unk, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
break;
case 49:
func_205(&unk, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 50:
func_205(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
break;
case 51:
func_205(&unk, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 52:
func_205(&unk, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
default:
func_203(&unk, hParam0, iParam1, 53);
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 0:
func_205(&unk, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_205(&unk, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 2:
func_205(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
break;
case 3:
func_205(&unk, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
break;
case 4:
func_205(&unk, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
break;
case 5:
func_205(&unk, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 6:
func_205(&unk, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_205(&unk, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
break;
case 8:
func_205(&unk, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
break;
case 9:
func_205(&unk, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_205(&unk, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_205(&unk, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 12:
func_205(&unk, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_205(&unk, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_205(&unk, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_205(&unk, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_205(&unk, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_205(&unk, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_205(&unk, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
break;
case 19:
func_205(&unk, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_205(&unk, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_205(&unk, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
break;
case 22:
func_205(&unk, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
break;
case 23:
func_205(&unk, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
break;
case 24:
func_205(&unk, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
break;
case 25:
func_205(&unk, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
break;
case 26:
func_205(&unk, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
break;
case 27:
func_205(&unk, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
break;
case 28:
func_205(&unk, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
break;
case 29:
func_205(&unk, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
break;
case 30:
func_205(&unk, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
break;
case 31:
func_205(&unk, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
break;
case 32:
func_205(&unk, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
break;
case 33:
func_205(&unk, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
break;
case 34:
func_205(&unk, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
break;
case 35:
func_205(&unk, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
break;
case 36:
func_205(&unk, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
break;
case 37:
func_205(&unk, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
break;
case 38:
func_205(&unk, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_205(&unk, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_205(&unk, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_205(&unk, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_205(&unk, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_205(&unk, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
break;
case 44:
func_205(&unk, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 45:
func_205(&unk, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
break;
case 46:
func_205(&unk, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
break;
default:
func_203(&unk, hParam0, iParam1, 47);
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 0:
func_205(&unk, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_205(&unk, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
break;
case 2:
func_205(&unk, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
break;
case 3:
func_205(&unk, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
break;
case 4:
func_205(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 5:
func_205(&unk, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
break;
case 6:
func_205(&unk, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
break;
case 7:
func_205(&unk, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
break;
case 8:
func_205(&unk, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_205(&unk, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_205(&unk, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_205(&unk, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
break;
case 12:
func_205(&unk, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_205(&unk, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_205(&unk, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_205(&unk, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_205(&unk, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_205(&unk, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_205(&unk, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 19:
func_205(&unk, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_205(&unk, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_205(&unk, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_205(&unk, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_205(&unk, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_205(&unk, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_205(&unk, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_205(&unk, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_205(&unk, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_205(&unk, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_205(&unk, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_205(&unk, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_205(&unk, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 32:
func_205(&unk, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_205(&unk, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_205(&unk, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 35:
func_205(&unk, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_205(&unk, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_205(&unk, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_205(&unk, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_205(&unk, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_205(&unk, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_205(&unk, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_205(&unk, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_205(&unk, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_205(&unk, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_205(&unk, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 46:
func_205(&unk, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_205(&unk, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
break;
default:
func_203(&unk, hParam0, iParam1, 48);
break;
}
break;
case joaat("MP_M_Freemode_01"):
switch (iParam1){
case 0:
func_205(&unk, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
break;
case 1:
func_205(&unk, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
break;
case 2:
func_205(&unk, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
break;
case 3:
func_205(&unk, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
break;
case 4:
func_205(&unk, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
break;
case 5:
func_205(&unk, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
break;
case 6:
func_205(&unk, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
break;
case 7:
func_205(&unk, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
break;
case 8:
func_205(&unk, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
break;
case 9:
func_205(&unk, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
break;
case 10:
func_205(&unk, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
break;
case 11:
func_205(&unk, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
break;
case 12:
func_205(&unk, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
break;
case 13:
func_205(&unk, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
break;
case 14:
func_205(&unk, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
break;
case 15:
func_205(&unk, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
break;
case 16:
func_205(&unk, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
break;
case 17:
func_205(&unk, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
break;
case 18:
func_205(&unk, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
break;
case 19:
func_205(&unk, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
break;
case 20:
func_205(&unk, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
break;
case 21:
func_205(&unk, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
break;
case 22:
func_205(&unk, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
break;
case 23:
func_205(&unk, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
break;
case 24:
func_205(&unk, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
break;
case 25:
func_205(&unk, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
break;
default:
func_203(&unk, hParam0, iParam1, 26);
break;
}
break;
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 0:
func_205(&unk, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
break;
case 1:
func_205(&unk, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
break;
case 2:
func_205(&unk, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
break;
case 3:
func_205(&unk, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
break;
case 4:
func_205(&unk, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
break;
case 5:
func_205(&unk, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
break;
case 6:
func_205(&unk, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
break;
case 7:
func_205(&unk, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
break;
case 8:
func_205(&unk, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
break;
case 9:
func_205(&unk, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
break;
case 10:
func_205(&unk, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
break;
case 11:
func_205(&unk, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
break;
case 12:
func_205(&unk, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
break;
case 13:
func_205(&unk, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
break;
case 14:
func_205(&unk, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
break;
case 15:
func_205(&unk, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
break;
case 16:
func_205(&unk, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
break;
case 17:
func_205(&unk, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
break;
case 18:
func_205(&unk, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
break;
case 19:
func_205(&unk, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
break;
case 20:
func_205(&unk, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
break;
case 21:
func_205(&unk, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
break;
case 22:
func_205(&unk, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
break;
case 23:
func_205(&unk, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
break;
case 24:
func_205(&unk, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
break;
case 25:
func_205(&unk, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
break;
case 26:
func_205(&unk, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
break;
case 27:
func_205(&unk, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
break;
default:
func_203(&unk, hParam0, iParam1, 28);
break;
}
break;
}
return unk;
}


void func_203(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x16931{
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
uParam0->[func_204(outComponentVariant.f_2)]=outComponentVariant;
uParam0->f_16=1;
}else{
uParam0->[func_204(outComponentVariant.f_2)]=func_187(hParam1, outComponentVariant, func_204(outComponentVariant.f_2), num);
}}elseif(outComponentVariant.f_1 !=-1){
uParam0->[func_204(outComponentVariant.f_2)]=outComponentVariant.f_1;
}}}
if(itemHash.f_3==0) uParam0->[13]=-99;
else uParam0->[13]=itemHash.f_1;
}
return;
}

int func_204(int iParam0) // Position - 0x16B1B{
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


void func_205(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x16BCB{
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
struct<14> func_206(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x16C3C{
func_252();
if(hParam0==joaat("MP_M_Freemode_01")) func_236(iParam1, iParam2, hParam3);
elseif(hParam0==joaat("MP_F_Freemode_01")) func_207(iParam1, iParam2, hParam3);
return Global_78341[0 /*14*/];
}


void func_207(int iParam0, int iParam1, Hash hParam2) // Position - 0x16C7D{
switch (iParam0){
case 2:
func_235(iParam1, hParam2);
break;
case 11:
func_234(iParam1, hParam2);
break;
case 8:
func_230(iParam1, hParam2);
break;
case 9:
func_229(iParam1, hParam2);
break;
case 3:
func_228(iParam1, hParam2);
break;
case 4:
func_227(iParam1, hParam2);
break;
case 6:
func_226(iParam1, hParam2);
break;
case 1:
func_225(iParam1, hParam2);
break;
case 7:
func_224(iParam1, hParam2);
break;
case 10:
func_223(iParam1, hParam2);
break;
case 14:
func_222(iParam1, hParam2);
break;
case 12:
func_221(iParam1, hParam2);
break;
case 5:
func_220(iParam1, hParam2);
break;
case 0:
func_218(iParam1, hParam2);
break;
case 13:
func_208(iParam1);
break;
}
return;
}


void func_208(int iParam0) // Position - 0x16D89{
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
switch (iParam0){
case 31:
num2=0;
num3=0;
break;
case 0:
num2=0;
num3=0;
break;
case 1:
num2=0;
num3=0;
break;
case 2:
num2=0;
num3=0;
break;
case 3:
num2=0;
num3=0;
break;
case 4:
num2=0;
num3=0;
break;
case 5:
num2=0;
num3=0;
break;
case 6:
num2=0;
num3=0;
break;
case 7:
num2=0;
num3=0;
break;
case 8:
num2=0;
num3=0;
break;
case 9:
num2=0;
num3=0;
break;
case 10:
num2=0;
num3=0;
break;
case 11:
num2=0;
num3=0;
break;
case 12:
num2=0;
num3=0;
break;
case 13:
num2=0;
num3=0;
break;
case 14:
num2=0;
num3=0;
break;
case 15:
num2=0;
num3=0;
break;
case 16:
num2=0;
num3=0;
break;
case 17:
num2=0;
num3=0;
break;
case 18:
num2=0;
num3=0;
break;
case 19:
num2=0;
num3=0;
break;
case 20:
num2=0;
num3=0;
break;
case 21:
num2=0;
num3=0;
break;
case 22:
num2=0;
num3=0;
break;
case 23:
num2=0;
num3=0;
break;
}
func_209(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_209(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x16F44{
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
iParam0->f_12=func_217(iParam8);
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
if(func_216(14)) return;
if(iParam1==1)if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0)) MISC::SET_BIT(&(iParam0->f_6), 7);
if(iParam1==12){
if(!func_214(Global_2883588, 1, true, true, -1)) MISC::CLEAR_BIT(&(iParam0->f_6), 2);
if(!func_214(Global_2883588, 2, true, true, -1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_214(Global_2883588, 1, true, true, -1)) MISC::CLEAR_BIT(&(iParam0->f_6), 2);
if(!func_214(Global_2883588, 2, true, true, -1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}else{
if(!func_214(Global_2883588, 1, true, true, -1)) MISC::CLEAR_BIT(&(iParam0->f_6), 2);
if(!func_214(Global_2883588, 2, true, true, -1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(iParam0->f_6), 1);
MISC::CLEAR_BIT(&(iParam0->f_6), 0);
}}elseif(iParam0->f_5 >=0 && iParam0->f_5 < 3){
MISC::SET_BIT(&(iParam0->f_6), 0);
MISC::SET_BIT(&(iParam0->f_6), 5);
if(func_213(iParam1, iParam0->f_5, iParam0->f_2, 0, iParam0->f_1, 0, 0)) MISC::SET_BIT(&(iParam0->f_6), 1);
if(func_213(iParam1, iParam0->f_5, iParam0->f_2, 1, iParam0->f_1, 0, 0)) MISC::SET_BIT(&(iParam0->f_6), 2);
if(!func_213(iParam1, iParam0->f_5, iParam0->f_2, 2, iParam0->f_1, 0, 0)) MISC::SET_BIT(&(iParam0->f_6), 4);
}else{
MISC::SET_BIT(&(iParam0->f_6), 0);
if(iParam1==11 || iParam1==4 || iParam1==6 || iParam1==1 || iParam1==14 || iParam1==2 || iParam1==8 || iParam1==9 || iParam1==10 || iParam1==7 || iParam1==12){
if(func_216(14)) return;
num=_MPCHAR_STAT_GET_INT(func_212(iParam1, iParam0->f_2), Global_78338, 0);
if(IS_BIT_SET(num, iParam0->f_1)) MISC::SET_BIT(&(iParam0->f_6), 1);
num=_MPCHAR_STAT_GET_INT(func_211(iParam1, iParam0->f_2), Global_78338, 0);
if(IS_BIT_SET(num, iParam0->f_1)) MISC::SET_BIT(&(iParam0->f_6), 2);
if(func_210(iParam1, iParam0->f_2, &stat)){
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
BOOL func_210(int iParam0, int iParam1, var uParam2) // Position - 0x172E9{
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
eMPStat func_211(int iParam0, int iParam1) // Position - 0x176EE{
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
eMPStat func_212(int iParam0, int iParam1) // Position - 0x17AE9{
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
BOOL func_213(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x17EE4{
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
BOOL func_214(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x18D88{
int num;
int num2;
eMPStat stat;
int num3;
num=Global_78338;
if(iParam4 !=-1) num=iParam4;
if(func_215(hParam0, iParam1, &stat, &num2, bParam2, bParam3)){
num3=_MPCHAR_STAT_GET_INT(stat, num, 0);
return IS_BIT_SET(num3, num2);
}
return false;
}
BOOL func_215(Hash hParam0, int iParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x18DC7{
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
BOOL func_216(int iParam0) // Position - 0x1B5D6{
return Global_43257==iParam0;
}

int func_217(int iParam0) // Position - 0x1B5E4{
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


void func_218(int iParam0, Hash hParam1) // Position - 0x1B6B8{
int num;
num=0;
Global_78341[0 /*14*/].f_5=4;
func_219(num, iParam0, 0, hParam1);
return;
}


void func_219(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x1B6D8{
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
func_209(&Global_78341[0 /*14*/], iParam0, iParam1, &(hash.f_7), 0, 0, hash.f_2, false, -1, 2, true);
return;
}}}elseif(iParam0==13){
func_209(&Global_78341[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, true, -1, 2, true);
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
func_209(&Global_78341[0 /*14*/], iParam0, iParam1, &(outProp.f_9), outProp.f_3, outProp.f_4, outProp.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outProp.f_1, joaat("OUTFIT_ONLY"), 0), num3, 2, outProp.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
if(hParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(hParam3, &outComponent);
Global_2883588=outComponent.f_1;
Global_2883589=outComponent;
func_209(&Global_78341[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 !=0);
return;
}
componentId2=iParam1 - iParam2;
if(componentId2 >=0){
num5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, false, -1, func_179(iParam0));
if(num5 > componentId2){
FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
Global_2883588=outComponent.f_1;
Global_2883589=outComponent;
func_209(&Global_78341[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 !=0);
return;
}}}
return;
}


void func_220(int iParam0, Hash hParam1) // Position - 0x1B95F{
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
switch (iParam0){
case 0:
num2=0;
num3=0;
break;
case 1:
num2=1;
num3=0;
break;
case 2:
num2=2;
num3=0;
break;
case 3:
num2=3;
num3=0;
break;
case 4:
num2=4;
num3=0;
break;
case 5:
num2=5;
num3=0;
break;
case 6:
num2=6;
num3=0;
break;
case 7:
num2=7;
num3=0;
break;
case 8:
num2=8;
num3=0;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_219(num6, iParam0, 9, hParam1);
return;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "HA_FMF_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num3, 16);
func_209(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_221(int iParam0, Hash hParam1) // Position - 0x1BA62{
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
switch (iParam0){
case 0:
num2=0;
num3=0;
flag=true;
break;
case 1:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S1" /*The Indie Heart*/, 16);
break;
case 2:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S2" /*The Kitten*/, 16);
break;
case 3:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S3" /*The Vacation*/, 16);
break;
case 4:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S4" /*The Girly*/, 16);
break;
case 5:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S5" /*The Standout*/, 16);
break;
case 6:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S6" /*The Streetwise*/, 16);
break;
case 7:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S7" /*The Butterfly*/, 16);
break;
case 8:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S8" /*The Festival*/, 16);
break;
case 9:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P1" /*The Interview*/, 16);
break;
case 10:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P2" /*The Red Hot*/, 16);
break;
case 11:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P3" /*The Upmarket*/, 16);
break;
case 12:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P4" /*The Power Suit*/, 16);
break;
case 13:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P5" /*The Versatile*/, 16);
break;
case 14:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P6" /*The Egyptian*/, 16);
break;
case 15:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P7" /*The Chalet*/, 16);
break;
case 16:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P8" /*The Cougar*/, 16);
break;
case 17:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P9" /*The Spring Break*/, 16);
break;
case 18:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P10" /*The Yacht Club*/, 16);
break;
case 19:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B1" /*The Holla Over*/, 16);
break;
case 20:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B2" /*The Tough Chick*/, 16);
break;
case 21:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B3" /*The Chica*/, 16);
break;
case 22:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B4" /*The Tomboy*/, 16);
break;
case 23:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B5" /*The Basics*/, 16);
break;
case 24:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B6" /*The Young Luck*/, 16);
break;
case 25:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B7" /*The Workout*/, 16);
break;
case 26:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B8" /*The She Devil*/, 16);
break;
case 27:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B9" /*The Beach Beauty*/, 16);
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_219(num6, iParam0, 28, hParam1);
return;
}
func_209(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_222(int iParam0, Hash hParam1) // Position - 0x1BD41{
BOOL flag;
int value;
var unk;
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
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=14;
num6=0;
switch (iParam0){
case 0:
num=-1;
num2=0;
value=0;
num3=0;
break;
case 1:
num=-1;
num2=0;
value=0;
num3=1;
break;
case 2:
num=-1;
num2=0;
value=0;
num3=2;
break;
case 3:
num=-1;
num2=0;
value=0;
num3=3;
break;
case 4:
num=-1;
num2=0;
value=0;
num3=4;
break;
case 5:
num=-1;
num2=0;
value=0;
num3=5;
break;
case 6:
num=-1;
num2=0;
value=0;
num3=6;
break;
case 7:
num=-1;
num2=0;
value=0;
num3=7;
break;
case 8:
num=-1;
num2=0;
value=0;
num3=8;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_0" /*Red Ear Defenders*/, 16);
num=0;
num2=0;
value=65;
num3=0;
num6=1;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_1" /*Magenta Ear Defenders*/, 16);
num=0;
num2=1;
value=65;
num3=0;
num6=1;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_2" /*Green Ear Defenders*/, 16);
num=0;
num2=2;
value=85;
num3=0;
num6=1;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_3" /*Yellow Ear Defenders*/, 16);
num=0;
num2=3;
value=75;
num3=0;
num6=1;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_4" /*Desert Camo Ear Defenders*/, 16);
num=0;
num2=4;
value=235;
num3=0;
num6=1;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_5" /*Blue Ear Defenders*/, 16);
num=0;
num2=5;
value=80;
num3=0;
num6=1;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_6" /*Pale Blue Ear Defenders*/, 16);
num=0;
num2=6;
value=85;
num3=0;
num6=1;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_7" /*Orange Ear Defenders*/, 16);
num=0;
num2=7;
value=90;
num3=0;
num6=1;
break;
}
switch (iParam0){
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_1_0", 16);
num=1;
num2=0;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_0", 16);
num=2;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_1" /*Pink Accent Cowgirl Hat*/, 16);
num=2;
num2=1;
value=5000;
num3=0;
num6=1;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_2", 16);
num=2;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_3", 16);
num=2;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_4", 16);
num=2;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_5", 16);
num=2;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_6", 16);
num=2;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_7", 16);
num=2;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_0", 16);
num=3;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_1", 16);
num=3;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_2", 16);
num=3;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_3", 16);
num=3;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_4", 16);
num=3;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_5", 16);
num=3;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_6", 16);
num=3;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_7" /*Gray Plaid Canvas Hat*/, 16);
num=3;
num2=7;
value=120;
num3=0;
num6=1;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_0" /*Black LS Fitted Cap*/, 16);
num=4;
num2=0;
value=400;
num3=0;
num6=1;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_1" /*Fruntalot Fitted Cap*/, 16);
num=4;
num2=1;
value=65;
num3=0;
num6=1;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_2" /*Broker Fitted Cap*/, 16);
num=4;
num2=2;
value=375;
num3=0;
num6=1;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_3" /*SA Fitted Cap*/, 16);
num=4;
num2=3;
value=75;
num3=0;
num6=1;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_4" /*SA Boars Fitted Cap*/, 16);
num=4;
num2=4;
value=65;
num3=0;
num6=1;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_5" /*Stank Fitted Cap*/, 16);
num=4;
num2=5;
value=65;
num3=0;
num6=1;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_6" /*Red Mist XI Fitted Cap*/, 16);
num=4;
num2=6;
value=85;
num3=0;
num6=1;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_7" /*LS Corkers Fitted Cap*/, 16);
num=4;
num2=7;
value=325;
num3=0;
num6=1;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_0" /*Rearwall Black Beanie*/, 16);
num=5;
num2=0;
value=35;
num3=0;
num6=1;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_1" /*Crevis Ash Beanie*/, 16);
num=5;
num2=1;
value=30;
num3=0;
num6=1;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_2" /*Crevis Pink Beanie*/, 16);
num=5;
num2=2;
value=35;
num3=0;
num6=1;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_3" /*LS Panic Beanie*/, 16);
num=5;
num2=3;
value=40;
num3=0;
num6=1;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_4" /*SA Beanie*/, 16);
num=5;
num2=4;
value=35;
num3=0;
num6=1;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_5" /*Hawaiian Snow Blue Beanie*/, 16);
num=5;
num2=5;
value=30;
num3=0;
num6=1;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_6" /*Rearwall Lime Beanie*/, 16);
num=5;
num2=6;
value=35;
num3=0;
num6=1;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_7" /*Hawaiian Snow Plaid Beanie*/, 16);
num=5;
num2=7;
value=255;
num3=0;
num6=1;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_0" /*Black Military Cap*/, 16);
num=6;
num2=0;
value=360;
num3=0;
num6=1;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_1" /*Green Military Cap*/, 16);
num=6;
num2=1;
value=195;
num3=0;
num6=1;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_2" /*Leopard Military Cap*/, 16);
num=6;
num2=2;
value=3970;
num3=0;
num6=1;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_3" /*Tan Military Cap*/, 16);
num=6;
num2=3;
value=135;
num3=0;
num6=1;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_4" /*Denim Military Cap*/, 16);
num=6;
num2=4;
value=1355;
num3=0;
num6=1;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_5" /*Field Camo Military Cap*/, 16);
num=6;
num2=5;
value=110;
num3=0;
num6=1;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_6" /*Desert Camo Military Cap*/, 16);
num=6;
num2=6;
value=140;
num3=0;
num6=1;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_7" /*Woodland Camo Military Cap*/, 16);
num=6;
num2=7;
value=130;
num3=0;
num6=1;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_0" /*Navy Flat Cap*/, 16);
num=7;
num2=0;
value=230;
num3=0;
num6=1;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_1" /*White Flat Cap*/, 16);
num=7;
num2=1;
value=195;
num3=0;
num6=1;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_2" /*Gray Plaid Flat Cap*/, 16);
num=7;
num2=2;
value=515;
num3=0;
num6=1;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_3" /*Brown Plaid Flat Cap*/, 16);
num=7;
num2=3;
value=545;
num3=0;
num6=1;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_4" /*Red Flat Cap*/, 16);
num=7;
num2=4;
value=195;
num3=0;
num6=1;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_5" /*Pink Flat Cap*/, 16);
num=7;
num2=5;
value=155;
num3=0;
num6=1;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_6" /*Green Plaid Flat Cap*/, 16);
num=7;
num2=6;
value=155;
num3=0;
num6=1;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_7" /*Fruity Plaid Flat Cap*/, 16);
num=7;
num2=7;
value=1440;
num3=0;
num6=1;
break;
}
switch (iParam0){
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_0", 16);
num=8;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_1", 16);
num=8;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_2", 16);
num=8;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_3", 16);
num=8;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_4", 16);
num=8;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_5", 16);
num=8;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_6", 16);
num=8;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_7", 16);
num=8;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_0" /*Fruit Cap*/, 16);
num=9;
num2=0;
value=35;
num3=0;
num6=1;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_1" /*247 Cap*/, 16);
num=9;
num2=1;
value=25;
num3=0;
num6=1;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_2" /*Fred's Cap*/, 16);
num=9;
num2=2;
value=30;
num3=0;
num6=1;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_3" /*US Post LS Cap*/, 16);
num=9;
num2=3;
value=25;
num3=0;
num6=1;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_4" /*Swallow Cap*/, 16);
num=9;
num2=4;
value=50;
num3=0;
num6=1;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_5" /*CNT Cap*/, 16);
num=9;
num2=5;
value=40;
num3=0;
num6=1;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_6" /*Peachy Chics Snakeskin Cap*/, 16);
num=9;
num2=6;
value=575;
num3=0;
num6=1;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_7" /*Peachy Chics Leopard Cap*/, 16);
num=9;
num2=7;
value=605;
num3=0;
num6=1;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_0", 16);
num=10;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_1", 16);
num=10;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_2", 16);
num=10;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_3", 16);
num=10;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_4", 16);
num=10;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_5", 16);
num=10;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_6", 16);
num=10;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_7" /*Tan Patterned Cap*/, 16);
num=10;
num2=7;
value=285;
num3=0;
num6=1;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_0", 16);
num=11;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_1" /*Black Sun Hat*/, 16);
num=11;
num2=1;
value=2125;
num3=0;
num6=1;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_2", 16);
num=11;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_3", 16);
num=11;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_4", 16);
num=11;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_5", 16);
num=11;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_6", 16);
num=11;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_7", 16);
num=11;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_0" /*Black Saggy Beanie*/, 16);
num=12;
num2=0;
value=75;
num3=0;
num6=1;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_1", 16);
num=12;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_2", 16);
num=12;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_3", 16);
num=12;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_4", 16);
num=12;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_5", 16);
num=12;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_6" /*Hawaiian Snow Saggy Beanie*/, 16);
num=12;
num2=6;
value=75;
num3=0;
num6=1;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_7" /*Yeti Saggy Beanie*/, 16);
num=12;
num2=7;
value=295;
num3=0;
num6=1;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_0" /*Tan Straw Hat*/, 16);
num=13;
num2=0;
value=195;
num3=0;
num6=1;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_1" /*Two-Tone Straw Hat*/, 16);
num=13;
num2=1;
value=200;
num3=0;
num6=1;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_2" /*Brown Straw Hat*/, 16);
num=13;
num2=2;
value=160;
num3=0;
num6=1;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_3" /*Safari Straw Hat*/, 16);
num=13;
num2=3;
value=855;
num3=0;
num6=1;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_4" /*Gray Patterned Straw Hat*/, 16);
num=13;
num2=4;
value=1615;
num3=0;
num6=1;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_5" /*Brown Striped Straw Hat*/, 16);
num=13;
num2=5;
value=1130;
num3=0;
num6=1;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_6" /*Gray Straw Hat*/, 16);
num=13;
num2=6;
value=165;
num3=0;
num6=1;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_7" /*Navy Straw Hat*/, 16);
num=13;
num2=7;
value=215;
num3=0;
num6=1;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_0" /*Black Beret*/, 16);
num=14;
num2=0;
value=145;
num3=0;
num6=1;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_1" /*Cherry Beret*/, 16);
num=14;
num2=1;
value=250;
num3=0;
num6=1;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_2" /*Purple Beret*/, 16);
num=14;
num2=2;
value=110;
num3=0;
num6=1;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_3" /*White Beret*/, 16);
num=14;
num2=3;
value=145;
num3=0;
num6=1;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_4" /*Gray Beret*/, 16);
num=14;
num2=4;
value=105;
num3=0;
num6=1;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_5" /*Navy Beret*/, 16);
num=14;
num2=5;
value=105;
num3=0;
num6=1;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_6" /*Tan Beret*/, 16);
num=14;
num2=6;
value=115;
num3=0;
num6=1;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_7" /*Magenta Beret*/, 16);
num=14;
num2=7;
value=115;
num3=0;
num6=1;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_0" /*Beat Off White Headphones*/, 16);
num=15;
num2=0;
value=390;
num3=0;
num6=1;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_1" /*Beat Off Black Headphones*/, 16);
num=15;
num2=1;
value=395;
num3=0;
num6=1;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_2" /*Beat Off Red Headphones*/, 16);
num=15;
num2=2;
value=595;
num3=0;
num6=1;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_3" /*Beat Off Gray Headphones*/, 16);
num=15;
num2=3;
value=425;
num3=0;
num6=1;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_4" /*Beat Off Navy Headphones*/, 16);
num=15;
num2=4;
value=600;
num3=0;
num6=1;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_5" /*Beat Off Purple Headphones*/, 16);
num=15;
num2=5;
value=590;
num3=0;
num6=1;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_6" /*Beat Off Pink Headphones*/, 16);
num=15;
num2=6;
value=595;
num3=0;
num6=1;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_7" /*Beat Off Orange Headphones*/, 16);
num=15;
num2=7;
value=555;
num3=0;
num6=1;
break;
}
switch (iParam0){
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_0" /*Western MC Yellow Helmet*/, 16);
num=16;
num2=0;
value=1060;
num3=0;
num6=2;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_1" /*Steel Horse Blue Helmet*/, 16);
num=16;
num2=1;
value=1400;
num3=0;
num6=2;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_2" /*Steel Horse Orange Helmet*/, 16);
num=16;
num2=2;
value=1315;
num3=0;
num6=2;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_3" /*Western MC Green Helmet*/, 16);
num=16;
num2=3;
value=1230;
num3=0;
num6=2;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_4" /*Western MC Red Helmet*/, 16);
num=16;
num2=4;
value=1145;
num3=0;
num6=2;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_5" /*Steel Horse Black Helmet*/, 16);
num=16;
num2=5;
value=8450;
num3=0;
num6=2;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_6" /*Black Helmet*/, 16);
num=16;
num2=6;
value=675;
num3=0;
num6=2;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_7" /*Western MC Lilac Helmet*/, 16);
num=16;
num2=7;
value=8750;
num3=0;
num6=2;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_0" /*Blue Open-Face Helmet*/, 16);
num=17;
num2=0;
value=975;
num3=0;
num6=2;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_1" /*Orange Open-Face Helmet*/, 16);
num=17;
num2=1;
value=750;
num3=0;
num6=2;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_2" /*Pale Blue Open-Face Helmet*/, 16);
num=17;
num2=2;
value=865;
num3=0;
num6=2;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_3" /*Red Open-Face Helmet*/, 16);
num=17;
num2=3;
value=890;
num3=0;
num6=2;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_4" /*Gray Open-Face Helmet*/, 16);
num=17;
num2=4;
value=730;
num3=0;
num6=2;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_5" /*Black Open-Face Helmet*/, 16);
num=17;
num2=5;
value=650;
num3=0;
num6=2;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_6" /*Pink Open-Face Helmet*/, 16);
num=17;
num2=6;
value=645;
num3=0;
num6=2;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_7" /*White Open-Face Helmet*/, 16);
num=17;
num2=7;
value=755;
num3=0;
num6=2;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_0" /*Shatter Pattern Helmet*/, 16);
num=18;
num2=0;
value=13850;
num3=0;
num6=2;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_1" /*Stars Helmet*/, 16);
num=18;
num2=1;
value=2900;
num3=0;
num6=2;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_2" /*Squared Helmet*/, 16);
num=18;
num2=2;
value=2895;
num3=0;
num6=2;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_3" /*Crimson Helmet*/, 16);
num=18;
num2=3;
value=12500;
num3=0;
num6=2;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_4" /*Skull Helmet*/, 16);
num=18;
num2=4;
value=15000;
num3=0;
num6=2;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_5" /*Ace of Spades Helmet*/, 16);
num=18;
num2=5;
value=14750;
num3=0;
num6=2;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_6" /*Flamejob Helmet*/, 16);
num=18;
num2=6;
value=13150;
num3=0;
num6=2;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_7" /*White Helmet*/, 16);
num=18;
num2=7;
value=2925;
num3=0;
num6=2;
break;
}
switch (iParam0){
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_0" /*Hornet Sports Shades*/, 16);
num=0;
num2=0;
value=65;
num3=1;
num6=3;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_1" /*Two-Tone Sports Shades*/, 16);
num=0;
num2=1;
value=65;
num3=1;
num6=3;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_2" /*Orange Sports Shades*/, 16);
num=0;
num2=2;
value=85;
num3=1;
num6=3;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_3" /*Blue Sports Shades*/, 16);
num=0;
num2=3;
value=75;
num3=1;
num6=3;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_4" /*Marble Sports Shades*/, 16);
num=0;
num2=4;
value=85;
num3=1;
num6=3;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_5" /*Purple Sports Shades*/, 16);
num=0;
num2=5;
value=80;
num3=1;
num6=3;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_6" /*Topaz Sports Shades*/, 16);
num=0;
num2=6;
value=85;
num3=1;
num6=3;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_7" /*Beige Sports Shades*/, 16);
num=0;
num2=7;
value=90;
num3=1;
num6=3;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_0_8", 16);
num=0;
num2=8;
value=820;
num3=1;
num6=3;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_0_9", 16);
num=0;
num2=9;
value=435;
num3=1;
num6=3;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_0_10", 16);
num=0;
num2=10;
value=500;
num3=1;
num6=3;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_0" /*Copper Marbles*/, 16);
num=1;
num2=0;
value=160;
num3=1;
num6=3;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_1" /*Blue Tint Marbles*/, 16);
num=1;
num2=1;
value=165;
num3=1;
num6=3;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_2" /*Black Marbles*/, 16);
num=1;
num2=2;
value=170;
num3=1;
num6=3;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_3" /*Purple Marbles*/, 16);
num=1;
num2=3;
value=135;
num3=1;
num6=3;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_4" /*Teal Marbles*/, 16);
num=1;
num2=4;
value=120;
num3=1;
num6=3;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_5" /*Red Tint Marbles*/, 16);
num=1;
num2=5;
value=110;
num3=1;
num6=3;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_6" /*White Marbles*/, 16);
num=1;
num2=6;
value=140;
num3=1;
num6=3;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_7" /*Pink Tint Marbles*/, 16);
num=1;
num2=7;
value=130;
num3=1;
num6=3;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_1_8", 16);
num=1;
num2=8;
value=970;
num3=1;
num6=3;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_1_9", 16);
num=1;
num2=9;
value=585;
num3=1;
num6=3;
break;
case 176:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_1_10", 16);
num=1;
num2=10;
value=650;
num3=1;
num6=3;
break;
case 177:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_0" /*Marble Mademoiselles*/, 16);
num=2;
num2=0;
value=180;
num3=1;
num6=3;
break;
case 178:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_1" /*Copper Mademoiselles*/, 16);
num=2;
num2=1;
value=110;
num3=1;
num6=3;
break;
case 179:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_2" /*Orange Tint Mademoiselles*/, 16);
num=2;
num2=2;
value=115;
num3=1;
num6=3;
break;
case 180:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_3" /*Pink Tint Mademoiselles*/, 16);
num=2;
num2=3;
value=120;
num3=1;
num6=3;
break;
case 181:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_4" /*Walnut Mademoiselles*/, 16);
num=2;
num2=4;
value=595;
num3=1;
num6=3;
break;
case 182:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_5" /*Black Mademoiselles*/, 16);
num=2;
num2=5;
value=160;
num3=1;
num6=3;
break;
case 183:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_6" /*Vintage Red Mademoiselles*/, 16);
num=2;
num2=6;
value=545;
num3=1;
num6=3;
break;
case 184:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_7" /*Gold Mademoiselles*/, 16);
num=2;
num2=7;
value=590;
num3=1;
num6=3;
break;
case 185:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_2_8", 16);
num=2;
num2=8;
value=1125;
num3=1;
num6=3;
break;
case 186:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_2_9", 16);
num=2;
num2=9;
value=740;
num3=1;
num6=3;
break;
case 187:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_2_10", 16);
num=2;
num2=10;
value=805;
num3=1;
num6=3;
break;
case 188:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_0" /*Zebra Shields*/, 16);
num=3;
num2=0;
value=6250;
num3=1;
num6=3;
break;
case 189:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_1" /*Ombre Shields*/, 16);
num=3;
num2=1;
value=4065;
num3=1;
num6=3;
break;
case 190:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_2" /*Flame Shields*/, 16);
num=3;
num2=2;
value=3585;
num3=1;
num6=3;
break;
case 191:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_3" /*Violet Shields*/, 16);
num=3;
num2=3;
value=4075;
num3=1;
num6=3;
break;
case 192:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_4" /*Sun Shields*/, 16);
num=3;
num2=4;
value=4935;
num3=1;
num6=3;
break;
case 193:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_5" /*Silver Accent Shields*/, 16);
num=3;
num2=5;
value=130;
num3=1;
num6=3;
break;
case 194:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_6" /*Party Shields*/, 16);
num=3;
num2=6;
value=5600;
num3=1;
num6=3;
break;
case 195:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_7" /*Gold Shields*/, 16);
num=3;
num2=7;
value=4790;
num3=1;
num6=3;
break;
case 196:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_3_8", 16);
num=3;
num2=8;
value=2315;
num3=1;
num6=3;
break;
case 197:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_3_9", 16);
num=3;
num2=9;
value=1930;
num3=1;
num6=3;
break;
case 198:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_3_10", 16);
num=3;
num2=10;
value=1995;
num3=1;
num6=3;
break;
case 199:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_0" /*Deep Walnut Retro*/, 16);
num=4;
num2=0;
value=2245;
num3=1;
num6=3;
break;
case 200:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_1" /*Marble Retro*/, 16);
num=4;
num2=1;
value=250;
num3=1;
num6=3;
break;
case 201:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_2" /*Beige Retro*/, 16);
num=4;
num2=2;
value=210;
num3=1;
num6=3;
break;
case 202:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_3" /*Aqua Retro*/, 16);
num=4;
num2=3;
value=245;
num3=1;
num6=3;
break;
case 203:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_4" /*Dice Retro*/, 16);
num=4;
num2=4;
value=1205;
num3=1;
num6=3;
break;
case 204:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_5" /*Black Retro*/, 16);
num=4;
num2=5;
value=205;
num3=1;
num6=3;
break;
case 205:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_6" /*Toffee Retro*/, 16);
num=4;
num2=6;
value=2215;
num3=1;
num6=3;
break;
case 206:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_7" /*Red Retro*/, 16);
num=4;
num2=7;
value=215;
num3=1;
num6=3;
break;
case 207:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_4_8", 16);
num=4;
num2=8;
value=2835;
num3=1;
num6=3;
break;
case 208:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_4_9", 16);
num=4;
num2=9;
value=2450;
num3=1;
num6=3;
break;
case 209:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_4_10", 16);
num=4;
num2=10;
value=2515;
num3=1;
num6=3;
break;
case 210:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_0", 16);
num=5;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 211:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_1", 16);
num=5;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 212:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_2", 16);
num=5;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 213:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_3", 16);
num=5;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 214:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_4", 16);
num=5;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 215:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_5", 16);
num=5;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 216:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_6", 16);
num=5;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 217:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_7", 16);
num=5;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 218:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_8", 16);
num=5;
num2=8;
value=50;
num3=1;
num6=3;
break;
case 219:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_9", 16);
num=5;
num2=9;
value=50;
num3=1;
num6=3;
break;
case 220:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_10", 16);
num=5;
num2=10;
value=50;
num3=1;
num6=3;
break;
case 221:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_0" /*Purple Tint Bugs*/, 16);
num=6;
num2=0;
value=5000;
num3=1;
num6=3;
break;
case 222:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_1", 16);
num=6;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 223:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_2", 16);
num=6;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 224:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_3", 16);
num=6;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 225:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_4", 16);
num=6;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 226:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_5", 16);
num=6;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 227:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_6", 16);
num=6;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 228:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_7", 16);
num=6;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 229:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_6_8", 16);
num=6;
num2=8;
value=2820;
num3=1;
num6=3;
break;
case 230:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_6_9", 16);
num=6;
num2=9;
value=2435;
num3=1;
num6=3;
break;
case 231:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_6_10", 16);
num=6;
num2=10;
value=2500;
num3=1;
num6=3;
break;
case 232:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_0" /*Champagne Figure 8s*/, 16);
num=7;
num2=0;
value=4815;
num3=1;
num6=3;
break;
case 233:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_1" /*Platinum Figure 8s*/, 16);
num=7;
num2=1;
value=4795;
num3=1;
num6=3;
break;
case 234:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_2" /*Sapphire Figure 8s*/, 16);
num=7;
num2=2;
value=4305;
num3=1;
num6=3;
break;
case 235:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_3" /*Amethyst Figure 8s*/, 16);
num=7;
num2=3;
value=4305;
num3=1;
num6=3;
break;
case 236:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_4" /*Gold Figure 8s*/, 16);
num=7;
num2=4;
value=4965;
num3=1;
num6=3;
break;
case 237:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_5" /*White Figure 8s*/, 16);
num=7;
num2=5;
value=480;
num3=1;
num6=3;
break;
case 238:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_6" /*Gray Figure 8s*/, 16);
num=7;
num2=6;
value=465;
num3=1;
num6=3;
break;
case 239:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_7" /*Garnet Figure 8s*/, 16);
num=7;
num2=7;
value=4320;
num3=1;
num6=3;
break;
case 240:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_7_8", 16);
num=7;
num2=8;
value=2390;
num3=1;
num6=3;
break;
case 241:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_7_9", 16);
num=7;
num2=9;
value=2005;
num3=1;
num6=3;
break;
case 242:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_7_10", 16);
num=7;
num2=10;
value=2070;
num3=1;
num6=3;
break;
}
switch (iParam0){
case 243:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_0" /*Orange Tint Squared*/, 16);
num=8;
num2=0;
value=500;
num3=1;
num6=3;
break;
case 244:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_1", 16);
num=8;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 245:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_2", 16);
num=8;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 246:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_3", 16);
num=8;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 247:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_4", 16);
num=8;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 248:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_5", 16);
num=8;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 249:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_6", 16);
num=8;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 250:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_7", 16);
num=8;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 251:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_8_8", 16);
num=8;
num2=8;
value=645;
num3=1;
num6=3;
break;
case 252:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_8_9", 16);
num=8;
num2=9;
value=260;
num3=1;
num6=3;
break;
case 253:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_8_10", 16);
num=8;
num2=10;
value=325;
num3=1;
num6=3;
break;
case 254:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_0" /*Lime Tint Shooters*/, 16);
num=9;
num2=0;
value=70;
num3=1;
num6=3;
break;
case 255:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_1" /*Orange Tint Shooters*/, 16);
num=9;
num2=1;
value=60;
num3=1;
num6=3;
break;
case 256:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_2" /*Blue Shooters*/, 16);
num=9;
num2=2;
value=65;
num3=1;
num6=3;
break;
case 257:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_3" /*Tropic Shooters*/, 16);
num=9;
num2=3;
value=570;
num3=1;
num6=3;
break;
case 258:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_4" /*Fly Shooters*/, 16);
num=9;
num2=4;
value=525;
num3=1;
num6=3;
break;
case 259:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_5" /*Crimson Shooters*/, 16);
num=9;
num2=5;
value=75;
num3=1;
num6=3;
break;
case 260:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_6" /*Green Tint Shooters*/, 16);
num=9;
num2=6;
value=75;
num3=1;
num6=3;
break;
case 261:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_7" /*Pink Shooters*/, 16);
num=9;
num2=7;
value=90;
num3=1;
num6=3;
break;
case 262:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_9_8", 16);
num=9;
num2=8;
value=645;
num3=1;
num6=3;
break;
case 263:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_9_9", 16);
num=9;
num2=9;
value=260;
num3=1;
num6=3;
break;
case 264:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_9_10", 16);
num=9;
num2=10;
value=325;
num3=1;
num6=3;
break;
case 265:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_0" /*Luxury Ice Sports*/, 16);
num=10;
num2=0;
value=4065;
num3=1;
num6=3;
break;
case 266:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_1" /*Black Sports*/, 16);
num=10;
num2=1;
value=65;
num3=1;
num6=3;
break;
case 267:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_2" /*Green Sports*/, 16);
num=10;
num2=2;
value=85;
num3=1;
num6=3;
break;
case 268:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_3" /*Luxury Cowhide Sports*/, 16);
num=10;
num2=3;
value=4275;
num3=1;
num6=3;
break;
case 269:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_4" /*Orange Sports*/, 16);
num=10;
num2=4;
value=85;
num3=1;
num6=3;
break;
case 270:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_5" /*Black Pattern Sports*/, 16);
num=10;
num2=5;
value=80;
num3=1;
num6=3;
break;
case 271:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_6" /*Blue Pattern Sports*/, 16);
num=10;
num2=6;
value=85;
num3=1;
num6=3;
break;
case 272:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_7" /*Pink Pattern Sports*/, 16);
num=10;
num2=7;
value=90;
num3=1;
num6=3;
break;
case 273:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_10_8", 16);
num=10;
num2=8;
value=2315;
num3=1;
num6=3;
break;
case 274:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_10_9", 16);
num=10;
num2=9;
value=1930;
num3=1;
num6=3;
break;
case 275:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_10_10", 16);
num=10;
num2=10;
value=1995;
num3=1;
num6=3;
break;
case 276:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_0" /*Pewter Aviators*/, 16);
num=11;
num2=0;
value=3660;
num3=1;
num6=3;
break;
case 277:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_1" /*Steel Aviators*/, 16);
num=11;
num2=1;
value=4165;
num3=1;
num6=3;
break;
case 278:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_2" /*Bronze Aviators*/, 16);
num=11;
num2=2;
value=3670;
num3=1;
num6=3;
break;
case 279:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_3" /*Black Aviators*/, 16);
num=11;
num2=3;
value=135;
num3=1;
num6=3;
break;
case 280:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_4" /*Neon Aviators*/, 16);
num=11;
num2=4;
value=3620;
num3=1;
num6=3;
break;
case 281:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_5" /*Copper Aviators*/, 16);
num=11;
num2=5;
value=3610;
num3=1;
num6=3;
break;
case 282:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_6" /*Gold Aviators*/, 16);
num=11;
num2=6;
value=4140;
num3=1;
num6=3;
break;
case 283:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_7" /*Slate Aviators*/, 16);
num=11;
num2=7;
value=130;
num3=1;
num6=3;
break;
case 284:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_0", 16);
num=12;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 285:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_1", 16);
num=12;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 286:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_2", 16);
num=12;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 287:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_3", 16);
num=12;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 288:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_4", 16);
num=12;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 289:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_5", 16);
num=12;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 290:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_6", 16);
num=12;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 291:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_7", 16);
num=12;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 292:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_0", 16);
num=13;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 293:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_1", 16);
num=13;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 294:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_2", 16);
num=13;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 295:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_3", 16);
num=13;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 296:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_4", 16);
num=13;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 297:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_5", 16);
num=13;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 298:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_6", 16);
num=13;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 299:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_7", 16);
num=13;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 300:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_0" /*Black Cat Eyes*/, 16);
num=14;
num2=0;
value=325;
num3=1;
num6=3;
break;
case 301:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_1" /*Brown Marble Cat Eyes*/, 16);
num=14;
num2=1;
value=110;
num3=1;
num6=3;
break;
case 302:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_2" /*Pink Cat Eyes*/, 16);
num=14;
num2=2;
value=115;
num3=1;
num6=3;
break;
case 303:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_3" /*Green Marble Cat Eyes*/, 16);
num=14;
num2=3;
value=120;
num3=1;
num6=3;
break;
case 304:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_4" /*Red Cat Eyes*/, 16);
num=14;
num2=4;
value=135;
num3=1;
num6=3;
break;
case 305:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_5" /*Teal Cat Eyes*/, 16);
num=14;
num2=5;
value=110;
num3=1;
num6=3;
break;
case 306:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_6" /*Purple Cat Eyes*/, 16);
num=14;
num2=6;
value=115;
num3=1;
num6=3;
break;
case 307:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_7" /*Blue Cat Eyes*/, 16);
num=14;
num2=7;
value=120;
num3=1;
num6=3;
break;
case 308:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_14_8", 16);
num=14;
num2=8;
value=1490;
num3=1;
num6=3;
break;
case 309:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_14_9", 16);
num=14;
num2=9;
value=1105;
num3=1;
num6=3;
break;
case 310:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_14_10", 16);
num=14;
num2=10;
value=1170;
num3=1;
num6=3;
break;
case 311:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_0", 16);
num=15;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 312:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_1", 16);
num=15;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 313:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_2", 16);
num=15;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 314:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_3", 16);
num=15;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 315:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_4", 16);
num=15;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 316:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_5", 16);
num=15;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 317:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_6", 16);
num=15;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 318:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_7", 16);
num=15;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
}
switch (iParam0){
case 319:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_0", 16);
num=0;
num2=0;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 320:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_1", 16);
num=0;
num2=1;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 321:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_2", 16);
num=0;
num2=2;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 322:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_3", 16);
num=0;
num2=3;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 323:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_4" /*Pewter Watch*/, 16);
num=0;
num2=4;
value=825;
num3=6;
num6=4;
break;
case 324:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_1_0", 16);
num=1;
num2=0;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 325:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_1_1", 16);
num=1;
num2=1;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 326:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_1_2", 16);
num=1;
num2=2;
value=0;
num3=6;
num6=4;
flag=true;
break;
}
if(num6==1){
num7=iParam0 - 10;
if(num7 >=0 && num7 < 121){
if(num7 > 8) num7=num7 - 1;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2054[num7] * Global_296940.f_26);
}}elseif(num6==2){
num8=iParam0 - 131;
if(num8 >=0 && num8 < 24) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2175[num8] * Global_296940.f_27);
}elseif(num6==3){
num9=iParam0 - 155;
if(num9 >=0 && num9 < 128) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2200[num9] * Global_296940.f_56);
}elseif(num6==4){
num10=iParam0 - 319;
if(num10 >=0 && num10 < 10) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2329[num10] * Global_296940.f_28);
}
if(iParam0 >=327){
Global_78341[0 /*14*/].f_5=4;
func_219(num5, iParam0, 327, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0)if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HAT"), 1)) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_26);
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("GLASSES"), 1)) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_56);
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("WATCH"), 1)) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_28);
}else{
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_223(int iParam0, Hash hParam1) // Position - 0x1EBE7{
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
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_0_0" /*No Crew Emblem*/, 16);
num2=0;
num3=0;
num=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
num2=1;
num3=0;
num=10000;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
num2=2;
num3=0;
num=5000;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
num2=3;
num3=0;
num=10000;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
num2=4;
num3=0;
num=5000;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
num2=5;
num3=0;
num=10000;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_219(num6, iParam0, 6, hParam1);
return;
}
func_209(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_224(int iParam0, Hash hParam1) // Position - 0x1ECEC{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=7;
switch (iParam0){
case 0:
num=0;
num2=0;
value=0;
break;
case 1:
num=1;
num2=0;
if(Global_262145.f_4151 !=-1) value=Global_262145.f_4151;
else value=310;
break;
case 2:
num=1;
num2=1;
if(Global_262145.f_4152 !=-1) value=Global_262145.f_4152;
else value=125;
break;
case 3:
num=1;
num2=2;
if(Global_262145.f_4153 !=-1) value=Global_262145.f_4153;
else value=145;
break;
case 4:
num=1;
num2=3;
if(Global_262145.f_4154 !=-1) value=Global_262145.f_4154;
else value=130;
break;
case 5:
num=1;
num2=4;
if(Global_262145.f_4155 !=-1) value=Global_262145.f_4155;
else value=265;
break;
case 6:
num=1;
num2=5;
if(Global_262145.f_4156 !=-1) value=Global_262145.f_4156;
else value=280;
break;
case 7:
num=2;
num2=0;
if(Global_262145.f_4157 !=-1) value=Global_262145.f_4157;
else value=295;
break;
case 8:
num=2;
num2=1;
if(Global_262145.f_4158 !=-1) value=Global_262145.f_4158;
else value=95;
break;
case 9:
num=2;
num2=2;
if(Global_262145.f_4159 !=-1) value=Global_262145.f_4159;
else value=85;
break;
case 10:
num=2;
num2=3;
if(Global_262145.f_4160 !=-1) value=Global_262145.f_4160;
else value=95;
break;
case 11:
num=2;
num2=4;
if(Global_262145.f_4161 !=-1) value=Global_262145.f_4161;
else value=105;
break;
case 12:
num=2;
num2=5;
if(Global_262145.f_4162 !=-1) value=Global_262145.f_4162;
else value=95;
break;
case 13:
num=3;
num2=0;
if(Global_262145.f_4163 !=-1) value=Global_262145.f_4163;
else value=35;
break;
case 14:
num=3;
num2=1;
if(Global_262145.f_4164 !=-1) value=Global_262145.f_4164;
else value=35;
break;
case 15:
num=3;
num2=2;
if(Global_262145.f_4165 !=-1) value=Global_262145.f_4165;
else value=30;
break;
case 16:
num=3;
num2=3;
if(Global_262145.f_4166 !=-1) value=Global_262145.f_4166;
else value=40;
break;
case 17:
num=3;
num2=4;
if(Global_262145.f_4167 !=-1) value=Global_262145.f_4167;
else value=35;
break;
case 18:
num=3;
num2=5;
if(Global_262145.f_4168 !=-1) value=Global_262145.f_4168;
else value=35;
break;
case 19:
num=4;
num2=0;
value=0;
flag=true;
break;
case 20:
num=4;
num2=1;
value=0;
flag=true;
break;
case 21:
num=4;
num2=2;
if(Global_262145.f_4169 !=-1) value=Global_262145.f_4169;
else value=355;
break;
case 22:
num=4;
num2=3;
if(Global_262145.f_4170 !=-1) value=Global_262145.f_4170;
else value=370;
break;
case 23:
num=4;
num2=4;
value=0;
flag=true;
break;
case 24:
num=4;
num2=5;
value=0;
flag=true;
break;
case 25:
num=5;
num2=0;
value=0;
flag=true;
break;
case 26:
num=5;
num2=1;
value=0;
flag=true;
break;
case 27:
num=5;
num2=2;
value=0;
flag=true;
break;
case 28:
num=5;
num2=3;
value=0;
flag=true;
break;
case 29:
num=5;
num2=4;
if(Global_262145.f_4171 !=-1) value=Global_262145.f_4171;
else value=110;
break;
case 30:
num=5;
num2=5;
if(Global_262145.f_4172 !=-1) value=Global_262145.f_4172;
else value=160;
break;
case 31:
num=6;
num2=0;
if(Global_262145.f_4173 !=-1) value=Global_262145.f_4173;
else value=385;
break;
case 32:
num=6;
num2=1;
if(Global_262145.f_4174 !=-1) value=Global_262145.f_4174;
else value=190;
break;
case 33:
num=6;
num2=2;
if(Global_262145.f_4175 !=-1) value=Global_262145.f_4175;
else value=235;
break;
case 34:
num=6;
num2=3;
if(Global_262145.f_4176 !=-1) value=Global_262145.f_4176;
else value=220;
break;
case 35:
num=6;
num2=4;
if(Global_262145.f_4177 !=-1) value=Global_262145.f_4177;
else value=250;
break;
case 36:
num=6;
num2=5;
if(Global_262145.f_4178 !=-1) value=Global_262145.f_4178;
else value=205;
break;
case 37:
num=7;
num2=0;
if(Global_262145.f_4179 !=-1) value=Global_262145.f_4179;
else value=445;
break;
case 38:
num=7;
num2=1;
if(Global_262145.f_4180 !=-1) value=Global_262145.f_4180;
else value=175;
break;
case 39:
num=7;
num2=2;
value=0;
flag=true;
break;
case 40:
num=7;
num2=3;
value=0;
flag=true;
break;
case 41:
num=7;
num2=4;
value=0;
flag=true;
break;
case 42:
num=7;
num2=5;
value=0;
flag=true;
break;
case 43:
num=8;
num2=0;
value=0;
flag=true;
break;
case 44:
num=8;
num2=1;
value=0;
flag=true;
break;
case 45:
num=8;
num2=2;
value=0;
flag=true;
break;
case 46:
num=8;
num2=3;
value=0;
flag=true;
break;
case 47:
num=8;
num2=4;
value=0;
flag=true;
break;
case 48:
num=8;
num2=5;
value=0;
flag=true;
break;
case 49:
num=9;
num2=0;
if(Global_262145.f_4181 !=-1) value=Global_262145.f_4181;
else value=340;
break;
case 50:
num=9;
num2=1;
value=0;
flag=true;
break;
case 51:
num=9;
num2=2;
value=0;
flag=true;
break;
case 52:
num=9;
num2=3;
value=0;
flag=true;
break;
case 53:
num=9;
num2=4;
value=0;
flag=true;
break;
case 54:
num=9;
num2=5;
value=0;
flag=true;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_219(num5, iParam0, 55, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_58);
return;
}
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_296940.f_58);
TEXT_LABEL_ASSIGN_STRING(&unk, "T_FMF_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
return;
}


void func_225(int iParam0, Hash hParam1) // Position - 0x1F4C8{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=1;
switch (iParam0){
case 0:
num=0;
num2=0;
value=0;
break;
case 1:
num=1;
num2=0;
value=965;
break;
case 2:
num=1;
num2=1;
value=960;
break;
case 3:
num=1;
num2=2;
value=9500;
break;
case 4:
num=1;
num2=3;
value=975;
break;
case 5:
num=2;
num2=0;
value=1185;
break;
case 6:
num=2;
num2=1;
value=15000;
break;
case 7:
num=2;
num2=2;
value=1115;
break;
case 8:
num=2;
num2=3;
value=1105;
break;
case 9:
num=3;
num2=0;
value=25000;
break;
case 10:
num=4;
num2=0;
value=510;
break;
case 11:
num=4;
num2=1;
value=530;
break;
case 12:
num=4;
num2=2;
value=5500;
break;
case 13:
num=4;
num2=3;
value=535;
break;
case 14:
num=5;
num2=0;
value=1510;
break;
case 15:
num=5;
num2=1;
value=1530;
break;
case 16:
num=5;
num2=2;
value=14500;
break;
case 17:
num=5;
num2=3;
value=13000;
break;
case 18:
num=6;
num2=0;
value=8000;
break;
case 19:
num=6;
num2=1;
value=1265;
break;
case 20:
num=6;
num2=2;
value=8500;
break;
case 21:
num=6;
num2=3;
value=1210;
break;
case 22:
num=7;
num2=0;
value=2360;
break;
case 23:
num=7;
num2=1;
value=22500;
break;
case 24:
num=7;
num2=2;
value=2375;
break;
case 25:
num=7;
num2=3;
value=2485;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_219(num5, iParam0, 26, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_29);
return;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "M_FMF_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
num6=iParam0 - 1;
if(num6 >=0 && num6 < 26) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2027[num6] * Global_296940.f_29);
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
return;
}


void func_226(int iParam0, Hash hParam1) // Position - 0x1F7AD{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=6;
switch (iParam0){
case 0:
num=0;
num2=0;
value=1765;
break;
case 1:
num=0;
num2=1;
value=760;
break;
case 2:
num=0;
num2=2;
value=760;
break;
case 3:
num=0;
num2=3;
value=765;
break;
case 4:
num=0;
num2=4;
value=0;
flag=true;
break;
case 5:
num=0;
num2=5;
value=0;
flag=true;
break;
case 6:
num=0;
num2=6;
value=0;
flag=true;
break;
case 7:
num=0;
num2=7;
value=0;
flag=true;
break;
case 8:
num=0;
num2=8;
value=0;
flag=true;
break;
case 9:
num=0;
num2=9;
value=0;
flag=true;
break;
case 10:
num=0;
num2=10;
value=0;
flag=true;
break;
case 11:
num=0;
num2=11;
value=0;
flag=true;
break;
case 12:
num=0;
num2=12;
value=0;
flag=true;
break;
case 13:
num=0;
num2=13;
value=0;
flag=true;
break;
case 14:
num=0;
num2=14;
value=0;
flag=true;
break;
case 15:
num=0;
num2=15;
value=0;
flag=true;
break;
case 16:
num=1;
num2=0;
value=85;
break;
case 17:
num=1;
num2=1;
value=80;
break;
case 18:
num=1;
num2=2;
value=90;
break;
case 19:
num=1;
num2=3;
value=90;
break;
case 20:
num=1;
num2=4;
value=95;
break;
case 21:
num=1;
num2=5;
value=100;
break;
case 22:
num=1;
num2=6;
value=60;
break;
case 23:
num=1;
num2=7;
value=55;
break;
case 24:
num=1;
num2=8;
value=100;
break;
case 25:
num=1;
num2=9;
value=1255;
break;
case 26:
num=1;
num2=10;
value=65;
break;
case 27:
num=1;
num2=11;
value=1050;
break;
case 28:
num=1;
num2=12;
value=1895;
break;
case 29:
num=1;
num2=13;
value=185;
break;
case 30:
num=1;
num2=14;
value=190;
break;
case 31:
num=1;
num2=15;
value=115;
break;
}
switch (iParam0){
case 32:
num=2;
num2=0;
value=415;
break;
case 33:
num=2;
num2=1;
value=115;
break;
case 34:
num=2;
num2=2;
value=135;
break;
case 35:
num=2;
num2=3;
value=125;
break;
case 36:
num=2;
num2=4;
value=105;
break;
case 37:
num=2;
num2=5;
value=130;
break;
case 38:
num=2;
num2=6;
value=3530;
break;
case 39:
num=2;
num2=7;
value=2610;
break;
case 40:
num=2;
num2=8;
value=1295;
break;
case 41:
num=2;
num2=9;
value=120;
break;
case 42:
num=2;
num2=10;
value=160;
break;
case 43:
num=2;
num2=11;
value=160;
break;
case 44:
num=2;
num2=12;
value=145;
break;
case 45:
num=2;
num2=13;
value=105;
break;
case 46:
num=2;
num2=14;
value=115;
break;
case 47:
num=2;
num2=15;
value=150;
break;
case 48:
num=3;
num2=0;
value=540;
break;
case 49:
num=3;
num2=1;
value=115;
break;
case 50:
num=3;
num2=2;
value=110;
break;
case 51:
num=3;
num2=3;
value=120;
break;
case 52:
num=3;
num2=4;
value=460;
break;
case 53:
num=3;
num2=5;
value=120;
break;
case 54:
num=3;
num2=6;
value=120;
break;
case 55:
num=3;
num2=7;
value=415;
break;
case 56:
num=3;
num2=8;
value=135;
break;
case 57:
num=3;
num2=9;
value=140;
break;
case 58:
num=3;
num2=10;
value=160;
break;
case 59:
num=3;
num2=11;
value=120;
break;
case 60:
num=3;
num2=12;
value=1025;
break;
case 61:
num=3;
num2=13;
value=1560;
break;
case 62:
num=3;
num2=14;
value=145;
break;
case 63:
num=3;
num2=15;
value=120;
break;
}
switch (iParam0){
case 64:
num=4;
num2=0;
value=365;
break;
case 65:
num=4;
num2=1;
value=100;
break;
case 66:
num=4;
num2=2;
value=65;
break;
case 67:
num=4;
num2=3;
value=85;
break;
case 68:
num=4;
num2=4;
value=0;
flag=true;
break;
case 69:
num=4;
num2=5;
value=0;
flag=true;
break;
case 70:
num=4;
num2=6;
value=0;
flag=true;
break;
case 71:
num=4;
num2=7;
value=0;
flag=true;
break;
case 72:
num=4;
num2=8;
value=0;
flag=true;
break;
case 73:
num=4;
num2=9;
value=0;
flag=true;
break;
case 74:
num=4;
num2=10;
value=0;
flag=true;
break;
case 75:
num=4;
num2=11;
value=0;
flag=true;
break;
case 76:
num=4;
num2=12;
value=0;
flag=true;
break;
case 77:
num=4;
num2=13;
value=0;
flag=true;
break;
case 78:
num=4;
num2=14;
value=0;
flag=true;
break;
case 79:
num=4;
num2=15;
value=0;
flag=true;
break;
case 80:
num=5;
num2=0;
value=50;
break;
case 81:
num=5;
num2=1;
value=35;
break;
case 82:
num=5;
num2=2;
value=0;
flag=true;
break;
case 83:
num=5;
num2=3;
value=0;
flag=true;
break;
case 84:
num=5;
num2=4;
value=0;
flag=true;
break;
case 85:
num=5;
num2=5;
value=0;
flag=true;
break;
case 86:
num=5;
num2=6;
value=0;
flag=true;
break;
case 87:
num=5;
num2=7;
value=0;
flag=true;
break;
case 88:
num=5;
num2=8;
value=0;
flag=true;
break;
case 89:
num=5;
num2=9;
value=0;
flag=true;
break;
case 90:
num=5;
num2=10;
value=50;
break;
case 91:
num=5;
num2=11;
value=0;
flag=true;
break;
case 92:
num=5;
num2=12;
value=0;
flag=true;
break;
case 93:
num=5;
num2=13;
value=50;
break;
case 94:
num=5;
num2=14;
value=0;
flag=true;
break;
case 95:
num=5;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 96:
num=6;
num2=0;
value=2395;
break;
case 97:
num=6;
num2=1;
value=3675;
break;
case 98:
num=6;
num2=2;
value=320;
break;
case 99:
num=6;
num2=3;
value=3875;
break;
case 100:
num=6;
num2=4;
value=0;
flag=true;
break;
case 101:
num=6;
num2=5;
value=0;
flag=true;
break;
case 102:
num=6;
num2=6;
value=0;
flag=true;
break;
case 103:
num=6;
num2=7;
value=0;
flag=true;
break;
case 104:
num=6;
num2=8;
value=0;
flag=true;
break;
case 105:
num=6;
num2=9;
value=0;
flag=true;
break;
case 106:
num=6;
num2=10;
value=0;
flag=true;
break;
case 107:
num=6;
num2=11;
value=0;
flag=true;
break;
case 108:
num=6;
num2=12;
value=0;
flag=true;
break;
case 109:
num=6;
num2=13;
value=0;
flag=true;
break;
case 110:
num=6;
num2=14;
value=0;
flag=true;
break;
case 111:
num=6;
num2=15;
value=0;
flag=true;
break;
case 112:
num=7;
num2=0;
value=2050;
break;
case 113:
num=7;
num2=1;
value=375;
break;
case 114:
num=7;
num2=2;
value=2105;
break;
case 115:
num=7;
num2=3;
value=345;
break;
case 116:
num=7;
num2=4;
value=380;
break;
case 117:
num=7;
num2=5;
value=340;
break;
case 118:
num=7;
num2=6;
value=385;
break;
case 119:
num=7;
num2=7;
value=4135;
break;
case 120:
num=7;
num2=8;
value=370;
break;
case 121:
num=7;
num2=9;
value=375;
break;
case 122:
num=7;
num2=10;
value=385;
break;
case 123:
num=7;
num2=11;
value=365;
break;
case 124:
num=7;
num2=12;
value=325;
break;
case 125:
num=7;
num2=13;
value=325;
break;
case 126:
num=7;
num2=14;
value=370;
break;
case 127:
num=7;
num2=15;
value=330;
break;
}
switch (iParam0){
case 128:
num=8;
num2=0;
value=1025;
break;
case 129:
num=8;
num2=1;
value=390;
break;
case 130:
num=8;
num2=2;
value=400;
break;
case 131:
num=8;
num2=3;
value=390;
break;
case 132:
num=8;
num2=4;
value=365;
break;
case 133:
num=8;
num2=5;
value=410;
break;
case 134:
num=8;
num2=6;
value=4125;
break;
case 135:
num=8;
num2=7;
value=4365;
break;
case 136:
num=8;
num2=8;
value=5365;
break;
case 137:
num=8;
num2=9;
value=6225;
break;
case 138:
num=8;
num2=10;
value=3755;
break;
case 139:
num=8;
num2=11;
value=405;
break;
case 140:
num=8;
num2=12;
value=4115;
break;
case 141:
num=8;
num2=13;
value=2240;
break;
case 142:
num=8;
num2=14;
value=3850;
break;
case 143:
num=8;
num2=15;
value=3110;
break;
case 144:
num=9;
num2=0;
value=1950;
break;
case 145:
num=9;
num2=1;
value=455;
break;
case 146:
num=9;
num2=2;
value=405;
break;
case 147:
num=9;
num2=3;
value=410;
break;
case 148:
num=9;
num2=4;
value=0;
flag=true;
break;
case 149:
num=9;
num2=5;
value=0;
flag=true;
break;
case 150:
num=9;
num2=6;
value=0;
flag=true;
break;
case 151:
num=9;
num2=7;
value=0;
flag=true;
break;
case 152:
num=9;
num2=8;
value=0;
flag=true;
break;
case 153:
num=9;
num2=9;
value=0;
flag=true;
break;
case 154:
num=9;
num2=10;
value=0;
flag=true;
break;
case 155:
num=9;
num2=11;
value=415;
break;
case 156:
num=9;
num2=12;
value=4425;
break;
case 157:
num=9;
num2=13;
value=0;
flag=true;
break;
case 158:
num=9;
num2=14;
value=0;
flag=true;
break;
case 159:
num=9;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 160:
num=10;
num2=0;
value=115;
break;
case 161:
num=10;
num2=1;
value=65;
break;
case 162:
num=10;
num2=2;
value=85;
break;
case 163:
num=10;
num2=3;
value=75;
break;
case 164:
num=10;
num2=4;
value=0;
flag=true;
break;
case 165:
num=10;
num2=5;
value=0;
flag=true;
break;
case 166:
num=10;
num2=6;
value=0;
flag=true;
break;
case 167:
num=10;
num2=7;
value=0;
flag=true;
break;
case 168:
num=10;
num2=8;
value=0;
flag=true;
break;
case 169:
num=10;
num2=9;
value=0;
flag=true;
break;
case 170:
num=10;
num2=10;
value=0;
flag=true;
break;
case 171:
num=10;
num2=11;
value=0;
flag=true;
break;
case 172:
num=10;
num2=12;
value=0;
flag=true;
break;
case 173:
num=10;
num2=13;
value=0;
flag=true;
break;
case 174:
num=10;
num2=14;
value=0;
flag=true;
break;
case 175:
num=10;
num2=15;
value=0;
flag=true;
break;
case 176:
num=11;
num2=0;
value=115;
break;
case 177:
num=11;
num2=1;
value=360;
break;
case 178:
num=11;
num2=2;
value=135;
break;
case 179:
num=11;
num2=3;
value=175;
break;
case 180:
num=11;
num2=4;
value=0;
flag=true;
break;
case 181:
num=11;
num2=5;
value=0;
flag=true;
break;
case 182:
num=11;
num2=6;
value=0;
flag=true;
break;
case 183:
num=11;
num2=7;
value=0;
flag=true;
break;
case 184:
num=11;
num2=8;
value=0;
flag=true;
break;
case 185:
num=11;
num2=9;
value=0;
flag=true;
break;
case 186:
num=11;
num2=10;
value=0;
flag=true;
break;
case 187:
num=11;
num2=11;
value=0;
flag=true;
break;
case 188:
num=11;
num2=12;
value=0;
flag=true;
break;
case 189:
num=11;
num2=13;
value=0;
flag=true;
break;
case 190:
num=11;
num2=14;
value=0;
flag=true;
break;
case 191:
num=11;
num2=15;
value=0;
flag=true;
break;
case 192:
num=12;
num2=0;
value=0;
flag=true;
break;
case 193:
num=12;
num2=1;
value=0;
flag=true;
break;
case 194:
num=12;
num2=2;
value=0;
flag=true;
break;
case 195:
num=12;
num2=3;
value=0;
flag=true;
break;
case 196:
num=12;
num2=4;
value=0;
flag=true;
break;
case 197:
num=12;
num2=5;
value=0;
flag=true;
break;
case 198:
num=12;
num2=6;
value=0;
flag=true;
break;
case 199:
num=12;
num2=7;
value=0;
flag=true;
break;
case 200:
num=12;
num2=8;
value=0;
flag=true;
break;
case 201:
num=12;
num2=9;
value=0;
flag=true;
break;
case 202:
num=12;
num2=10;
value=0;
flag=true;
break;
case 203:
num=12;
num2=11;
value=0;
flag=true;
break;
case 204:
num=12;
num2=12;
value=0;
flag=true;
break;
case 205:
num=12;
num2=13;
value=0;
flag=true;
break;
case 206:
num=12;
num2=14;
value=0;
flag=true;
break;
case 207:
num=12;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 208:
num=13;
num2=0;
value=675;
break;
case 209:
num=13;
num2=1;
value=100;
break;
case 210:
num=13;
num2=2;
value=400;
break;
case 211:
num=13;
num2=3;
value=340;
break;
case 212:
num=13;
num2=4;
value=195;
break;
case 213:
num=13;
num2=5;
value=215;
break;
case 214:
num=13;
num2=6;
value=120;
break;
case 215:
num=13;
num2=7;
value=165;
break;
case 216:
num=13;
num2=8;
value=100;
break;
case 217:
num=13;
num2=9;
value=1040;
break;
case 218:
num=13;
num2=10;
value=100;
break;
case 219:
num=13;
num2=11;
value=120;
break;
case 220:
num=13;
num2=12;
value=210;
break;
case 221:
num=13;
num2=13;
value=205;
break;
case 222:
num=13;
num2=14;
value=200;
break;
case 223:
num=13;
num2=15;
value=100;
break;
case 224:
num=14;
num2=0;
value=1420;
break;
case 225:
num=14;
num2=1;
value=445;
break;
case 226:
num=14;
num2=2;
value=435;
break;
case 227:
num=14;
num2=3;
value=420;
break;
case 228:
num=14;
num2=4;
value=425;
break;
case 229:
num=14;
num2=5;
value=435;
break;
case 230:
num=14;
num2=6;
value=425;
break;
case 231:
num=14;
num2=7;
value=430;
break;
case 232:
num=14;
num2=8;
value=3215;
break;
case 233:
num=14;
num2=9;
value=3320;
break;
case 234:
num=14;
num2=10;
value=440;
break;
case 235:
num=14;
num2=11;
value=440;
break;
case 236:
num=14;
num2=12;
value=445;
break;
case 237:
num=14;
num2=13;
value=450;
break;
case 238:
num=14;
num2=14;
value=450;
break;
case 239:
num=14;
num2=15;
value=1255;
break;
case 240:
num=15;
num2=0;
value=750;
break;
case 241:
num=15;
num2=1;
value=165;
break;
case 242:
num=15;
num2=2;
value=460;
break;
case 243:
num=15;
num2=3;
value=190;
break;
case 244:
num=15;
num2=4;
value=195;
break;
case 245:
num=15;
num2=5;
value=200;
break;
case 246:
num=15;
num2=6;
value=205;
break;
case 247:
num=15;
num2=7;
value=210;
break;
case 248:
num=15;
num2=8;
value=215;
break;
case 249:
num=15;
num2=9;
value=220;
break;
case 250:
num=15;
num2=10;
value=455;
break;
case 251:
num=15;
num2=11;
value=175;
break;
case 252:
num=15;
num2=12;
value=800;
break;
case 253:
num=15;
num2=13;
value=790;
break;
case 254:
num=15;
num2=14;
value=175;
break;
case 255:
num=15;
num2=15;
value=190;
break;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "F_FMF_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
num6=iParam0;
if(num6 >=0 && num6 < 256) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1770[num6] * Global_296940.f_25);
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=4;
func_219(num5, iParam0, 256, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_25);
}else{
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_227(int iParam0, Hash hParam1) // Position - 0x20E4C{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=4;
switch (iParam0){
case 0:
num=0;
num2=0;
value=270;
break;
case 1:
num=0;
num2=1;
value=750;
break;
case 2:
num=0;
num2=2;
value=450;
break;
case 3:
num=0;
num2=3;
value=4875;
break;
case 4:
num=0;
num2=4;
value=1760;
break;
case 5:
num=0;
num2=5;
value=1090;
break;
case 6:
num=0;
num2=6;
value=2465;
break;
case 7:
num=0;
num2=7;
value=305;
break;
case 8:
num=0;
num2=8;
value=290;
break;
case 9:
num=0;
num2=9;
value=410;
break;
case 10:
num=0;
num2=10;
value=255;
break;
case 11:
num=0;
num2=11;
value=255;
break;
case 12:
num=0;
num2=12;
value=405;
break;
case 13:
num=0;
num2=13;
value=5000;
break;
case 14:
num=0;
num2=14;
value=4480;
break;
case 15:
num=0;
num2=15;
value=4335;
break;
}
switch (iParam0){
case 16:
num=1;
num2=0;
value=375;
break;
case 17:
num=1;
num2=1;
value=265;
break;
case 18:
num=1;
num2=2;
value=275;
break;
case 19:
num=1;
num2=3;
value=280;
break;
case 20:
num=1;
num2=4;
value=300;
break;
case 21:
num=1;
num2=5;
value=265;
break;
case 22:
num=1;
num2=6;
value=255;
break;
case 23:
num=1;
num2=7;
value=250;
break;
case 24:
num=1;
num2=8;
value=260;
break;
case 25:
num=1;
num2=9;
value=250;
break;
case 26:
num=1;
num2=10;
value=225;
break;
case 27:
num=1;
num2=11;
value=230;
break;
case 28:
num=1;
num2=12;
value=215;
break;
case 29:
num=1;
num2=13;
value=650;
break;
case 30:
num=1;
num2=14;
value=425;
break;
case 31:
num=1;
num2=15;
value=345;
break;
}
switch (iParam0){
case 32:
num=2;
num2=0;
value=115;
break;
case 33:
num=2;
num2=1;
value=110;
break;
case 34:
num=2;
num2=2;
value=250;
break;
case 35:
num=2;
num2=3;
value=0;
flag=true;
break;
case 36:
num=2;
num2=4;
value=0;
flag=true;
break;
case 37:
num=2;
num2=5;
value=0;
flag=true;
break;
case 38:
num=2;
num2=6;
value=0;
flag=true;
break;
case 39:
num=2;
num2=7;
value=0;
flag=true;
break;
case 40:
num=2;
num2=8;
value=0;
flag=true;
break;
case 41:
num=2;
num2=9;
value=0;
flag=true;
break;
case 42:
num=2;
num2=10;
value=0;
flag=true;
break;
case 43:
num=2;
num2=11;
value=0;
flag=true;
break;
case 44:
num=2;
num2=12;
value=0;
flag=true;
break;
case 45:
num=2;
num2=13;
value=0;
flag=true;
break;
case 46:
num=2;
num2=14;
value=0;
flag=true;
break;
case 47:
num=2;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 48:
num=3;
num2=0;
value=290;
break;
case 49:
num=3;
num2=1;
value=115;
break;
case 50:
num=3;
num2=2;
value=135;
break;
case 51:
num=3;
num2=3;
value=125;
break;
case 52:
num=3;
num2=4;
value=120;
break;
case 53:
num=3;
num2=5;
value=130;
break;
case 54:
num=3;
num2=6;
value=110;
break;
case 55:
num=3;
num2=7;
value=525;
break;
case 56:
num=3;
num2=8;
value=115;
break;
case 57:
num=3;
num2=9;
value=535;
break;
case 58:
num=3;
num2=10;
value=135;
break;
case 59:
num=3;
num2=11;
value=120;
break;
case 60:
num=3;
num2=12;
value=130;
break;
case 61:
num=3;
num2=13;
value=140;
break;
case 62:
num=3;
num2=14;
value=130;
break;
case 63:
num=3;
num2=15;
value=520;
break;
}
switch (iParam0){
case 64:
num=4;
num2=0;
value=215;
break;
case 65:
num=4;
num2=1;
value=220;
break;
case 66:
num=4;
num2=2;
value=225;
break;
case 67:
num=4;
num2=3;
value=245;
break;
case 68:
num=4;
num2=4;
value=215;
break;
case 69:
num=4;
num2=5;
value=630;
break;
case 70:
num=4;
num2=6;
value=250;
break;
case 71:
num=4;
num2=7;
value=260;
break;
case 72:
num=4;
num2=8;
value=200;
break;
case 73:
num=4;
num2=9;
value=225;
break;
case 74:
num=4;
num2=10;
value=230;
break;
case 75:
num=4;
num2=11;
value=725;
break;
case 76:
num=4;
num2=12;
value=650;
break;
case 77:
num=4;
num2=13;
value=230;
break;
case 78:
num=4;
num2=14;
value=230;
break;
case 79:
num=4;
num2=15;
value=280;
break;
}
switch (iParam0){
case 80:
num=5;
num2=0;
value=0;
flag=true;
break;
case 81:
num=5;
num2=1;
value=0;
flag=true;
break;
case 82:
num=5;
num2=2;
value=0;
flag=true;
break;
case 83:
num=5;
num2=3;
value=0;
flag=true;
break;
case 84:
num=5;
num2=4;
value=0;
flag=true;
break;
case 85:
num=5;
num2=5;
value=0;
flag=true;
break;
case 86:
num=5;
num2=6;
value=0;
flag=true;
break;
case 87:
num=5;
num2=7;
value=0;
flag=true;
break;
case 88:
num=5;
num2=8;
value=330;
break;
case 89:
num=5;
num2=9;
value=0;
flag=true;
break;
case 90:
num=5;
num2=10;
value=0;
flag=true;
break;
case 91:
num=5;
num2=11;
value=0;
flag=true;
break;
case 92:
num=5;
num2=12;
value=0;
flag=true;
break;
case 93:
num=5;
num2=13;
value=0;
flag=true;
break;
case 94:
num=5;
num2=14;
value=320;
break;
case 95:
num=5;
num2=15;
value=315;
break;
}
switch (iParam0){
case 96:
num=6;
num2=0;
value=850;
break;
case 97:
num=6;
num2=1;
value=535;
break;
case 98:
num=6;
num2=2;
value=530;
break;
case 99:
num=6;
num2=3;
value=0;
flag=true;
break;
case 100:
num=6;
num2=4;
value=0;
flag=true;
break;
case 101:
num=6;
num2=5;
value=0;
flag=true;
break;
case 102:
num=6;
num2=6;
value=0;
flag=true;
break;
case 103:
num=6;
num2=7;
value=0;
flag=true;
break;
case 104:
num=6;
num2=8;
value=0;
flag=true;
break;
case 105:
num=6;
num2=9;
value=0;
flag=true;
break;
case 106:
num=6;
num2=10;
value=0;
flag=true;
break;
case 107:
num=6;
num2=11;
value=0;
flag=true;
break;
case 108:
num=6;
num2=12;
value=0;
flag=true;
break;
case 109:
num=6;
num2=13;
value=0;
flag=true;
break;
case 110:
num=6;
num2=14;
value=0;
flag=true;
break;
case 111:
num=6;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 112:
num=7;
num2=0;
value=890;
break;
case 113:
num=7;
num2=1;
value=440;
break;
case 114:
num=7;
num2=2;
value=455;
break;
case 115:
num=7;
num2=3;
value=0;
flag=true;
break;
case 116:
num=7;
num2=4;
value=0;
flag=true;
break;
case 117:
num=7;
num2=5;
value=0;
flag=true;
break;
case 118:
num=7;
num2=6;
value=0;
flag=true;
break;
case 119:
num=7;
num2=7;
value=0;
flag=true;
break;
case 120:
num=7;
num2=8;
value=0;
flag=true;
break;
case 121:
num=7;
num2=9;
value=0;
flag=true;
break;
case 122:
num=7;
num2=10;
value=0;
flag=true;
break;
case 123:
num=7;
num2=11;
value=0;
flag=true;
break;
case 124:
num=7;
num2=12;
value=0;
flag=true;
break;
case 125:
num=7;
num2=13;
value=0;
flag=true;
break;
case 126:
num=7;
num2=14;
value=0;
flag=true;
break;
case 127:
num=7;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 128:
num=8;
num2=0;
value=295;
break;
case 129:
num=8;
num2=1;
value=180;
break;
case 130:
num=8;
num2=2;
value=150;
break;
case 131:
num=8;
num2=3;
value=150;
break;
case 132:
num=8;
num2=4;
value=155;
break;
case 133:
num=8;
num2=5;
value=840;
break;
case 134:
num=8;
num2=6;
value=205;
break;
case 135:
num=8;
num2=7;
value=150;
break;
case 136:
num=8;
num2=8;
value=950;
break;
case 137:
num=8;
num2=9;
value=580;
break;
case 138:
num=8;
num2=10;
value=200;
break;
case 139:
num=8;
num2=11;
value=665;
break;
case 140:
num=8;
num2=12;
value=780;
break;
case 141:
num=8;
num2=13;
value=0;
flag=true;
break;
case 142:
num=8;
num2=14;
value=615;
break;
case 143:
num=8;
num2=15;
value=250;
break;
}
switch (iParam0){
case 144:
num=9;
num2=0;
value=495;
break;
case 145:
num=9;
num2=1;
value=435;
break;
case 146:
num=9;
num2=2;
value=420;
break;
case 147:
num=9;
num2=3;
value=390;
break;
case 148:
num=9;
num2=4;
value=485;
break;
case 149:
num=9;
num2=5;
value=380;
break;
case 150:
num=9;
num2=6;
value=1295;
break;
case 151:
num=9;
num2=7;
value=1135;
break;
case 152:
num=9;
num2=8;
value=1425;
break;
case 153:
num=9;
num2=9;
value=1645;
break;
case 154:
num=9;
num2=10;
value=1925;
break;
case 155:
num=9;
num2=11;
value=2250;
break;
case 156:
num=9;
num2=12;
value=365;
break;
case 157:
num=9;
num2=13;
value=360;
break;
case 158:
num=9;
num2=14;
value=2245;
break;
case 159:
num=9;
num2=15;
value=2170;
break;
case 160:
num=10;
num2=0;
value=50;
break;
case 161:
num=10;
num2=1;
value=100;
break;
case 162:
num=10;
num2=2;
value=65;
break;
case 163:
num=10;
num2=3;
value=0;
flag=true;
break;
case 164:
num=10;
num2=4;
value=0;
flag=true;
break;
case 165:
num=10;
num2=5;
value=0;
flag=true;
break;
case 166:
num=10;
num2=6;
value=0;
flag=true;
break;
case 167:
num=10;
num2=7;
value=0;
flag=true;
break;
case 168:
num=10;
num2=8;
value=0;
flag=true;
break;
case 169:
num=10;
num2=9;
value=0;
flag=true;
break;
case 170:
num=10;
num2=10;
value=0;
flag=true;
break;
case 171:
num=10;
num2=11;
value=0;
flag=true;
break;
case 172:
num=10;
num2=12;
value=0;
flag=true;
break;
case 173:
num=10;
num2=13;
value=0;
flag=true;
break;
case 174:
num=10;
num2=14;
value=0;
flag=true;
break;
case 175:
num=10;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 176:
num=11;
num2=0;
value=275;
break;
case 177:
num=11;
num2=1;
value=300;
break;
case 178:
num=11;
num2=2;
value=145;
break;
case 179:
num=11;
num2=3;
value=150;
break;
case 180:
num=11;
num2=4;
value=110;
break;
case 181:
num=11;
num2=5;
value=95;
break;
case 182:
num=11;
num2=6;
value=155;
break;
case 183:
num=11;
num2=7;
value=155;
break;
case 184:
num=11;
num2=8;
value=510;
break;
case 185:
num=11;
num2=9;
value=165;
break;
case 186:
num=11;
num2=10;
value=465;
break;
case 187:
num=11;
num2=11;
value=250;
break;
case 188:
num=11;
num2=12;
value=110;
break;
case 189:
num=11;
num2=13;
value=470;
break;
case 190:
num=11;
num2=14;
value=480;
break;
case 191:
num=11;
num2=15;
value=155;
break;
case 192:
num=12;
num2=0;
value=275;
break;
case 193:
num=12;
num2=1;
value=395;
break;
case 194:
num=12;
num2=2;
value=285;
break;
case 195:
num=12;
num2=3;
value=560;
break;
case 196:
num=12;
num2=4;
value=595;
break;
case 197:
num=12;
num2=5;
value=295;
break;
case 198:
num=12;
num2=6;
value=230;
break;
case 199:
num=12;
num2=7;
value=215;
break;
case 200:
num=12;
num2=8;
value=270;
break;
case 201:
num=12;
num2=9;
value=295;
break;
case 202:
num=12;
num2=10;
value=285;
break;
case 203:
num=12;
num2=11;
value=215;
break;
case 204:
num=12;
num2=12;
value=210;
break;
case 205:
num=12;
num2=13;
value=290;
break;
case 206:
num=12;
num2=14;
value=230;
break;
case 207:
num=12;
num2=15;
value=215;
break;
}
switch (iParam0){
case 208:
num=13;
num2=0;
value=0;
flag=true;
break;
case 209:
num=13;
num2=1;
value=0;
flag=true;
break;
case 210:
num=13;
num2=2;
value=0;
flag=true;
break;
case 211:
num=13;
num2=3;
value=0;
flag=true;
break;
case 212:
num=13;
num2=4;
value=0;
flag=true;
break;
case 213:
num=13;
num2=5;
value=0;
flag=true;
break;
case 214:
num=13;
num2=6;
value=0;
flag=true;
break;
case 215:
num=13;
num2=7;
value=0;
flag=true;
break;
case 216:
num=13;
num2=8;
value=0;
flag=true;
break;
case 217:
num=13;
num2=9;
value=0;
flag=true;
break;
case 218:
num=13;
num2=10;
value=0;
flag=true;
break;
case 219:
num=13;
num2=11;
value=0;
flag=true;
break;
case 220:
num=13;
num2=12;
value=0;
flag=true;
break;
case 221:
num=13;
num2=13;
value=0;
flag=true;
break;
case 222:
num=13;
num2=14;
value=0;
flag=true;
break;
case 223:
num=13;
num2=15;
value=0;
flag=true;
break;
case 224:
num=14;
num2=0;
value=90;
break;
case 225:
num=14;
num2=1;
value=105;
break;
case 226:
num=14;
num2=2;
value=0;
flag=true;
break;
case 227:
num=14;
num2=3;
value=0;
flag=true;
break;
case 228:
num=14;
num2=4;
value=0;
flag=true;
break;
case 229:
num=14;
num2=5;
value=0;
flag=true;
break;
case 230:
num=14;
num2=6;
value=0;
flag=true;
break;
case 231:
num=14;
num2=7;
value=0;
flag=true;
break;
case 232:
num=14;
num2=8;
value=100;
break;
case 233:
num=14;
num2=9;
value=105;
break;
case 234:
num=14;
num2=10;
value=0;
flag=true;
break;
case 235:
num=14;
num2=11;
value=0;
flag=true;
break;
case 236:
num=14;
num2=12;
value=0;
flag=true;
break;
case 237:
num=14;
num2=13;
value=0;
flag=true;
break;
case 238:
num=14;
num2=14;
value=0;
flag=true;
break;
case 239:
num=14;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 240:
num=15;
num2=0;
value=230;
break;
case 241:
num=15;
num2=1;
value=0;
flag=true;
break;
case 242:
num=15;
num2=2;
value=0;
flag=true;
break;
case 243:
num=15;
num2=3;
value=130;
break;
case 244:
num=15;
num2=4;
value=0;
flag=true;
break;
case 245:
num=15;
num2=5;
value=0;
flag=true;
break;
case 246:
num=15;
num2=6;
value=0;
flag=true;
break;
case 247:
num=15;
num2=7;
value=0;
flag=true;
break;
case 248:
num=15;
num2=8;
value=0;
flag=true;
break;
case 249:
num=15;
num2=9;
value=0;
flag=true;
break;
case 250:
num=15;
num2=10;
value=350;
break;
case 251:
num=15;
num2=11;
value=335;
break;
case 252:
num=15;
num2=12;
value=0;
flag=true;
break;
case 253:
num=15;
num2=13;
value=0;
flag=true;
break;
case 254:
num=15;
num2=14;
value=0;
flag=true;
break;
case 255:
num=15;
num2=15;
value=0;
flag=true;
break;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "L_FMF_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
num6=iParam0;
if(num6 >=0 && num6 < 256) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1256[num6] * Global_296940.f_23);
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=4;
func_219(num5, iParam0, 256, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_23);
}else{
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_228(int iParam0, Hash hParam1) // Position - 0x224AB{
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
switch (iParam0){
case 0:
num2=0;
num3=0;
break;
case 1:
num2=1;
num3=0;
break;
case 2:
num2=2;
num3=0;
break;
case 3:
num2=3;
num3=0;
break;
case 4:
num2=4;
num3=0;
break;
case 5:
num2=5;
num3=0;
break;
case 6:
num2=6;
num3=0;
break;
case 7:
num2=7;
num3=0;
break;
case 8:
num2=8;
num3=0;
break;
case 9:
num2=9;
num3=0;
break;
case 10:
num2=10;
num3=0;
break;
case 11:
num2=11;
num3=0;
break;
case 12:
num2=12;
num3=0;
break;
case 13:
num2=13;
num3=0;
break;
case 14:
num2=14;
num3=0;
break;
case 15:
num2=15;
num3=0;
break;
}
if(iParam0 >=16){
Global_78341[0 /*14*/].f_5=4;
func_219(num6, iParam0, 16, hParam1);
return;
}
func_209(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_229(int iParam0, Hash hParam1) // Position - 0x22606{
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
switch (iParam0){
case 0:
num2=0;
num3=0;
break;
case 1:
num2=1;
num3=0;
break;
case 2:
num2=1;
num3=1;
break;
case 3:
num2=1;
num3=2;
break;
case 4:
num2=1;
num3=3;
break;
case 5:
num2=1;
num3=4;
break;
case 6:
num2=2;
num3=0;
break;
case 7:
num2=2;
num3=1;
break;
case 8:
num2=2;
num3=2;
break;
case 9:
num2=2;
num3=3;
break;
case 10:
num2=2;
num3=4;
break;
case 11:
num2=3;
num3=0;
break;
case 12:
num2=3;
num3=1;
break;
case 13:
num2=3;
num3=2;
break;
case 14:
num2=3;
num3=3;
break;
case 15:
num2=3;
num3=4;
break;
case 16:
num2=4;
num3=0;
break;
case 17:
num2=4;
num3=1;
break;
case 18:
num2=4;
num3=2;
break;
case 19:
num2=4;
num3=3;
break;
case 20:
num2=4;
num3=4;
break;
case 21:
num2=5;
num3=0;
break;
case 22:
num2=5;
num3=1;
break;
case 23:
num2=5;
num3=2;
break;
case 24:
num2=5;
num3=3;
break;
case 25:
num2=5;
num3=4;
break;
case 26:
num2=6;
num3=0;
break;
case 27:
num2=6;
num3=1;
break;
case 28:
num2=6;
num3=2;
break;
case 29:
num2=6;
num3=3;
break;
case 30:
num2=6;
num3=4;
break;
case 31:
num2=7;
num3=0;
break;
case 32:
num2=7;
num3=1;
break;
case 33:
num2=7;
num3=2;
break;
case 34:
num2=7;
num3=3;
break;
case 35:
num2=7;
num3=4;
break;
}
if(iParam0 >=36){
Global_78341[0 /*14*/].f_5=4;
func_219(num6, iParam0, 36, hParam1);
return;
}
func_209(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_230(int iParam0, Hash hParam1) // Position - 0x22886{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=8;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_0" /*Crew T-Shirt*/, 16);
num=0;
num2=0;
value=250;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_1" /*Salamanders T-Shirt*/, 16);
num=0;
num2=1;
value=225;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_2" /*The Feud T-Shirt*/, 16);
num=0;
num2=2;
value=50;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_3" /*Yellow T-Shirt*/, 16);
num=0;
num2=3;
value=40;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_4" /*Red T-Shirt*/, 16);
num=0;
num2=4;
value=40;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_5" /*Cyan T-Shirt*/, 16);
num=0;
num2=5;
value=40;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_6" /*Blue T-Shirt*/, 16);
num=0;
num2=6;
value=40;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_7" /*Tan T-Shirt*/, 16);
num=0;
num2=7;
value=45;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_8" /*Pink T-Shirt*/, 16);
num=0;
num2=8;
value=40;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_9" /*Mint T-Shirt*/, 16);
num=0;
num2=9;
value=40;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_10" /*Ash T-Shirt*/, 16);
num=0;
num2=10;
value=135;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_11" /*Gray T-Shirt*/, 16);
num=0;
num2=11;
value=60;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_12" /*Leopard T-Shirt*/, 16);
num=0;
num2=12;
value=220;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_13" /*Two-Tone T-Shirt*/, 16);
num=0;
num2=13;
value=45;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_14" /*Baby Blue T-Shirt*/, 16);
num=0;
num2=14;
value=45;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_15" /*Two-Tone Striped T-Shirt*/, 16);
num=0;
num2=15;
value=125;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_0" /*Crew T-Shirt*/, 16);
num=1;
num2=0;
value=250;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_1" /*Salamanders T-Shirt*/, 16);
num=1;
num2=1;
value=60;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_2" /*The Feud T-Shirt*/, 16);
num=1;
num2=2;
value=50;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_3" /*Yellow T-Shirt*/, 16);
num=1;
num2=3;
value=40;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_4" /*Red T-Shirt*/, 16);
num=1;
num2=4;
value=40;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_5" /*Cyan T-Shirt*/, 16);
num=1;
num2=5;
value=40;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_6" /*Blue T-Shirt*/, 16);
num=1;
num2=6;
value=40;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_7" /*Tan T-Shirt*/, 16);
num=1;
num2=7;
value=45;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_8" /*Pink T-Shirt*/, 16);
num=1;
num2=8;
value=40;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_9" /*Mint T-Shirt*/, 16);
num=1;
num2=9;
value=40;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_10" /*Ash T-Shirt*/, 16);
num=1;
num2=10;
value=135;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_11" /*Gray T-Shirt*/, 16);
num=1;
num2=11;
value=60;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_12" /*Leopard T-Shirt*/, 16);
num=1;
num2=12;
value=220;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_13" /*Two-Tone T-Shirt*/, 16);
num=1;
num2=13;
value=45;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_14" /*Baby Blue T-Shirt*/, 16);
num=1;
num2=14;
value=45;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_15" /*Two-Tone Striped T-Shirt*/, 16);
num=1;
num2=15;
value=125;
break;
case 32:
num=2;
num2=0;
break;
case 33:
num=3;
num2=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_0", 16);
num=4;
num2=0;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_1", 16);
num=4;
num2=1;
flag=true;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_2", 16);
num=4;
num2=2;
flag=true;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_3", 16);
num=4;
num2=3;
flag=true;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_4", 16);
num=4;
num2=4;
flag=true;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_5", 16);
num=4;
num2=5;
flag=true;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_6", 16);
num=4;
num2=6;
flag=true;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_7", 16);
num=4;
num2=7;
flag=true;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_8", 16);
num=4;
num2=8;
flag=true;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_9", 16);
num=4;
num2=9;
flag=true;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_10", 16);
num=4;
num2=10;
flag=true;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_11", 16);
num=4;
num2=11;
flag=true;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_12", 16);
num=4;
num2=12;
flag=true;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_13" /*Red Two-Tone Tank*/, 16);
num=4;
num2=13;
value=40;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[77]);
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_14" /*Two-Tone Tank*/, 16);
num=4;
num2=14;
value=40;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[78]);
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_15", 16);
num=4;
num2=15;
flag=true;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_0" /*Off-White Cropped Tank*/, 16);
num=5;
num2=0;
value=45;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[80]);
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_1" /*Ash Cropped Tank*/, 16);
num=5;
num2=1;
value=60;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[81]);
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_2", 16);
num=5;
num2=2;
flag=true;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_3", 16);
num=5;
num2=3;
flag=true;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_4", 16);
num=5;
num2=4;
flag=true;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_5", 16);
num=5;
num2=5;
flag=true;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_6", 16);
num=5;
num2=6;
flag=true;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_7" /*Snakeskin Cropped Tank*/, 16);
num=5;
num2=7;
value=375;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[87]);
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_8", 16);
num=5;
num2=8;
flag=true;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_9" /*White Stripe Cropped Tank*/, 16);
num=5;
num2=9;
value=90;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[89]);
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_10", 16);
num=5;
num2=10;
flag=true;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_11", 16);
num=5;
num2=11;
flag=true;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_12", 16);
num=5;
num2=12;
flag=true;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_13", 16);
num=5;
num2=13;
flag=true;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_14", 16);
num=5;
num2=14;
flag=true;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_15", 16);
num=5;
num2=15;
flag=true;
break;
case 66:
num=6;
num2=0;
break;
case 67:
num=7;
num2=0;
break;
case 68:
num=8;
num2=0;
break;
case 69:
num=9;
num2=0;
break;
case 70:
num=10;
num2=0;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_0" /*Sky Blue Racerback*/, 16);
num=11;
num2=0;
value=90;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[176]);
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_1" /*Purple Racerback*/, 16);
num=11;
num2=1;
value=95;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[177]);
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_2" /*Gray Racerback*/, 16);
num=11;
num2=2;
value=95;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[178]);
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_3", 16);
num=11;
num2=3;
flag=true;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_4", 16);
num=11;
num2=4;
flag=true;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_5", 16);
num=11;
num2=5;
flag=true;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_6", 16);
num=11;
num2=6;
flag=true;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_7", 16);
num=11;
num2=7;
flag=true;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_8", 16);
num=11;
num2=8;
flag=true;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_9", 16);
num=11;
num2=9;
flag=true;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_10" /*Los Santos 01 Racerback*/, 16);
num=11;
num2=10;
value=150;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[186]);
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_11" /*LS Racerback*/, 16);
num=11;
num2=11;
value=65;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[187]);
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_12", 16);
num=11;
num2=12;
flag=true;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_13", 16);
num=11;
num2=13;
flag=true;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_14", 16);
num=11;
num2=14;
flag=true;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_15" /*LC Penetrators Racerback*/, 16);
num=11;
num2=15;
value=145;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[191]);
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_0", 16);
num=12;
num2=0;
flag=true;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_1", 16);
num=12;
num2=1;
flag=true;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_2", 16);
num=12;
num2=2;
flag=true;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_3", 16);
num=12;
num2=3;
flag=true;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_4", 16);
num=12;
num2=4;
flag=true;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_5", 16);
num=12;
num2=5;
flag=true;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_6", 16);
num=12;
num2=6;
flag=true;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_7" /*Neon Camisole*/, 16);
num=12;
num2=7;
value=1560;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[199]);
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_8" /*Red Spotted Camisole*/, 16);
num=12;
num2=8;
value=195;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[200]);
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_9" /*Black Spotted Camisole*/, 16);
num=12;
num2=9;
value=200;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[201]);
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_10", 16);
num=12;
num2=10;
flag=true;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_11", 16);
num=12;
num2=11;
flag=true;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_12", 16);
num=12;
num2=12;
flag=true;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_13", 16);
num=12;
num2=13;
flag=true;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_14", 16);
num=12;
num2=14;
flag=true;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_15", 16);
num=12;
num2=15;
flag=true;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_0" /*Black Bustier*/, 16);
num=13;
num2=0;
value=975;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[208]);
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_1" /*Pink Rose Bustier*/, 16);
num=13;
num2=1;
value=2670;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[209]);
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_2" /*Olive Bustier*/, 16);
num=13;
num2=2;
value=480;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[210]);
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_3" /*Gray Bustier*/, 16);
num=13;
num2=3;
value=400;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[211]);
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_4" /*Floral Bustier*/, 16);
num=13;
num2=4;
value=2500;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[212]);
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_5" /*Red Plaid Bustier*/, 16);
num=13;
num2=5;
value=2060;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[213]);
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_6" /*Studded Bustier*/, 16);
num=13;
num2=6;
value=2620;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[214]);
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_7" /*Pink Bustier*/, 16);
num=13;
num2=7;
value=475;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[215]);
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_8" /*White Bustier*/, 16);
num=13;
num2=8;
value=490;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[216]);
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_9" /*Vivid Blue Bustier*/, 16);
num=13;
num2=9;
value=2280;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[217]);
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_10" /*Denim Bustier*/, 16);
num=13;
num2=10;
value=485;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[218]);
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_11" /*Pink Tribal Bustier*/, 16);
num=13;
num2=11;
value=2390;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[219]);
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_12" /*Camo Bustier*/, 16);
num=13;
num2=12;
value=2610;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[220]);
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_13" /*Blue Bustier*/, 16);
num=13;
num2=13;
value=1450;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[221]);
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_14" /*Black & White Bustier*/, 16);
num=13;
num2=14;
value=2720;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[222]);
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_15" /*Leopard Bustier*/, 16);
num=13;
num2=15;
value=4995;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[223]);
break;
case 119:
num=14;
num2=0;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_0" /*Black Bikini*/, 16);
num=15;
num2=0;
value=325;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[240]);
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_1", 16);
num=15;
num2=1;
flag=true;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_2", 16);
num=15;
num2=2;
flag=true;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_3" /*Gray Bikini*/, 16);
num=15;
num2=3;
value=130;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[243]);
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_4", 16);
num=15;
num2=4;
flag=true;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_5", 16);
num=15;
num2=5;
flag=true;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_6", 16);
num=15;
num2=6;
flag=true;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_7", 16);
num=15;
num2=7;
flag=true;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_8", 16);
num=15;
num2=8;
flag=true;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_9", 16);
num=15;
num2=9;
flag=true;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_10" /*Aqua Bikini*/, 16);
num=15;
num2=10;
value=450;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[250]);
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_11" /*Orange Bikini*/, 16);
num=15;
num2=11;
value=465;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[251]);
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_12", 16);
num=15;
num2=12;
flag=true;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_13", 16);
num=15;
num2=13;
flag=true;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_14", 16);
num=15;
num2=14;
flag=true;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_15", 16);
num=15;
num2=15;
flag=true;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_219(num5, iParam0, 136, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_24);
return;
}
if(iParam0==4 || iParam0==20){
if(func_231(89, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[4]);
}}elseif(iParam0==7 || iParam0==23){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989);
}elseif(iParam0==9 || iParam0==25){
if(func_231(87, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[9]);
}}elseif(iParam0 >=0 && iParam0 < 16){
num6=iParam0;
if(num6 >=0 && num6 < 256) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[num6]);
}elseif(iParam0 >=16 && iParam0 < 32){
num7=iParam0 - 16;
if(num7 >=0 && num7 < 256) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[num7]);
}
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_296940.f_24);
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
return;
}
BOOL func_231(int iParam0, int iParam1) // Position - 0x23C28{
int num;
int num2;
if(func_233(iParam0)==14192) return false;
num=func_232(iParam0, iParam1);
num2=iParam0;
return IS_BIT_SET(num, func_114(num2));
}

int func_232(int iParam0, int iParam1) // Position - 0x23C57{
int num;
num=_MPCHAR_STAT_GET_INT(func_233(iParam0), iParam1, 0);
return num;
}
eMPStat func_233(int iParam0) // Position - 0x23C70{
int num;
int num2;
num=iParam0;
num2=func_117(num);
if(func_89()==0 || func_164()==0 || func_89()==999 && func_164()==999){
switch (num2){
case 0:
return MP_STAT_TATTOO_FM_UNLOCKS_0;
case 1:
return MP_STAT_TATTOO_FM_UNLOCKS_1;
case 2:
return MP_STAT_TATTOO_FM_UNLOCKS_2;
case 3:
return MP_STAT_TATTOO_FM_UNLOCKS_3;
case 4:
return MP_STAT_TATTOO_FM_UNLOCKS_4;
case 5:
return MP_STAT_TATTOO_FM_UNLOCKS_5;
case 6:
return MP_STAT_TATTOO_FM_UNLOCKS_6;
case 7:
return MP_STAT_TATTOO_FM_UNLOCKS_7;
case 8:
return MP_STAT_TATTOO_FM_UNLOCKS_8;
case 9:
return MP_STAT_TATTOO_FM_UNLOCKS_9;
case 10:
return MP_STAT_TATTOO_FM_UNLOCKS_10;
case 11:
return MP_STAT_TATTOO_FM_UNLOCKS_11;
case 12:
return MP_STAT_TATTOO_FM_UNLOCKS_12;
case 13:
return MP_STAT_TATTOO_FM_UNLOCKS_13;
case 14:
return MP_STAT_TATTOO_FM_UNLOCKS_14;
case 15:
return MP_STAT_TATTOO_FM_UNLOCKS_15;
case 16:
return MP_STAT_TATTOO_FM_UNLOCKS_16;
case 17:
return MP_STAT_TATTOO_FM_UNLOCKS_17;
case 18:
return MP_STAT_TATTOO_FM_UNLOCKS_18;
case 19:
return MP_STAT_TATTOO_FM_UNLOCKS_19;
case 20:
return MP_STAT_TATTOO_FM_UNLOCKS_20;
case 21:
return MP_STAT_TATTOO_FM_UNLOCKS_21;
case 22:
return MP_STAT_TATTOO_FM_UNLOCKS_22;
case 23:
return MP_STAT_TATTOO_FM_UNLOCKS_23;
case 24:
return MP_STAT_TATTOO_FM_UNLOCKS_24;
case 25:
return MP_STAT_TATTOO_FM_UNLOCKS_25;
case 26:
return MP_STAT_TATTOO_FM_UNLOCKS_26;
case 27:
return MP_STAT_TATTOO_FM_UNLOCKS_27;
case 28:
return MP_STAT_TATTOO_FM_UNLOCKS_28;
case 29:
return MP_STAT_TATTOO_FM_UNLOCKS_29;
case 30:
return MP_STAT_TATTOO_FM_UNLOCKS_30;
case 31:
return MP_STAT_TATTOO_FM_UNLOCKS_31;
case 32:
return MP_STAT_TATTOO_FM_UNLOCKS_32;
case 33:
return MP_STAT_TATTOO_FM_UNLOCKS_33;
case 34:
return MP_STAT_TATTOO_FM_UNLOCKS_34;
case 35:
return MP_STAT_TATTOO_FM_UNLOCKS_35;
case 36:
return MP_STAT_TATTOO_FM_UNLOCKS_36;
case 37:
return MP_STAT_TATTOO_FM_UNLOCKS_37;
case 38:
return MP_STAT_TATTOO_FM_UNLOCKS_38;
case 39:
return MP_STAT_TATTOO_FM_UNLOCKS_39;
case 40:
return MP_STAT_TATTOO_FM_UNLOCKS_40;
case 41:
return MP_STAT_TATTOO_FM_UNLOCKS_41;
case 42:
return MP_STAT_TATTOO_FM_UNLOCKS_42;
case 43:
return MP_STAT_TATTOO_FM_UNLOCKS_43;
case 44:
return MP_STAT_TATTOO_FM_UNLOCKS_44;
case 45:
return MP_STAT_TATTOO_FM_UNLOCKS_45;
case 46:
return MP_STAT_TATTOO_FM_UNLOCKS_46;
case 47:
return MP_STAT_TATTOO_FM_UNLOCKS_47;
case 48:
return _0x1336161242;
case 49:
return _0x1587587249;
case 50:
return MP_STAT_OPPRESSOR_MISS_HITS;
case 51:
return MP_STAT_TAMPA3_MISS_KILLS;
}}
return 14192;
}


void func_234(int iParam0, Hash hParam1) // Position - 0x23FCD{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=11;
switch (iParam0){
case 0:
num=0;
num2=0;
value=250;
break;
case 1:
num=0;
num2=1;
value=225;
break;
case 2:
num=0;
num2=2;
value=50;
break;
case 3:
num=0;
num2=3;
value=40;
break;
case 4:
num=0;
num2=4;
value=40;
break;
case 5:
num=0;
num2=5;
value=40;
break;
case 6:
num=0;
num2=6;
value=40;
break;
case 7:
num=0;
num2=7;
value=45;
break;
case 8:
num=0;
num2=8;
value=40;
break;
case 9:
num=0;
num2=9;
value=40;
break;
case 10:
num=0;
num2=10;
value=135;
break;
case 11:
num=0;
num2=11;
value=60;
break;
case 12:
num=0;
num2=12;
value=220;
break;
case 13:
num=0;
num2=13;
value=45;
break;
case 14:
num=0;
num2=14;
value=45;
break;
case 15:
num=0;
num2=15;
value=125;
break;
}
switch (iParam0){
case 16:
num=1;
num2=0;
value=390;
break;
case 17:
num=1;
num2=1;
value=230;
break;
case 18:
num=1;
num2=2;
value=355;
break;
case 19:
num=1;
num2=3;
value=0;
flag=true;
break;
case 20:
num=1;
num2=4;
value=5000;
break;
case 21:
num=1;
num2=5;
value=2725;
break;
case 22:
num=1;
num2=6;
value=3265;
break;
case 23:
num=1;
num2=7;
value=0;
flag=true;
break;
case 24:
num=1;
num2=8;
value=0;
flag=true;
break;
case 25:
num=1;
num2=9;
value=3625;
break;
case 26:
num=1;
num2=10;
value=0;
flag=true;
break;
case 27:
num=1;
num2=11;
value=4220;
break;
case 28:
num=1;
num2=12;
value=0;
flag=true;
break;
case 29:
num=1;
num2=13;
value=0;
flag=true;
break;
case 30:
num=1;
num2=14;
value=310;
break;
case 31:
num=1;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 32:
num=2;
num2=0;
value=45;
break;
case 33:
num=2;
num2=1;
value=210;
break;
case 34:
num=2;
num2=2;
value=75;
break;
case 35:
num=2;
num2=3;
value=50;
break;
case 36:
num=2;
num2=4;
value=60;
break;
case 37:
num=2;
num2=5;
value=50;
break;
case 38:
num=2;
num2=6;
value=295;
break;
case 39:
num=2;
num2=7;
value=80;
break;
case 40:
num=2;
num2=8;
value=75;
break;
case 41:
num=2;
num2=9;
value=2250;
break;
case 42:
num=2;
num2=10;
value=275;
break;
case 43:
num=2;
num2=11;
value=445;
break;
case 44:
num=2;
num2=12;
value=50;
break;
case 45:
num=2;
num2=13;
value=40;
break;
case 46:
num=2;
num2=14;
value=45;
break;
case 47:
num=2;
num2=15;
value=470;
break;
}
switch (iParam0){
case 48:
num=3;
num2=0;
value=95;
break;
case 49:
num=3;
num2=1;
value=95;
break;
case 50:
num=3;
num2=2;
value=360;
break;
case 51:
num=3;
num2=3;
value=100;
break;
case 52:
num=3;
num2=4;
value=60;
break;
case 53:
num=3;
num2=5;
value=0;
flag=true;
break;
case 54:
num=3;
num2=6;
value=0;
flag=true;
break;
case 55:
num=3;
num2=7;
value=0;
flag=true;
break;
case 56:
num=3;
num2=8;
value=0;
flag=true;
break;
case 57:
num=3;
num2=9;
value=0;
flag=true;
break;
case 58:
num=3;
num2=10;
value=295;
break;
case 59:
num=3;
num2=11;
value=460;
break;
case 60:
num=3;
num2=12;
value=1980;
break;
case 61:
num=3;
num2=13;
value=2110;
break;
case 62:
num=3;
num2=14;
value=95;
break;
case 63:
num=3;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 64:
num=4;
num2=0;
value=0;
flag=true;
break;
case 65:
num=4;
num2=1;
value=0;
flag=true;
break;
case 66:
num=4;
num2=2;
value=0;
flag=true;
break;
case 67:
num=4;
num2=3;
value=0;
flag=true;
break;
case 68:
num=4;
num2=4;
value=0;
flag=true;
break;
case 69:
num=4;
num2=5;
value=0;
flag=true;
break;
case 70:
num=4;
num2=6;
value=0;
flag=true;
break;
case 71:
num=4;
num2=7;
value=0;
flag=true;
break;
case 72:
num=4;
num2=8;
value=0;
flag=true;
break;
case 73:
num=4;
num2=9;
value=0;
flag=true;
break;
case 74:
num=4;
num2=10;
value=0;
flag=true;
break;
case 75:
num=4;
num2=11;
value=0;
flag=true;
break;
case 76:
num=4;
num2=12;
value=0;
flag=true;
break;
case 77:
num=4;
num2=13;
value=40;
break;
case 78:
num=4;
num2=14;
value=40;
break;
case 79:
num=4;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 80:
num=5;
num2=0;
value=45;
break;
case 81:
num=5;
num2=1;
value=60;
break;
case 82:
num=5;
num2=2;
value=0;
flag=true;
break;
case 83:
num=5;
num2=3;
value=0;
flag=true;
break;
case 84:
num=5;
num2=4;
value=0;
flag=true;
break;
case 85:
num=5;
num2=5;
value=0;
flag=true;
break;
case 86:
num=5;
num2=6;
value=0;
flag=true;
break;
case 87:
num=5;
num2=7;
value=375;
break;
case 88:
num=5;
num2=8;
value=0;
flag=true;
break;
case 89:
num=5;
num2=9;
value=90;
break;
case 90:
num=5;
num2=10;
value=0;
flag=true;
break;
case 91:
num=5;
num2=11;
value=0;
flag=true;
break;
case 92:
num=5;
num2=12;
value=0;
flag=true;
break;
case 93:
num=5;
num2=13;
value=0;
flag=true;
break;
case 94:
num=5;
num2=14;
value=0;
flag=true;
break;
case 95:
num=5;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 96:
num=6;
num2=0;
value=900;
break;
case 97:
num=6;
num2=1;
value=1000;
break;
case 98:
num=6;
num2=2;
value=1050;
break;
case 99:
num=6;
num2=3;
value=0;
flag=true;
break;
case 100:
num=6;
num2=4;
value=1000;
break;
case 101:
num=6;
num2=5;
value=0;
flag=true;
break;
case 102:
num=6;
num2=6;
value=0;
flag=true;
break;
case 103:
num=6;
num2=7;
value=0;
flag=true;
break;
case 104:
num=6;
num2=8;
value=0;
flag=true;
break;
case 105:
num=6;
num2=9;
value=0;
flag=true;
break;
case 106:
num=6;
num2=10;
value=0;
flag=true;
break;
case 107:
num=6;
num2=11;
value=0;
flag=true;
break;
case 108:
num=6;
num2=12;
value=0;
flag=true;
break;
case 109:
num=6;
num2=13;
value=0;
flag=true;
break;
case 110:
num=6;
num2=14;
value=0;
flag=true;
break;
case 111:
num=6;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 112:
num=7;
num2=0;
value=2975;
break;
case 113:
num=7;
num2=1;
value=1100;
break;
case 114:
num=7;
num2=2;
value=1825;
break;
case 115:
num=7;
num2=3;
value=0;
flag=true;
break;
case 116:
num=7;
num2=4;
value=0;
flag=true;
break;
case 117:
num=7;
num2=5;
value=0;
flag=true;
break;
case 118:
num=7;
num2=6;
value=0;
flag=true;
break;
case 119:
num=7;
num2=7;
value=0;
flag=true;
break;
case 120:
num=7;
num2=8;
value=1750;
break;
case 121:
num=7;
num2=9;
value=0;
flag=true;
break;
case 122:
num=7;
num2=10;
value=0;
flag=true;
break;
case 123:
num=7;
num2=11;
value=0;
flag=true;
break;
case 124:
num=7;
num2=12;
value=0;
flag=true;
break;
case 125:
num=7;
num2=13;
value=0;
flag=true;
break;
case 126:
num=7;
num2=14;
value=0;
flag=true;
break;
case 127:
num=7;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 128:
num=8;
num2=0;
value=1025;
break;
case 129:
num=8;
num2=1;
value=1075;
break;
case 130:
num=8;
num2=2;
value=2805;
break;
case 131:
num=8;
num2=3;
value=0;
flag=true;
break;
case 132:
num=8;
num2=4;
value=0;
flag=true;
break;
case 133:
num=8;
num2=5;
value=0;
flag=true;
break;
case 134:
num=8;
num2=6;
value=0;
flag=true;
break;
case 135:
num=8;
num2=7;
value=0;
flag=true;
break;
case 136:
num=8;
num2=8;
value=0;
flag=true;
break;
case 137:
num=8;
num2=9;
value=0;
flag=true;
break;
case 138:
num=8;
num2=10;
value=0;
flag=true;
break;
case 139:
num=8;
num2=11;
value=0;
flag=true;
break;
case 140:
num=8;
num2=12;
value=2250;
break;
case 141:
num=8;
num2=13;
value=0;
flag=true;
break;
case 142:
num=8;
num2=14;
value=0;
flag=true;
break;
case 143:
num=8;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 144:
num=9;
num2=0;
value=495;
break;
case 145:
num=9;
num2=1;
value=95;
break;
case 146:
num=9;
num2=2;
value=95;
break;
case 147:
num=9;
num2=3;
value=525;
break;
case 148:
num=9;
num2=4;
value=100;
break;
case 149:
num=9;
num2=5;
value=110;
break;
case 150:
num=9;
num2=6;
value=100;
break;
case 151:
num=9;
num2=7;
value=110;
break;
case 152:
num=9;
num2=8;
value=130;
break;
case 153:
num=9;
num2=9;
value=560;
break;
case 154:
num=9;
num2=10;
value=295;
break;
case 155:
num=9;
num2=11;
value=975;
break;
case 156:
num=9;
num2=12;
value=160;
break;
case 157:
num=9;
num2=13;
value=100;
break;
case 158:
num=9;
num2=14;
value=1700;
break;
case 159:
num=9;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 160:
num=10;
num2=0;
value=380;
break;
case 161:
num=10;
num2=1;
value=95;
break;
case 162:
num=10;
num2=2;
value=95;
break;
case 163:
num=10;
num2=3;
value=0;
flag=true;
break;
case 164:
num=10;
num2=4;
value=0;
flag=true;
break;
case 165:
num=10;
num2=5;
value=0;
flag=true;
break;
case 166:
num=10;
num2=6;
value=0;
flag=true;
break;
case 167:
num=10;
num2=7;
value=110;
break;
case 168:
num=10;
num2=8;
value=0;
flag=true;
break;
case 169:
num=10;
num2=9;
value=0;
flag=true;
break;
case 170:
num=10;
num2=10;
value=95;
break;
case 171:
num=10;
num2=11;
value=90;
break;
case 172:
num=10;
num2=12;
value=0;
flag=true;
break;
case 173:
num=10;
num2=13;
value=85;
break;
case 174:
num=10;
num2=14;
value=0;
flag=true;
break;
case 175:
num=10;
num2=15;
value=215;
break;
}
switch (iParam0){
case 176:
num=11;
num2=0;
value=90;
break;
case 177:
num=11;
num2=1;
value=95;
break;
case 178:
num=11;
num2=2;
value=95;
break;
case 179:
num=11;
num2=3;
value=0;
flag=true;
break;
case 180:
num=11;
num2=4;
value=0;
flag=true;
break;
case 181:
num=11;
num2=5;
value=0;
flag=true;
break;
case 182:
num=11;
num2=6;
value=0;
flag=true;
break;
case 183:
num=11;
num2=7;
value=0;
flag=true;
break;
case 184:
num=11;
num2=8;
value=0;
flag=true;
break;
case 185:
num=11;
num2=9;
value=0;
flag=true;
break;
case 186:
num=11;
num2=10;
value=150;
break;
case 187:
num=11;
num2=11;
value=65;
break;
case 188:
num=11;
num2=12;
value=0;
flag=true;
break;
case 189:
num=11;
num2=13;
value=0;
flag=true;
break;
case 190:
num=11;
num2=14;
value=0;
flag=true;
break;
case 191:
num=11;
num2=15;
value=145;
break;
}
switch (iParam0){
case 192:
num=12;
num2=0;
value=0;
flag=true;
break;
case 193:
num=12;
num2=1;
value=0;
flag=true;
break;
case 194:
num=12;
num2=2;
value=0;
flag=true;
break;
case 195:
num=12;
num2=3;
value=0;
flag=true;
break;
case 196:
num=12;
num2=4;
value=0;
flag=true;
break;
case 197:
num=12;
num2=5;
value=0;
flag=true;
break;
case 198:
num=12;
num2=6;
value=0;
flag=true;
break;
case 199:
num=12;
num2=7;
value=1560;
break;
case 200:
num=12;
num2=8;
value=195;
break;
case 201:
num=12;
num2=9;
value=200;
break;
case 202:
num=12;
num2=10;
value=0;
flag=true;
break;
case 203:
num=12;
num2=11;
value=0;
flag=true;
break;
case 204:
num=12;
num2=12;
value=0;
flag=true;
break;
case 205:
num=12;
num2=13;
value=0;
flag=true;
break;
case 206:
num=12;
num2=14;
value=0;
flag=true;
break;
case 207:
num=12;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 208:
num=13;
num2=0;
value=975;
break;
case 209:
num=13;
num2=1;
value=2670;
break;
case 210:
num=13;
num2=2;
value=480;
break;
case 211:
num=13;
num2=3;
value=400;
break;
case 212:
num=13;
num2=4;
value=2500;
break;
case 213:
num=13;
num2=5;
value=2060;
break;
case 214:
num=13;
num2=6;
value=2620;
break;
case 215:
num=13;
num2=7;
value=475;
break;
case 216:
num=13;
num2=8;
value=490;
break;
case 217:
num=13;
num2=9;
value=2280;
break;
case 218:
num=13;
num2=10;
value=485;
break;
case 219:
num=13;
num2=11;
value=2390;
break;
case 220:
num=13;
num2=12;
value=2610;
break;
case 221:
num=13;
num2=13;
value=1450;
break;
case 222:
num=13;
num2=14;
value=2720;
break;
case 223:
num=13;
num2=15;
value=4995;
break;
}
switch (iParam0){
case 224:
num=14;
num2=0;
value=265;
break;
case 225:
num=14;
num2=1;
value=385;
break;
case 226:
num=14;
num2=2;
value=345;
break;
case 227:
num=14;
num2=3;
value=330;
break;
case 228:
num=14;
num2=4;
value=430;
break;
case 229:
num=14;
num2=5;
value=375;
break;
case 230:
num=14;
num2=6;
value=375;
break;
case 231:
num=14;
num2=7;
value=295;
break;
case 232:
num=14;
num2=8;
value=360;
break;
case 233:
num=14;
num2=9;
value=325;
break;
case 234:
num=14;
num2=10;
value=340;
break;
case 235:
num=14;
num2=11;
value=435;
break;
case 236:
num=14;
num2=12;
value=300;
break;
case 237:
num=14;
num2=13;
value=315;
break;
case 238:
num=14;
num2=14;
value=415;
break;
case 239:
num=14;
num2=15;
value=420;
break;
}
switch (iParam0){
case 240:
num=15;
num2=0;
value=325;
break;
case 241:
num=15;
num2=1;
value=0;
flag=true;
break;
case 242:
num=15;
num2=2;
value=0;
flag=true;
break;
case 243:
num=15;
num2=3;
value=130;
break;
case 244:
num=15;
num2=4;
value=0;
flag=true;
break;
case 245:
num=15;
num2=5;
value=0;
flag=true;
break;
case 246:
num=15;
num2=6;
value=0;
flag=true;
break;
case 247:
num=15;
num2=7;
value=0;
flag=true;
break;
case 248:
num=15;
num2=8;
value=0;
flag=true;
break;
case 249:
num=15;
num2=9;
value=0;
flag=true;
break;
case 250:
num=15;
num2=10;
value=450;
break;
case 251:
num=15;
num2=11;
value=465;
break;
case 252:
num=15;
num2=12;
value=0;
flag=true;
break;
case 253:
num=15;
num2=13;
value=0;
flag=true;
break;
case 254:
num=15;
num2=14;
value=0;
flag=true;
break;
case 255:
num=15;
num2=15;
value=0;
flag=true;
break;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
if(iParam0==4){
if(func_231(89, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990 * Global_296940.f_24);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[4] * Global_296940.f_24);
}}elseif(iParam0==7){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989 * Global_296940.f_24);
}elseif(iParam0==9){
if(func_231(87, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988 * Global_296940.f_24);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[9] * Global_296940.f_24);
}}else{
num6=iParam0;
if(num6 >=0 && num6 < 256) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[num6] * Global_296940.f_24);
}
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=4;
func_219(num5, iParam0, 256, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_24);
}else{
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_235(int iParam0, Hash hParam1) // Position - 0x25747{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=2;
switch (iParam0){
case 0:
num=0;
num2=0;
value=500;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[0]);
break;
case 1:
num=1;
num2=0;
value=500;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[1]);
break;
case 2:
num=1;
num2=1;
value=495;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[2]);
break;
case 3:
num=1;
num2=2;
value=490;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[3]);
break;
case 4:
num=1;
num2=3;
value=485;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[4]);
break;
case 5:
num=1;
num2=4;
value=480;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[5]);
break;
case 6:
num=1;
num2=5;
value=0;
break;
case 7:
num=2;
num2=0;
value=440;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[6]);
break;
case 8:
num=2;
num2=1;
value=435;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[7]);
break;
case 9:
num=2;
num2=2;
value=430;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[8]);
break;
case 10:
num=2;
num2=3;
value=425;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[9]);
break;
case 11:
num=2;
num2=4;
value=420;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[10]);
break;
case 12:
num=2;
num2=5;
value=0;
break;
case 13:
num=3;
num2=0;
value=190;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[11]);
break;
case 14:
num=3;
num2=1;
value=185;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[12]);
break;
case 15:
num=3;
num2=2;
value=180;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[13]);
break;
case 16:
num=3;
num2=3;
value=175;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[14]);
break;
case 17:
num=3;
num2=4;
value=170;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[15]);
break;
case 18:
num=4;
num2=0;
value=295;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[16]);
break;
case 19:
num=4;
num2=1;
value=290;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[17]);
break;
case 20:
num=4;
num2=2;
value=285;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[18]);
break;
case 21:
num=4;
num2=3;
value=280;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[19]);
break;
case 22:
num=4;
num2=4;
value=275;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[20]);
break;
case 23:
num=4;
num2=5;
value=0;
break;
case 24:
num=5;
num2=0;
value=2000;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[21]);
break;
case 25:
num=5;
num2=1;
value=1995;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[22]);
break;
case 26:
num=5;
num2=2;
value=1990;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[23]);
break;
case 27:
num=5;
num2=3;
value=1985;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[24]);
break;
case 28:
num=5;
num2=4;
value=1980;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[25]);
break;
case 29:
num=5;
num2=5;
value=0;
break;
case 30:
num=6;
num2=0;
value=1150;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[26]);
break;
case 31:
num=6;
num2=1;
value=1145;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[27]);
break;
case 32:
num=6;
num2=2;
value=1140;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[28]);
break;
case 33:
num=6;
num2=3;
value=1135;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[29]);
break;
case 34:
num=6;
num2=4;
value=1130;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[30]);
break;
case 35:
num=7;
num2=0;
value=550;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[31]);
break;
case 36:
num=7;
num2=1;
value=545;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[32]);
break;
case 37:
num=7;
num2=2;
value=540;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[33]);
break;
case 38:
num=7;
num2=3;
value=535;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[34]);
break;
case 39:
num=7;
num2=4;
value=530;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[35]);
break;
case 40:
num=7;
num2=5;
value=0;
break;
case 41:
num=8;
num2=0;
value=580;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[36]);
break;
case 42:
num=8;
num2=1;
value=575;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[37]);
break;
case 43:
num=8;
num2=2;
value=570;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[38]);
break;
case 44:
num=8;
num2=3;
value=565;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[39]);
break;
case 45:
num=8;
num2=4;
value=560;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[40]);
break;
case 46:
num=8;
num2=5;
value=0;
break;
case 47:
num=9;
num2=0;
value=1100;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[41]);
break;
case 48:
num=9;
num2=1;
value=1095;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[42]);
break;
case 49:
num=9;
num2=2;
value=1090;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[43]);
break;
case 50:
num=9;
num2=3;
value=1085;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[44]);
break;
case 51:
num=9;
num2=4;
value=1080;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[45]);
break;
case 52:
num=9;
num2=5;
value=0;
break;
case 53:
num=10;
num2=0;
value=520;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[46]);
break;
case 54:
num=10;
num2=1;
value=515;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[47]);
break;
case 55:
num=10;
num2=2;
value=510;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[48]);
break;
case 56:
num=10;
num2=3;
value=505;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[49]);
break;
case 57:
num=10;
num2=4;
value=500;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[50]);
break;
case 58:
num=10;
num2=5;
value=0;
break;
case 59:
num=10;
num2=6;
value=0;
break;
case 60:
num=11;
num2=0;
value=395;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[51]);
break;
case 61:
num=11;
num2=1;
value=390;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[52]);
break;
case 62:
num=11;
num2=2;
value=385;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[53]);
break;
case 63:
num=11;
num2=3;
value=380;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[54]);
break;
case 64:
num=11;
num2=4;
value=375;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[55]);
break;
case 65:
num=11;
num2=5;
value=0;
break;
case 66:
num=11;
num2=6;
value=0;
break;
case 67:
num=12;
num2=0;
value=1050;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[56]);
break;
case 68:
num=12;
num2=1;
value=1045;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[57]);
break;
case 69:
num=12;
num2=2;
value=1040;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[58]);
break;
case 70:
num=12;
num2=3;
value=1035;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[59]);
break;
case 71:
num=12;
num2=4;
value=1030;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[60]);
break;
case 72:
num=12;
num2=5;
value=0;
break;
case 73:
num=13;
num2=0;
value=1200;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[61]);
break;
case 74:
num=13;
num2=1;
value=1195;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[62]);
break;
case 75:
num=13;
num2=2;
value=1190;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[63]);
break;
case 76:
num=13;
num2=3;
value=1185;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[64]);
break;
case 77:
num=13;
num2=4;
value=1180;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[65]);
break;
case 78:
num=13;
num2=5;
value=0;
break;
case 79:
num=14;
num2=0;
value=475;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[66]);
break;
case 80:
num=14;
num2=1;
value=470;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[67]);
break;
case 81:
num=14;
num2=2;
value=465;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[68]);
break;
case 82:
num=14;
num2=3;
value=460;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[69]);
break;
case 83:
num=14;
num2=4;
value=455;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[70]);
break;
case 84:
num=14;
num2=5;
value=0;
break;
case 85:
num=15;
num2=0;
value=950;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[71]);
break;
case 86:
num=15;
num2=1;
value=945;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[72]);
break;
case 87:
num=15;
num2=2;
value=940;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[73]);
break;
case 88:
num=15;
num2=3;
value=935;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[74]);
break;
case 89:
num=15;
num2=4;
value=930;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[75]);
break;
case 90:
num=15;
num2=5;
value=0;
break;
case 91:
num=15;
num2=6;
value=0;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_219(num5, iParam0, 92, hParam1);
return;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "H_FMF_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
return;
}


void func_236(int iParam0, int iParam1, Hash hParam2) // Position - 0x26618{
switch (iParam0){
case 2:
func_251(iParam1, hParam2);
break;
case 11:
func_250(iParam1, hParam2);
break;
case 8:
func_249(iParam1, hParam2);
break;
case 9:
func_248(iParam1, hParam2);
break;
case 3:
func_247(iParam1, hParam2);
break;
case 4:
func_246(iParam1, hParam2);
break;
case 6:
func_245(iParam1, hParam2);
break;
case 1:
func_244(iParam1, hParam2);
break;
case 7:
func_243(iParam1, hParam2);
break;
case 10:
func_242(iParam1, hParam2);
break;
case 14:
func_241(iParam1, hParam2);
break;
case 12:
func_240(iParam1, hParam2);
break;
case 5:
func_239(iParam1, hParam2);
break;
case 0:
func_238(iParam1, hParam2);
break;
case 13:
func_237(iParam1);
break;
}
return;
}


void func_237(int iParam0) // Position - 0x26724{
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
switch (iParam0){
case 31:
num2=0;
num3=0;
break;
case 0:
num2=0;
num3=0;
break;
case 1:
num2=0;
num3=0;
break;
case 2:
num2=0;
num3=0;
break;
case 3:
num2=0;
num3=0;
break;
case 4:
num2=0;
num3=0;
break;
case 5:
num2=0;
num3=0;
break;
case 6:
num2=0;
num3=0;
break;
case 7:
num2=0;
num3=0;
break;
case 8:
num2=0;
num3=0;
break;
case 9:
num2=0;
num3=0;
break;
case 10:
num2=0;
num3=0;
break;
case 11:
num2=0;
num3=0;
break;
case 12:
num2=0;
num3=0;
break;
case 13:
num2=0;
num3=0;
break;
case 14:
num2=0;
num3=0;
break;
case 15:
num2=0;
num3=0;
break;
case 16:
num2=0;
num3=0;
break;
case 17:
num2=0;
num3=0;
break;
case 18:
num2=0;
num3=0;
break;
case 19:
num2=0;
num3=0;
break;
case 20:
num2=0;
num3=0;
break;
case 21:
num2=0;
num3=0;
break;
case 22:
num2=0;
num3=0;
break;
case 23:
num2=0;
num3=0;
break;
case 24:
num2=0;
num3=0;
break;
}
func_209(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_238(int iParam0, Hash hParam1) // Position - 0x268EE{
int num;
num=0;
Global_78341[0 /*14*/].f_5=3;
func_219(num, iParam0, 0, hParam1);
return;
}


void func_239(int iParam0, Hash hParam1) // Position - 0x2690E{
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
switch (iParam0){
case 0:
num2=0;
num3=0;
break;
case 1:
num2=1;
num3=0;
break;
case 2:
num2=2;
num3=0;
break;
case 3:
num2=3;
num3=0;
break;
case 4:
num2=4;
num3=0;
break;
case 5:
num2=5;
num3=0;
break;
case 6:
num2=6;
num3=0;
break;
case 7:
num2=7;
num3=0;
break;
case 8:
num2=8;
num3=0;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_219(num6, iParam0, 9, hParam1);
return;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "HA_FMM_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num3, 16);
func_209(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_240(int iParam0, Hash hParam1) // Position - 0x26A11{
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
switch (iParam0){
case 0:
num2=0;
num3=0;
flag=true;
break;
case 1:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S1" /*The Beat Maker*/, 16);
break;
case 2:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S2" /*The Brand*/, 16);
break;
case 3:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S3" /*The Skater*/, 16);
break;
case 4:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S4" /*The Roller*/, 16);
break;
case 5:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S5" /*The Camo Kid*/, 16);
break;
case 6:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S6" /*The Vibe*/, 16);
break;
case 7:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S7" /*The Color Junky*/, 16);
break;
case 8:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S8" /*The Classic T*/, 16);
break;
case 9:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S9" /*The Worker*/, 16);
break;
case 10:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P1" /*The Ladies Man*/, 16);
break;
case 11:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P2" /*The Office*/, 16);
break;
case 12:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P3" /*The After Party*/, 16);
break;
case 13:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P4" /*The Rebel*/, 16);
break;
case 14:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P5" /*The Trendsetter*/, 16);
break;
case 15:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P6" /*The Artist*/, 16);
break;
case 16:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P7" /*The Icon*/, 16);
break;
case 17:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P8" /*The Nightlife*/, 16);
break;
case 18:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B1" /*The Sun Bather*/, 16);
break;
case 19:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B2" /*The Stoop*/, 16);
break;
case 20:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B3" /*The Street G*/, 16);
break;
case 21:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B4" /*The Effortless*/, 16);
break;
case 22:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B5" /*The Everyday*/, 16);
break;
case 23:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B6" /*The Hood*/, 16);
break;
case 24:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B7" /*The Jock*/, 16);
break;
case 25:
num2=0;
num3=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B8" /*The Pounders Fan*/, 16);
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_219(num6, iParam0, 26, hParam1);
return;
}
func_209(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_241(int iParam0, Hash hParam1) // Position - 0x26CC2{
BOOL flag;
int value;
var unk;
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
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=14;
num6=0;
switch (iParam0){
case 0:
num=-1;
num2=0;
value=0;
num3=0;
break;
case 1:
num=-1;
num2=0;
value=0;
num3=1;
break;
case 2:
num=-1;
num2=0;
value=0;
num3=2;
break;
case 3:
num=-1;
num2=0;
value=0;
num3=3;
break;
case 4:
num=-1;
num2=0;
value=0;
num3=4;
break;
case 5:
num=-1;
num2=0;
value=0;
num3=5;
break;
case 6:
num=-1;
num2=0;
value=0;
num3=6;
break;
case 7:
num=-1;
num2=0;
value=0;
num3=7;
break;
case 8:
num=-1;
num2=0;
value=0;
num3=8;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_0" /*Red Ear Defenders*/, 16);
num=0;
num2=0;
value=65;
num3=0;
num6=1;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_1" /*Blue Ear Defenders*/, 16);
num=0;
num2=1;
value=65;
num3=0;
num6=1;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_2" /*Green Ear Defenders*/, 16);
num=0;
num2=2;
value=85;
num3=0;
num6=1;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_3" /*Yellow Ear Defenders*/, 16);
num=0;
num2=3;
value=75;
num3=0;
num6=1;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_4" /*Desert Camo Ear Defenders*/, 16);
num=0;
num2=4;
value=235;
num3=0;
num6=1;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_5" /*Black Ear Defenders*/, 16);
num=0;
num2=5;
value=80;
num3=0;
num6=1;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_6" /*Gray Ear Defenders*/, 16);
num=0;
num2=6;
value=85;
num3=0;
num6=1;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_7" /*White Ear Defenders*/, 16);
num=0;
num2=7;
value=90;
num3=0;
num6=1;
break;
}
switch (iParam0){
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_1_0" /*White Dunce Cap*/, 16);
num=1;
num2=0;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_0" /*Black Winter Hat*/, 16);
num=2;
num2=0;
value=35;
num3=0;
num6=1;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_1" /*Gray Winter Hat*/, 16);
num=2;
num2=1;
value=30;
num3=0;
num6=1;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_2" /*Blue Winter Hat*/, 16);
num=2;
num2=2;
value=35;
num3=0;
num6=1;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_3" /*Rasta Winter Hat*/, 16);
num=2;
num2=3;
value=320;
num3=0;
num6=1;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_4" /*Gray Striped Winter Hat*/, 16);
num=2;
num2=4;
value=185;
num3=0;
num6=1;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_5" /*Trio Knit Winter Hat*/, 16);
num=2;
num2=5;
value=245;
num3=0;
num6=1;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_6" /*White Winter Hat*/, 16);
num=2;
num2=6;
value=35;
num3=0;
num6=1;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_7" /*Maroon Winter Hat*/, 16);
num=2;
num2=7;
value=40;
num3=0;
num6=1;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_0", 16);
num=3;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_1" /*Black Canvas Hat*/, 16);
num=3;
num2=1;
value=60;
num3=0;
num6=1;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_2" /*Tan Canvas Hat*/, 16);
num=3;
num2=2;
value=65;
num3=0;
num6=1;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_3", 16);
num=3;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_4", 16);
num=3;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_5", 16);
num=3;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_6", 16);
num=3;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_7", 16);
num=3;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_0" /*Black LS Fitted Cap*/, 16);
num=4;
num2=0;
value=415;
num3=0;
num6=1;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_1" /*Gray LS Fitted Cap*/, 16);
num=4;
num2=1;
value=315;
num3=0;
num6=1;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_2", 16);
num=4;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_3", 16);
num=4;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_4", 16);
num=4;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_5", 16);
num=4;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_6", 16);
num=4;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_7", 16);
num=4;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_0" /*Black Saggy Beanie*/, 16);
num=5;
num2=0;
value=75;
num3=0;
num6=1;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_1" /*Gray Saggy Beanie*/, 16);
num=5;
num2=1;
value=60;
num3=0;
num6=1;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_2", 16);
num=5;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_3", 16);
num=5;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_4", 16);
num=5;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_5", 16);
num=5;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_6", 16);
num=5;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_7", 16);
num=5;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_0" /*Green Army Cap*/, 16);
num=6;
num2=0;
value=160;
num3=0;
num6=1;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_1" /*Black Army Cap*/, 16);
num=6;
num2=1;
value=265;
num3=0;
num6=1;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_2" /*Gray Army Cap*/, 16);
num=6;
num2=2;
value=170;
num3=0;
num6=1;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_3" /*Blue Army Cap*/, 16);
num=6;
num2=3;
value=135;
num3=0;
num6=1;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_4" /*Desert Army Cap*/, 16);
num=6;
num2=4;
value=570;
num3=0;
num6=1;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_5" /*Woodland Army Cap*/, 16);
num=6;
num2=5;
value=560;
num3=0;
num6=1;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_6" /*Ranch Beige Army Cap*/, 16);
num=6;
num2=6;
value=140;
num3=0;
num6=1;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_7" /*Ranch Brown Army Cap*/, 16);
num=6;
num2=7;
value=130;
num3=0;
num6=1;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_0" /*White Flat Cap*/, 16);
num=7;
num2=0;
value=260;
num3=0;
num6=1;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_1" /*Gray Flat Cap*/, 16);
num=7;
num2=1;
value=215;
num3=0;
num6=1;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_2" /*Black Flat Cap*/, 16);
num=7;
num2=2;
value=430;
num3=0;
num6=1;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_3" /*Navy Flat Cap*/, 16);
num=7;
num2=3;
value=160;
num3=0;
num6=1;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_4" /*Red Flat Cap*/, 16);
num=7;
num2=4;
value=200;
num3=0;
num6=1;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_5" /*Brown Flat Cap*/, 16);
num=7;
num2=5;
value=155;
num3=0;
num6=1;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_6" /*Green Flat Cap*/, 16);
num=7;
num2=6;
value=155;
num3=0;
num6=1;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_7" /*Yellow Flat Cap*/, 16);
num=7;
num2=7;
value=165;
num3=0;
num6=1;
break;
}
switch (iParam0){
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_0", 16);
num=8;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_1", 16);
num=8;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_2", 16);
num=8;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_3", 16);
num=8;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_4", 16);
num=8;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_5", 16);
num=8;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_6", 16);
num=8;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_7", 16);
num=8;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_0", 16);
num=9;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_1", 16);
num=9;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_2", 16);
num=9;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_3", 16);
num=9;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_4", 16);
num=9;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_5" /*Fruntalot Green Cap*/, 16);
num=9;
num2=5;
value=100;
num3=0;
num6=1;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_6", 16);
num=9;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_7" /*Stank Purple Cap*/, 16);
num=9;
num2=7;
value=65;
num3=0;
num6=1;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_0", 16);
num=10;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_1", 16);
num=10;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_2", 16);
num=10;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_3", 16);
num=10;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_4", 16);
num=10;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_5" /*Fruntalot Green Cap*/, 16);
num=10;
num2=5;
value=65;
num3=0;
num6=1;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_6", 16);
num=10;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_7" /*Stank Purple Cap*/, 16);
num=10;
num2=7;
value=65;
num3=0;
num6=1;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_0", 16);
num=11;
num2=0;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_1" /*Black Pork Pie*/, 16);
num=11;
num2=1;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_2", 16);
num=11;
num2=2;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_3" /*Olive Pork Pie*/, 16);
num=11;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_4", 16);
num=11;
num2=4;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_5", 16);
num=11;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_6" /*Blue Pork Pie*/, 16);
num=11;
num2=6;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_7", 16);
num=11;
num2=7;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_0" /*Black Fedora*/, 16);
num=12;
num2=0;
value=1715;
num3=0;
num6=1;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_1" /*White Fedora*/, 16);
num=12;
num2=1;
value=3900;
num3=0;
num6=1;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_2" /*Ash Fedora*/, 16);
num=12;
num2=2;
value=1550;
num3=0;
num6=1;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_3", 16);
num=12;
num2=3;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_4" /*Brown Fedora*/, 16);
num=12;
num2=4;
value=4250;
num3=0;
num6=1;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_5", 16);
num=12;
num2=5;
value=0;
num3=0;
num6=1;
flag=true;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_6" /*Green Fedora*/, 16);
num=12;
num2=6;
value=4460;
num3=0;
num6=1;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_7" /*Navy Fedora*/, 16);
num=12;
num2=7;
value=4970;
num3=0;
num6=1;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_0" /*Black Cowboy Hat*/, 16);
num=13;
num2=0;
value=290;
num3=0;
num6=1;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_1" /*Brown Cowboy Hat*/, 16);
num=13;
num2=1;
value=305;
num3=0;
num6=1;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_2" /*Chocolate Cowboy Hat*/, 16);
num=13;
num2=2;
value=4170;
num3=0;
num6=1;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_3" /*White Cowboy Hat*/, 16);
num=13;
num2=3;
value=335;
num3=0;
num6=1;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_4" /*Chestnut Cowboy Hat*/, 16);
num=13;
num2=4;
value=4940;
num3=0;
num6=1;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_5" /*Beige Cowboy Hat*/, 16);
num=13;
num2=5;
value=275;
num3=0;
num6=1;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_6" /*Red Cowboy Hat*/, 16);
num=13;
num2=6;
value=5000;
num3=0;
num6=1;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_7" /*Tan Cowboy Hat*/, 16);
num=13;
num2=7;
value=3620;
num3=0;
num6=1;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_0" /*White Paisley Bandana*/, 16);
num=14;
num2=0;
value=30;
num3=0;
num6=1;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_1" /*Black Paisley Bandana*/, 16);
num=14;
num2=1;
value=25;
num3=0;
num6=1;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_2" /*Navy Bandana*/, 16);
num=14;
num2=2;
value=30;
num3=0;
num6=1;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_3" /*Red Bandana*/, 16);
num=14;
num2=3;
value=30;
num3=0;
num6=1;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_4" /*Green Bandana*/, 16);
num=14;
num2=4;
value=35;
num3=0;
num6=1;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_5" /*Purple Bandana*/, 16);
num=14;
num2=5;
value=30;
num3=0;
num6=1;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_6" /*Camo Bandana*/, 16);
num=14;
num2=6;
value=350;
num3=0;
num6=1;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_7" /*Yellow Bandana*/, 16);
num=14;
num2=7;
value=35;
num3=0;
num6=1;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_0" /*Beat Off White Headphones*/, 16);
num=15;
num2=0;
value=365;
num3=0;
num6=1;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_1" /*Beat Off Black Headphones*/, 16);
num=15;
num2=1;
value=380;
num3=0;
num6=1;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_2" /*Beat Off Red Headphones*/, 16);
num=15;
num2=2;
value=595;
num3=0;
num6=1;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_3" /*Beat Off Blue Headphones*/, 16);
num=15;
num2=3;
value=595;
num3=0;
num6=1;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_4" /*Beat Off Yellow Headphones*/, 16);
num=15;
num2=4;
value=600;
num3=0;
num6=1;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_5" /*Beat Off Purple Headphones*/, 16);
num=15;
num2=5;
value=590;
num3=0;
num6=1;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_6" /*Beat Off Gray Headphones*/, 16);
num=15;
num2=6;
value=395;
num3=0;
num6=1;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_7" /*Beat Off Green Headphones*/, 16);
num=15;
num2=7;
value=555;
num3=0;
num6=1;
break;
}
switch (iParam0){
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_0" /*Western MC Yellow Helmet*/, 16);
num=16;
num2=0;
value=1060;
num3=0;
num6=2;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_1" /*Steel Horse Blue Helmet*/, 16);
num=16;
num2=1;
value=1400;
num3=0;
num6=2;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_2" /*Steel Horse Orange Helmet*/, 16);
num=16;
num2=2;
value=1315;
num3=0;
num6=2;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_3" /*Western MC Green Helmet*/, 16);
num=16;
num2=3;
value=1230;
num3=0;
num6=2;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_4" /*Western MC Red Helmet*/, 16);
num=16;
num2=4;
value=1145;
num3=0;
num6=2;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_5" /*Steel Horse Black Helmet*/, 16);
num=16;
num2=5;
value=8450;
num3=0;
num6=2;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_6" /*Black Helmet*/, 16);
num=16;
num2=6;
value=675;
num3=0;
num6=2;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_7" /*Western MC Lilac Helmet*/, 16);
num=16;
num2=7;
value=8750;
num3=0;
num6=2;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_0" /*Blue Open-Face Helmet*/, 16);
num=17;
num2=0;
value=975;
num3=0;
num6=2;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_1" /*Orange Open-Face Helmet*/, 16);
num=17;
num2=1;
value=750;
num3=0;
num6=2;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_2" /*Pale Blue Open-Face Helmet*/, 16);
num=17;
num2=2;
value=865;
num3=0;
num6=2;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_3" /*Red Open-Face Helmet*/, 16);
num=17;
num2=3;
value=890;
num3=0;
num6=2;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_4" /*Gray Open-Face Helmet*/, 16);
num=17;
num2=4;
value=730;
num3=0;
num6=2;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_5" /*Black Open-Face Helmet*/, 16);
num=17;
num2=5;
value=650;
num3=0;
num6=2;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_6" /*Pink Open-Face Helmet*/, 16);
num=17;
num2=6;
value=645;
num3=0;
num6=2;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_7" /*White Open-Face Helmet*/, 16);
num=17;
num2=7;
value=755;
num3=0;
num6=2;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_0" /*Shatter Pattern Helmet*/, 16);
num=18;
num2=0;
value=13850;
num3=0;
num6=2;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_1" /*Stars Helmet*/, 16);
num=18;
num2=1;
value=2900;
num3=0;
num6=2;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_2" /*Squared Helmet*/, 16);
num=18;
num2=2;
value=2895;
num3=0;
num6=2;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_3" /*Crimson Helmet*/, 16);
num=18;
num2=3;
value=12500;
num3=0;
num6=2;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_4" /*Skull Helmet*/, 16);
num=18;
num2=4;
value=15000;
num3=0;
num6=2;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_5" /*Ace of Spades Helmet*/, 16);
num=18;
num2=5;
value=14750;
num3=0;
num6=2;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_6" /*Flamejob Helmet*/, 16);
num=18;
num2=6;
value=13150;
num3=0;
num6=2;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_7" /*White Helmet*/, 16);
num=18;
num2=7;
value=2925;
num3=0;
num6=2;
break;
}
switch (iParam0){
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_0", 16);
num=0;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_1", 16);
num=0;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_2", 16);
num=0;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_3", 16);
num=0;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_4", 16);
num=0;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_5", 16);
num=0;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_6", 16);
num=0;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_7", 16);
num=0;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_8", 16);
num=0;
num2=8;
value=50;
num3=1;
num6=3;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_9", 16);
num=0;
num2=9;
value=50;
num3=1;
num6=3;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_10", 16);
num=0;
num2=10;
value=50;
num3=1;
num6=3;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_0", 16);
num=1;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_1" /*Black Wraparounds*/, 16);
num=1;
num2=1;
value=180;
num3=1;
num6=3;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_2", 16);
num=1;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_3", 16);
num=1;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_4", 16);
num=1;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_5", 16);
num=1;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_6", 16);
num=1;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_7", 16);
num=1;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_0" /*Black Winter Shades*/, 16);
num=2;
num2=0;
value=110;
num3=1;
num6=3;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_1" /*White Silver Shades*/, 16);
num=2;
num2=1;
value=140;
num3=1;
num6=3;
break;
case 176:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_2" /*Crimson Polarized Shades*/, 16);
num=2;
num2=2;
value=380;
num3=1;
num6=3;
break;
case 177:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_3" /*Black Summer Shades*/, 16);
num=2;
num2=3;
value=135;
num3=1;
num6=3;
break;
case 178:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_4" /*Black Autumn Shades*/, 16);
num=2;
num2=4;
value=130;
num3=1;
num6=3;
break;
case 179:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_5" /*White Rust Shades*/, 16);
num=2;
num2=5;
value=110;
num3=1;
num6=3;
break;
case 180:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_6" /*White Steel Shades*/, 16);
num=2;
num2=6;
value=140;
num3=1;
num6=3;
break;
case 181:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_7" /*Green Polarized Shades*/, 16);
num=2;
num2=7;
value=390;
num3=1;
num6=3;
break;
case 182:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_2_8", 16);
num=2;
num2=8;
value=950;
num3=1;
num6=3;
break;
case 183:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_2_9", 16);
num=2;
num2=9;
value=565;
num3=1;
num6=3;
break;
case 184:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_2_10", 16);
num=2;
num2=10;
value=630;
num3=1;
num6=3;
break;
case 185:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_0" /*Slate Janitor Frames*/, 16);
num=3;
num2=0;
value=70;
num3=1;
num6=3;
break;
case 186:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_1" /*Black Janitor Frames*/, 16);
num=3;
num2=1;
value=60;
num3=1;
num6=3;
break;
case 187:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_2" /*Gray Janitor Frames*/, 16);
num=3;
num2=2;
value=65;
num3=1;
num6=3;
break;
case 188:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_3" /*Ash Janitor Frames*/, 16);
num=3;
num2=3;
value=95;
num3=1;
num6=3;
break;
case 189:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_4" /*Tan Janitor Frames*/, 16);
num=3;
num2=4;
value=85;
num3=1;
num6=3;
break;
case 190:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_5" /*Smoke Janitor Frames*/, 16);
num=3;
num2=5;
value=75;
num3=1;
num6=3;
break;
case 191:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_6" /*Charcoal Janitor Frames*/, 16);
num=3;
num2=6;
value=75;
num3=1;
num6=3;
break;
case 192:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_7" /*White Janitor Frames*/, 16);
num=3;
num2=7;
value=90;
num3=1;
num6=3;
break;
case 193:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_3_8", 16);
num=3;
num2=8;
value=650;
num3=1;
num6=3;
break;
case 194:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_3_9", 16);
num=3;
num2=9;
value=265;
num3=1;
num6=3;
break;
case 195:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_3_10", 16);
num=3;
num2=10;
value=330;
num3=1;
num6=3;
break;
case 196:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_0" /*Enema Brown Glasses*/, 16);
num=4;
num2=0;
value=245;
num3=1;
num6=3;
break;
case 197:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_1" /*Enema Gray Glasses*/, 16);
num=4;
num2=1;
value=250;
num3=1;
num6=3;
break;
case 198:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_2" /*Enema Black Glasses*/, 16);
num=4;
num2=2;
value=210;
num3=1;
num6=3;
break;
case 199:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_3" /*Enema Tortoiseshell Glasses*/, 16);
num=4;
num2=3;
value=245;
num3=1;
num6=3;
break;
case 200:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_4" /*Enema Walnut Glasses*/, 16);
num=4;
num2=4;
value=205;
num3=1;
num6=3;
break;
case 201:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_5" /*Enema Marble Glasses*/, 16);
num=4;
num2=5;
value=205;
num3=1;
num6=3;
break;
case 202:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_6" /*Enema Smoke Glasses*/, 16);
num=4;
num2=6;
value=215;
num3=1;
num6=3;
break;
case 203:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_7" /*Enema Smoke Shades*/, 16);
num=4;
num2=7;
value=215;
num3=1;
num6=3;
break;
case 204:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_4_8", 16);
num=4;
num2=8;
value=995;
num3=1;
num6=3;
break;
case 205:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_4_9", 16);
num=4;
num2=9;
value=610;
num3=1;
num6=3;
break;
case 206:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_4_10", 16);
num=4;
num2=10;
value=675;
num3=1;
num6=3;
break;
case 207:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_0" /*Gold Aviators*/, 16);
num=5;
num2=0;
value=4050;
num3=1;
num6=3;
break;
case 208:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_1" /*Steel Aviators*/, 16);
num=5;
num2=1;
value=4060;
num3=1;
num6=3;
break;
case 209:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_2" /*Silver Aviators, Brown Tint*/, 16);
num=5;
num2=2;
value=170;
num3=1;
num6=3;
break;
case 210:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_3" /*Gray Aviators, Green Tint*/, 16);
num=5;
num2=3;
value=135;
num3=1;
num6=3;
break;
case 211:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_4" /*Silver Aviators, Blue Tint*/, 16);
num=5;
num2=4;
value=120;
num3=1;
num6=3;
break;
case 212:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_5" /*Tan Aviators, Dark Tint*/, 16);
num=5;
num2=5;
value=110;
num3=1;
num6=3;
break;
case 213:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_6" /*Steel Aviators, Blue Tint*/, 16);
num=5;
num2=6;
value=140;
num3=1;
num6=3;
break;
case 214:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_7" /*Silver Aviators, Copper Tint*/, 16);
num=5;
num2=7;
value=130;
num3=1;
num6=3;
break;
case 215:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_5_8", 16);
num=5;
num2=8;
value=1760;
num3=1;
num6=3;
break;
case 216:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_5_9", 16);
num=5;
num2=9;
value=1375;
num3=1;
num6=3;
break;
case 217:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_5_10", 16);
num=5;
num2=10;
value=1440;
num3=1;
num6=3;
break;
case 218:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_0", 16);
num=6;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 219:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_1", 16);
num=6;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 220:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_2", 16);
num=6;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 221:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_3", 16);
num=6;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 222:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_4", 16);
num=6;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 223:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_5", 16);
num=6;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 224:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_6", 16);
num=6;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 225:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_7", 16);
num=6;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 226:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_0" /*Black Casuals*/, 16);
num=7;
num2=0;
value=180;
num3=1;
num6=3;
break;
case 227:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_1" /*Zap Casuals*/, 16);
num=7;
num2=1;
value=500;
num3=1;
num6=3;
break;
case 228:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_2" /*Tortoiseshell Casuals*/, 16);
num=7;
num2=2;
value=115;
num3=1;
num6=3;
break;
case 229:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_3" /*Red Casuals*/, 16);
num=7;
num2=3;
value=220;
num3=1;
num6=3;
break;
case 230:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_4" /*White Casuals*/, 16);
num=7;
num2=4;
value=185;
num3=1;
num6=3;
break;
case 231:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_5" /*Camo Collection Casuals*/, 16);
num=7;
num2=5;
value=1445;
num3=1;
num6=3;
break;
case 232:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_6" /*Lemon Casuals*/, 16);
num=7;
num2=6;
value=530;
num3=1;
num6=3;
break;
case 233:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_7" /*Blood Casuals*/, 16);
num=7;
num2=7;
value=650;
num3=1;
num6=3;
break;
case 234:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_7_8", 16);
num=7;
num2=8;
value=1170;
num3=1;
num6=3;
break;
case 235:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_7_9", 16);
num=7;
num2=9;
value=785;
num3=1;
num6=3;
break;
case 236:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_7_10", 16);
num=7;
num2=10;
value=850;
num3=1;
num6=3;
break;
}
switch (iParam0){
case 237:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_0" /*Brown Eyewear*/, 16);
num=8;
num2=0;
value=4260;
num3=1;
num6=3;
break;
case 238:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_1" /*Silver Eyewear*/, 16);
num=8;
num2=1;
value=4310;
num3=1;
num6=3;
break;
case 239:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_2" /*Gray Eyewear*/, 16);
num=8;
num2=2;
value=4130;
num3=1;
num6=3;
break;
case 240:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_3" /*Smoke Cop Frames*/, 16);
num=8;
num2=3;
value=135;
num3=1;
num6=3;
break;
case 241:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_4" /*Coffee Cop Frames*/, 16);
num=8;
num2=4;
value=120;
num3=1;
num6=3;
break;
case 242:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_5" /*Black Cop Frames*/, 16);
num=8;
num2=5;
value=110;
num3=1;
num6=3;
break;
case 243:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_6" /*Slate Cop Frames*/, 16);
num=8;
num2=6;
value=140;
num3=1;
num6=3;
break;
case 244:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_7" /*Charcoal Cop Frames*/, 16);
num=8;
num2=7;
value=130;
num3=1;
num6=3;
break;
case 245:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_8_8", 16);
num=8;
num2=8;
value=1885;
num3=1;
num6=3;
break;
case 246:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_8_9", 16);
num=8;
num2=9;
value=1500;
num3=1;
num6=3;
break;
case 247:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_8_10", 16);
num=8;
num2=10;
value=1565;
num3=1;
num6=3;
break;
case 248:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_0" /*Hawaiian Snow Black*/, 16);
num=9;
num2=0;
value=65;
num3=1;
num6=3;
break;
case 249:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_1" /*Hawaiian Snow Gray*/, 16);
num=9;
num2=1;
value=65;
num3=1;
num6=3;
break;
case 250:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_2" /*Hawaiian Snow White*/, 16);
num=9;
num2=2;
value=85;
num3=1;
num6=3;
break;
case 251:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_3" /*Hawaiian Snow Ash*/, 16);
num=9;
num2=3;
value=75;
num3=1;
num6=3;
break;
case 252:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_4" /*Hawaiian Snow Copper*/, 16);
num=9;
num2=4;
value=85;
num3=1;
num6=3;
break;
case 253:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_5" /*Hawaiian Snow Tortoiseshell*/, 16);
num=9;
num2=5;
value=4290;
num3=1;
num6=3;
break;
case 254:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_6" /*Hawaiian Snow Marble*/, 16);
num=9;
num2=6;
value=4150;
num3=1;
num6=3;
break;
case 255:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_7" /*Hawaiian Snow Walnut*/, 16);
num=9;
num2=7;
value=4295;
num3=1;
num6=3;
break;
case 256:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_9_8", 16);
num=9;
num2=8;
value=2315;
num3=1;
num6=3;
break;
case 257:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_9_9", 16);
num=9;
num2=9;
value=1930;
num3=1;
num6=3;
break;
case 258:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_9_10", 16);
num=9;
num2=10;
value=1995;
num3=1;
num6=3;
break;
case 259:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_0" /*Gold Bull Emic*/, 16);
num=10;
num2=0;
value=6240;
num3=1;
num6=3;
break;
case 260:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_1" /*Gray Bull Emic*/, 16);
num=10;
num2=1;
value=4955;
num3=1;
num6=3;
break;
case 261:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_2" /*Silver Bull Emic*/, 16);
num=10;
num2=2;
value=5590;
num3=1;
num6=3;
break;
case 262:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_3" /*Black Bull Emic*/, 16);
num=10;
num2=3;
value=4920;
num3=1;
num6=3;
break;
case 263:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_4" /*Brown Bull Emic*/, 16);
num=10;
num2=4;
value=4990;
num3=1;
num6=3;
break;
case 264:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_5" /*Slate Bull Emic*/, 16);
num=10;
num2=5;
value=4780;
num3=1;
num6=3;
break;
case 265:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_6" /*White Bull Emic*/, 16);
num=10;
num2=6;
value=4775;
num3=1;
num6=3;
break;
case 266:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_7" /*Purple Tint Bull Emic*/, 16);
num=10;
num2=7;
value=4800;
num3=1;
num6=3;
break;
case 267:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_10_8", 16);
num=10;
num2=8;
value=2835;
num3=1;
num6=3;
break;
case 268:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_10_9", 16);
num=10;
num2=9;
value=2450;
num3=1;
num6=3;
break;
case 269:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_10_10", 16);
num=10;
num2=10;
value=2515;
num3=1;
num6=3;
break;
case 270:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_0", 16);
num=11;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 271:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_1", 16);
num=11;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 272:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_2", 16);
num=11;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 273:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_3", 16);
num=11;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 274:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_4", 16);
num=11;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 275:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_5", 16);
num=11;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 277:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_7", 16);
num=11;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 278:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_0" /*Orange Elvis*/, 16);
num=12;
num2=0;
value=385;
num3=1;
num6=3;
break;
case 279:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_1" /*Gray Elvis*/, 16);
num=12;
num2=1;
value=310;
num3=1;
num6=3;
break;
case 280:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_2" /*Slate Elvis*/, 16);
num=12;
num2=2;
value=3655;
num3=1;
num6=3;
break;
case 281:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_3" /*Black Elvis*/, 16);
num=12;
num2=3;
value=4055;
num3=1;
num6=3;
break;
case 282:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_4" /*White Elvis*/, 16);
num=12;
num2=4;
value=3595;
num3=1;
num6=3;
break;
case 283:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_5" /*Blue Tint Elvis*/, 16);
num=12;
num2=5;
value=3605;
num3=1;
num6=3;
break;
case 284:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_6" /*Pink Tint Elvis*/, 16);
num=12;
num2=6;
value=3645;
num3=1;
num6=3;
break;
case 285:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_7" /*Copper Elvis*/, 16);
num=12;
num2=7;
value=320;
num3=1;
num6=3;
break;
case 286:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_12_8", 16);
num=12;
num2=8;
value=2820;
num3=1;
num6=3;
break;
case 287:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_12_9", 16);
num=12;
num2=9;
value=2435;
num3=1;
num6=3;
break;
case 288:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_12_10", 16);
num=12;
num2=10;
value=2500;
num3=1;
num6=3;
break;
case 289:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_0" /*Broker Black Hipsters*/, 16);
num=13;
num2=0;
value=230;
num3=1;
num6=3;
break;
case 290:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_1" /*White Polarized Hipsters*/, 16);
num=13;
num2=1;
value=1605;
num3=1;
num6=3;
break;
case 291:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_2" /*Choco Polarized Hipsters*/, 16);
num=13;
num2=2;
value=2230;
num3=1;
num6=3;
break;
case 292:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_3" /*Slate Hipsters*/, 16);
num=13;
num2=3;
value=220;
num3=1;
num6=3;
break;
case 293:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_4" /*Charcoal Hipsters*/, 16);
num=13;
num2=4;
value=185;
num3=1;
num6=3;
break;
case 294:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_5" /*Olive Polarized Hipsters*/, 16);
num=13;
num2=5;
value=2070;
num3=1;
num6=3;
break;
case 295:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_6" /*Gold Polarized Hipsters*/, 16);
num=13;
num2=6;
value=2205;
num3=1;
num6=3;
break;
case 296:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_7" /*Candy Polarized Hipsters*/, 16);
num=13;
num2=7;
value=1690;
num3=1;
num6=3;
break;
case 297:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_13_8", 16);
num=13;
num2=8;
value=2715;
num3=1;
num6=3;
break;
case 298:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_13_9", 16);
num=13;
num2=9;
value=2330;
num3=1;
num6=3;
break;
case 299:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_13_10", 16);
num=13;
num2=10;
value=2395;
num3=1;
num6=3;
break;
case 300:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_0", 16);
num=14;
num2=0;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 301:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_1", 16);
num=14;
num2=1;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 302:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_2", 16);
num=14;
num2=2;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 303:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_3", 16);
num=14;
num2=3;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 304:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_4", 16);
num=14;
num2=4;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 305:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_5", 16);
num=14;
num2=5;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 306:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_6", 16);
num=14;
num2=6;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 307:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_7", 16);
num=14;
num2=7;
value=0;
num3=1;
num6=3;
flag=true;
break;
case 308:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_0" /*Yellow Guns*/, 16);
num=15;
num2=0;
value=515;
num3=1;
num6=3;
break;
case 309:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_1" /*White Guns*/, 16);
num=15;
num2=1;
value=60;
num3=1;
num6=3;
break;
case 310:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_2" /*Gray Guns*/, 16);
num=15;
num2=2;
value=65;
num3=1;
num6=3;
break;
case 311:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_3" /*Red Guns*/, 16);
num=15;
num2=3;
value=95;
num3=1;
num6=3;
break;
case 312:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_4" /*Blue Guns*/, 16);
num=15;
num2=4;
value=85;
num3=1;
num6=3;
break;
case 313:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_5" /*Hornet Guns*/, 16);
num=15;
num2=5;
value=75;
num3=1;
num6=3;
break;
case 314:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_6" /*Orange Guns*/, 16);
num=15;
num2=6;
value=485;
num3=1;
num6=3;
break;
case 315:
TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_7" /*Pink Guns*/, 16);
num=15;
num2=7;
value=545;
num3=1;
num6=3;
break;
case 316:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_15_8", 16);
num=15;
num2=8;
value=645;
num3=1;
num6=3;
break;
case 317:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_15_9", 16);
num=15;
num2=9;
value=260;
num3=1;
num6=3;
break;
case 318:
TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_15_10", 16);
num=15;
num2=10;
value=325;
num3=1;
num6=3;
break;
}
switch (iParam0){
case 319:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_0" /*Deep Sea Watch*/, 16);
num=0;
num2=0;
value=5000;
num3=6;
num6=4;
break;
case 320:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_1" /*Gold Watch*/, 16);
num=0;
num2=1;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 321:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_2" /*Silver Watch*/, 16);
num=0;
num2=2;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 322:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_3" /*Black Watch*/, 16);
num=0;
num2=3;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 323:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_4" /*Gold Faced Silver Watch*/, 16);
num=0;
num2=4;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 324:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_1_0" /*White LED, Black Strap*/, 16);
num=1;
num2=0;
value=695;
num3=6;
num6=4;
break;
case 325:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_1_1" /*Red LED, White Strap*/, 16);
num=1;
num2=1;
value=0;
num3=6;
num6=4;
flag=true;
break;
case 326:
TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_1_2" /*Red LED, Brown Strap*/, 16);
num=1;
num2=2;
value=0;
num3=6;
num6=4;
flag=true;
break;
}
if(num6==1){
num7=iParam0 - 10;
if(num7 >=0 && num7 < 121){
if(num7 > 8) num7=num7 - 1;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_965[num7] * Global_296940.f_18);
}}elseif(num6==2){
num8=iParam0 - 131;
if(num8 >=0 && num8 < 24) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1086[num8] * Global_296940.f_19);
}elseif(num6==3){
num9=iParam0 - 155;
if(num9 >=0 && num9 < 128) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1111[num9] * Global_296940.f_20);
}elseif(num6==4){
num10=iParam0 - 319;
if(num10 >=0 && num10 < 15) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1240[num10] * Global_296940.f_21);
}
if(iParam0 >=327){
Global_78341[0 /*14*/].f_5=3;
func_219(num5, iParam0, 327, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0)if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HAT"), 1)) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_18);
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("GLASSES"), 1)) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_20);
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("WATCH"), 1)) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_21);
}else{
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_242(int iParam0, Hash hParam1) // Position - 0x29A83{
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
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_0_0" /*No Crew Emblem*/, 16);
num2=0;
num3=0;
num=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
num2=1;
num3=0;
num=5000;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
num2=2;
num3=0;
num=10000;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
num2=3;
num3=0;
num=5000;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
num2=4;
num3=0;
num=10000;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
num2=5;
num3=0;
num=5000;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
num2=6;
num3=0;
num=10000;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_219(num6, iParam0, 7, hParam1);
return;
}
func_209(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_243(int iParam0, Hash hParam1) // Position - 0x29BA4{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=7;
switch (iParam0){
case 0:
num=0;
num2=0;
value=0;
break;
case 1:
num=1;
num2=0;
value=0;
flag=true;
break;
case 2:
num=1;
num2=1;
value=0;
flag=true;
break;
case 3:
num=1;
num2=2;
value=0;
flag=true;
break;
case 4:
num=2;
num2=0;
value=0;
flag=true;
break;
case 5:
num=2;
num2=1;
value=0;
flag=true;
break;
case 6:
num=2;
num2=2;
value=0;
flag=true;
break;
case 7:
num=3;
num2=0;
value=0;
flag=true;
break;
case 8:
num=3;
num2=1;
value=0;
flag=true;
break;
case 9:
num=3;
num2=2;
value=0;
flag=true;
break;
case 10:
num=4;
num2=0;
value=0;
flag=true;
break;
case 11:
num=4;
num2=1;
value=0;
flag=true;
break;
case 12:
num=4;
num2=2;
value=0;
flag=true;
break;
case 13:
num=4;
num2=3;
value=0;
flag=true;
break;
case 14:
num=4;
num2=4;
value=0;
flag=true;
break;
case 15:
num=4;
num2=5;
value=0;
flag=true;
break;
case 16:
num=4;
num2=6;
value=0;
flag=true;
break;
case 17:
num=4;
num2=7;
value=0;
flag=true;
break;
case 18:
num=4;
num2=8;
value=0;
flag=true;
break;
case 19:
num=4;
num2=9;
value=0;
flag=true;
break;
case 20:
num=4;
num2=10;
flag=true;
break;
case 21:
num=4;
num2=11;
flag=true;
break;
case 22:
num=4;
num2=12;
flag=true;
break;
case 23:
num=4;
num2=13;
flag=true;
break;
case 24:
num=4;
num2=14;
flag=true;
break;
case 25:
num=4;
num2=15;
flag=true;
break;
case 26:
num=5;
num2=0;
value=0;
flag=true;
break;
case 27:
num=5;
num2=1;
value=0;
flag=true;
break;
case 28:
num=5;
num2=2;
value=0;
flag=true;
break;
case 29:
num=5;
num2=3;
value=0;
flag=true;
break;
case 30:
num=5;
num2=4;
value=0;
flag=true;
break;
case 31:
num=5;
num2=5;
value=0;
flag=true;
break;
case 32:
num=6;
num2=0;
value=0;
flag=true;
break;
case 33:
num=6;
num2=1;
value=0;
flag=true;
break;
case 34:
num=6;
num2=2;
value=0;
flag=true;
break;
case 35:
num=6;
num2=3;
value=0;
flag=true;
break;
case 36:
num=6;
num2=4;
value=0;
flag=true;
break;
case 37:
num=6;
num2=5;
value=0;
flag=true;
break;
case 38:
num=7;
num2=0;
break;
case 39:
num=8;
num2=0;
break;
case 40:
num=9;
num2=0;
break;
case 41:
num=10;
num2=0;
if(Global_262145.f_4182 !=-1) value=Global_262145.f_4182;
else value=115;
break;
case 42:
num=10;
num2=1;
if(Global_262145.f_4183 !=-1) value=Global_262145.f_4183;
else value=125;
break;
case 43:
num=10;
num2=2;
if(Global_262145.f_4184 !=-1) value=Global_262145.f_4184;
else value=130;
break;
case 44:
num=10;
num2=3;
value=0;
flag=true;
break;
case 45:
num=10;
num2=4;
value=0;
flag=true;
break;
case 46:
num=10;
num2=5;
value=0;
flag=true;
break;
case 47:
num=10;
num2=6;
value=0;
flag=true;
break;
case 48:
num=10;
num2=7;
value=0;
flag=true;
break;
case 49:
num=10;
num2=8;
value=0;
flag=true;
break;
case 50:
num=10;
num2=9;
value=0;
flag=true;
break;
case 51:
num=10;
num2=10;
value=0;
flag=true;
break;
case 52:
num=10;
num2=11;
value=0;
flag=true;
break;
case 53:
num=10;
num2=12;
value=0;
flag=true;
break;
case 54:
num=10;
num2=13;
value=0;
flag=true;
break;
case 55:
num=10;
num2=14;
value=0;
flag=true;
break;
case 56:
num=10;
num2=15;
value=0;
flag=true;
break;
case 57:
num=11;
num2=0;
value=0;
flag=true;
break;
case 58:
num=11;
num2=1;
value=0;
flag=true;
break;
case 59:
num=11;
num2=2;
if(Global_262145.f_4188 !=-1) value=Global_262145.f_4188;
else value=725;
break;
case 60:
num=11;
num2=3;
value=0;
flag=true;
break;
case 61:
num=11;
num2=4;
value=0;
flag=true;
break;
case 62:
num=11;
num2=5;
value=0;
flag=true;
break;
case 63:
num=11;
num2=6;
value=0;
flag=true;
break;
case 64:
num=11;
num2=7;
value=0;
flag=true;
break;
case 65:
num=11;
num2=8;
value=0;
flag=true;
break;
case 66:
num=11;
num2=9;
value=0;
flag=true;
break;
case 67:
num=11;
num2=10;
value=0;
flag=true;
break;
case 68:
num=11;
num2=11;
value=0;
flag=true;
break;
case 69:
num=11;
num2=12;
value=0;
flag=true;
break;
case 70:
num=11;
num2=13;
value=0;
flag=true;
break;
case 71:
num=11;
num2=14;
value=0;
flag=true;
break;
case 72:
num=11;
num2=15;
value=0;
flag=true;
break;
case 73:
num=12;
num2=0;
if(Global_262145.f_4185 !=-1) value=Global_262145.f_4185;
else value=65;
break;
case 74:
num=12;
num2=1;
if(Global_262145.f_4186 !=-1) value=Global_262145.f_4186;
else value=65;
break;
case 75:
num=12;
num2=2;
if(Global_262145.f_4187 !=-1) value=Global_262145.f_4187;
else value=95;
break;
case 76:
num=12;
num2=3;
value=0;
flag=true;
break;
case 77:
num=12;
num2=4;
value=0;
flag=true;
break;
case 78:
num=12;
num2=5;
value=0;
flag=true;
break;
case 79:
num=12;
num2=6;
value=0;
flag=true;
break;
case 80:
num=12;
num2=7;
value=0;
flag=true;
break;
case 81:
num=12;
num2=8;
value=0;
flag=true;
break;
case 82:
num=12;
num2=9;
value=0;
flag=true;
break;
case 83:
num=12;
num2=10;
value=0;
flag=true;
break;
case 84:
num=12;
num2=11;
value=0;
flag=true;
break;
case 85:
num=12;
num2=12;
value=0;
flag=true;
break;
case 86:
num=12;
num2=13;
value=0;
flag=true;
break;
case 87:
num=12;
num2=14;
value=0;
flag=true;
break;
case 88:
num=12;
num2=15;
value=0;
flag=true;
break;
case 89:
num=13;
num2=0;
break;
case 90:
num=14;
num2=0;
break;
case 91:
num=15;
num2=0;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_219(num5, iParam0, 92, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_57);
return;
}
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_296940.f_57);
TEXT_LABEL_ASSIGN_STRING(&unk, "T_FMM_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
return;
}


void func_244(int iParam0, Hash hParam1) // Position - 0x2A49C{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=1;
switch (iParam0){
case 0:
num=0;
num2=0;
value=0;
break;
case 1:
num=1;
num2=0;
value=965;
break;
case 2:
num=1;
num2=1;
value=960;
break;
case 3:
num=1;
num2=2;
value=9500;
break;
case 4:
num=1;
num2=3;
value=975;
break;
case 5:
num=2;
num2=0;
value=1185;
break;
case 6:
num=2;
num2=1;
value=15000;
break;
case 7:
num=2;
num2=2;
value=1115;
break;
case 8:
num=2;
num2=3;
value=1105;
break;
case 9:
num=3;
num2=0;
value=25000;
break;
case 10:
num=4;
num2=0;
value=510;
break;
case 11:
num=4;
num2=1;
value=530;
break;
case 12:
num=4;
num2=2;
value=5500;
break;
case 13:
num=4;
num2=3;
value=535;
break;
case 14:
num=5;
num2=0;
value=1510;
break;
case 15:
num=5;
num2=1;
value=1530;
break;
case 16:
num=5;
num2=2;
value=14500;
break;
case 17:
num=5;
num2=3;
value=13000;
break;
case 18:
num=6;
num2=0;
value=8000;
break;
case 19:
num=6;
num2=1;
value=1265;
break;
case 20:
num=6;
num2=2;
value=8500;
break;
case 21:
num=6;
num2=3;
value=1210;
break;
case 22:
num=7;
num2=0;
value=2360;
break;
case 23:
num=7;
num2=1;
value=22500;
break;
case 24:
num=7;
num2=2;
value=2375;
break;
case 25:
num=7;
num2=3;
value=2485;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_219(num5, iParam0, 26, hParam1);
return;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "M_FMM_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
num6=iParam0 - 1;
if(num6 >=0 && num6 < 26) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_938[num6] * Global_296940.f_22);
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
return;
}


void func_245(int iParam0, Hash hParam1) // Position - 0x2A753{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=6;
switch (iParam0){
case 0:
num=0;
num2=0;
value=0;
flag=true;
break;
case 1:
num=0;
num2=1;
value=0;
flag=true;
break;
case 2:
num=0;
num2=2;
value=0;
flag=true;
break;
case 3:
num=0;
num2=3;
value=0;
flag=true;
break;
case 4:
num=0;
num2=4;
value=0;
flag=true;
break;
case 5:
num=0;
num2=5;
value=0;
flag=true;
break;
case 6:
num=0;
num2=6;
value=0;
flag=true;
break;
case 7:
num=0;
num2=7;
value=0;
flag=true;
break;
case 8:
num=0;
num2=8;
value=0;
flag=true;
break;
case 9:
num=0;
num2=9;
value=0;
flag=true;
break;
case 10:
num=0;
num2=10;
value=300;
break;
case 11:
num=0;
num2=11;
value=0;
flag=true;
break;
case 12:
num=0;
num2=12;
value=0;
flag=true;
break;
case 13:
num=0;
num2=13;
value=0;
flag=true;
break;
case 14:
num=0;
num2=14;
value=0;
flag=true;
break;
case 15:
num=0;
num2=15;
value=0;
flag=true;
break;
case 16:
num=1;
num2=0;
value=285;
break;
case 17:
num=1;
num2=1;
value=180;
break;
case 18:
num=1;
num2=2;
value=190;
break;
case 19:
num=1;
num2=3;
value=190;
break;
case 20:
num=1;
num2=4;
value=165;
break;
case 21:
num=1;
num2=5;
value=200;
break;
case 22:
num=1;
num2=6;
value=480;
break;
case 23:
num=1;
num2=7;
value=155;
break;
case 24:
num=1;
num2=8;
value=350;
break;
case 25:
num=1;
num2=9;
value=290;
break;
case 26:
num=1;
num2=10;
value=165;
break;
case 27:
num=1;
num2=11;
value=165;
break;
case 28:
num=1;
num2=12;
value=170;
break;
case 29:
num=1;
num2=13;
value=155;
break;
case 30:
num=1;
num2=14;
value=165;
break;
case 31:
num=1;
num2=15;
value=165;
break;
}
switch (iParam0){
case 32:
num=2;
num2=0;
value=0;
flag=true;
break;
case 33:
num=2;
num2=1;
value=0;
flag=true;
break;
case 34:
num=2;
num2=2;
value=0;
flag=true;
break;
case 35:
num=2;
num2=3;
value=0;
flag=true;
break;
case 36:
num=2;
num2=4;
value=0;
flag=true;
break;
case 37:
num=2;
num2=5;
value=0;
flag=true;
break;
case 38:
num=2;
num2=6;
value=160;
break;
case 39:
num=2;
num2=7;
value=0;
flag=true;
break;
case 40:
num=2;
num2=8;
value=0;
flag=true;
break;
case 41:
num=2;
num2=9;
value=0;
flag=true;
break;
case 42:
num=2;
num2=10;
value=0;
flag=true;
break;
case 43:
num=2;
num2=11;
value=0;
flag=true;
break;
case 44:
num=2;
num2=12;
value=0;
flag=true;
break;
case 45:
num=2;
num2=13;
value=205;
break;
case 46:
num=2;
num2=14;
value=0;
flag=true;
break;
case 47:
num=2;
num2=15;
value=0;
flag=true;
break;
case 48:
num=3;
num2=0;
value=560;
break;
case 49:
num=3;
num2=1;
value=275;
break;
case 50:
num=3;
num2=2;
value=290;
break;
case 51:
num=3;
num2=3;
value=300;
break;
case 52:
num=3;
num2=4;
value=360;
break;
case 53:
num=3;
num2=5;
value=270;
break;
case 54:
num=3;
num2=6;
value=265;
break;
case 55:
num=3;
num2=7;
value=295;
break;
case 56:
num=3;
num2=8;
value=355;
break;
case 57:
num=3;
num2=9;
value=340;
break;
case 58:
num=3;
num2=10;
value=285;
break;
case 59:
num=3;
num2=11;
value=310;
break;
case 60:
num=3;
num2=12;
value=350;
break;
case 61:
num=3;
num2=13;
value=305;
break;
case 62:
num=3;
num2=14;
value=280;
break;
case 63:
num=3;
num2=15;
value=320;
break;
}
switch (iParam0){
case 64:
num=4;
num2=0;
value=115;
break;
case 65:
num=4;
num2=1;
value=115;
break;
case 66:
num=4;
num2=2;
value=110;
break;
case 67:
num=4;
num2=3;
value=0;
flag=true;
break;
case 68:
num=4;
num2=4;
value=125;
break;
case 69:
num=4;
num2=5;
value=0;
flag=true;
break;
case 70:
num=4;
num2=6;
value=0;
flag=true;
break;
case 71:
num=4;
num2=7;
value=0;
flag=true;
break;
case 72:
num=4;
num2=8;
value=0;
flag=true;
break;
case 73:
num=4;
num2=9;
value=0;
flag=true;
break;
case 74:
num=4;
num2=10;
value=0;
flag=true;
break;
case 75:
num=4;
num2=11;
value=0;
flag=true;
break;
case 76:
num=4;
num2=12;
value=0;
flag=true;
break;
case 77:
num=4;
num2=13;
value=0;
flag=true;
break;
case 78:
num=4;
num2=14;
value=0;
flag=true;
break;
case 79:
num=4;
num2=15;
value=0;
flag=true;
break;
case 80:
num=5;
num2=0;
value=50;
break;
case 81:
num=5;
num2=1;
value=35;
break;
case 82:
num=5;
num2=2;
value=50;
break;
case 83:
num=5;
num2=3;
value=50;
break;
case 84:
num=5;
num2=4;
value=0;
flag=true;
break;
case 85:
num=5;
num2=5;
value=0;
flag=true;
break;
case 86:
num=5;
num2=6;
value=0;
flag=true;
break;
case 87:
num=5;
num2=7;
value=0;
flag=true;
break;
case 88:
num=5;
num2=8;
value=0;
flag=true;
break;
case 89:
num=5;
num2=9;
value=0;
flag=true;
break;
case 90:
num=5;
num2=10;
value=0;
flag=true;
break;
case 91:
num=5;
num2=11;
value=0;
flag=true;
break;
case 92:
num=5;
num2=12;
value=0;
flag=true;
break;
case 93:
num=5;
num2=13;
value=0;
flag=true;
break;
case 94:
num=5;
num2=14;
value=0;
flag=true;
break;
case 95:
num=5;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 96:
num=6;
num2=0;
value=65;
break;
case 97:
num=6;
num2=1;
value=65;
break;
case 98:
num=6;
num2=2;
value=0;
flag=true;
break;
case 99:
num=6;
num2=3;
value=0;
flag=true;
break;
case 100:
num=6;
num2=4;
value=0;
flag=true;
break;
case 101:
num=6;
num2=5;
value=0;
flag=true;
break;
case 102:
num=6;
num2=6;
value=0;
flag=true;
break;
case 103:
num=6;
num2=7;
value=0;
flag=true;
break;
case 104:
num=6;
num2=8;
value=0;
flag=true;
break;
case 105:
num=6;
num2=9;
value=0;
flag=true;
break;
case 106:
num=6;
num2=10;
value=0;
flag=true;
break;
case 107:
num=6;
num2=11;
value=0;
flag=true;
break;
case 108:
num=6;
num2=12;
value=0;
flag=true;
break;
case 109:
num=6;
num2=13;
value=0;
flag=true;
break;
case 110:
num=6;
num2=14;
value=0;
flag=true;
break;
case 111:
num=6;
num2=15;
value=0;
flag=true;
break;
case 112:
num=7;
num2=0;
value=165;
break;
case 113:
num=7;
num2=1;
value=165;
break;
case 114:
num=7;
num2=2;
value=185;
break;
case 115:
num=7;
num2=3;
value=175;
break;
case 116:
num=7;
num2=4;
value=185;
break;
case 117:
num=7;
num2=5;
value=460;
break;
case 118:
num=7;
num2=6;
value=185;
break;
case 119:
num=7;
num2=7;
value=190;
break;
case 120:
num=7;
num2=8;
value=165;
break;
case 121:
num=7;
num2=9;
value=165;
break;
case 122:
num=7;
num2=10;
value=185;
break;
case 123:
num=7;
num2=11;
value=175;
break;
case 124:
num=7;
num2=12;
value=235;
break;
case 125:
num=7;
num2=13;
value=445;
break;
case 126:
num=7;
num2=14;
value=185;
break;
case 127:
num=7;
num2=15;
value=190;
break;
}
switch (iParam0){
case 128:
num=8;
num2=0;
value=175;
break;
case 129:
num=8;
num2=1;
value=215;
break;
case 130:
num=8;
num2=2;
value=225;
break;
case 131:
num=8;
num2=3;
value=230;
break;
case 132:
num=8;
num2=4;
value=235;
break;
case 133:
num=8;
num2=5;
value=215;
break;
case 134:
num=8;
num2=6;
value=205;
break;
case 135:
num=8;
num2=7;
value=245;
break;
case 136:
num=8;
num2=8;
value=225;
break;
case 137:
num=8;
num2=9;
value=215;
break;
case 138:
num=8;
num2=10;
value=225;
break;
case 139:
num=8;
num2=11;
value=230;
break;
case 140:
num=8;
num2=12;
value=235;
break;
case 141:
num=8;
num2=13;
value=215;
break;
case 142:
num=8;
num2=14;
value=425;
break;
case 143:
num=8;
num2=15;
value=245;
break;
case 144:
num=9;
num2=0;
value=225;
break;
case 145:
num=9;
num2=1;
value=135;
break;
case 146:
num=9;
num2=2;
value=130;
break;
case 147:
num=9;
num2=3;
value=110;
break;
case 148:
num=9;
num2=4;
value=140;
break;
case 149:
num=9;
num2=5;
value=95;
break;
case 150:
num=9;
num2=6;
value=100;
break;
case 151:
num=9;
num2=7;
value=110;
break;
case 152:
num=9;
num2=8;
value=95;
break;
case 153:
num=9;
num2=9;
value=105;
break;
case 154:
num=9;
num2=10;
value=105;
break;
case 155:
num=9;
num2=11;
value=115;
break;
case 156:
num=9;
num2=12;
value=115;
break;
case 157:
num=9;
num2=13;
value=115;
break;
case 158:
num=9;
num2=14;
value=500;
break;
case 159:
num=9;
num2=15;
value=440;
break;
}
switch (iParam0){
case 160:
num=10;
num2=0;
value=1090;
break;
case 161:
num=10;
num2=1;
value=0;
flag=true;
break;
case 162:
num=10;
num2=2;
value=0;
flag=true;
break;
case 163:
num=10;
num2=3;
value=0;
flag=true;
break;
case 164:
num=10;
num2=4;
value=0;
flag=true;
break;
case 165:
num=10;
num2=5;
value=0;
flag=true;
break;
case 166:
num=10;
num2=6;
value=0;
flag=true;
break;
case 167:
num=10;
num2=7;
value=600;
break;
case 168:
num=10;
num2=8;
value=0;
flag=true;
break;
case 169:
num=10;
num2=9;
value=0;
flag=true;
break;
case 170:
num=10;
num2=10;
value=0;
flag=true;
break;
case 171:
num=10;
num2=11;
value=0;
flag=true;
break;
case 172:
num=10;
num2=12;
value=1865;
break;
case 173:
num=10;
num2=13;
value=0;
flag=true;
break;
case 174:
num=10;
num2=14;
value=490;
break;
case 175:
num=10;
num2=15;
value=0;
flag=true;
break;
case 176:
num=11;
num2=0;
value=0;
flag=true;
break;
case 177:
num=11;
num2=1;
value=0;
flag=true;
break;
case 178:
num=11;
num2=2;
value=0;
flag=true;
break;
case 179:
num=11;
num2=3;
value=0;
flag=true;
break;
case 180:
num=11;
num2=4;
value=0;
flag=true;
break;
case 181:
num=11;
num2=5;
value=0;
flag=true;
break;
case 182:
num=11;
num2=6;
value=0;
flag=true;
break;
case 183:
num=11;
num2=7;
value=0;
flag=true;
break;
case 184:
num=11;
num2=8;
value=0;
flag=true;
break;
case 185:
num=11;
num2=9;
value=470;
break;
case 186:
num=11;
num2=10;
value=0;
flag=true;
break;
case 187:
num=11;
num2=11;
value=0;
flag=true;
break;
case 188:
num=11;
num2=12;
value=1795;
break;
case 189:
num=11;
num2=13;
value=0;
flag=true;
break;
case 190:
num=11;
num2=14;
value=1830;
break;
case 191:
num=11;
num2=15;
value=455;
break;
}
switch (iParam0){
case 192:
num=12;
num2=0;
value=455;
break;
case 193:
num=12;
num2=1;
value=2110;
break;
case 194:
num=12;
num2=2;
value=380;
break;
case 195:
num=12;
num2=3;
value=1655;
break;
case 196:
num=12;
num2=4;
value=2500;
break;
case 197:
num=12;
num2=5;
value=415;
break;
case 198:
num=12;
num2=6;
value=730;
break;
case 199:
num=12;
num2=7;
value=445;
break;
case 200:
num=12;
num2=8;
value=425;
break;
case 201:
num=12;
num2=9;
value=410;
break;
case 202:
num=12;
num2=10;
value=480;
break;
case 203:
num=12;
num2=11;
value=485;
break;
case 204:
num=12;
num2=12;
value=480;
break;
case 205:
num=12;
num2=13;
value=395;
break;
case 206:
num=12;
num2=14;
value=495;
break;
case 207:
num=12;
num2=15;
value=2090;
break;
case 208:
num=13;
num2=0;
value=0;
flag=true;
break;
case 209:
num=13;
num2=1;
value=0;
flag=true;
break;
case 210:
num=13;
num2=2;
value=0;
flag=true;
break;
case 211:
num=13;
num2=3;
value=0;
flag=true;
break;
case 212:
num=13;
num2=4;
value=0;
flag=true;
break;
case 213:
num=13;
num2=5;
value=0;
flag=true;
break;
case 214:
num=13;
num2=6;
value=0;
flag=true;
break;
case 215:
num=13;
num2=7;
value=0;
flag=true;
break;
case 216:
num=13;
num2=8;
value=0;
flag=true;
break;
case 217:
num=13;
num2=9;
value=0;
flag=true;
break;
case 218:
num=13;
num2=10;
value=0;
flag=true;
break;
case 219:
num=13;
num2=11;
value=0;
flag=true;
break;
case 220:
num=13;
num2=12;
value=0;
flag=true;
break;
case 221:
num=13;
num2=13;
value=0;
flag=true;
break;
case 222:
num=13;
num2=14;
value=0;
flag=true;
break;
case 223:
num=13;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 224:
num=14;
num2=0;
value=450;
break;
case 225:
num=14;
num2=1;
value=685;
break;
case 226:
num=14;
num2=2;
value=420;
break;
case 227:
num=14;
num2=3;
value=365;
break;
case 228:
num=14;
num2=4;
value=465;
break;
case 229:
num=14;
num2=5;
value=405;
break;
case 230:
num=14;
num2=6;
value=400;
break;
case 231:
num=14;
num2=7;
value=440;
break;
case 232:
num=14;
num2=8;
value=385;
break;
case 233:
num=14;
num2=9;
value=435;
break;
case 234:
num=14;
num2=10;
value=375;
break;
case 235:
num=14;
num2=11;
value=390;
break;
case 236:
num=14;
num2=12;
value=475;
break;
case 237:
num=14;
num2=13;
value=430;
break;
case 238:
num=14;
num2=14;
value=490;
break;
case 239:
num=14;
num2=15;
value=490;
break;
case 240:
num=15;
num2=0;
value=615;
break;
case 241:
num=15;
num2=1;
value=315;
break;
case 242:
num=15;
num2=2;
value=415;
break;
case 243:
num=15;
num2=3;
value=425;
break;
case 244:
num=15;
num2=4;
value=435;
break;
case 245:
num=15;
num2=5;
value=445;
break;
case 246:
num=15;
num2=6;
value=640;
break;
case 247:
num=15;
num2=7;
value=460;
break;
case 248:
num=15;
num2=8;
value=465;
break;
case 249:
num=15;
num2=9;
value=745;
break;
case 250:
num=15;
num2=10;
value=845;
break;
case 251:
num=15;
num2=11;
value=1420;
break;
case 252:
num=15;
num2=12;
value=475;
break;
case 253:
num=15;
num2=13;
value=470;
break;
case 254:
num=15;
num2=14;
value=1000;
break;
case 255:
num=15;
num2=15;
value=690;
break;
}
num6=iParam0;
if(num6 >=0 && num6 < 256) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_681[num6] * Global_296940.f_17);
TEXT_LABEL_ASSIGN_STRING(&unk, "F_FMM_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=3;
func_219(num5, iParam0, 256, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_17);
}else{
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_246(int iParam0, Hash hParam1) // Position - 0x2BD90{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=4;
switch (iParam0){
case 0:
num=0;
num2=0;
value=335;
break;
case 1:
num=0;
num2=1;
value=460;
break;
case 2:
num=0;
num2=2;
value=455;
break;
case 3:
num=0;
num2=3;
value=470;
break;
case 4:
num=0;
num2=4;
value=650;
break;
case 5:
num=0;
num2=5;
value=385;
break;
case 6:
num=0;
num2=6;
value=455;
break;
case 7:
num=0;
num2=7;
value=2150;
break;
case 8:
num=0;
num2=8;
value=375;
break;
case 9:
num=0;
num2=9;
value=2190;
break;
case 10:
num=0;
num2=10;
value=285;
break;
case 11:
num=0;
num2=11;
value=295;
break;
case 12:
num=0;
num2=12;
value=445;
break;
case 13:
num=0;
num2=13;
value=2240;
break;
case 14:
num=0;
num2=14;
value=465;
break;
case 15:
num=0;
num2=15;
value=1740;
break;
case 16:
num=1;
num2=0;
value=1415;
break;
case 17:
num=1;
num2=1;
value=325;
break;
case 18:
num=1;
num2=2;
value=345;
break;
case 19:
num=1;
num2=3;
value=355;
break;
case 20:
num=1;
num2=4;
value=395;
break;
case 21:
num=1;
num2=5;
value=315;
break;
case 22:
num=1;
num2=6;
value=275;
break;
case 23:
num=1;
num2=7;
value=265;
break;
case 24:
num=1;
num2=8;
value=305;
break;
case 25:
num=1;
num2=9;
value=255;
break;
case 26:
num=1;
num2=10;
value=235;
break;
case 27:
num=1;
num2=11;
value=245;
break;
case 28:
num=1;
num2=12;
value=215;
break;
case 29:
num=1;
num2=13;
value=1865;
break;
case 30:
num=1;
num2=14;
value=450;
break;
case 31:
num=1;
num2=15;
value=415;
break;
case 32:
num=2;
num2=0;
value=0;
flag=true;
break;
case 33:
num=2;
num2=1;
value=0;
flag=true;
break;
case 34:
num=2;
num2=2;
value=0;
flag=true;
break;
case 35:
num=2;
num2=3;
value=0;
flag=true;
break;
case 36:
num=2;
num2=4;
value=0;
flag=true;
break;
case 37:
num=2;
num2=5;
value=0;
flag=true;
break;
case 38:
num=2;
num2=6;
value=0;
flag=true;
break;
case 39:
num=2;
num2=7;
value=0;
flag=true;
break;
case 40:
num=2;
num2=8;
value=0;
flag=true;
break;
case 41:
num=2;
num2=9;
value=0;
flag=true;
break;
case 42:
num=2;
num2=10;
value=0;
flag=true;
break;
case 43:
num=2;
num2=11;
value=100;
break;
case 44:
num=2;
num2=12;
value=0;
flag=true;
break;
case 45:
num=2;
num2=13;
value=0;
flag=true;
break;
case 46:
num=2;
num2=14;
value=0;
flag=true;
break;
case 47:
num=2;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 48:
num=3;
num2=0;
value=55;
break;
case 49:
num=3;
num2=1;
value=60;
break;
case 50:
num=3;
num2=2;
value=100;
break;
case 51:
num=3;
num2=3;
value=65;
break;
case 52:
num=3;
num2=4;
value=65;
break;
case 53:
num=3;
num2=5;
value=100;
break;
case 54:
num=3;
num2=6;
value=100;
break;
case 55:
num=3;
num2=7;
value=65;
break;
case 56:
num=3;
num2=8;
value=90;
break;
case 57:
num=3;
num2=9;
value=75;
break;
case 58:
num=3;
num2=10;
value=65;
break;
case 59:
num=3;
num2=11;
value=100;
break;
case 60:
num=3;
num2=12;
value=100;
break;
case 61:
num=3;
num2=13;
value=225;
break;
case 62:
num=3;
num2=14;
value=205;
break;
case 63:
num=3;
num2=15;
value=215;
break;
case 64:
num=4;
num2=0;
value=490;
break;
case 65:
num=4;
num2=1;
value=485;
break;
case 66:
num=4;
num2=2;
value=2500;
break;
case 67:
num=4;
num2=3;
value=0;
flag=true;
break;
case 68:
num=4;
num2=4;
value=485;
break;
case 69:
num=4;
num2=5;
value=0;
flag=true;
break;
case 70:
num=4;
num2=6;
value=0;
flag=true;
break;
case 71:
num=4;
num2=7;
value=0;
flag=true;
break;
case 72:
num=4;
num2=8;
value=0;
flag=true;
break;
case 73:
num=4;
num2=9;
value=0;
flag=true;
break;
case 74:
num=4;
num2=10;
value=0;
flag=true;
break;
case 75:
num=4;
num2=11;
value=0;
flag=true;
break;
case 76:
num=4;
num2=12;
value=0;
flag=true;
break;
case 77:
num=4;
num2=13;
value=0;
flag=true;
break;
case 78:
num=4;
num2=14;
value=0;
flag=true;
break;
case 79:
num=4;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 80:
num=5;
num2=0;
value=100;
break;
case 81:
num=5;
num2=1;
value=105;
break;
case 82:
num=5;
num2=2;
value=80;
break;
case 83:
num=5;
num2=3;
value=90;
break;
case 84:
num=5;
num2=4;
value=100;
break;
case 85:
num=5;
num2=5;
value=95;
break;
case 86:
num=5;
num2=6;
value=100;
break;
case 87:
num=5;
num2=7;
value=90;
break;
case 88:
num=5;
num2=8;
value=85;
break;
case 89:
num=5;
num2=9;
value=80;
break;
case 90:
num=5;
num2=10;
value=80;
break;
case 91:
num=5;
num2=11;
value=100;
break;
case 92:
num=5;
num2=12;
value=95;
break;
case 93:
num=5;
num2=13;
value=440;
break;
case 94:
num=5;
num2=14;
value=380;
break;
case 95:
num=5;
num2=15;
value=80;
break;
case 96:
num=6;
num2=0;
value=115;
break;
case 97:
num=6;
num2=1;
value=140;
break;
case 98:
num=6;
num2=2;
value=135;
break;
case 99:
num=6;
num2=3;
value=0;
flag=true;
break;
case 100:
num=6;
num2=4;
value=0;
flag=true;
break;
case 101:
num=6;
num2=5;
value=0;
flag=true;
break;
case 102:
num=6;
num2=6;
value=0;
flag=true;
break;
case 103:
num=6;
num2=7;
value=0;
flag=true;
break;
case 104:
num=6;
num2=8;
value=0;
flag=true;
break;
case 105:
num=6;
num2=9;
value=0;
flag=true;
break;
case 106:
num=6;
num2=10;
value=255;
break;
case 107:
num=6;
num2=11;
value=0;
flag=true;
break;
case 108:
num=6;
num2=12;
value=0;
flag=true;
break;
case 109:
num=6;
num2=13;
value=0;
flag=true;
break;
case 110:
num=6;
num2=14;
value=0;
flag=true;
break;
case 111:
num=6;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 112:
num=7;
num2=0;
value=325;
break;
case 113:
num=7;
num2=1;
value=115;
break;
case 114:
num=7;
num2=2;
value=135;
break;
case 115:
num=7;
num2=3;
value=125;
break;
case 116:
num=7;
num2=4;
value=120;
break;
case 117:
num=7;
num2=5;
value=130;
break;
case 118:
num=7;
num2=6;
value=110;
break;
case 119:
num=7;
num2=7;
value=345;
break;
case 120:
num=7;
num2=8;
value=745;
break;
case 121:
num=7;
num2=9;
value=120;
break;
case 122:
num=7;
num2=10;
value=135;
break;
case 123:
num=7;
num2=11;
value=345;
break;
case 124:
num=7;
num2=12;
value=130;
break;
case 125:
num=7;
num2=13;
value=140;
break;
case 126:
num=7;
num2=14;
value=130;
break;
case 127:
num=7;
num2=15;
value=660;
break;
case 128:
num=8;
num2=0;
value=150;
break;
case 129:
num=8;
num2=1;
value=0;
flag=true;
break;
case 130:
num=8;
num2=2;
value=0;
flag=true;
break;
case 131:
num=8;
num2=3;
value=150;
break;
case 132:
num=8;
num2=4;
value=150;
break;
case 133:
num=8;
num2=5;
value=0;
flag=true;
break;
case 134:
num=8;
num2=6;
value=0;
flag=true;
break;
case 135:
num=8;
num2=7;
value=0;
flag=true;
break;
case 136:
num=8;
num2=8;
value=0;
flag=true;
break;
case 137:
num=8;
num2=9;
value=0;
flag=true;
break;
case 138:
num=8;
num2=10;
value=0;
flag=true;
break;
case 139:
num=8;
num2=11;
value=0;
flag=true;
break;
case 140:
num=8;
num2=12;
value=0;
flag=true;
break;
case 141:
num=8;
num2=13;
value=0;
flag=true;
break;
case 142:
num=8;
num2=14;
value=150;
break;
case 143:
num=8;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 144:
num=9;
num2=0;
value=75;
break;
case 145:
num=9;
num2=1;
value=90;
break;
case 146:
num=9;
num2=2;
value=145;
break;
case 147:
num=9;
num2=3;
value=150;
break;
case 148:
num=9;
num2=4;
value=110;
break;
case 149:
num=9;
num2=5;
value=95;
break;
case 150:
num=9;
num2=6;
value=155;
break;
case 151:
num=9;
num2=7;
value=255;
break;
case 152:
num=9;
num2=8;
value=165;
break;
case 153:
num=9;
num2=9;
value=1150;
break;
case 154:
num=9;
num2=10;
value=1150;
break;
case 155:
num=9;
num2=11;
value=1210;
break;
case 156:
num=9;
num2=12;
value=1125;
break;
case 157:
num=9;
num2=13;
value=1135;
break;
case 158:
num=9;
num2=14;
value=1145;
break;
case 159:
num=9;
num2=15;
value=1145;
break;
case 160:
num=10;
num2=0;
value=845;
break;
case 161:
num=10;
num2=1;
value=480;
break;
case 162:
num=10;
num2=2;
value=475;
break;
case 163:
num=10;
num2=3;
value=0;
flag=true;
break;
case 164:
num=10;
num2=4;
value=0;
flag=true;
break;
case 165:
num=10;
num2=5;
value=0;
flag=true;
break;
case 166:
num=10;
num2=6;
value=0;
flag=true;
break;
case 167:
num=10;
num2=7;
value=0;
flag=true;
break;
case 168:
num=10;
num2=8;
value=0;
flag=true;
break;
case 169:
num=10;
num2=9;
value=0;
flag=true;
break;
case 170:
num=10;
num2=10;
value=0;
flag=true;
break;
case 171:
num=10;
num2=11;
value=0;
flag=true;
break;
case 172:
num=10;
num2=12;
value=0;
flag=true;
break;
case 173:
num=10;
num2=13;
value=0;
flag=true;
break;
case 174:
num=10;
num2=14;
value=0;
flag=true;
break;
case 175:
num=10;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 176:
num=11;
num2=0;
value=0;
flag=true;
break;
case 177:
num=11;
num2=1;
value=0;
flag=true;
break;
case 178:
num=11;
num2=2;
value=0;
flag=true;
break;
case 179:
num=11;
num2=3;
value=0;
flag=true;
break;
case 180:
num=11;
num2=4;
value=0;
flag=true;
break;
case 181:
num=11;
num2=5;
value=0;
flag=true;
break;
case 182:
num=11;
num2=6;
value=0;
flag=true;
break;
case 183:
num=11;
num2=7;
value=0;
flag=true;
break;
case 184:
num=11;
num2=8;
value=0;
flag=true;
break;
case 185:
num=11;
num2=9;
value=0;
flag=true;
break;
case 186:
num=11;
num2=10;
value=0;
flag=true;
break;
case 187:
num=11;
num2=11;
value=0;
flag=true;
break;
case 188:
num=11;
num2=12;
value=0;
flag=true;
break;
case 189:
num=11;
num2=13;
value=0;
flag=true;
break;
case 190:
num=11;
num2=14;
value=0;
flag=true;
break;
case 191:
num=11;
num2=15;
value=0;
flag=true;
break;
case 192:
num=12;
num2=0;
value=220;
break;
case 193:
num=12;
num2=1;
value=0;
flag=true;
break;
case 194:
num=12;
num2=2;
value=0;
flag=true;
break;
case 195:
num=12;
num2=3;
value=0;
flag=true;
break;
case 196:
num=12;
num2=4;
value=100;
break;
case 197:
num=12;
num2=5;
value=65;
break;
case 198:
num=12;
num2=6;
value=0;
flag=true;
break;
case 199:
num=12;
num2=7;
value=50;
break;
case 200:
num=12;
num2=8;
value=0;
flag=true;
break;
case 201:
num=12;
num2=9;
value=0;
flag=true;
break;
case 202:
num=12;
num2=10;
value=0;
flag=true;
break;
case 203:
num=12;
num2=11;
value=0;
flag=true;
break;
case 204:
num=12;
num2=12;
value=100;
break;
case 205:
num=12;
num2=13;
value=0;
flag=true;
break;
case 206:
num=12;
num2=14;
value=0;
flag=true;
break;
case 207:
num=12;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 208:
num=13;
num2=0;
value=460;
break;
case 209:
num=13;
num2=1;
value=475;
break;
case 210:
num=13;
num2=2;
value=470;
break;
case 211:
num=13;
num2=3;
value=0;
flag=true;
break;
case 212:
num=13;
num2=4;
value=0;
flag=true;
break;
case 213:
num=13;
num2=5;
value=0;
flag=true;
break;
case 214:
num=13;
num2=6;
value=0;
flag=true;
break;
case 215:
num=13;
num2=7;
value=0;
flag=true;
break;
case 216:
num=13;
num2=8;
value=0;
flag=true;
break;
case 217:
num=13;
num2=9;
value=0;
flag=true;
break;
case 218:
num=13;
num2=10;
value=0;
flag=true;
break;
case 219:
num=13;
num2=11;
value=0;
flag=true;
break;
case 220:
num=13;
num2=12;
value=0;
flag=true;
break;
case 221:
num=13;
num2=13;
value=0;
flag=true;
break;
case 222:
num=13;
num2=14;
value=0;
flag=true;
break;
case 223:
num=13;
num2=15;
value=0;
flag=true;
break;
case 224:
num=14;
num2=0;
value=50;
break;
case 225:
num=14;
num2=1;
value=100;
break;
case 226:
num=14;
num2=2;
value=0;
flag=true;
break;
case 227:
num=14;
num2=3;
value=100;
break;
case 228:
num=14;
num2=4;
value=0;
flag=true;
break;
case 229:
num=14;
num2=5;
value=0;
flag=true;
break;
case 230:
num=14;
num2=6;
value=0;
flag=true;
break;
case 231:
num=14;
num2=7;
value=0;
flag=true;
break;
case 232:
num=14;
num2=8;
value=0;
flag=true;
break;
case 233:
num=14;
num2=9;
value=0;
flag=true;
break;
case 234:
num=14;
num2=10;
value=0;
flag=true;
break;
case 235:
num=14;
num2=11;
value=0;
flag=true;
break;
case 236:
num=14;
num2=12;
value=100;
break;
case 237:
num=14;
num2=13;
value=0;
flag=true;
break;
case 238:
num=14;
num2=14;
value=0;
flag=true;
break;
case 239:
num=14;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 240:
num=15;
num2=0;
value=90;
break;
case 241:
num=15;
num2=1;
value=105;
break;
case 242:
num=15;
num2=2;
value=100;
break;
case 243:
num=15;
num2=3;
value=240;
break;
case 244:
num=15;
num2=4;
value=95;
break;
case 245:
num=15;
num2=5;
value=95;
break;
case 246:
num=15;
num2=6;
value=100;
break;
case 247:
num=15;
num2=7;
value=105;
break;
case 248:
num=15;
num2=8;
value=100;
break;
case 249:
num=15;
num2=9;
value=295;
break;
case 250:
num=15;
num2=10;
value=250;
break;
case 251:
num=15;
num2=11;
value=285;
break;
case 252:
num=15;
num2=12;
value=275;
break;
case 253:
num=15;
num2=13;
value=105;
break;
case 254:
num=15;
num2=14;
value=100;
break;
case 255:
num=15;
num2=15;
value=95;
break;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "L_FMM_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
num6=iParam0;
if(num6 >=0 && num6 < 256) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_186[num6] * Global_296940.f_15);
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=3;
func_219(num5, iParam0, 256, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_15);
}else{
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_247(int iParam0, Hash hParam1) // Position - 0x2D3C3{
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
switch (iParam0){
case 0:
num2=0;
num3=0;
break;
case 1:
num2=1;
num3=0;
break;
case 2:
num2=2;
num3=0;
break;
case 3:
num2=3;
num3=0;
break;
case 4:
num2=4;
num3=0;
break;
case 5:
num2=5;
num3=0;
break;
case 6:
num2=6;
num3=0;
break;
case 7:
num2=7;
num3=0;
break;
case 8:
num2=8;
num3=0;
break;
case 9:
num2=9;
num3=0;
break;
case 10:
num2=10;
num3=0;
break;
case 11:
num2=11;
num3=0;
break;
case 12:
num2=12;
num3=0;
break;
case 13:
num2=13;
num3=0;
break;
case 14:
num2=14;
num3=0;
break;
case 15:
num2=15;
num3=0;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_219(num6, iParam0, 16, hParam1);
return;
}
func_209(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_248(int iParam0, Hash hParam1) // Position - 0x2D51A{
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
switch (iParam0){
case 0:
num2=0;
num3=0;
break;
case 1:
num2=1;
num3=0;
break;
case 2:
num2=1;
num3=1;
break;
case 3:
num2=1;
num3=2;
break;
case 4:
num2=1;
num3=3;
break;
case 5:
num2=1;
num3=4;
break;
case 6:
num2=2;
num3=0;
break;
case 7:
num2=2;
num3=1;
break;
case 8:
num2=2;
num3=2;
break;
case 9:
num2=2;
num3=3;
break;
case 10:
num2=2;
num3=4;
break;
case 11:
num2=3;
num3=0;
break;
case 12:
num2=3;
num3=1;
break;
case 13:
num2=3;
num3=2;
break;
case 14:
num2=3;
num3=3;
break;
case 15:
num2=3;
num3=4;
break;
case 16:
num2=4;
num3=0;
break;
case 17:
num2=4;
num3=1;
break;
case 18:
num2=4;
num3=2;
break;
case 19:
num2=4;
num3=3;
break;
case 20:
num2=4;
num3=4;
break;
case 21:
num2=5;
num3=0;
break;
case 22:
num2=5;
num3=1;
break;
case 23:
num2=5;
num3=2;
break;
case 24:
num2=5;
num3=3;
break;
case 25:
num2=5;
num3=4;
break;
case 26:
num2=6;
num3=0;
break;
case 27:
num2=6;
num3=1;
break;
case 28:
num2=6;
num3=2;
break;
case 29:
num2=6;
num3=3;
break;
case 30:
num2=6;
num3=4;
break;
case 31:
num2=7;
num3=0;
break;
case 32:
num2=7;
num3=1;
break;
case 33:
num2=7;
num3=2;
break;
case 34:
num2=7;
num3=3;
break;
case 35:
num2=7;
num3=4;
break;
case 36:
num2=8;
num3=0;
break;
case 37:
num2=8;
num3=1;
break;
case 38:
num2=8;
num3=2;
break;
case 39:
num2=8;
num3=3;
break;
case 40:
num2=8;
num3=4;
break;
case 41:
num2=9;
num3=0;
break;
case 42:
num2=9;
num3=1;
break;
case 43:
num2=9;
num3=2;
break;
case 44:
num2=9;
num3=3;
break;
case 45:
num2=9;
num3=4;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_219(num6, iParam0, 46, hParam1);
return;
}
func_209(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_249(int iParam0, Hash hParam1) // Position - 0x2D836{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
int num8;
int num9;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=8;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_0" /*Crew T-Shirt*/, 16);
num=0;
num2=0;
value=250;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_1" /*Yeti T-Shirt*/, 16);
num=0;
num2=1;
value=210;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_2" /*Charcoal T-Shirt*/, 16);
num=0;
num2=2;
value=50;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_3" /*Stank T-Shirt*/, 16);
num=0;
num2=3;
value=90;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_4" /*Ranch T-Shirt*/, 16);
num=0;
num2=4;
value=210;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_5" /*Pikeys T-Shirt*/, 16);
num=0;
num2=5;
value=200;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_6", 16);
num=0;
num2=6;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_7" /*Multi-Logo T-Shirt*/, 16);
num=0;
num2=7;
value=130;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_8" /*Sweatbox T-Shirt*/, 16);
num=0;
num2=8;
value=220;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_9", 16);
num=0;
num2=9;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_10", 16);
num=0;
num2=10;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_11" /*Eris T-Shirt*/, 16);
num=0;
num2=11;
value=220;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_12", 16);
num=0;
num2=12;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_13", 16);
num=0;
num2=13;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_14", 16);
num=0;
num2=14;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_15", 16);
num=0;
num2=15;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_0" /*White V Neck*/, 16);
num=1;
num2=0;
value=45;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_1" /*Ash V Neck*/, 16);
num=1;
num2=1;
value=60;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_2", 16);
num=1;
num2=2;
flag=true;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_3" /*Swallow V Neck*/, 16);
num=1;
num2=3;
value=40;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_4" /*Harsh Souls V Neck*/, 16);
num=1;
num2=4;
value=315;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_5" /*Broker V Neck*/, 16);
num=1;
num2=5;
value=215;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_6" /*Hip-Hop Royalty V Neck*/, 16);
num=1;
num2=6;
value=265;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_7" /*Green V Neck*/, 16);
num=1;
num2=7;
value=45;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_8" /*G&B V Neck*/, 16);
num=1;
num2=8;
value=205;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_9", 16);
num=1;
num2=9;
flag=true;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_10", 16);
num=1;
num2=10;
flag=true;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_11" /*Orange V Neck*/, 16);
num=1;
num2=11;
value=60;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_12" /*Brown V Neck*/, 16);
num=1;
num2=12;
value=55;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_13", 16);
num=1;
num2=13;
flag=true;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_14" /*Signs V Neck*/, 16);
num=1;
num2=14;
value=170;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_15" /*Blue Striped V Neck*/, 16);
num=1;
num2=15;
flag=true;
break;
}
switch (iParam0){
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_0" /*Crew T-Shirt*/, 16);
num=2;
num2=0;
value=250;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_1" /*Yeti T-Shirt*/, 16);
num=2;
num2=1;
value=210;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_2" /*Charcoal T-Shirt*/, 16);
num=2;
num2=2;
value=50;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_3" /*Stank T-Shirt*/, 16);
num=2;
num2=3;
value=90;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_4" /*Ranch T-Shirt*/, 16);
num=2;
num2=4;
value=210;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_5" /*Pikeys T-Shirt*/, 16);
num=2;
num2=5;
value=200;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_6", 16);
num=2;
num2=6;
flag=true;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_7" /*Multi-Logo T-Shirt*/, 16);
num=2;
num2=7;
value=130;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_8" /*Sweatbox T-Shirt*/, 16);
num=2;
num2=8;
value=220;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_9", 16);
num=2;
num2=9;
flag=true;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_10", 16);
num=2;
num2=10;
flag=true;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_11" /*Eris T-Shirt*/, 16);
num=2;
num2=11;
value=220;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_12", 16);
num=2;
num2=12;
flag=true;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_13", 16);
num=2;
num2=13;
flag=true;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_14", 16);
num=2;
num2=14;
flag=true;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_15", 16);
num=2;
num2=15;
flag=true;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_0" /*Black Vest*/, 16);
num=3;
num2=0;
if(Global_262145.f_4191 !=-1) value=Global_262145.f_4191;
else value=165;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_1" /*Gray Vest*/, 16);
num=3;
num2=1;
if(Global_262145.f_4199 !=-1) value=Global_262145.f_4199;
else value=120;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_2" /*Blue Vest*/, 16);
num=3;
num2=2;
if(Global_262145.f_4194 !=-1) value=Global_262145.f_4194;
else value=115;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_3", 16);
num=3;
num2=3;
flag=true;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_4", 16);
num=3;
num2=4;
flag=true;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_5", 16);
num=3;
num2=5;
flag=true;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_6", 16);
num=3;
num2=6;
flag=true;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_7", 16);
num=3;
num2=7;
flag=true;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_8", 16);
num=3;
num2=8;
flag=true;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_9", 16);
num=3;
num2=9;
flag=true;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_10", 16);
num=3;
num2=10;
flag=true;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_11", 16);
num=3;
num2=11;
flag=true;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_12", 16);
num=3;
num2=12;
flag=true;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_13", 16);
num=3;
num2=13;
flag=true;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_14", 16);
num=3;
num2=14;
flag=true;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_15", 16);
num=3;
num2=15;
flag=true;
break;
}
switch (iParam0){
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_0" /*Black Vest*/, 16);
num=4;
num2=0;
if(Global_262145.f_4191 !=-1) value=Global_262145.f_4191;
else value=165;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_1" /*Gray Vest*/, 16);
num=4;
num2=1;
if(Global_262145.f_4199 !=-1) value=Global_262145.f_4199;
else value=120;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_2" /*Blue Vest*/, 16);
num=4;
num2=2;
if(Global_262145.f_4194 !=-1) value=Global_262145.f_4194;
else value=115;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_3", 16);
num=4;
num2=3;
flag=true;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_4", 16);
num=4;
num2=4;
flag=true;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_5", 16);
num=4;
num2=5;
flag=true;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_6", 16);
num=4;
num2=6;
flag=true;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_7", 16);
num=4;
num2=7;
flag=true;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_8", 16);
num=4;
num2=8;
flag=true;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_9", 16);
num=4;
num2=9;
flag=true;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_10", 16);
num=4;
num2=10;
flag=true;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_11", 16);
num=4;
num2=11;
flag=true;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_12", 16);
num=4;
num2=12;
flag=true;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_13", 16);
num=4;
num2=13;
flag=true;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_14", 16);
num=4;
num2=14;
flag=true;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_15", 16);
num=4;
num2=15;
flag=true;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_0" /*White Tank*/, 16);
num=5;
num2=0;
value=80;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[80]);
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_1" /*Gray Tank*/, 16);
num=5;
num2=1;
value=45;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[81]);
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_2" /*Black Tank*/, 16);
num=5;
num2=2;
value=50;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[82]);
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_3", 16);
num=5;
num2=3;
flag=true;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_4", 16);
num=5;
num2=4;
flag=true;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_5", 16);
num=5;
num2=5;
flag=true;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_6", 16);
num=5;
num2=6;
flag=true;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_7" /*Red Tank*/, 16);
num=5;
num2=7;
value=50;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[87]);
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_8", 16);
num=5;
num2=8;
flag=true;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_9", 16);
num=5;
num2=9;
flag=true;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_10", 16);
num=5;
num2=10;
flag=true;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_11", 16);
num=5;
num2=11;
flag=true;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_12", 16);
num=5;
num2=12;
flag=true;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_13", 16);
num=5;
num2=13;
flag=true;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_14", 16);
num=5;
num2=14;
flag=true;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_15", 16);
num=5;
num2=15;
flag=true;
break;
}
switch (iParam0){
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_0" /*White Shirt*/, 16);
num=6;
num2=0;
if(Global_262145.f_4212 !=-1) value=Global_262145.f_4212;
else value=420;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_1" /*Silver Shirt*/, 16);
num=6;
num2=1;
if(Global_262145.f_4210 !=-1) value=Global_262145.f_4210;
else value=415;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_2" /*Charcoal Shirt*/, 16);
num=6;
num2=2;
if(Global_262145.f_4190 !=-1) value=Global_262145.f_4190;
else value=440;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_3" /*Pale Blue Shirt*/, 16);
num=6;
num2=3;
if(Global_262145.f_4204 !=-1) value=Global_262145.f_4204;
else value=400;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_4" /*Barely Blue Shirt*/, 16);
num=6;
num2=4;
if(Global_262145.f_4189 !=-1) value=Global_262145.f_4189;
else value=400;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_5" /*Pink Check Shirt*/, 16);
num=6;
num2=5;
if(Global_262145.f_4206 !=-1) value=Global_262145.f_4206;
else value=410;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_6" /*Salmon Shirt*/, 16);
num=6;
num2=6;
if(Global_262145.f_4209 !=-1) value=Global_262145.f_4209;
else value=435;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_7" /*Pale Olive Shirt*/, 16);
num=6;
num2=7;
if(Global_262145.f_4205 !=-1) value=Global_262145.f_4205;
else value=425;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_8" /*Fuchsia Shirt*/, 16);
num=6;
num2=8;
if(Global_262145.f_4198 !=-1) value=Global_262145.f_4198;
else value=435;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_9" /*Off-White Shirt*/, 16);
num=6;
num2=9;
if(Global_262145.f_4203 !=-1) value=Global_262145.f_4203;
else value=420;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_10" /*Mint Shirt*/, 16);
num=6;
num2=10;
if(Global_262145.f_4201 !=-1) value=Global_262145.f_4201;
else value=425;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_11" /*Tan Shirt*/, 16);
num=6;
num2=11;
if(Global_262145.f_4211 !=-1) value=Global_262145.f_4211;
else value=425;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_12" /*Dark Salmon Shirt*/, 16);
num=6;
num2=12;
if(Global_262145.f_4197 !=-1) value=Global_262145.f_4197;
else value=435;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_13" /*Blue Check Shirt*/, 16);
num=6;
num2=13;
if(Global_262145.f_4192 !=-1) value=Global_262145.f_4192;
else value=750;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_14" /*Pink Shirt*/, 16);
num=6;
num2=14;
if(Global_262145.f_4207 !=-1) value=Global_262145.f_4207;
else value=400;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_15" /*Lemon Shirt*/, 16);
num=6;
num2=15;
if(Global_262145.f_4200 !=-1) value=Global_262145.f_4200;
else value=435;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_0" /*White Shirt*/, 16);
num=7;
num2=0;
if(Global_262145.f_4212 !=-1) value=Global_262145.f_4212;
else value=420;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_1" /*Silver Shirt*/, 16);
num=7;
num2=1;
if(Global_262145.f_4210 !=-1) value=Global_262145.f_4210;
else value=415;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_2" /*Charcoal Shirt*/, 16);
num=7;
num2=2;
if(Global_262145.f_4190 !=-1) value=Global_262145.f_4190;
else value=440;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_3" /*Pale Blue Shirt*/, 16);
num=7;
num2=3;
if(Global_262145.f_4204 !=-1) value=Global_262145.f_4204;
else value=400;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_4" /*Barely Blue Shirt*/, 16);
num=7;
num2=4;
if(Global_262145.f_4189 !=-1) value=Global_262145.f_4189;
else value=400;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_5" /*Pink Check Shirt*/, 16);
num=7;
num2=5;
if(Global_262145.f_4206 !=-1) value=Global_262145.f_4206;
else value=410;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_6" /*Salmon Shirt*/, 16);
num=7;
num2=6;
if(Global_262145.f_4209 !=-1) value=Global_262145.f_4209;
else value=435;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_7" /*Pale Olive Shirt*/, 16);
num=7;
num2=7;
if(Global_262145.f_4205 !=-1) value=Global_262145.f_4205;
else value=425;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_8" /*Fuchsia Shirt*/, 16);
num=7;
num2=8;
if(Global_262145.f_4198 !=-1) value=Global_262145.f_4198;
else value=435;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_9" /*Off-White Shirt*/, 16);
num=7;
num2=9;
if(Global_262145.f_4203 !=-1) value=Global_262145.f_4203;
else value=420;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_10" /*Mint Shirt*/, 16);
num=7;
num2=10;
if(Global_262145.f_4201 !=-1) value=Global_262145.f_4201;
else value=425;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_11" /*Tan Shirt*/, 16);
num=7;
num2=11;
if(Global_262145.f_4211 !=-1) value=Global_262145.f_4211;
else value=425;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_12" /*Dark Salmon Shirt*/, 16);
num=7;
num2=12;
if(Global_262145.f_4197 !=-1) value=Global_262145.f_4197;
else value=435;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_13" /*Blue Check Shirt*/, 16);
num=7;
num2=13;
if(Global_262145.f_4192 !=-1) value=Global_262145.f_4192;
else value=750;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_14" /*Pink Shirt*/, 16);
num=7;
num2=14;
if(Global_262145.f_4207 !=-1) value=Global_262145.f_4207;
else value=400;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_15" /*Lemon Shirt*/, 16);
num=7;
num2=15;
if(Global_262145.f_4200 !=-1) value=Global_262145.f_4200;
else value=435;
break;
}
switch (iParam0){
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_0" /*Red Accent Tee*/, 16);
num=8;
num2=0;
value=45;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_1", 16);
num=8;
num2=1;
flag=true;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_2", 16);
num=8;
num2=2;
flag=true;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_3", 16);
num=8;
num2=3;
flag=true;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_4", 16);
num=8;
num2=4;
flag=true;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_5", 16);
num=8;
num2=5;
flag=true;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_6", 16);
num=8;
num2=6;
flag=true;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_7", 16);
num=8;
num2=7;
flag=true;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_8", 16);
num=8;
num2=8;
flag=true;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_9", 16);
num=8;
num2=9;
flag=true;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_10" /*Sky Blue Tee*/, 16);
num=8;
num2=10;
value=65;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_11", 16);
num=8;
num2=11;
flag=true;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_12", 16);
num=8;
num2=12;
flag=true;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_13" /*Slate Tee*/, 16);
num=8;
num2=13;
value=40;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_14" /*Gray Two-Tone Tee*/, 16);
num=8;
num2=14;
value=45;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_15", 16);
num=8;
num2=15;
flag=true;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_0" /*White Striped Polo Shirt*/, 16);
num=9;
num2=0;
value=265;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_1" /*Metal Polo Shirt*/, 16);
num=9;
num2=1;
value=340;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_2" /*Night Polo Shirt*/, 16);
num=9;
num2=2;
value=335;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_3" /*Cupcake Polo Shirt*/, 16);
num=9;
num2=3;
value=330;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_4" /*Blue Polo Shirt*/, 16);
num=9;
num2=4;
value=345;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_5" /*Vibe Polo Shirt*/, 16);
num=9;
num2=5;
value=550;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_6" /*Salmon Polo Shirt*/, 16);
num=9;
num2=6;
value=340;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_7" /*Royale Polo Shirt*/, 16);
num=9;
num2=7;
value=295;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_8", 16);
num=9;
num2=8;
flag=true;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_9", 16);
num=9;
num2=9;
flag=true;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_10" /*Pro Lite Polo Shirt*/, 16);
num=9;
num2=10;
value=545;
break;
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_11" /*Ice Polo Shirt*/, 16);
num=9;
num2=11;
value=345;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_12" /*Money Polo Shirt*/, 16);
num=9;
num2=12;
value=315;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_13" /*Hunter Polo Shirt*/, 16);
num=9;
num2=13;
value=520;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_14" /*Red Polo Shirt*/, 16);
num=9;
num2=14;
value=325;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_15" /*Sunshine Polo Shirt*/, 16);
num=9;
num2=15;
value=330;
break;
}
switch (iParam0){
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_0" /*White Shirt*/, 16);
num=10;
num2=0;
if(Global_262145.f_4212 !=-1) value=Global_262145.f_4212;
else value=405;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_1" /*Silver Shirt*/, 16);
num=10;
num2=1;
if(Global_262145.f_4210 !=-1) value=Global_262145.f_4210;
else value=400;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_2" /*Charcoal Shirt*/, 16);
num=10;
num2=2;
if(Global_262145.f_4196 !=-1) value=Global_262145.f_4196;
else value=425;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_3" /*Pale Blue Shirt*/, 16);
num=10;
num2=3;
if(Global_262145.f_4204 !=-1) value=Global_262145.f_4204;
else value=385;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_4" /*Barely Blue Shirt*/, 16);
num=10;
num2=4;
if(Global_262145.f_4189 !=-1) value=Global_262145.f_4189;
else value=385;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_5" /*Pink Check Shirt*/, 16);
num=10;
num2=5;
if(Global_262145.f_4206 !=-1) value=Global_262145.f_4206;
else value=395;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_6" /*Blue Woven Shirt*/, 16);
num=10;
num2=6;
if(Global_262145.f_4195 !=-1) value=Global_262145.f_4195;
else value=500;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_7" /*Salmon Shirt*/, 16);
num=10;
num2=7;
if(Global_262145.f_4209 !=-1) value=Global_262145.f_4209;
else value=420;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_8" /*Pale Olive Shirt*/, 16);
num=10;
num2=8;
if(Global_262145.f_4205 !=-1) value=Global_262145.f_4205;
else value=410;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_9" /*Fuchsia Shirt*/, 16);
num=10;
num2=9;
if(Global_262145.f_4198 !=-1) value=Global_262145.f_4198;
else value=420;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_10" /*Off-White Shirt*/, 16);
num=10;
num2=10;
if(Global_262145.f_4203 !=-1) value=Global_262145.f_4203;
else value=405;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_11" /*Mint Shirt*/, 16);
num=10;
num2=11;
if(Global_262145.f_4201 !=-1) value=Global_262145.f_4201;
else value=410;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_12" /*Blue Striped Shirt*/, 16);
num=10;
num2=12;
if(Global_262145.f_4193 !=-1) value=Global_262145.f_4193;
else value=420;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_13" /*Pink Striped Shirt*/, 16);
num=10;
num2=13;
if(Global_262145.f_4208 !=-1) value=Global_262145.f_4208;
else value=420;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_14" /*Tan Shirt*/, 16);
num=10;
num2=14;
if(Global_262145.f_4211 !=-1) value=Global_262145.f_4211;
else value=410;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_15" /*Ocean Stripe Shirt*/, 16);
num=10;
num2=15;
if(Global_262145.f_4202 !=-1) value=Global_262145.f_4202;
else value=460;
break;
case 176:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_0" /*White Shirt*/, 16);
num=11;
num2=0;
if(Global_262145.f_4212 !=-1) value=Global_262145.f_4212;
else value=405;
break;
case 177:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_1" /*Silver Shirt*/, 16);
num=11;
num2=1;
if(Global_262145.f_4210 !=-1) value=Global_262145.f_4210;
else value=400;
break;
case 178:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_2" /*Charcoal Shirt*/, 16);
num=11;
num2=2;
if(Global_262145.f_4196 !=-1) value=Global_262145.f_4196;
else value=425;
break;
case 179:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_3" /*Pale Blue Shirt*/, 16);
num=11;
num2=3;
if(Global_262145.f_4204 !=-1) value=Global_262145.f_4204;
else value=385;
break;
case 180:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_4" /*Barely Blue Shirt*/, 16);
num=11;
num2=4;
if(Global_262145.f_4189 !=-1) value=Global_262145.f_4189;
else value=385;
break;
case 181:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_5" /*Pink Check Shirt*/, 16);
num=11;
num2=5;
if(Global_262145.f_4206 !=-1) value=Global_262145.f_4206;
else value=395;
break;
case 182:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_6" /*Blue Woven Shirt*/, 16);
num=11;
num2=6;
if(Global_262145.f_4195 !=-1) value=Global_262145.f_4195;
else value=500;
break;
case 183:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_7" /*Salmon Shirt*/, 16);
num=11;
num2=7;
if(Global_262145.f_4209 !=-1) value=Global_262145.f_4209;
else value=420;
break;
case 184:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_8" /*Pale Olive Shirt*/, 16);
num=11;
num2=8;
if(Global_262145.f_4205 !=-1) value=Global_262145.f_4205;
else value=410;
break;
case 185:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_9" /*Fuchsia Shirt*/, 16);
num=11;
num2=9;
if(Global_262145.f_4198 !=-1) value=Global_262145.f_4198;
else value=420;
break;
case 186:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_10" /*Off-White Shirt*/, 16);
num=11;
num2=10;
if(Global_262145.f_4203 !=-1) value=Global_262145.f_4203;
else value=405;
break;
case 187:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_11" /*Mint Shirt*/, 16);
num=11;
num2=11;
if(Global_262145.f_4201 !=-1) value=Global_262145.f_4201;
else value=410;
break;
case 188:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_12" /*Blue Striped Shirt*/, 16);
num=11;
num2=12;
if(Global_262145.f_4193 !=-1) value=Global_262145.f_4193;
else value=420;
break;
case 189:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_13" /*Pink Striped Shirt*/, 16);
num=11;
num2=13;
if(Global_262145.f_4208 !=-1) value=Global_262145.f_4208;
else value=420;
break;
case 190:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_14" /*Tan Shirt*/, 16);
num=11;
num2=14;
if(Global_262145.f_4211 !=-1) value=Global_262145.f_4211;
else value=410;
break;
case 191:
TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_15" /*Ocean Stripe Shirt*/, 16);
num=11;
num2=15;
if(Global_262145.f_4202 !=-1) value=Global_262145.f_4202;
else value=460;
break;
}
switch (iParam0){
case 192:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_0" /*White Untucked*/, 16);
num=12;
num2=0;
value=420;
break;
case 193:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_1" /*Steel Untucked*/, 16);
num=12;
num2=1;
value=415;
break;
case 194:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_2" /*Black Untucked*/, 16);
num=12;
num2=2;
value=695;
break;
case 195:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_3" /*Sky Untucked*/, 16);
num=12;
num2=3;
value=385;
break;
case 196:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_4" /*Navy Untucked*/, 16);
num=12;
num2=4;
value=330;
break;
case 197:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_5" /*Red Untucked*/, 16);
num=12;
num2=5;
value=345;
break;
case 198:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_6" /*Moss Untucked*/, 16);
num=12;
num2=6;
value=340;
break;
case 199:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_7" /*Ash Untucked*/, 16);
num=12;
num2=7;
value=450;
break;
case 200:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_8" /*Mustard Untucked*/, 16);
num=12;
num2=8;
value=295;
break;
case 201:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_9" /*Butter Untucked*/, 16);
num=12;
num2=9;
value=340;
break;
case 202:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_10" /*Forest Untucked*/, 16);
num=12;
num2=10;
value=1060;
break;
case 203:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_11" /*Azure Untucked*/, 16);
num=12;
num2=11;
value=1040;
break;
case 204:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_12", 16);
num=12;
num2=12;
flag=true;
break;
case 205:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_13", 16);
num=12;
num2=13;
flag=true;
break;
case 206:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_14", 16);
num=12;
num2=14;
flag=true;
break;
case 207:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_15", 16);
num=12;
num2=15;
flag=true;
break;
case 208:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_0" /*White Tucked*/, 16);
num=13;
num2=0;
value=420;
break;
case 209:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_1" /*Silver Tucked*/, 16);
num=13;
num2=1;
value=415;
break;
case 210:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_2" /*Black Tucked*/, 16);
num=13;
num2=2;
value=680;
break;
case 211:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_3" /*Blue Tucked*/, 16);
num=13;
num2=3;
value=385;
break;
case 212:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_4", 16);
num=13;
num2=4;
flag=true;
break;
case 213:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_5" /*Burgundy Tucked*/, 16);
num=13;
num2=5;
value=345;
break;
case 214:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_6", 16);
num=13;
num2=6;
flag=true;
break;
case 215:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_7", 16);
num=13;
num2=7;
flag=true;
break;
case 216:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_8", 16);
num=13;
num2=8;
flag=true;
break;
case 217:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_9", 16);
num=13;
num2=9;
flag=true;
break;
case 218:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_10", 16);
num=13;
num2=10;
flag=true;
break;
case 219:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_11", 16);
num=13;
num2=11;
flag=true;
break;
case 220:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_12", 16);
num=13;
num2=12;
flag=true;
break;
case 221:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_13" /*Green Plaid Tucked*/, 16);
num=13;
num2=13;
value=1065;
break;
case 222:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_14", 16);
num=13;
num2=14;
flag=true;
break;
case 223:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_15", 16);
num=13;
num2=15;
flag=true;
break;
}
switch (iParam0){
case 224:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_0" /*White V Neck*/, 16);
num=14;
num2=0;
value=45;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[16]);
break;
case 225:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_1" /*Ash V Neck*/, 16);
num=14;
num2=1;
value=60;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[17]);
break;
case 226:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_2", 16);
num=14;
num2=2;
flag=true;
break;
case 227:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_3" /*Swallow V Neck*/, 16);
num=14;
num2=3;
value=40;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[19]);
break;
case 228:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_4" /*Harsh Souls V Neck*/, 16);
num=14;
num2=4;
value=315;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[20]);
break;
case 229:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_5" /*Broker V Neck*/, 16);
num=14;
num2=5;
value=215;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[21]);
break;
case 230:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_6" /*Hip-Hop Royalty V Neck*/, 16);
num=14;
num2=6;
value=265;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[22]);
break;
case 231:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_7" /*Green V Neck*/, 16);
num=14;
num2=7;
value=45;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[23]);
break;
case 232:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_8" /*G&B V Neck*/, 16);
num=14;
num2=8;
value=205;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[24]);
break;
case 233:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_9", 16);
num=14;
num2=9;
flag=true;
break;
case 234:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_10", 16);
num=14;
num2=10;
flag=true;
break;
case 235:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_11" /*Orange V Neck*/, 16);
num=14;
num2=11;
value=60;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[27]);
break;
case 236:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_12" /*Brown V Neck*/, 16);
num=14;
num2=12;
value=55;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[28]);
break;
case 237:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_13", 16);
num=14;
num2=13;
flag=true;
break;
case 238:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_14" /*Signs V Neck*/, 16);
num=14;
num2=14;
value=170;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[30]);
break;
case 239:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_15" /*Blue Striped V Neck*/, 16);
num=14;
num2=15;
flag=true;
break;
case 240:
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_15_0", 16);
num=15;
num2=0;
value=0;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[32]);
break;
}
if(iParam0==23 || iParam0==231){
if(func_231(89, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(45) * Global_262145.f_443[23]);
}}elseif(iParam0==17 || iParam0==225){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989);
}elseif(iParam0==28 || iParam0==236){
if(func_231(87, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(55) * Global_262145.f_443[28]);
}}elseif(iParam0 >=0 && iParam0 < 32){
num6=iParam0;
if(num6 >=0 && num6 < 237) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num6]);
}elseif(iParam0 >=32 && iParam0 < 48){
num7=iParam0 - 32;
if(num7 >=0 && num7 < 237) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num7]);
}elseif(iParam0 >=128 && iParam0 < 160){
num8=(iParam0 - 160) + 124;
if(num8 >=0 && num8 < 237) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num8]);
}elseif(iParam0 >=192 && iParam0 < 224){
num9=(iParam0 - 160) + 188;
if(num9 >=0 && num9 < 237) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num9]);
}
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_296940.f_16);
if(iParam0 >=241){
Global_78341[0 /*14*/].f_5=3;
func_219(num5, iParam0, 241, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_16);
}else{
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_250(int iParam0, Hash hParam1) // Position - 0x2FD27{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=11;
switch (iParam0){
case 0:
num=0;
num2=0;
value=250;
break;
case 1:
num=0;
num2=1;
value=210;
break;
case 2:
num=0;
num2=2;
value=50;
break;
case 3:
num=0;
num2=3;
value=90;
break;
case 4:
num=0;
num2=4;
value=210;
break;
case 5:
num=0;
num2=5;
value=200;
break;
case 6:
num=0;
num2=6;
value=0;
flag=true;
break;
case 7:
num=0;
num2=7;
value=130;
break;
case 8:
num=0;
num2=8;
value=220;
break;
case 9:
num=0;
num2=9;
value=0;
flag=true;
break;
case 10:
num=0;
num2=10;
value=0;
flag=true;
break;
case 11:
num=0;
num2=11;
value=220;
break;
case 12:
num=0;
num2=12;
value=0;
flag=true;
break;
case 13:
num=0;
num2=13;
value=0;
flag=true;
break;
case 14:
num=0;
num2=14;
value=0;
flag=true;
break;
case 15:
num=0;
num2=15;
value=0;
flag=true;
break;
case 16:
num=1;
num2=0;
value=45;
break;
case 17:
num=1;
num2=1;
value=60;
break;
case 18:
num=1;
num2=2;
value=0;
flag=true;
break;
case 19:
num=1;
num2=3;
value=40;
break;
case 20:
num=1;
num2=4;
value=315;
break;
case 21:
num=1;
num2=5;
value=215;
break;
case 22:
num=1;
num2=6;
value=265;
break;
case 23:
num=1;
num2=7;
value=45;
break;
case 24:
num=1;
num2=8;
value=205;
break;
case 25:
num=1;
num2=9;
value=0;
flag=true;
break;
case 26:
num=1;
num2=10;
value=0;
flag=true;
break;
case 27:
num=1;
num2=11;
value=60;
break;
case 28:
num=1;
num2=12;
value=55;
break;
case 29:
num=1;
num2=13;
value=0;
flag=true;
break;
case 30:
num=1;
num2=14;
value=170;
break;
case 31:
num=1;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 32:
num=2;
num2=0;
value=0;
flag=true;
break;
case 33:
num=2;
num2=1;
value=0;
flag=true;
break;
case 34:
num=2;
num2=2;
value=0;
flag=true;
break;
case 35:
num=2;
num2=3;
value=0;
flag=true;
break;
case 36:
num=2;
num2=4;
value=0;
flag=true;
break;
case 37:
num=2;
num2=5;
value=0;
flag=true;
break;
case 38:
num=2;
num2=6;
value=0;
flag=true;
break;
case 39:
num=2;
num2=7;
value=0;
flag=true;
break;
case 40:
num=2;
num2=8;
value=0;
flag=true;
break;
case 41:
num=2;
num2=9;
value=160;
break;
case 42:
num=2;
num2=10;
value=0;
flag=true;
break;
case 43:
num=2;
num2=11;
value=0;
flag=true;
break;
case 44:
num=2;
num2=12;
value=0;
flag=true;
break;
case 45:
num=2;
num2=13;
value=0;
flag=true;
break;
case 46:
num=2;
num2=14;
value=0;
flag=true;
break;
case 47:
num=2;
num2=15;
value=0;
flag=true;
break;
case 48:
num=3;
num2=0;
value=205;
break;
case 49:
num=3;
num2=1;
value=110;
break;
case 50:
num=3;
num2=2;
value=150;
break;
case 51:
num=3;
num2=3;
value=115;
break;
case 52:
num=3;
num2=4;
value=115;
break;
case 53:
num=3;
num2=5;
value=150;
break;
case 54:
num=3;
num2=6;
value=150;
break;
case 55:
num=3;
num2=7;
value=115;
break;
case 56:
num=3;
num2=8;
value=140;
break;
case 57:
num=3;
num2=9;
value=125;
break;
case 58:
num=3;
num2=10;
value=115;
break;
case 59:
num=3;
num2=11;
value=150;
break;
case 60:
num=3;
num2=12;
value=150;
break;
case 61:
num=3;
num2=13;
value=275;
break;
case 62:
num=3;
num2=14;
value=460;
break;
case 63:
num=3;
num2=15;
value=260;
break;
}
switch (iParam0){
case 64:
num=4;
num2=0;
value=965;
break;
case 65:
num=4;
num2=1;
value=0;
flag=true;
break;
case 66:
num=4;
num2=2;
value=2520;
break;
case 67:
num=4;
num2=3;
value=350;
break;
case 68:
num=4;
num2=4;
value=0;
flag=true;
break;
case 69:
num=4;
num2=5;
value=0;
flag=true;
break;
case 70:
num=4;
num2=6;
value=0;
flag=true;
break;
case 71:
num=4;
num2=7;
value=0;
flag=true;
break;
case 72:
num=4;
num2=8;
value=0;
flag=true;
break;
case 73:
num=4;
num2=9;
value=0;
flag=true;
break;
case 74:
num=4;
num2=10;
value=0;
flag=true;
break;
case 75:
num=4;
num2=11;
value=150;
break;
case 76:
num=4;
num2=12;
value=0;
flag=true;
break;
case 77:
num=4;
num2=13;
value=0;
flag=true;
break;
case 78:
num=4;
num2=14;
value=3125;
break;
case 79:
num=4;
num2=15;
value=0;
flag=true;
break;
case 80:
num=5;
num2=0;
value=80;
break;
case 81:
num=5;
num2=1;
value=45;
break;
case 82:
num=5;
num2=2;
value=50;
break;
case 83:
num=5;
num2=3;
value=0;
flag=true;
break;
case 84:
num=5;
num2=4;
value=0;
flag=true;
break;
case 85:
num=5;
num2=5;
value=0;
flag=true;
break;
case 86:
num=5;
num2=6;
value=0;
flag=true;
break;
case 87:
num=5;
num2=7;
value=50;
break;
case 88:
num=5;
num2=8;
value=0;
flag=true;
break;
case 89:
num=5;
num2=9;
value=0;
flag=true;
break;
case 90:
num=5;
num2=10;
value=0;
flag=true;
break;
case 91:
num=5;
num2=11;
value=0;
flag=true;
break;
case 92:
num=5;
num2=12;
value=0;
flag=true;
break;
case 93:
num=5;
num2=13;
value=0;
flag=true;
break;
case 94:
num=5;
num2=14;
value=0;
flag=true;
break;
case 95:
num=5;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 96:
num=6;
num2=0;
value=2485;
break;
case 97:
num=6;
num2=1;
value=535;
break;
case 98:
num=6;
num2=2;
value=0;
flag=true;
break;
case 99:
num=6;
num2=3;
value=2945;
break;
case 100:
num=6;
num2=4;
value=3080;
break;
case 101:
num=6;
num2=5;
value=2990;
break;
case 102:
num=6;
num2=6;
value=3750;
break;
case 103:
num=6;
num2=7;
value=0;
flag=true;
break;
case 104:
num=6;
num2=8;
value=515;
break;
case 105:
num=6;
num2=9;
value=530;
break;
case 106:
num=6;
num2=10;
value=0;
flag=true;
break;
case 107:
num=6;
num2=11;
value=2810;
break;
case 108:
num=7;
num2=0;
value=150;
break;
case 109:
num=7;
num2=1;
value=155;
break;
case 110:
num=7;
num2=2;
value=320;
break;
case 111:
num=7;
num2=3;
value=140;
break;
case 112:
num=7;
num2=4;
value=150;
break;
case 113:
num=7;
num2=5;
value=145;
break;
case 114:
num=7;
num2=6;
value=150;
break;
case 115:
num=7;
num2=7;
value=140;
break;
case 116:
num=7;
num2=8;
value=135;
break;
case 117:
num=7;
num2=9;
value=130;
break;
case 118:
num=7;
num2=10;
value=130;
break;
case 119:
num=7;
num2=11;
value=150;
break;
case 120:
num=7;
num2=12;
value=145;
break;
case 121:
num=7;
num2=13;
value=740;
break;
case 122:
num=7;
num2=14;
value=790;
break;
case 123:
num=7;
num2=15;
value=130;
break;
}
switch (iParam0){
case 124:
num=8;
num2=0;
value=45;
break;
case 125:
num=8;
num2=1;
value=0;
flag=true;
break;
case 126:
num=8;
num2=2;
value=0;
flag=true;
break;
case 127:
num=8;
num2=3;
value=0;
flag=true;
break;
case 128:
num=8;
num2=4;
value=0;
flag=true;
break;
case 129:
num=8;
num2=5;
value=0;
flag=true;
break;
case 130:
num=8;
num2=6;
value=0;
flag=true;
break;
case 131:
num=8;
num2=7;
value=0;
flag=true;
break;
case 132:
num=8;
num2=8;
value=0;
flag=true;
break;
case 133:
num=8;
num2=9;
value=0;
flag=true;
break;
case 134:
num=8;
num2=10;
value=65;
break;
case 135:
num=8;
num2=11;
value=0;
flag=true;
break;
case 136:
num=8;
num2=12;
value=0;
flag=true;
break;
case 137:
num=8;
num2=13;
value=40;
break;
case 138:
num=8;
num2=14;
value=45;
break;
case 139:
num=8;
num2=15;
value=0;
flag=true;
break;
case 140:
num=9;
num2=0;
value=265;
break;
case 141:
num=9;
num2=1;
value=340;
break;
case 142:
num=9;
num2=2;
value=335;
break;
case 143:
num=9;
num2=3;
value=330;
break;
case 144:
num=9;
num2=4;
value=345;
break;
case 145:
num=9;
num2=5;
value=550;
break;
case 146:
num=9;
num2=6;
value=340;
break;
case 147:
num=9;
num2=7;
value=295;
break;
case 148:
num=9;
num2=8;
value=0;
flag=true;
break;
case 149:
num=9;
num2=9;
value=0;
flag=true;
break;
case 150:
num=9;
num2=10;
value=545;
break;
case 151:
num=9;
num2=11;
value=345;
break;
case 152:
num=9;
num2=12;
value=315;
break;
case 153:
num=9;
num2=13;
value=520;
break;
case 154:
num=9;
num2=14;
value=325;
break;
case 155:
num=9;
num2=15;
value=330;
break;
}
switch (iParam0){
case 156:
num=10;
num2=0;
value=505;
break;
case 157:
num=10;
num2=1;
value=470;
break;
case 158:
num=10;
num2=2;
value=475;
break;
case 159:
num=10;
num2=3;
value=0;
flag=true;
break;
case 160:
num=10;
num2=4;
value=0;
flag=true;
break;
case 161:
num=10;
num2=5;
value=0;
flag=true;
break;
case 162:
num=10;
num2=6;
value=0;
flag=true;
break;
case 163:
num=10;
num2=7;
value=0;
flag=true;
break;
case 164:
num=10;
num2=8;
value=0;
flag=true;
break;
case 165:
num=10;
num2=9;
value=0;
flag=true;
break;
case 166:
num=10;
num2=10;
value=0;
flag=true;
break;
case 167:
num=10;
num2=11;
value=0;
flag=true;
break;
case 168:
num=10;
num2=12;
value=0;
flag=true;
break;
case 169:
num=10;
num2=13;
value=0;
flag=true;
break;
case 170:
num=10;
num2=14;
value=0;
flag=true;
break;
case 171:
num=10;
num2=15;
value=0;
flag=true;
break;
case 172:
num=11;
num2=0;
value=120;
break;
case 173:
num=11;
num2=1;
value=360;
break;
case 174:
num=11;
num2=2;
value=0;
flag=true;
break;
case 175:
num=11;
num2=3;
value=0;
flag=true;
break;
case 176:
num=11;
num2=4;
value=0;
flag=true;
break;
case 177:
num=11;
num2=5;
value=0;
flag=true;
break;
case 178:
num=11;
num2=6;
value=0;
flag=true;
break;
case 179:
num=11;
num2=7;
value=90;
break;
case 180:
num=11;
num2=8;
value=0;
flag=true;
break;
case 181:
num=11;
num2=9;
value=0;
flag=true;
break;
case 182:
num=11;
num2=10;
value=0;
flag=true;
break;
case 183:
num=11;
num2=11;
value=0;
flag=true;
break;
case 184:
num=11;
num2=12;
value=0;
flag=true;
break;
case 185:
num=11;
num2=13;
value=0;
flag=true;
break;
case 186:
num=11;
num2=14;
value=2450;
break;
case 187:
num=11;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 188:
num=12;
num2=0;
value=420;
break;
case 189:
num=12;
num2=1;
value=415;
break;
case 190:
num=12;
num2=2;
value=695;
break;
case 191:
num=12;
num2=3;
value=385;
break;
case 192:
num=12;
num2=4;
value=330;
break;
case 193:
num=12;
num2=5;
value=345;
break;
case 194:
num=12;
num2=6;
value=340;
break;
case 195:
num=12;
num2=7;
value=450;
break;
case 196:
num=12;
num2=8;
value=295;
break;
case 197:
num=12;
num2=9;
value=340;
break;
case 198:
num=12;
num2=10;
value=1060;
break;
case 199:
num=12;
num2=11;
value=1040;
break;
case 200:
num=12;
num2=12;
value=0;
flag=true;
break;
case 201:
num=12;
num2=13;
value=0;
flag=true;
break;
case 202:
num=12;
num2=14;
value=0;
flag=true;
break;
case 203:
num=12;
num2=15;
value=0;
flag=true;
break;
case 204:
num=13;
num2=0;
value=420;
break;
case 205:
num=13;
num2=1;
value=415;
break;
case 206:
num=13;
num2=2;
value=680;
break;
case 207:
num=13;
num2=3;
value=385;
break;
case 208:
num=13;
num2=4;
value=0;
flag=true;
break;
case 209:
num=13;
num2=5;
value=345;
break;
case 210:
num=13;
num2=6;
value=0;
flag=true;
break;
case 211:
num=13;
num2=7;
value=0;
flag=true;
break;
case 212:
num=13;
num2=8;
value=0;
flag=true;
break;
case 213:
num=13;
num2=9;
value=0;
flag=true;
break;
case 214:
num=13;
num2=10;
value=0;
flag=true;
break;
case 215:
num=13;
num2=11;
value=0;
flag=true;
break;
case 216:
num=13;
num2=12;
value=0;
flag=true;
break;
case 217:
num=13;
num2=13;
value=1065;
break;
case 218:
num=13;
num2=14;
value=0;
flag=true;
break;
case 219:
num=13;
num2=15;
value=0;
flag=true;
break;
}
switch (iParam0){
case 220:
num=14;
num2=0;
value=420;
break;
case 221:
num=14;
num2=1;
value=415;
break;
case 222:
num=14;
num2=2;
value=440;
break;
case 223:
num=14;
num2=3;
value=385;
break;
case 224:
num=14;
num2=4;
value=330;
break;
case 225:
num=14;
num2=5;
value=445;
break;
case 226:
num=14;
num2=6;
value=340;
break;
case 227:
num=14;
num2=7;
value=440;
break;
case 228:
num=14;
num2=8;
value=295;
break;
case 229:
num=14;
num2=9;
value=340;
break;
case 230:
num=14;
num2=10;
value=325;
break;
case 231:
num=14;
num2=11;
value=435;
break;
case 232:
num=14;
num2=12;
value=445;
break;
case 233:
num=14;
num2=13;
value=440;
break;
case 234:
num=14;
num2=14;
value=325;
break;
case 235:
num=14;
num2=15;
value=325;
break;
case 236:
num=15;
num2=0;
break;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
if(iParam0==23){
if(func_231(89, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990 * Global_296940.f_16);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(45) * Global_262145.f_443[23] * Global_296940.f_16);
}}elseif(iParam0==17){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989 * Global_296940.f_16);
}elseif(iParam0==28){
if(func_231(87, -1)){
TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988 * Global_296940.f_16);
}else{
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(55) * Global_262145.f_443[28] * Global_296940.f_16);
}}else{
num6=iParam0;
if(num6 >=0 && num6 < 237) value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num6] * Global_296940.f_16);
}
if(iParam0 >=237){
Global_78341[0 /*14*/].f_5=3;
func_219(num5, iParam0, 237, hParam1);
if(Global_78341[0 /*14*/].f_7 > 0) Global_78341[0 /*14*/].f_7=SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_16);
}else{
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
}
return;
}


void func_251(int iParam0, Hash hParam1) // Position - 0x312DC{
BOOL flag;
int value;
var unk;
int num;
int num2;
int num3;
int num4;
int num5;
flag=false;
value=10;
num=0;
num2=0;
num3=-1;
num4=2;
num5=2;
switch (iParam0){
case 0:
num=0;
num2=0;
value=500;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[0]);
break;
case 1:
num=1;
num2=0;
value=190;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[1]);
break;
case 2:
num=1;
num2=1;
value=185;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[2]);
break;
case 3:
num=1;
num2=2;
value=180;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[3]);
break;
case 4:
num=1;
num2=3;
value=175;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[4]);
break;
case 5:
num=1;
num2=4;
value=170;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[5]);
break;
case 6:
num=1;
num2=5;
value=0;
break;
case 7:
num=2;
num2=0;
value=580;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[6]);
break;
case 8:
num=2;
num2=1;
value=575;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[7]);
break;
case 9:
num=2;
num2=2;
value=570;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[8]);
break;
case 10:
num=2;
num2=3;
value=565;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[9]);
break;
case 11:
num=2;
num2=4;
value=560;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[10]);
break;
case 12:
num=2;
num2=5;
value=0;
break;
case 13:
num=3;
num2=0;
value=1100;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[11]);
break;
case 14:
num=3;
num2=1;
value=1095;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[12]);
break;
case 15:
num=3;
num2=2;
value=1090;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[13]);
break;
case 16:
num=3;
num2=3;
value=1085;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[14]);
break;
case 17:
num=3;
num2=4;
value=1080;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[15]);
break;
case 18:
num=3;
num2=5;
value=0;
break;
case 19:
num=4;
num2=0;
value=520;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[16]);
break;
case 20:
num=4;
num2=1;
value=515;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[17]);
break;
case 21:
num=4;
num2=2;
value=510;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[18]);
break;
case 22:
num=4;
num2=3;
value=505;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[19]);
break;
case 23:
num=4;
num2=4;
value=500;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[20]);
break;
case 24:
num=4;
num2=5;
value=0;
break;
case 25:
num=4;
num2=6;
value=0;
break;
case 26:
num=5;
num2=0;
value=295;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[21]);
break;
case 27:
num=5;
num2=1;
value=290;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[22]);
break;
case 28:
num=5;
num2=2;
value=285;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[23]);
break;
case 29:
num=5;
num2=3;
value=280;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[24]);
break;
case 30:
num=5;
num2=4;
value=275;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[25]);
break;
case 31:
num=5;
num2=5;
value=0;
break;
case 32:
num=6;
num2=0;
value=950;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[26]);
break;
case 33:
num=6;
num2=1;
value=945;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[27]);
break;
case 34:
num=6;
num2=2;
value=940;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[28]);
break;
case 35:
num=6;
num2=3;
value=935;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[29]);
break;
case 36:
num=6;
num2=4;
value=930;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[30]);
break;
case 37:
num=6;
num2=5;
value=0;
break;
case 38:
num=7;
num2=0;
value=440;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[31]);
break;
case 39:
num=7;
num2=1;
value=435;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[32]);
break;
case 40:
num=7;
num2=2;
value=430;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[33]);
break;
case 41:
num=7;
num2=3;
value=425;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[34]);
break;
case 42:
num=7;
num2=4;
value=420;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[35]);
break;
case 43:
num=7;
num2=5;
value=0;
break;
case 44:
num=7;
num2=6;
value=0;
break;
case 45:
num=8;
num2=0;
value=1150;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[36]);
break;
case 46:
num=8;
num2=1;
value=1145;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[37]);
break;
case 47:
num=8;
num2=2;
value=1140;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[38]);
break;
case 48:
num=8;
num2=3;
value=1135;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[39]);
break;
case 49:
num=8;
num2=4;
value=1130;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[40]);
break;
case 50:
num=9;
num2=0;
value=395;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[41]);
break;
case 51:
num=9;
num2=1;
value=390;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[42]);
break;
case 52:
num=9;
num2=2;
value=385;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[43]);
break;
case 53:
num=9;
num2=3;
value=380;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[44]);
break;
case 54:
num=9;
num2=4;
value=375;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[45]);
break;
case 55:
num=9;
num2=5;
value=0;
break;
case 56:
num=9;
num2=6;
value=0;
break;
case 57:
num=10;
num2=0;
value=500;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[46]);
break;
case 58:
num=10;
num2=1;
value=495;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[47]);
break;
case 59:
num=10;
num2=2;
value=490;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[48]);
break;
case 60:
num=10;
num2=3;
value=485;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[49]);
break;
case 61:
num=10;
num2=4;
value=480;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[50]);
break;
case 62:
num=10;
num2=5;
value=0;
break;
case 63:
num=11;
num2=0;
value=1050;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[51]);
break;
case 64:
num=11;
num2=1;
value=1045;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[52]);
break;
case 65:
num=11;
num2=2;
value=1040;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[53]);
break;
case 66:
num=11;
num2=3;
value=1035;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[54]);
break;
case 67:
num=11;
num2=4;
value=1030;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[55]);
break;
case 68:
num=11;
num2=5;
value=0;
break;
case 69:
num=12;
num2=0;
value=550;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[56]);
break;
case 70:
num=12;
num2=1;
value=545;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[57]);
break;
case 71:
num=12;
num2=2;
value=540;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[58]);
break;
case 72:
num=12;
num2=3;
value=535;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[59]);
break;
case 73:
num=12;
num2=4;
value=530;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[60]);
break;
case 74:
num=13;
num2=0;
value=1200;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[61]);
break;
case 75:
num=13;
num2=1;
value=1195;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[62]);
break;
case 76:
num=13;
num2=2;
value=1190;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[63]);
break;
case 77:
num=13;
num2=3;
value=1185;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[64]);
break;
case 78:
num=13;
num2=4;
value=1180;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[65]);
break;
case 79:
num=13;
num2=5;
value=0;
break;
case 80:
num=14;
num2=0;
value=2000;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[66]);
break;
case 81:
num=14;
num2=1;
value=1995;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[67]);
break;
case 82:
num=14;
num2=2;
value=1990;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[68]);
break;
case 83:
num=14;
num2=3;
value=1985;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[69]);
break;
case 84:
num=14;
num2=4;
value=1980;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[70]);
break;
case 85:
num=15;
num2=0;
value=475;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[71]);
break;
case 86:
num=15;
num2=1;
value=470;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[72]);
break;
case 87:
num=15;
num2=2;
value=465;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[73]);
break;
case 88:
num=15;
num2=3;
value=460;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[74]);
break;
case 89:
num=15;
num2=4;
value=455;
value=SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[75]);
break;
case 90:
num=15;
num2=5;
value=0;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_219(num5, iParam0, 91, hParam1);
return;
}
TEXT_LABEL_ASSIGN_STRING(&unk, "H_FMM_", 16);
TEXT_LABEL_APPEND_INT(&unk, num, 16);
TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
TEXT_LABEL_APPEND_INT(&unk, num2, 16);
func_209(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
return;
}


void func_252() // Position - 0x32196{
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
BOOL func_253(Ped pedParam0) // Position - 0x3220F{
int num;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
num=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_96.f_28;
if(num !=-1 && num < 4)if(func_254(num) !=-1 && func_254(num) !=0) return 1;
}
if(!PED::IS_PED_INJURED(pedParam0))if(ENTITY::GET_ENTITY_MODEL(pedParam0)==joaat("MP_M_Freemode_01"))if(PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB)==15) return 1;
return 0;
}

int func_254(int iParam0) // Position - 0x3228B{
if(func_255(true)) return Global_1665818;
if(iParam0 <=-1 || iParam0 >=4) return -1;
return Global_2684799.f_6316[iParam0];
}
BOOL func_255(BOOL bParam0) // Position - 0x322C2{
if(func_259(bParam0) || func_257() || func_256(*Global_4718592.f_166301)) return true;
return false;
}
BOOL func_256(int iParam0) // Position - 0x322F6{
return iParam0==87;
}
BOOL func_257() // Position - 0x32303{
return func_258(*Global_4718592.f_113724);
}

int func_258(int iParam0) // Position - 0x32319{
int i;
if(iParam0==0) return 0;
for (i=0;
i < 8;
i=i + 1){
if(Global_262145.f_31051[i]==iParam0) return 1;
}
return 0;
}
BOOL func_259(BOOL bParam0) // Position - 0x32353{
if(bParam0) return IS_BIT_SET(*Global_4718592.f_160050, 12) && func_260();
return IS_BIT_SET(*Global_4718592.f_160050, 12);
}
BOOL func_260() // Position - 0x32389{
if(*Global_4718592.f_114294==1 || *Global_4718592.f_114294==2) return true;
return false;
}
BOOL func_261(Ped pedParam0, BOOL bParam1) // Position - 0x323B7{
int pedDrawableVariation;
int pedTextureVariation;
int num;
int num2;
Hash componentHash;
int num3;
Hash componentHash2;
int num4;
int num5;
Hash componentHash3;
int num6;
int num7;
int num8;
Hash componentHash4;
if(!PED::IS_PED_INJURED(pedParam0)){
if(ENTITY::GET_ENTITY_MODEL(pedParam0)==joaat("MP_M_Freemode_01")){
pedDrawableVariation=PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB);
pedTextureVariation=PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_JBIB);
switch (pedDrawableVariation){
case 0:
switch (pedTextureVariation){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
}
break;
case 1:
switch (pedTextureVariation){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
return 1;
case 1:
case 7:
case 12:
num=func_262(joaat("MP_M_Freemode_01"), 11, func_181(pedParam0, 11, PV_COMP_INVALID), 0);
if(pedTextureVariation==1 && num==88 || pedTextureVariation==7 && num==89 || pedTextureVariation==12 && num==87) return 1;
break;
}
break;
case 2:
switch (pedTextureVariation){
case 9:
return 1;
}
break;
case 5:
if(!bParam1){
if(func_162(13, -1)){
return 1;
}
elseif(func_162(14, -1)){
return 1;
}
elseif(func_162(15, -1)){
return 1;
}
elseif(func_162(16, -1)){
return 1;
}
elseif(func_162(71, -1)){
return 1;
}
elseif(func_162(72, -1)){
}
elseif(func_110(PLAYER::PLAYER_ID(), true) && Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_76.f_21 !=0){
return 1;
}}
break;
default:
if(pedDrawableVariation > 15){
num2=func_181(pedParam0, 11, PV_COMP_INVALID);
if(num2 >=237){
componentHash=func_177(joaat("MP_M_Freemode_01"), num2, 11, 3);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("MULTI_DECAL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("TAT_DECL_NO_SAVE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("COMBAT_TOP"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("HEIST_DRAW_12"), 0)) return 1;
}}
break;
}
pedDrawableVariation=PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_ACCS);
pedTextureVariation=PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_ACCS);
switch (pedDrawableVariation){
case 0:
switch (pedTextureVariation){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
}
break;
case 1:
switch (pedTextureVariation){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
case 1:
case 7:
case 12:
return 1;
}
break;
case 2:
switch (pedTextureVariation){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
}
break;
case 14:
switch (pedTextureVariation){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
case 1:
case 7:
case 12:
return 1;
}
break;
default:
if(pedDrawableVariation > 15){
num3=func_181(pedParam0, 8, PV_COMP_INVALID);
if(num3 >=241){
componentHash2=func_177(joaat("MP_M_Freemode_01"), num3, 8, 3);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("MULTI_DECAL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("TAT_DECL_NO_SAVE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("COMBAT_TOP"), 0)) return 1;
}}
break;
}}elseif(ENTITY::GET_ENTITY_MODEL(pedParam0)==joaat("MP_F_Freemode_01")){
pedDrawableVariation=PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB);
pedTextureVariation=PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_JBIB);
switch (pedDrawableVariation){
case 0:
switch (pedTextureVariation){
case 1:
case 2:
return 1;
case 7:
case 4:
case 9:
num4=func_262(joaat("MP_F_Freemode_01"), 11, func_181(pedParam0, 11, PV_COMP_INVALID), 0);
if(pedTextureVariation==7 && num4==88 || pedTextureVariation==4 && num4==89 || pedTextureVariation==9 && num4==87) return 1;
break;
}
break;
case 2:
switch (pedTextureVariation){
case 0:
case 1:
case 2:
case 3:
case 4:
return 1;
}
break;
case 3:
switch (pedTextureVariation){
case 14:
return 1;
}
break;
case 11:
switch (pedTextureVariation){
case 10:
case 11:
case 15:
return 1;
}
break;
default:
if(pedDrawableVariation > 15){
num5=func_181(pedParam0, 11, PV_COMP_INVALID);
if(num5 >=256){
componentHash3=func_177(joaat("MP_F_Freemode_01"), num5, 11, 4);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("MULTI_DECAL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("TAT_DECL_NO_SAVE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("COMBAT_TOP"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("HEIST_DRAW_13"), 0)) return 1;
}}
break;
}
pedDrawableVariation=PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_ACCS);
pedTextureVariation=PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_ACCS);
switch (pedDrawableVariation){
case 0:
switch (pedTextureVariation){
case 1:
case 2:
return 1;
case 7:
case 4:
case 9:
num6=func_262(joaat("MP_F_Freemode_01"), 11, func_181(pedParam0, 11, PV_COMP_INVALID), 0);
if(pedTextureVariation==7 && num6==88 || pedTextureVariation==4 && num6==89 || pedTextureVariation==9 && num6==87) return 1;
break;
}
break;
case 1:
switch (pedTextureVariation){
case 1:
case 2:
return 1;
case 7:
case 4:
case 9:
num7=func_262(joaat("MP_F_Freemode_01"), 11, func_181(pedParam0, 11, PV_COMP_INVALID), 0);
if(pedTextureVariation==7 && num7==88 || pedTextureVariation==4 && num7==89 || pedTextureVariation==9 && num7==87) return 1;
break;
}
break;
case 2:
switch (pedTextureVariation){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
}
break;
case 11:
switch (pedTextureVariation){
case 10:
case 11:
case 15:
return 1;
}
break;
case 14:
switch (pedTextureVariation){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
case 1:
case 7:
case 12:
return 1;
}
break;
default:
if(pedDrawableVariation > 15){
num8=func_181(pedParam0, 8, PV_COMP_INVALID);
if(num8 >=136){
componentHash4=func_177(joaat("MP_F_Freemode_01"), num8, 8, 4);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, joaat("MULTI_DECAL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, joaat("TAT_DECL_NO_SAVE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, joaat("COMBAT_TOP"), 0)) return 1;
}}
break;
}}}
return 0;
}

int func_262(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x32BF1{
Hash componentHash;
int shopPedApparelForcedComponentCount;
int i;
int nameHash;
int enumValue;
int componentType;
Hash componentHash2;
int shopPedApparelForcedComponentCount2;
int j;
int nameHash2;
int enumValue2;
int componentType2;
Hash componentHash3;
int shopPedApparelForcedComponentCount3;
int k;
int nameHash3;
int enumValue3;
int componentType3;
Hash componentHash4;
int shopPedApparelForcedComponentCount4;
int l;
int nameHash4;
int enumValue4;
int componentType4;
if(hParam0==joaat("MP_M_Freemode_01")){
if(iParam1==11){
if(iParam2==1){
return 73;
}elseif(iParam2==3){
return 74;
}elseif(iParam2==5){
return 75;
}elseif(iParam2==7){
return 76;
}elseif(iParam2==4){
return 77;
}elseif(iParam2==8){
return 78;
}elseif(iParam2==11){
return 79;
}elseif(iParam2==19){
return 80;
}elseif(iParam2==21){
return 81;
}elseif(iParam2==22){
return 82;
}elseif(iParam2==24){
return 83;
}elseif(iParam2==20){
return 84;
}elseif(iParam2==30){
return 85;
}elseif(iParam2==23){
if(func_231(89, -1)) return 89;
}elseif(iParam2==17){
return 88;
}elseif(iParam2==28){
if(func_231(87, -1)) return 87;
}elseif(iParam2==41){
return 86;
}elseif(iParam2 >=237){
componentHash=func_177(hParam0, iParam2, 11, 3);
if(componentHash !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("TAT_DECL_NO_SAVE"), 0)){
shopPedApparelForcedComponentCount=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(componentHash);
for (i=0;
i < shopPedApparelForcedComponentCount;
i=i + 1){
FILES::GET_FORCED_COMPONENT(componentHash, i, &nameHash, &enumValue, &componentType);
if(componentType==10)if(nameHash !=0 && nameHash !=joaat("0")) return func_263(nameHash, 3);
else return enumValue;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, joaat("MULTI_DECAL"), 0)){
if(iParam3==0) iParam3=_MPCHAR_STAT_GET_INT(MP_STAT_TSHIRT_DECAL_HASH, -1, 0);
return func_263(iParam3, 3);
}}}}elseif(iParam1==8){
if(iParam2==1){
return 73;
}elseif(iParam2==3){
return 74;
}elseif(iParam2==5){
return 75;
}elseif(iParam2==7){
return 76;
}elseif(iParam2==4){
return 77;
}elseif(iParam2==8){
return 78;
}elseif(iParam2==11){
return 79;
}elseif(iParam2==23){
if(func_231(89, -1)) return 89;
}elseif(iParam2==17){
return 88;
}elseif(iParam2==28){
if(func_231(87, -1)) return 87;
}elseif(iParam2==33){
return 73;
}elseif(iParam2==35){
return 74;
}elseif(iParam2==37){
return 75;
}elseif(iParam2==39){
return 76;
}elseif(iParam2==36){
return 77;
}elseif(iParam2==40){
return 78;
}elseif(iParam2==43){
return 79;
}elseif(iParam2==19){
return 80;
}elseif(iParam2==21){
return 81;
}elseif(iParam2==22){
return 82;
}elseif(iParam2==24){
return 83;
}elseif(iParam2==20){
return 84;
}elseif(iParam2==30){
return 85;
}elseif(iParam2==227){
return 80;
}elseif(iParam2==229){
return 81;
}elseif(iParam2==230){
return 82;
}elseif(iParam2==232){
return 83;
}elseif(iParam2==228){
return 84;
}elseif(iParam2==238){
return 85;
}elseif(iParam2==231){
if(func_231(89, -1)) return 89;
}elseif(iParam2==225){
return 88;
}elseif(iParam2==236){
if(func_231(87, -1)) return 87;
}elseif(iParam2 >=241){
componentHash2=func_177(hParam0, iParam2, 8, 3);
if(componentHash2 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("TAT_DECL_NO_SAVE"), 0)){
shopPedApparelForcedComponentCount2=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(componentHash2);
for (j=0;
j < shopPedApparelForcedComponentCount2;
j=j + 1){
FILES::GET_FORCED_COMPONENT(componentHash2, j, &nameHash2, &enumValue2, &componentType2);
if(componentType2==10)if(nameHash2 !=0 && nameHash2 !=joaat("0")) return func_263(nameHash2, 3);
else return enumValue2;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, joaat("MULTI_DECAL"), 0)){
if(iParam3==0) iParam3=_MPCHAR_STAT_GET_INT(MP_STAT_TSHIRT_DECAL_HASH, -1, 0);
return func_263(iParam3, 3);
}}}}}elseif(hParam0==joaat("MP_F_Freemode_01")){
if(iParam1==11){
if(iParam2==1){
return 75;
}elseif(iParam2==2){
return 77;
}elseif(iParam2==4){
if(func_231(89, -1)) return 89;
}elseif(iParam2==7){
return 88;
}elseif(iParam2==9){
if(func_231(87, -1)) return 87;
}elseif(iParam2==32){
return 78;
}elseif(iParam2==33){
return 79;
}elseif(iParam2==34){
return 80;
}elseif(iParam2==35){
return 81;
}elseif(iParam2==36){
return 82;
}elseif(iParam2==62){
return 76;
}elseif(iParam2==63){
return 83;
}elseif(iParam2==186){
return 84;
}elseif(iParam2==187){
return 85;
}elseif(iParam2==191){
return 74;
}elseif(iParam2 >=256){
componentHash3=func_177(hParam0, iParam2, 11, 4);
if(componentHash3 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("TAT_DECL_NO_SAVE"), 0)){
shopPedApparelForcedComponentCount3=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(componentHash3);
for (k=0;
k < shopPedApparelForcedComponentCount3;
k=k + 1){
FILES::GET_FORCED_COMPONENT(componentHash3, k, &nameHash3, &enumValue3, &componentType3);
if(componentType3==10)if(nameHash3 !=0 && nameHash3 !=joaat("0")) return func_263(nameHash3, 4);
else return enumValue3;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, joaat("MULTI_DECAL"), 0)){
if(iParam3==0) iParam3=_MPCHAR_STAT_GET_INT(MP_STAT_TSHIRT_DECAL_HASH, -1, 0);
return func_263(iParam3, 4);
}}}}elseif(iParam1==8){
if(iParam2==1){
return 75;
}elseif(iParam2==2){
return 77;
}elseif(iParam2==4){
if(func_231(89, -1)) return 89;
}elseif(iParam2==7){
return 88;
}elseif(iParam2==9){
if(func_231(87, -1)) return 87;
}elseif(iParam2==17){
return 75;
}elseif(iParam2==18){
return 77;
}elseif(iParam2==20){
if(func_231(89, -1)) return 89;
}elseif(iParam2==23){
return 88;
}elseif(iParam2==25){
if(func_231(87, -1)) return 87;
}elseif(iParam2==81){
return 84;
}elseif(iParam2==82){
return 85;
}elseif(iParam2==86){
return 74;
}elseif(iParam2 >=136){
componentHash4=func_177(hParam0, iParam2, 8, 4);
if(componentHash4 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, joaat("TAT_DECL_NO_SAVE"), 0)){
shopPedApparelForcedComponentCount4=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(componentHash4);
for (l=0;
l < shopPedApparelForcedComponentCount4;
l=l + 1){
FILES::GET_FORCED_COMPONENT(componentHash4, l, &nameHash4, &enumValue4, &componentType4);
if(componentType4==10)if(nameHash4 !=0 && nameHash4 !=joaat("0")) return func_263(nameHash4, 4);
else return enumValue4;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, joaat("MULTI_DECAL"), 0)){
if(iParam3==0) iParam3=_MPCHAR_STAT_GET_INT(MP_STAT_TSHIRT_DECAL_HASH, -1, 0);
return func_263(iParam3, 4);
}}}}}
return -1;
}

int func_263(int iParam0, Hash hParam1) // Position - 0x33415{
int tattooShopDlcItemIndex;
tattooShopDlcItemIndex=FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(hParam1, -1, iParam0);
if(tattooShopDlcItemIndex !=-1) return 129 + tattooShopDlcItemIndex;
return -1;
}

int func_264(Ped pedParam0) // Position - 0x33437{
if(PED::IS_PED_DEAD_OR_DYING(pedParam0, true)) return 0;
switch (ENTITY::GET_ENTITY_MODEL(pedParam0)){
case joaat("Player_Zero"):
return 0;
case joaat("Player_One"):
return 1;
case joaat("Player_Two"):
return 2;
case joaat("MP_M_Freemode_01"):
return 3;
case joaat("MP_F_Freemode_01"):
return 4;
}
return 0;
}
Player func_265() // Position - 0x3349A{
Player player;
player=PLAYER::PLAYER_ID();
if(func_267(true)) player=_GET_BOSS_OF_LOCAL_PLAYER();
return player;
}
Player _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x334B8{
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}
BOOL func_267(BOOL bParam0) // Position - 0x334CD{
return _IS_PLAYER_IN_AN_ORGANIZATION(PLAYER::PLAYER_ID(), bParam0);
}
BOOL _IS_PLAYER_IN_AN_ORGANIZATION(Player plParam0, BOOL bCanBeBoss) // Position - 0x334DF{
if(!bCanBeBoss)if(_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0)) return false;
return Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX();
}
BOOL _IS_PLAYER_BOSS_OF_ORGANIZATION(Player plParam0) // Position - 0x3350A{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX()) return Global_1894573[plParam0 /*608*/].f_10==plParam0;
return false;
}
Ped func_270() // Position - 0x3353F{
Ped playerPed;
playerPed=PLAYER::PLAYER_PED_ID();
if(func_267(true)) playerPed=PLAYER::GET_PLAYER_PED(_GET_BOSS_OF_LOCAL_PLAYER());
return playerPed;
}
BOOL func_271(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x33561{
if(Global_2657589[plParam0 /*466*/].f_232==99)if(bParam2 && Global_2657589[plParam0 /*466*/].f_235==0 || bParam2==false) return false;
if(bParam1)if(Global_2657589[plParam0 /*466*/].f_232==13) return false;
return true;
}

int func_272(var uParam0) // Position - 0x335B8{
return *uParam0;
}


void func_273() // Position - 0x335C3{
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::THEFEED_HIDE_THIS_FRAME();
func_275(true);
HUD::DISABLE_FRONTEND_THIS_FRAME();
if(HUD::IS_PAUSE_MENU_ACTIVE()){
HUD::SET_PAUSE_MENU_ACTIVE(false);
HUD::SET_FRONTEND_ACTIVE(false);
}
func_275(true);
func_274(1);
if(!HUD::THEFEED_IS_PAUSED()) HUD::THEFEED_PAUSE();
HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_WHEEL);
func_53(1);
return;
}


void func_274(int iParam0) // Position - 0x3360E{
if(func_45()) return;
if(!Global_20383.f_1==1){
if(func_46(0)) func_42(iParam0);
MISC::SET_BIT(&Global_8254, 2);
}
return;
}


void func_275(BOOL bParam0) // Position - 0x33641{
if(bParam0) func_277();
func_276(4, -1);
func_276(6, -1);
func_276(7, -1);
func_276(3, -1);
func_276(1, -1);
func_276(2, -1);
func_276(11, -1);
func_276(13, -1);
func_276(14, -1);
func_276(16, -1);
return;
}


void func_276(int iParam0, int iParam1) // Position - 0x33692{
MISC::SET_BIT(&(Global_1653913.f_1047), iParam0);
switch (iParam0){
case 5:
if(iParam1 > -1) Global_1653913.f_170[iParam1]=1;
break;
}
return;
}


void func_277() // Position - 0x336C8{
Global_2793044.f_4629=0;
return;
}
BOOL func_278() // Position - 0x336D8{
if(_SHOULD_NETWORK_SCRIPT_TERMINATE()) return true;
return false;
}
BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x336EC{
if(Global_1575035==false)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return true;
if(func_285()) return true;
if(Global_2696915) return true;
if(func_284()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(159))if(!func_282()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(157)) return true;
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()) return true;
if(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() !=0)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())==0) return true;
return false;
}
Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x33770{
switch (func_89()){
case 0:
return func_281();
case 2:
return joaat("creator");
}
return 0;
}
Hash func_281() // Position - 0x337A3{
switch (Global_2697019){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}
BOOL func_282() // Position - 0x337C7{
return Global_2683862.f_698;
}
BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x337D6{
if(SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0)) return true;
return false;
}
BOOL func_284() // Position - 0x337ED{
return Global_2694524;
}
BOOL func_285() // Position - 0x337F9{
return Global_2683862.f_693;
}


void func_286() // Position - 0x33808{
SYSTEM::WAIT(0);
return;
}


void func_287() // Position - 0x33815{
int randomIntInRange;
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
func_290(&uLocal_95, joaat("nimbus"), "Plane_1");
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
uLocal_95.f_8=0;
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(randomIntInRange < 50) func_288(&uLocal_95, 4105.583f, -4644.602f, 4.1196f, 11.1032f, -0.012f, 107.968f, "HS4_ISD_TAKE_NIMB2", 0, 1, 1, 0);
else func_288(&uLocal_95, 4105.583f, -4644.602f, 4.1196f, 11.1032f, -0.012f, 107.968f, "HS4_ISD_TAKE_NIMB2", 0, 1, 2, 0);
return;
}


void func_288(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0x338AD{
func_289(uParam0, sParam7, iParam8, iParam9, iParam10);
uParam0->f_9={
fParam1 
};
uParam0->f_12={
fParam4 
};
uParam0->f_7=iParam11;
return;
}


void func_289(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4) // Position - 0x338DD{
uParam0->f_1=sParam1;
uParam0->f_2=iParam3;
uParam0->f_17=iParam4;
uParam0->f_3=iParam2;
uParam0->f_16=0;
_STOPWATCH_DESTROY(&(uParam0->f_18));
return;
}


void func_290(var uParam0, int iParam1, char* sParam2) // Position - 0x3390A{
uParam0->f_20=iParam1;
uParam0->f_21=sParam2;
return;
}