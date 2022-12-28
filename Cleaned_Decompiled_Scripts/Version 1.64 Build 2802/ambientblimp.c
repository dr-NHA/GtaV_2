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
var uLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
float fLocal_25=0f;
float fLocal_26=0f;
var uLocal_27=0;
int iLocal_28=0;
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
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82)) func_33();
if(func_32()) iLocal_28=1;
while (true){
switch (iLocal_28){
case 0:
if(func_10()) iLocal_28=1;
break;
case 1:
if(func_1()) func_33();
break;
}
SYSTEM::WAIT(1000);
}
return;
}
BOOL func_1() // Position - 0x9D{
switch (func_8("BLIMP_UNLOCK" /*The Blimp has now been unlocked. Call the Blimp contact on your cellphone to arrange for a Blimp to be delivered to the nearest available drop-off location.*/)){
case 2:
func_5("BLIMP_UNLOCK" /*The Blimp has now been unlocked. Call the Blimp contact on your cellphone to arrange for a Blimp to be delivered to the nearest available drop-off location.*/, 1, 0, 1000, 10000, 7, 0, 0, 0);
break;
case 1:
func_4(57);
func_2();
return true;
case 0:
break;
}
return false;
}

int func_2() // Position - 0xED{
if(_IS_MISSION_REPEAT_ACTIVE(false)) return 0;
if(Global_100720.f_8)if(Global_100720.f_10 > 0) return 0;
elseif(Global_100720.f_10 > 1) return 0;
Global_100720.f_10=Global_100720.f_10 + 1;
return 1;
}
BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x138{
if(!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0) return true;
return IS_BIT_SET(Global_78807, 0);
}


void func_4(int iParam0) // Position - 0x160{
int offset;
int i;
offset=iParam0;
for (i=0;
offset > 31;
i=i + 1){
offset=offset - 32;
}
if(i < 3) MISC::SET_BIT(&Global_113648.f_20412.f_150[i], offset);
return;
}


void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1A2{
func_6(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
return;
}


void func_6(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1C3{
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
func_7();
}
return;
}


void func_7() // Position - 0x396{
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

int func_8(char* sParam0) // Position - 0x4AD{
if(MISC::ARE_STRINGS_EQUAL(sParam0, &Global_112291)) return 1;
if(func_9(sParam0)) return 0;
return 2;
}
BOOL func_9(char* sParam0) // Position - 0x4D4{
int i;
for (i=0;
i < Global_113648.f_20412.f_145;
i=i + 1){
if(MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113648.f_20412[i /*16*/])) return true;
}
return false;
}
BOOL func_10() // Position - 0x50F{
if(func_31() || func_30() || func_29() || func_28() || _IS_EXCLUSIVE_CONTENT_UNLOCKED()){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(func_26(0)){
func_11(48, 4, false);
func_2();
return true;
}}}
return false;
}


void func_11(eCharacter echParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x582{
int num;
Global_8939=echParam0;
if(Global_117[echParam0 /*10*/].f_8 !=169){
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(echParam1==4){
func_17(echParam0, 0, 1);
func_17(echParam0, 1, 1);
func_17(echParam0, 2, 1);
func_16(echParam0, 0, 1);
func_16(echParam0, 1, 1);
func_16(echParam0, 2, 1);
}else{
if(func_15(echParam0, echParam1)==1 && func_14(echParam0, echParam1)==1) bParam2=false;
num=echParam1;
func_17(echParam0, num, 1);
func_16(echParam0, num, 1);
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
func_12();
}}else{
Global_8863[1 /*6*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8863[1 /*6*/].f_5=echParam1;
func_12();
}}else{
Global_8863[1 /*6*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8863[1 /*6*/].f_5=echParam1;
func_12();
}}}
return;
}


void func_12() // Position - 0x6FA{
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
struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x773{
return Global_2028[character /*29*/].f_3;
}

int func_14(eCharacter echParam0, int iParam1) // Position - 0x786{
if(iParam1 < 0 || iParam1 > 4) return 0;
return Global_2028[echParam0 /*29*/].f_24[iParam1];
}

int func_15(eCharacter echParam0, int iParam1) // Position - 0x7B0{
if(iParam1 < 0 || iParam1 > 4) return 0;
return Global_2028[echParam0 /*29*/].f_12[iParam1];
}


void func_16(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x7DA{
if(iParam1 < 0 || iParam1 > 4) return;
Global_2028[echParam0 /*29*/].f_24[iParam1]=iParam2;
if(echParam0 < _CHAR_UNUSED) Global_113648.f_28052[echParam0 /*29*/].f_24[iParam1]=iParam2;
return;
}


void func_17(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x81F{
if(iParam1 < 0 || iParam1 > 4) return;
Global_2028[echParam0 /*29*/].f_12[iParam1]=iParam2;
if(echParam0 < _CHAR_UNUSED) Global_113648.f_28052[echParam0 /*29*/].f_12[iParam1]=iParam2;
return;
}


void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x864{
if(func_25(14)){
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
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x906{
func_20();
return Global_113648.f_2365.f_539.f_4321;
}


void func_20() // Position - 0x91F{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_21(character) && !func_25(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_21(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
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
BOOL func_21(eCharacter echParam0) // Position - 0xA1C{
return echParam0 < CHAR_MULTIPLAYER;
}
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xA28{
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
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xA65{
if(func_21(character)) return func_24(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_24(eCharacter echParam0) // Position - 0xA8A{
return Global_2028[echParam0 /*29*/];
}
BOOL func_25(int iParam0) // Position - 0xA99{
return Global_43257==iParam0;
}
BOOL func_26(int iParam0) // Position - 0xAA7{
if(iParam0==94 || iParam0==-1) return false;
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}
BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xAD3{
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
BOOL func_28() // Position - 0xB8B{
return false;
}
BOOL func_29() // Position - 0xB94{
return true;
}

int func_30() // Position - 0xB9D{
return 1;
}

int func_31() // Position - 0xBA6{
if(DLC::IS_DLC_PRESENT(-1226939934)) return 1;
return 0;
}
BOOL func_32() // Position - 0xBBF{
if(func_15(48, 0)==1 && func_15(48, 1)==1 && func_15(48, 2)==1)if(func_31() || func_30() || func_29() || func_28() || _IS_EXCLUSIVE_CONTENT_UNLOCKED()) return true;
return false;
}


void func_33() // Position - 0xC23{
SCRIPT::TERMINATE_THIS_THREAD();
return;
}