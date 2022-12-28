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
var uLocal_21=0;
var uLocal_22=0;
float fLocal_23=0f;
float fLocal_24=0f;
float fLocal_25=0f;
var uLocal_26=0;
var uLocal_27=0;
float fLocal_28=0f;
var uLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
int iLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
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
int iLocal_85=0;
var uLocal_86=0;
var uLocal_87=1;
var uLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=8;
var uLocal_94=0;
var uLocal_95=0;
var uLocal_96=1;
var uLocal_97=0;
var uLocal_98=0;
var uLocal_99=0;
var uLocal_100=1;
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=0;
var uLocal_104=1;
var uLocal_105=0;
var uLocal_106=0;
var uLocal_107=0;
var uLocal_108=1;
var uLocal_109=0;
var uLocal_110=0;
var uLocal_111=0;
var uLocal_112=1;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
var uLocal_116=1;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=1;
var uLocal_121=0;
var uLocal_122=0;
var uLocal_123=0;
var uLocal_124=1;
var uLocal_125=0;
var uLocal_126=8;
var uLocal_127=0;
var uLocal_128=0;
var uLocal_129=0;
var uLocal_130=0;
var uLocal_131=0;
var uLocal_132=0;
var uLocal_133=0;
var uLocal_134=0;
var uLocal_135=1;
var uLocal_136=0;
int iLocal_137=0;
var uLocal_138=0;
var uLocal_139=0;
var uLocal_140=0;
var uLocal_141=0;
Blip blLocal_142=0;
var uScriptParam_0=0;
var uScriptParam_1=-1;
var uScriptParam_2=-1;
var uScriptParam_3=0;
var uScriptParam_4=0;
var uScriptParam_5=0;
var uScriptParam_6=0;
var uScriptParam_7=0;
var uScriptParam_8=0;
var uScriptParam_9=-1;
var uScriptParam_10=0;
var uScriptParam_11=0;
var uScriptParam_12=0;
var uScriptParam_13=0;
var uScriptParam_14=0;
var uScriptParam_15=0;
var uScriptParam_16=-1;
var uScriptParam_17=0;
var uScriptParam_18=0;
var uScriptParam_19=-1;
var uScriptParam_20=-1;
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
fLocal_23=80f;
fLocal_24=140f;
fLocal_25=180f;
fLocal_28=0f;
fLocal_32=-0.0375f;
fLocal_33=0.17f;
iLocal_36=3;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
fLocal_62=(0.05f + 0.275f) - 0.01f;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), false, true))if(!func_325(uScriptParam_0)) func_318();
else func_318();
else func_318();
while (true){
func_317();
if(_SHOULD_NETWORK_SCRIPT_TERMINATE()) func_318();
if(func_309(1)) func_318();
func_306();
switch (func_305(NETWORK::PARTICIPANT_ID())){
case 0:
if(func_304()==1 && func_302()) func_301(1);
break;
case 1:
switch (func_304()){
case 1:
func_258();
break;
case 2:
func_301(2);
break;
}
break;
case 2:
func_318();
break;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
switch (func_304()){
case 0:
if(func_22()) func_21(1);
break;
case 1:
func_1();
break;
case 2:
func_318();
break;
}}}
return;
}


void func_1() // Position - 0x183{
if(func_20() > 0){
func_13();
func_4();
}
switch (func_20()){
case 0:
func_3(1);
break;
case 1:
if(func_2()==0){
}else{
func_3(3);
}
break;
case 3:
func_21(2);
break;
}
return;
}

int func_2() // Position - 0x1D9{
return iLocal_85.f_4;
}


void func_3(int iParam0) // Position - 0x1E5{
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()) return;
iLocal_85.f_1=iParam0;
return;
}


void func_4() // Position - 0x1FE{
if(func_2() !=0) return;
if(func_12(1)){
func_11(2);
return;
}
if(func_12(5)){
func_11(3);
return;
}
if(!func_7()){
if(func_5(PLAYER::PLAYER_ID())) func_11(3);
else func_11(1);
return;
}
return;
}
BOOL func_5(Player plParam0) // Position - 0x254{
return func_6(plParam0, 12);
}
BOOL func_6(Player plParam0, int iParam1) // Position - 0x264{
return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_6, iParam1);
}
BOOL func_7() // Position - 0x27C{
return func_8(func_10());
}
BOOL func_8(int iParam0) // Position - 0x28C{
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0)) return !func_9(NETWORK::NET_TO_VEH(iParam0));
return false;
}
BOOL func_9(Vehicle veParam0) // Position - 0x2AC{
if(ENTITY::DOES_ENTITY_EXIST(veParam0))if(ENTITY::IS_ENTITY_DEAD(veParam0, false)) return true;
elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)) return true;
else return true;
return false;
}

int func_10() // Position - 0x2E5{
return iLocal_85.f_6;
}


void func_11(int iParam0) // Position - 0x2F1{
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()) return;
iLocal_85.f_4=iParam0;
return;
}
BOOL func_12(int iParam0) // Position - 0x30A{
int num;
int num2;
num=iParam0 / 32;
num2=iParam0 % 32;
return IS_BIT_SET(iLocal_85.f_2[num], num2);
}


void func_13() // Position - 0x32B{
if(func_19() > 0)if(func_19() !=5)if(!func_7()) func_18(5);
switch (func_19()){
case 0:
func_18(1);
break;
case 1:
if(func_5(func_17())){
func_14(func_15(func_16(), true, false, false), 0, 0f, 0, 0, 0, -1);
func_18(2);
}
break;
case 2:
if(func_12(3)) func_18(3);
break;
case 3:
if(func_12(4)) func_18(4);
break;
case 4:
break;
case 5:
break;
}
return;
}


void func_14(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x3D3{
struct<9> eventData;
eventData=-852914485;
eventData.f_1=PLAYER::PLAYER_ID();
eventData.f_7=iParam6;
eventData.f_4=iParam1;
eventData.f_5=iParam4;
eventData.f_2=fParam2;
eventData.f_3=iParam3;
eventData.f_6=iParam5;
eventData.f_8=MISC::GET_FRAME_COUNT();
if(!iParam0==0) SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 9, iParam0);
return;
}

int func_15(Vehicle veParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x42C{
int address;
int i;
Vehicle vehiclePedIsIn;
Player player;
for (i=0;
i < 32;
i=i + 1){
player=PLAYER::INT_TO_PLAYERINDEX(i);
if(_NETWORK_IS_PLAYER_VALID(player, true, false)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(player), bParam3)){
if(!PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(player)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(player), bParam3);
if(vehiclePedIsIn==veParam0)if(PLAYER::GET_PLAYER_TEAM(player)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)if(player !=PLAYER::PLAYER_ID() || bParam1) MISC::SET_BIT(&address, i);
}}}}
return address;
}
Vehicle func_16() // Position - 0x4BF{
return NETWORK::NET_TO_VEH(func_10());
}
Player func_17() // Position - 0x4CF{
return iLocal_85.f_5;
}


void func_18(int iParam0) // Position - 0x4DB{
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()) return;
iLocal_85.f_6.f_1=iParam0;
return;
}

int func_19() // Position - 0x4F6{
return iLocal_85.f_6.f_1;
}

int func_20() // Position - 0x504{
return iLocal_85.f_1;
}


void func_21(int iParam0) // Position - 0x510{
iLocal_85=iParam0;
return;
}
BOOL func_22() // Position - 0x51C{
if(!func_12(0)){
func_257(PLAYER::PLAYER_ID());
func_256(0);
}
if(!func_23()) return false;
return true;
}
BOOL func_23() // Position - 0x547{
Vehicle vehicle;
var unk;
int int;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10())) return true;
if(!func_309(0))if(func_114(_GET_PLAYER_COORDS(PLAYER::PLAYER_ID()), &uLocal_138, &(uLocal_138.f_3))) func_113(0);
if(func_111(func_112()) && func_309(0)){
MISC::CLEAR_AREA(uLocal_138, 5f, true, false, false, false);
if(func_108(&(iLocal_85.f_6), func_112(), uLocal_138, uLocal_138.f_3, true, true, true, false, true, true, false, false, false, false)){
vehicle=func_16();
VEHICLE::SET_VEHICLE_DIRT_LEVEL(vehicle, 0f);
func_107(vehicle);
ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLED(vehicle, true);
unk={
func_106() 
};
func_24(vehicle, &unk, false, true, false);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT)){
if(DECORATOR::DECOR_EXIST_ON(vehicle, "MPBitset")) int=DECORATOR::DECOR_GET_INT(vehicle, "MPBitset");
MISC::SET_BIT(&int, 11);
DECORATOR::DECOR_SET_INT(vehicle, "MPBitset", int);
}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", INT)) DECORATOR::DECOR_SET_INT(vehicle, "Not_Allow_As_Saved_Veh", 1);
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(vehicle, true);
VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(vehicle, true);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_112());
return true;
}}
return false;
}


void func_24(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x655{
Hash entityModel;
float num;
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
entityModel=ENTITY::GET_ENTITY_MODEL(veParam0);
if(PLAYER::PLAYER_ID() !=_INVALID_PLAYER_INDEX()) uParam1->f_100=PLAYER::PLAYER_ID();
if(uParam1->f_70==0) uParam1->f_70=1;
func_81(veParam0, uParam1, bParam2, bParam3);
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
if(func_80(ENTITY::GET_ENTITY_MODEL(veParam0)))if(uParam1->f_9[44]==2) VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, false, true);
else VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, true, true);
if(!uParam1->f_78==-1 && uParam1->f_9[14]==-1) AUDIO::OVERRIDE_VEH_HORN(veParam0, true, uParam1->f_78);
if(!uParam1->f_79==-1) AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(veParam0, uParam1->f_79);
if(func_79(uParam1->f_66, &num) && uParam1->f_80 !=num) uParam1->f_80=num;
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(veParam0, uParam1->f_80);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(veParam0, uParam1->f_97);
if(uParam1->f_99 >=0) VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(veParam0, uParam1->f_99);
if(func_78(veParam0)) func_72(veParam0, func_75(uParam1->f_74, uParam1->f_75, uParam1->f_76));
if(VEHICLE::GET_VEHICLE_LIVERY2_COUNT(veParam0) > 1 && uParam1->f_98 >=0) VEHICLE::SET_VEHICLE_LIVERY2(veParam0, uParam1->f_98);
if(IS_BIT_SET(uParam1->f_95, 0)) func_43(veParam0, &(uParam1->f_81));
if(!func_34(4) && !bParam4 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) func_28(veParam0);
if(func_27(entityModel)){
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
if(func_26(ENTITY::GET_ENTITY_MODEL(veParam0))){
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
BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0xB2C{
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}
BOOL func_26(Hash hParam0) // Position - 0xB3C{
return func_80(hParam0);
}
BOOL func_27(Hash hParam0) // Position - 0xB4A{
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


void func_28(Vehicle veParam0) // Position - 0xC4B{
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
func_29(entityModel);
}}}
return;
}


void func_29(var uParam0, var uParam1, var uParam2) // Position - 0xCD6{
struct<5> eventData;
eventData=-2060526162;
eventData.f_1=PLAYER::PLAYER_ID();
eventData.f_2=uParam0;
eventData.f_2.f_1=uParam0.f_1;
eventData.f_2.f_2=uParam0.f_2;
SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 5, _GET_LOBBY_SCRIPT_EVENT_BITS(true, true));
return;
}
int _GET_LOBBY_SCRIPT_EVENT_BITS(BOOL includeLocalPlayer, BOOL includeSpectators) // Position - 0xD15{
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
BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0xD7A{
BOOL flag;
if(player==PLAYER::PLAYER_ID()) flag=func_32(-1, false)==8;
else flag=Global_1853910[player /*862*/].f_205==8;
if(bCheckTeam==1)if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)) flag=PLAYER::GET_PLAYER_TEAM(player)==8;
return flag;
}

int func_32(int iParam0, BOOL bParam1) // Position - 0xDC5{
int num;
int num2;
num2=iParam0;
if(num2==-1) num2=func_33();
if(Global_1575040[num2]==1){
bParam1;
num=8;
}else{
num=Global_1574912[num2];
bParam1;
}
return num;
}

int func_33() // Position - 0xE06{
return Global_1574918;
}
BOOL func_34(int iParam0) // Position - 0xE12{
int i;
if(func_42()){
for (i=0;
i < 60;
i=i + 1){
if(func_41(i)==iParam0)if(func_35(i)) return true;
}}
return false;
}
BOOL func_35(int iParam0) // Position - 0xE4D{
return func_36(iParam0, 6, true);
}
BOOL func_36(int iParam0, int iParam1, BOOL bParam2) // Position - 0xE5D{
if(iParam0==-1) return false;
if(bParam2) return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(func_40()==0) return IS_BIT_SET(_MPCHAR_STAT_GET_INT(func_39(iParam0), -1, 0), iParam1);
else return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
return false;
}
int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0xEBE{
Hash statHash;
int outValue;
if(empsParam0 !=14192){
iParam2==0;
statHash=Global_2805027[empsParam0 /*3*/][func_38(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
}
return 0;
}

int func_38(int iParam0) // Position - 0xEFB{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_33();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}
eMPStat func_39(int iParam0) // Position - 0xF2F{
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

int func_40() // Position - 0x12C8{
return Global_32163;
}

int func_41(int iParam0) // Position - 0x12D3{
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
BOOL func_42() // Position - 0x15FC{
return Global_100733.f_388 > 0;
}

int func_43(Vehicle veParam0, Any* panParam1) // Position - 0x160D{
int vehicleCrewEmblemRequestState;
Player playerFromGamerHandle;
if(!func_53(veParam0, panParam1)) return 1;
vehicleCrewEmblemRequestState=0;
if(!ENTITY::IS_ENTITY_DEAD(veParam0, false)) vehicleCrewEmblemRequestState=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(veParam0, 0);
if(vehicleCrewEmblemRequestState==0){
if(!func_51(veParam0)){
playerFromGamerHandle=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
if(func_46(&veParam0, playerFromGamerHandle)){
}else{
return 1;
}}else{
return 1;
}}elseif(vehicleCrewEmblemRequestState >=3){
return 1;
}elseif(func_44(veParam0)){}
return 0;
}
BOOL func_44(Vehicle veParam0) // Position - 0x168A{
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
func_45(veParam0);
return false;
}}
return true;
}
return false;
}


void func_45(Vehicle veParam0) // Position - 0x1717{
int int;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset")) int=DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
if(!IS_BIT_SET(int, 16)){
MISC::SET_BIT(&int, 16);
DECORATOR::DECOR_SET_INT(veParam0, "MPBitset", int);
}
return;
}
BOOL func_46(var uParam0, Player plParam1) // Position - 0x176F{
func_50();
if(Global_1574632.f_18 !=0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*uParam0)){
Global_1949998.f_11=VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*uParam0);
if(Global_1949998.f_11 < 0f) Global_1949998.f_11=0f;
}
func_48(*uParam0, &Global_1949998, &(Global_1949998.f_1), &(Global_1949998.f_4), &(Global_1949998.f_7), &(Global_1949998.f_10));
Global_1949998.f_1.f_2=Global_1949998.f_1.f_2 - Global_1949998.f_11;
if(Global_1949998.f_4.f_2 < 0f) Global_1949998.f_12=1;
Global_1949998.f_13=200;
if(ENTITY::GET_ENTITY_MODEL(*uParam0)==joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*uParam0)==joaat("comet4")) Global_1949998.f_13=255;
if(Global_1949998.f_12){
if(func_47(uParam0, plParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13)){
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
if(Global_1949998.f_23==0 && func_47(uParam0, plParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13) || Global_1949998.f_23 !=0 && Global_1949998.f_24==0 && func_47(uParam0, plParam1, Global_1949998, Global_1949998.f_14, Global_1949998.f_17, Global_1949998.f_20, Global_1949998.f_10, 1, Global_1949998.f_13) || Global_1949998.f_24 !=0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) Global_1577913=NETWORK::GET_NETWORK_TIME();
else Global_1577913=MISC::GET_GAME_TIMER();
return true;
}}
return false;
}
BOOL func_47(var uParam0, Player plParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, Vector3 vParam6, var uParam7, var uParam8, Vector3 vParam9, var uParam10, var uParam11, float fParam12, int iParam13, int iParam14) // Position - 0x1A1A{
return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(plParam1), iParam2, vParam3, vParam6, vParam9, fParam12, iParam13, iParam14);
}

int func_48(Vehicle veParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5) // Position - 0x1A43{
if(!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)) return 0;
*iParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
if(!func_49(Global_1950024, 0f, 0f, 0f, false) && !func_49(Global_1950027, 0f, 0f, 0f, false) && !func_49(Global_1950030, 0f, 0f, 0f, false) && !Global_1950033==0f){
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
BOOL func_49(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x6FAA{
if(bParam6) return fParam0==fParam3 && fParam0.f_1==fParam3.f_1;
return fParam0==fParam3 && fParam0.f_1==fParam3.f_1 && fParam0.f_2==fParam3.f_2;
}


void func_50() // Position - 0x6FF1{
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
BOOL func_51(Vehicle veParam0) // Position - 0x706A{
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0) || func_52(veParam0)) return true;
return false;
}
BOOL func_52(Vehicle veParam0) // Position - 0x70A2{
int int;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT)){
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
if(DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset")){
int=DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
return IS_BIT_SET(int, 16);
}}}
return false;
}
BOOL func_53(Vehicle veParam0, Any* panParam1) // Position - 0x70E7{
Player playerFromGamerHandle;
BOOL flag;
if(NETWORK::NETWORK_IS_HANDLE_VALID(panParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(panParam1)) playerFromGamerHandle=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
else playerFromGamerHandle=_INVALID_PLAYER_INDEX();
flag=false;
if(playerFromGamerHandle==PLAYER::PLAYER_ID())if(func_64(15, false)) flag=true;
elseif(func_60(true)) flag=true;
else flag=true;
if(!(ENTITY::DOES_ENTITY_EXIST(veParam0) && !ENTITY::IS_ENTITY_DEAD(veParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || !(NETWORK::NETWORK_IS_HANDLE_VALID(panParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(panParam1)) || playerFromGamerHandle==_INVALID_PLAYER_INDEX() || !_NETWORK_IS_PLAYER_VALID(playerFromGamerHandle, false, false) || !flag || func_54(veParam0)) return false;
return true;
}
BOOL func_54(Vehicle veParam0) // Position - 0x71CE{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return true;
if(func_56(PLAYER::PLAYER_ID())==3)if(func_55(veParam0) !=-1) return true;
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

int func_55(Vehicle veParam0) // Position - 0x74C4{
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", INT))if(DECORATOR::DECOR_EXIST_ON(veParam0, "FMDeliverableID")) return DECORATOR::DECOR_GET_INT(veParam0, "FMDeliverableID");
return -1;
}

int func_56(Player plParam0) // Position - 0x74F0{
if(func_59(plParam0)==233) return func_57(plParam0);
return -1;
}

int func_57(Player plParam0) // Position - 0x750D{
if(func_58(plParam0, false)) return Global_1894573[plParam0 /*608*/].f_10.f_182;
return -1;
}
BOOL func_58(Player plParam0, BOOL bParam1) // Position - 0x7530{
if(Global_1894573[plParam0 /*608*/].f_10.f_33 !=-1 || bParam1 && Global_1894573[plParam0 /*608*/].f_10.f_32 !=-1) return true;
return false;
}

int func_59(Player plParam0) // Position - 0x756B{
if(func_58(plParam0, false)) return Global_1894573[plParam0 /*608*/].f_10.f_33;
return -1;
}
BOOL func_60(BOOL bParam0) // Position - 0x758E{
return func_61(PLAYER::PLAYER_ID(), bParam0);
}
BOOL func_61(Player plParam0, BOOL bParam1) // Position - 0x75A0{
return func_62(plParam0, bParam1, 1);
}

int func_62(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x75B1{
Player player;
if(plParam0==_INVALID_PLAYER_INDEX()) return 0;
if(!bParam1)if(func_63(plParam0, iParam2)) return 0;
player=Global_1894573[plParam0 /*608*/].f_10;
if(player !=_INVALID_PLAYER_INDEX() && Global_1894573[player /*608*/].f_10.f_428==iParam2) return 1;
return 0;
}
BOOL func_63(Player plParam0, int iParam1) // Position - 0x760D{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10==plParam0 && Global_1894573[plParam0 /*608*/].f_10.f_428==iParam1) return true;
return false;
}
BOOL func_64(int iParam0, BOOL bParam1) // Position - 0x765C{
int num;
int num2;
if(bParam1)if(iParam0==15) return true;
if(func_69(PLAYER::PLAYER_ID())){
switch (iParam0){
case 4:
case 5:
case 12:
case 15:
return true;
}}
num=func_66(iParam0);
num2=iParam0;
return IS_BIT_SET(num, func_65(num2));
}

int func_65(int iParam0) // Position - 0x76BA{
return iParam0 % 32;
}

int func_66(int iParam0) // Position - 0x76C7{
int num;
num=_MPCHAR_STAT_GET_INT(func_67(iParam0), -1, 0);
return num;
}
eMPStat func_67(int iParam0) // Position - 0x76DF{
int num;
int num2;
num=iParam0;
num2=func_68(num);
switch (num2){
case 0:
return MP_STAT_CHAR_CREWUNLOCK_1_UNLCK;
}
return MP_STAT_CHAR_CREWUNLOCK_1_UNLCK;
}

int func_68(int iParam0) // Position - 0x770C{
return iParam0 / 32;
}
BOOL func_69(Player plParam0) // Position - 0x7719{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(func_70(plParam0) && Global_2657589[plParam0 /*466*/].f_321.f_10==plParam0) return true;
return false;
}
BOOL func_70(Player plParam0) // Position - 0x774E{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_71(Global_2657589[plParam0 /*466*/].f_321.f_7)==22;
return false;
}

int func_71(int iParam0) // Position - 0x7795{
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


void func_72(Vehicle veParam0, int iParam1) // Position - 0x7C49{
int num;
int num2;
num2=func_74(iParam1);
func_73(num2, &num);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(veParam0, num);
return;
}
BOOL func_73(int iParam0, var uParam1) // Position - 0x7C6A{
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

int func_74(int iParam0) // Position - 0x7F2C{
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

int func_75(int iParam0, int iParam1, int iParam2) // Position - 0x7FCA{
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
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_76() && Global_1576216)if(iParam0==Global_1576217 && iParam1==Global_1576218 && iParam2==Global_1576219) return 13;
return 0;
}
BOOL func_76() // Position - 0x81AE{
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
struct<13> GET_LOCAL_GAMER_HANDLE() // Position - 0x81F6{
var gamerHandle;
NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle, 13);
return gamerHandle;
}
BOOL func_78(Vehicle veParam0) // Position - 0x820B{
switch (ENTITY::GET_ENTITY_MODEL(veParam0)){
case joaat("deathbike2"):
return true;
}
return false;
}
BOOL func_79(int iParam0, var uParam1) // Position - 0x822C{
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
BOOL func_80(Hash hParam0) // Position - 0x852D{
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


void func_81(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x8580{
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
if(!func_103(veParam0)){
if(MISC::GET_HASH_KEY(&(uParam1->f_1)) !=0) VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(veParam0, &(uParam1->f_1));
if(*uParam1 >=0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()) VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0, *uParam1);
}
if(uParam1->f_66==joaat("sovereign")){
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=111;
}elseif(uParam1->f_66==joaat("casco")){
num=1;
if(IS_BIT_SET(uParam1->f_77, func_102(num + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_102(num + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
num2=1;
if(IS_BIT_SET(uParam1->f_77, func_102(num2 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_102(num2 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
for (i=1;
i <=9;
i=i + 1){
if(IS_BIT_SET(uParam1->f_77, func_102(i))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_102(i));
}}}elseif(uParam1->f_66==joaat("openwheel1")){
for (j=1;
j <=6;
j=j + 1){
if(IS_BIT_SET(uParam1->f_77, func_102(j))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_102(j));
}}}elseif(uParam1->f_66==joaat("openwheel2")){
for (k=1;
k <=11;
k=k + 1){
if(k !=9 && k !=10){
if(IS_BIT_SET(uParam1->f_77, func_102(k))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_102(k));
}}}}elseif(uParam1->f_66==-1035489563){
for (l=1;
l <=2;
l=l + 1){
if(IS_BIT_SET(uParam1->f_77, func_102(l))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_102(l));
}}}elseif(uParam1->f_66==joaat("dinghy5")){
if(IS_BIT_SET(uParam1->f_77, func_102(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_102(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(veParam0, 10) !=0) MISC::SET_BIT(&(uParam1->f_77), 0);
}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_102(1));
}elseif(uParam1->f_66==joaat("hotknife")){
for (m=1;
m <=2;
m=m + 1){
if(IS_BIT_SET(uParam1->f_77, func_102(m))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_102(m));
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
if(func_100(uParam1->f_5) || func_100(uParam1->f_6)){
}else{
VEHICLE::SET_VEHICLE_COLOURS(veParam0, uParam1->f_5, uParam1->f_6);
}}
if(uParam1->f_7 < 0) uParam1->f_7=0;
if(uParam1->f_8 < 0) uParam1->f_8=0;
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veParam0, uParam1->f_7, uParam1->f_8);
if(IS_BIT_SET(uParam1->f_77, 15) || func_99(veParam0) || uParam1->f_62==0 && uParam1->f_63==0 && uParam1->f_64==0 && uParam1->f_9[20] > 0 && func_98()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif(uParam1->f_62==0 && uParam1->f_63==0 && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_97(uParam1->f_66)){
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
if(uParam1->f_69 > -1 && uParam1->f_69 < 255)if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(veParam0)))if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(veParam0)))if(uParam1->f_69==6) func_96(veParam0, uParam1->f_69);
else func_96(veParam0, uParam1->f_69);
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))if(uParam1->f_68==0 || uParam1->f_68==3 || uParam1->f_68==5) VEHICLE::RAISE_CONVERTIBLE_ROOF(veParam0, true);
else VEHICLE::LOWER_CONVERTIBLE_ROOF(veParam0, true);
if(bParam3) func_88(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
for (n=0;
n <=11;
n=n + 1){
if(IS_BIT_SET(uParam1->f_77, func_102(n + 1)))if(!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1)) VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, false);
elseif(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1)) VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, true);
}}
if(ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("sheava") || ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("omnis") || ENTITY::GET_ENTITY_MODEL(veParam0)==joaat("le7b"))if(VEHICLE::GET_VEHICLE_MOD(veParam0, 0)==-1) VEHICLE::SET_VEHICLE_EXTRA(veParam0, 1, false);
if(func_82() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(veParam0) && !VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("avenger")))if(!IS_BIT_SET(uParam1->f_77, 23))if(IS_BIT_SET(uParam1->f_77, 22)) VEHICLE::CONTROL_LANDING_GEAR(veParam0, 2);
else VEHICLE::CONTROL_LANDING_GEAR(veParam0, 3);
else VEHICLE::CONTROL_LANDING_GEAR(veParam0, 4);
if(IS_BIT_SET(uParam1->f_77, 27)) unk_0xEC687B9B4DF9224E(veParam0, "IgnoredByQuickSave", 1);
else unk_0xEC687B9B4DF9224E(veParam0, "IgnoredByQuickSave", 0);
}
return;
}
BOOL func_82() // Position - 0x8C65{
if(*Global_4718592.f_104427==6 || *Global_4718592.f_104427==7 || *Global_4718592.f_104427==18 || *Global_4718592.f_104427==19 && Global_4718592.f_2==20) return false;
if(func_86(7))if(func_84(Global_2672505.f_4.f_16) || func_83(Global_2672505.f_4.f_16)) return false;
return true;
}
BOOL func_83(int iParam0) // Position - 0x8CF4{
int num;
num=iParam0;
if(num !=-1) return Global_1890444[num /*129*/].f_77.f_51 !=0;
return false;
}
BOOL func_84(int iParam0) // Position - 0x8D18{
int num;
num=iParam0;
if(num !=-1) return func_85(iParam0, 9);
return false;
}
BOOL func_85(int iParam0, int iParam1) // Position - 0x8D36{
return IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}
BOOL func_86(int iParam0) // Position - 0x8D4E{
return func_87(&(Global_2672505.f_183), iParam0);
}
BOOL func_87(var uParam0, int iParam1) // Position - 0x8D62{
int num;
int num2;
int num3;
num=iParam1;
num2=num / 32;
num3=num % 32;
return IS_BIT_SET(uParam0->[num2], num3);
}

int func_88(var uParam0, var uParam1, var uParam2) // Position - 0x8D85{
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
}elseif(func_94(*uParam0, modType, uParam1->[i] - 1)){
}else{
VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, false);
}}}}
if(func_93(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) !=func_91(*uParam0, uParam1->[38] - 1)) VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_91(*uParam0, uParam1->[38] - 1), false);
func_90(uParam0);
if(func_89(*uParam0)){
VEHICLE::SET_VEHICLE_STRONG(*uParam0, true);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
}
return 1;
}
BOOL func_89(Vehicle veParam0) // Position - 0x8F5F{
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


void func_90(var uParam0) // Position - 0x9039{
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

int func_91(Vehicle veParam0, int iParam1) // Position - 0x9090{
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
value=func_92(veParam0, 38) + 1;
value2=func_92(veParam0, 24) + 1;
num=SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(value);
num2=SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value2) * num) - 1;
if(num2 < 0) num2=0;
if(num2 >=value) num2=value - 1;
return num2;
}
return 0;
}

int func_92(Vehicle veParam0, int iParam1) // Position - 0x9179{
int i;
if(STREAMING::IS_MODEL_VALID(Global_152535) && VEHICLE::IS_VEHICLE_MODEL(veParam0, Global_152535) && Global_152536==iParam1) return Global_152537;
for (i=VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) - 1;
i >=0 && func_94(veParam0, iParam1, i);
i=i - 1){}
return i;
}
BOOL func_93(Hash hParam0, int iParam1) // Position - 0x91DB{
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
BOOL func_94(Vehicle veParam0, int iParam1, int iParam2) // Position - 0x95BA{
if(!func_95() && PED::APPLY_PED_BLOOD_SPECIFIC(veParam0, iParam1, iParam2)) return true;
return false;
}
BOOL func_95() // Position - 0x95DE{
return false;
}


void func_96(Vehicle veParam0, int iParam1) // Position - 0x95E7{
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
BOOL func_97(int iParam0) // Position - 0x965F{
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return true;
default:
}
return false;
}
BOOL func_98() // Position - 0x967F{
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}
BOOL func_99(Vehicle veParam0) // Position - 0x9690{
int int;
if(ENTITY::DOES_ENTITY_EXIST(veParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT)){
if(DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset")) int=DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
return IS_BIT_SET(int, 4);
}}}
return false;
}

int func_100(var uParam0) // Position - 0x96D2{
if(!func_95() && func_101(uParam0)) return 1;
return 0;
}
BOOL func_101(int iParam0) // Position - 0x96F2{
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

int func_102(int iParam0) // Position - 0x9745{
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
BOOL func_103(Vehicle veParam0) // Position - 0x97F5{
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))if(!_IS_PLAYER_IN_VEHICLE_SEAT(PLAYER::PLAYER_ID(), -1)) veParam0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(!ENTITY::DOES_ENTITY_EXIST(veParam0)) return false;
if(ENTITY::IS_ENTITY_DEAD(veParam0, false)) return false;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)) return false;
if(func_56(PLAYER::PLAYER_ID())==3)if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))if(func_55(veParam0) !=-1) return true;
return false;
}
BOOL _IS_PLAYER_IN_VEHICLE_SEAT(Player plParam0, int iParam1) // Position - 0x987C{
Vehicle vehiclePedIsIn;
if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(plParam0), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(plParam0), false);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, iParam1, false)) return true;
}}
return false;
}
Player _INVALID_PLAYER_INDEX() // Position - 0x98C9{
return -1;
}
struct<103> func_106() // Position - 0x98D2{
var unk;
unk.f_9=49;
unk.f_59=2;
unk.f_78=-1;
unk.f_79=-1;
unk.f_96=-1;
unk.f_97=1;
unk.f_99=132;
unk.f_100=-1;
unk.f_66=func_112();
switch (unk.f_66){
case joaat("cogcabrio"):
unk.f_5=141;
unk.f_6=1;
unk.f_7=70;
unk.f_8=82;
unk.f_97=1;
unk.f_99=132;
unk.f_98=0;
unk.f_65=1;
unk.f_69=7;
unk.f_62=255;
unk.f_63=255;
unk.f_64=255;
unk.f_74=255;
unk.f_76=255;
unk.f_67=0;
MISC::SET_BIT(&(unk.f_77), 9);
unk.f_9[15]=4;
unk.f_9[23]=3;
break;
case joaat("windsor"):
unk.f_5=9;
unk.f_6=5;
unk.f_7=7;
unk.f_8=156;
unk.f_97=1;
unk.f_99=132;
unk.f_98=0;
unk.f_65=2;
unk.f_69=3;
unk.f_62=255;
unk.f_63=255;
unk.f_64=255;
unk.f_74=255;
unk.f_76=255;
unk.f_67=0;
MISC::SET_BIT(&(unk.f_77), 9);
unk.f_9[23]=32;
break;
case joaat("fugitive"):
unk.f_5=147;
unk.f_7=4;
unk.f_8=156;
unk.f_97=1;
unk.f_99=132;
unk.f_98=0;
unk.f_65=1;
unk.f_62=255;
unk.f_63=255;
unk.f_64=255;
unk.f_74=255;
unk.f_76=255;
unk.f_67=0;
MISC::SET_BIT(&(unk.f_77), 26);
MISC::SET_BIT(&(unk.f_77), 9);
unk.f_9[23]=41;
break;
case joaat("superd"):
unk.f_5=62;
unk.f_6=1;
unk.f_7=70;
unk.f_8=156;
unk.f_97=1;
unk.f_99=132;
unk.f_98=0;
unk.f_65=3;
unk.f_62=255;
unk.f_63=255;
unk.f_64=255;
unk.f_74=255;
unk.f_76=255;
unk.f_67=0;
MISC::SET_BIT(&(unk.f_77), 9);
unk.f_9[23]=24;
break;
case joaat("dubsta2"):
unk.f_5=13;
unk.f_6=12;
unk.f_8=156;
unk.f_97=1;
unk.f_99=132;
unk.f_98=0;
unk.f_65=1;
unk.f_69=3;
unk.f_62=255;
unk.f_63=255;
unk.f_64=255;
unk.f_74=255;
unk.f_76=255;
unk.f_67=0;
MISC::SET_BIT(&(unk.f_77), 9);
unk.f_9[10]=2;
unk.f_9[15]=4;
unk.f_9[22]=1;
break;
case joaat("feltzer2"):
unk.f_5=50;
unk.f_6=28;
unk.f_7=92;
unk.f_8=156;
unk.f_97=1;
unk.f_99=132;
unk.f_98=0;
unk.f_65=3;
unk.f_69=7;
unk.f_62=255;
unk.f_63=255;
unk.f_64=255;
unk.f_74=255;
unk.f_76=255;
unk.f_67=0;
MISC::SET_BIT(&(unk.f_77), 9);
unk.f_9[0]=1;
unk.f_9[15]=4;
unk.f_9[23]=20;
break;
}
return unk;
}


void func_107(Vehicle veParam0) // Position - 0x9BE8{
if(!Global_262145.f_4712) VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(veParam0, 0);
return;
}
BOOL func_108(var uParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15) // Position - 0x9C02{
float radius;
Vehicle vehicle;
if(!STREAMING::IS_MODEL_VALID(hParam1)) return false;
if(!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1)) return false;
radius=1.5f;
if(hParam1==joaat("bombushka")) radius=20f;
if(bParam11) MISC::CLEAR_AREA_OF_VEHICLES(vParam2, radius, false, false, false, false, false, false, 0);
vehicle=VEHICLE::CREATE_VEHICLE(hParam1, vParam2, fParam5, bParam7, bParam6, bParam14);
if(ENTITY::DOES_ENTITY_EXIST(vehicle)){
*uParam0=NETWORK::VEH_TO_NET(vehicle);
Global_2793044.f_6736=vehicle;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
if(bParam15) NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(vehicle, true);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(vehicle, bParam10);
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(vehicle)){
if(bParam8) NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
else NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
if(bParam13) NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
}
VEHICLE::SET_VEHICLE_IS_STOLEN(vehicle, bParam9);
VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(vehicle, true);
if(bParam12){
VEHICLE::SET_CAR_BOOT_OPEN(vehicle);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicle, 5, 5, 1f);
}
func_109(vParam2, fParam5, hParam1, vehicle);
return true;
}}
return false;
}


void func_109(Vector3 vParam0, var uParam1, var uParam2, float fParam3, Hash hParam4, Vehicle veParam5) // Position - 0x9D0B{
int i;
if(func_110(PLAYER::PLAYER_ID(), vParam0, hParam4) > -1){
if(Global_2635559.f_2921[1 /*6*/].f_5==veParam5 && Global_2635559.f_2921[1 /*6*/].f_4==hParam4 && SYSTEM::VDIST(Global_2635559.f_2921[1 /*6*/], vParam0) < 0.5f) return;
for (i=0;
i < 2;
i=i + 1){
if(i < 1) Global_2635559.f_2921[i /*6*/]={
Global_2635559.f_2921[i + 1 /*6*/] 
};
}
Global_2635559.f_2921[1 /*6*/]={
vParam0 
};
Global_2635559.f_2921[1 /*6*/].f_3=fParam3;
Global_2635559.f_2921[1 /*6*/].f_4=hParam4;
Global_2635559.f_2921[1 /*6*/].f_5=veParam5;
}
return;
}

int func_110(Player plParam0, var uParam1, var uParam2, var uParam3, Hash hParam4) // Position - 0x9DDE{
Player player;
int i;
Vector3 vector;
player=plParam0;
if(player > -1){
for (i=0;
i < 2;
i=i + 1){
if(Global_2648605.f_461[player /*11*/][i /*5*/].f_4==hParam4){
vector={
uParam1 
};
if(MISC::ABSF(Global_2648605.f_461[player /*11*/][i /*5*/].f_2 - vector.f_2) < 2f) vector.f_2=Global_2648605.f_461[player /*11*/][i /*5*/].f_2;
if(SYSTEM::VDIST(Global_2648605.f_461[player /*11*/][i /*5*/], vector) < 0.5f) return i;
}}}
return -1;
}
BOOL func_111(Hash hParam0) // Position - 0x9E7C{
if(hParam0==0) return true;
STREAMING::REQUEST_MODEL(hParam0);
return STREAMING::HAS_MODEL_LOADED(hParam0);
}
Hash func_112() // Position - 0x9E9A{
return Global_1894573[func_17() /*608*/].f_10.f_304;
}


void func_113(int iParam0) // Position - 0x9EB2{
int num;
int offset;
num=iParam0 / 32;
offset=iParam0 % 32;
MISC::SET_BIT(&uLocal_135[num], offset);
return;
}
BOOL func_114(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x9ED4{
float num;
num.f_4=1125515264;
num.f_5=1;
num.f_6=1;
num.f_8=1082130432;
num.f_9=1176255488;
num.f_10=1;
num.f_13=1;
num.f_15=2;
num.f_22=2;
num.f_25=1;
num.f_26=1;
num.f_29=1123024896;
num.f_30=1;
num=func_254();
num.f_4=1000f;
num.f_27=1;
if(func_115(uParam0, 0f, 0f, 0f, func_112(), 1, uParam3, uParam4, &num)) return true;
return false;
}
BOOL func_115(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, Hash hParam6, int iParam7, var uParam8, var uParam9, var uParam10) // Position - 0x9F6F{
BOOL flag;
int i;
float num;
float num2;
float num3;
var unk;
var unk62;
flag=false;
if(uParam10->f_14)if(uParam10->f_25) uParam10->f_25=0;
if(!func_251()) return false;
if(func_250() && !Global_2635559.f_680==MISC::GET_FRAME_COUNT()){
if(!Global_2635559.f_676==0){
Global_2635559.f_676=0;
func_249();
func_248();
}}
if(!SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_675){
if(!Global_2635559.f_676==0)if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_679) < func_247(false)) return false;
else Global_2635559.f_676=0;
}else{
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_677) > 30000) Global_2635559.f_676=0;
if(!Global_2635559.f_676==0)if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_679) > func_247(true)) Global_2635559.f_676=0;
}
if(uParam10->f_6)if(func_241(fParam0)) func_240(&fParam0, true);
if(!Global_2635559.f_676==0){
if(SYSTEM::VDIST(Global_2635559.f_695, fParam0) > 50f) return false;
if(Global_2635559.f_698 !=hParam6) return false;
}
PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fParam0 - 100f, fParam0.f_1 - 100f, fParam0 + 100f, fParam0.f_1 + 100f);
if(Global_2635559.f_676==0){
Global_2635559.f_682=0;
Global_2635559.f_677=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635559.f_675=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635559.f_679=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635559.f_695={
fParam0 
};
Global_2635559.f_698=hParam6;
Global_2635559.f_681=NETWORK::GET_NETWORK_TIME_ACCURATE();
func_239();
func_249();
if(!uParam10->f_27 || func_238(fParam0, true, 1133903872) && !uParam10->f_28 && !Global_2793044.f_936 && !Global_2793044.f_925 && !Global_2793044.f_933 && !Global_2793044.f_937 && !Global_2793044.f_954 && !Global_2793044.f_966 && !Global_2793044.f_938 && !Global_2793044.f_988) func_219(fParam0, hParam6);
if(func_205(fParam0)) func_219(fParam0, hParam6);
Global_2635559.f_676=2;
}
switch (Global_2635559.f_676){
case 2:
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA(fParam0 - 100f, fParam0.f_1 - 100f, fParam0 + 100f, fParam0.f_1 + 100f)){
Global_2635559.f_683={
fParam0 
};
Global_2635559.f_686=0f;
if(Global_2793044.f_936){
num=10f;
num2=5f;
num3=5f;
}else{
num=4f;
num2=1f;
num3=1f;
}
if(uParam10->f_3 && func_199(fParam0, num, num2, num3, 1f, false, false, false, 1123024896, false, -1, true, 0, false, 0, false, false) && !uParam10->f_7 && !func_197(fParam0, *uParam9, hParam6, PLAYER::PLAYER_ID(), 0)){
Global_2635559.f_683={
fParam0 
};
Global_2635559.f_686=*uParam9;
}else{
unk.f_6=1082130432;
unk.f_7=1176255488;
unk.f_8=1;
unk.f_10=1;
unk.f_13=1;
unk.f_15=1;
unk.f_16=1;
unk.f_31=1;
unk.f_34=joaat("tailgater");
unk.f_38=2;
unk.f_45=2;
unk.f_49=1123024896;
unk.f_53=999;
unk.f_54=1176256410;
unk.f_55=1;
unk.f_56=1;
unk.f_57=1;
unk.f_9=iParam7;
unk.f_3=7f;
unk.f_10=uParam10->f_5;
unk.f_4=*uParam10;
unk.f_13=uParam10->f_1;
unk.f_14=uParam10->f_2;
unk.f_5=uParam10->f_4;
unk.f_15=uParam10->f_6;
unk.f_11=uParam10->f_7;
unk.f_6=uParam10->f_8;
unk.f_7=uParam10->f_9;
unk.f_16=uParam10->f_10;
unk.f_17=uParam10->f_11;
unk={
fParam3 
};
unk.f_12=1;
unk.f_34=hParam6;
unk.f_31=uParam10->f_13;
if(uParam10->f_32 && Global_2635559.f_682 > 0){
unk.f_30=0;
unk.f_29=1;
}else{
unk.f_30=uParam10->f_30;
unk.f_29=uParam10->f_31;
}
unk.f_48=uParam10->f_14;
unk.f_56=uParam10->f_25;
unk.f_57=uParam10->f_26;
unk.f_49=uParam10->f_29;
unk.f_59=uParam10->f_33;
unk.f_60=uParam10->f_34;
for (i=0;
i < 2;
i=i + 1){
unk.f_38[i /*3*/]={
uParam10->f_15[i /*3*/] 
};
unk.f_45[i]=uParam10->f_22[i];
}
func_141(&(Global_2635559.f_683), &(Global_2635559.f_686), &unk);
}
func_139(Global_2635559.f_683, Global_2635559.f_686, hParam6, &(Global_2635559.f_673));
Global_2635559.f_671=0;
Global_2635559.f_672=0;
Global_2635559.f_682=Global_2635559.f_682 + 1;
Global_2635559.f_678=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635559.f_677=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635559.f_676=3;
}
break;
case 3:
if(Global_2635559.f_671){
if(Global_2635559.f_673==Global_2635559.f_674){
if(Global_2635559.f_672){
if(uParam10->f_12 && !uParam10->f_11){
if(func_138(Global_2635559.f_683, Global_2635559.f_686, hParam6, true, 1036831949)){
Global_2635559.f_676=4;
Global_2635559.f_700=NETWORK::GET_NETWORK_TIME_ACCURATE();
}else{
flag=true;
}
}
else{
flag=true;
}}else{
func_136(Global_2635559.f_683, 0);
func_135(-1);
}}else{
Global_2635559.f_671=0;
Global_2635559.f_672=0;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_678) > 3000){
func_135(-1);
}
break;
case 4:
if(uParam10->f_12 && !uParam10->f_11){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_700) < 10000){
if(NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635559.f_699)){
if(NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2635559.f_699)){
if(!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2635559.f_699)){
if(func_134(Global_2635559.f_683, Global_2635559.f_686, hParam6, PLAYER::PLAYER_ID(), 0) || func_117(Global_2635559.f_683, Global_2635559.f_686, hParam6, true, false, false, false, 1, false)){
func_136(Global_2635559.f_683, 0);
func_135(-1);
}else{
flag=true;
}}else{
func_136(Global_2635559.f_683, 0);
func_135(-1);
}
}}else{
func_135(-1);
}}else{
func_135(1);
}}else{
flag=true;
}
break;
case 5:
Global_2635559.f_683={
fParam0 
};
Global_2635559.f_686=0f;
unk62.f_6=1082130432;
unk62.f_7=1176255488;
unk62.f_8=1;
unk62.f_10=1;
unk62.f_13=1;
unk62.f_15=1;
unk62.f_16=1;
unk62.f_31=1;
unk62.f_34=joaat("tailgater");
unk62.f_38=2;
unk62.f_45=2;
unk62.f_49=1123024896;
unk62.f_53=999;
unk62.f_54=1176256410;
unk62.f_55=1;
unk62.f_56=1;
unk62.f_57=1;
unk62.f_9=iParam7;
unk62.f_3=3.5f;
unk62.f_10=uParam10->f_5;
unk62.f_4=*uParam10;
unk62.f_12=1;
unk62.f_13=0;
unk62.f_15=uParam10->f_6;
unk62.f_11=uParam10->f_7;
unk62.f_6=uParam10->f_8;
unk62.f_7=uParam10->f_9;
unk62={
fParam3 
};
unk62.f_34=hParam6;
unk62.f_31=uParam10->f_13;
unk62.f_30=1;
unk62.f_48=uParam10->f_14;
unk62.f_56=uParam10->f_25;
unk62.f_57=uParam10->f_26;
unk62.f_30=uParam10->f_30;
unk62.f_29=uParam10->f_31;
unk62.f_59=uParam10->f_33;
unk62.f_60=uParam10->f_34;
for (i=0;
i < 2;
i=i + 1){
unk62.f_38[i /*3*/]={
uParam10->f_15[i /*3*/] 
};
unk62.f_45[i]=uParam10->f_22[i];
}
unk62.f_49=uParam10->f_29;
func_141(&(Global_2635559.f_683), &(Global_2635559.f_686), &unk62);
Global_2635559.f_676=6;
break;
case 6:
flag=true;
break;
}
Global_2635559.f_695={
fParam0 
};
Global_2635559.f_698=hParam6;
Global_2635559.f_679=NETWORK::GET_NETWORK_TIME_ACCURATE();
if(flag){
Global_2635559.f_516=0;
*uParam8={
Global_2635559.f_683 
};
*uParam9=Global_2635559.f_686;
func_116(true);
return true;
}
return false;
}


void func_116(BOOL bParam0) // Position - 0xA867{
Global_2635559.f_676=0;
func_239();
func_249();
if(bParam0) func_248();
return;
}
BOOL func_117(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, BOOL bParam10) // Position - 0xA888{
Player i;
Player player;
float num;
Vehicle vehiclePedIsIn;
Hash entityModel;
var entityCoords;
float entityHeading;
for (i=0;
i < 32;
i=i + 1){
player=i;
if(iParam9==1 && PLAYER::PLAYER_ID() !=player || iParam9==0){
if(_NETWORK_IS_PLAYER_VALID(player, bParam5, bParam6)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), player)){
if(!bParam8 || !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(player)) && func_133(player)){
if(!bParam7 || bParam7==true && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(player) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && bParam10 && bParam7 && func_128(player)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(player))){
num=0.1f;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(player), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(player), false);
if(ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false)){
entityModel=ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
entityCoords={
ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, false) 
};
entityHeading=ENTITY::GET_ENTITY_HEADING(vehiclePedIsIn);
if(func_127(uParam0, iParam3, hParam4, entityCoords, entityHeading, entityModel, 0)) return true;
}
else{
num=5f;
}}
if(func_118(_GET_PLAYER_COORDS(player), uParam0, iParam3, hParam4, num)) return true;
}
}}}}}}
return false;
}
BOOL func_118(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, int iParam6, Hash hParam7, int iParam8) // Position - 0xA9FB{
Vector3 vector;
Vector3 vector2;
float width;
if(SYSTEM::VDIST(vParam0, vParam3) < func_126(hParam7, 1008981770)){
func_119(vParam3, iParam6, hParam7, &vector, &vector2, &width, iParam8);
if(OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vector, vector2, width, false, true)) return true;
}
return false;
}


void func_119(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, var uParam5, var uParam6, Any anParam7, int iParam8) // Position - 0xAA4E{
Vector3 vector;
var unk3;
float num;
var unk8;
var unk11;
vector={
0f, 1f, 0f 
};
func_125(&vector, 0f, 0f, iParam3);
vector={
vector / F2V(SYSTEM::VMAG(vector)) 
};
func_120(hParam4, &unk3, &num, 1086324736, 1080033280, 1077936128);
unk8={
uParam0 + (vector *{
num.f_1 + iParam8, num.f_1 + iParam8, num.f_1 + iParam8 
}
) 
};
unk8.f_2=unk8.f_2 - ((0.5f * MISC::ABSF(num.f_2 - unk3.f_2)) + iParam8);
unk11={
uParam0 - (vector *{
(unk3.f_1 * -1f) + iParam8, (unk3.f_1 * -1f) + iParam8, (unk3.f_1 * -1f) + iParam8 
}
) 
};
unk11.f_2=unk11.f_2 + (0.5f * MISC::ABSF(num.f_2 - unk3.f_2)) + iParam8;
*uParam5={
unk8 
};
*uParam6={
unk11 
};
*anParam7=MISC::ABSF(num - unk3);
return;
}


void func_120(Hash hParam0, Vector3* pvParam1, Vector3* pvParam2, int iParam3, int iParam4, int iParam5) // Position - 0xAB1A{
int num;
if(STREAMING::IS_MODEL_VALID(hParam0)){
MISC::GET_MODEL_DIMENSIONS(hParam0, pvParam1, pvParam2);
}else{
num=func_123(hParam0);
if(num !=0){
func_121(num, pvParam1, pvParam2, 1086324736, 1080033280, 1077936128);
return;
}}
if(SYSTEM::VMAG(*pvParam1) <=0.01f || SYSTEM::VMAG(*pvParam2) <=0.01f){
if(hParam0==joaat("kosatka")){
if(iParam4 < 20.7f) iParam4=20.7f;
if(iParam3 < 137.2f) iParam3=137.2f;
if(iParam5 < 21.1f) iParam5=21.1f;
}
*pvParam1=0f - (iParam4 * 0.5f);
*pvParam2=0f + (iParam4 * 0.5f);
pvParam1->f_1=0f - (iParam3 * 0.5f);
pvParam2->f_1=0f + (iParam3 * 0.5f);
pvParam1->f_2=0f - (iParam5 * 0.5f);
pvParam2->f_2=0f + (iParam5 * 0.5f);
}
return;
}


void func_121(int iParam0, Vector3* pvParam1, Vector3* pvParam2, int iParam3, int iParam4, int iParam5) // Position - 0xAC19{
int i;
func_122(iParam0, &Global_1577994);
for (i=0;
i < 2;
i=i + 1){
if(STREAMING::IS_MODEL_VALID(Global_1577994[i])) MISC::GET_MODEL_DIMENSIONS(Global_1577994[i], &Global_1577998[i /*3*/], &Global_1578005[i /*3*/]);
if(SYSTEM::VMAG(Global_1577998[i /*3*/]) <=0.01f || SYSTEM::VMAG(Global_1578005[i /*3*/]) <=0.01f){
Global_1577998[i /*3*/]=0f - (iParam4 * 0.5f);
Global_1578005[i /*3*/]=0f + (iParam4 * 0.5f);
Global_1577998[i /*3*/].f_1=0f - (iParam3 * 0.5f);
Global_1578005[i /*3*/].f_1=0f + (iParam3 * 0.5f);
Global_1577998[i /*3*/].f_2=0f - (iParam5 * 0.5f);
Global_1578005[i /*3*/].f_2=0f + (iParam5 * 0.5f);
}
Global_1578012[i]=Global_1578005[i /*3*/] - Global_1577998[i /*3*/];
Global_1578015[i]=Global_1578005[i /*3*/].f_1 - Global_1577998[i /*3*/].f_1;
Global_1578018[i]=Global_1578005[i /*3*/].f_2 - Global_1577998[i /*3*/].f_2;
if(Global_1578012[i] > Global_1578021) Global_1578021=Global_1578012[i];
if(Global_1578018[i] > Global_1578022) Global_1578022=Global_1578018[i];
}
Global_1578023=Global_1578021 * -0.5f;
Global_1578026=Global_1578021 * 0.5f;
Global_1578023.f_1=((0.5f * Global_1578015[0]) + Global_1578015[1] + Global_1577994.f_3) * -1f;
Global_1578026.f_1=0.5f * Global_1578015[0];
Global_1578023.f_2=Global_1578018[0] * -0.5f;
Global_1578026.f_2=Global_1578018[0] * 0.5f;
*pvParam1={
Global_1578023 
};
*pvParam2={
Global_1578026 
};
return;
}


void func_122(int iParam0, var uParam1) // Position - 0xAE25{
switch (iParam0){
case 1:
uParam1->[0]=joaat("hauler2");
uParam1->[1]=joaat("trailerlarge");
uParam1->f_3=-2.6f;
break;
case 2:
uParam1->[0]=joaat("phantom3");
uParam1->[1]=joaat("trailerlarge");
uParam1->f_3=-2.6f;
break;
case 3:
uParam1->[0]=joaat("nightshark");
uParam1->[1]=joaat("trailersmall2");
uParam1->f_3=0.5f;
break;
}
return;
}

int func_123(Hash hParam0) // Position - 0xAEA6{
int i;
int num;
for (i=0;
i < 4;
i=i + 1){
num=i;
if(func_124(num)==hParam0) return num;
}
return 0;
}
Hash func_124(int iParam0) // Position - 0xAED5{
Hash num;
num=1000 + iParam0;
return num;
}


void func_125(var uParam0, float fParam1, float fParam2, int iParam3) // Position - 0xAEE7{
float num;
float num2;
float num3;
num=SYSTEM::COS(fParam1);
num2=SYSTEM::SIN(fParam1);
num3=*uParam0;
num3.f_1=(num * uParam0->f_1) - (num2 * uParam0->f_2);
num3.f_2=(num2 * uParam0->f_1) + (num * uParam0->f_2);
*uParam0={
num3 
};
num=SYSTEM::COS(fParam1.f_1);
num2=SYSTEM::SIN(fParam1.f_1);
num3=(num * *uParam0) + (num2 * uParam0->f_2);
num3.f_1=uParam0->f_1;
num3.f_2=(num * uParam0->f_2) - (num2 * *uParam0);
*uParam0={
num3 
};
num=SYSTEM::COS(fParam1.f_2);
num2=SYSTEM::SIN(fParam1.f_2);
num3=(num * *uParam0) - (num2 * uParam0->f_1);
num3.f_1=(num2 * *uParam0) + (num * uParam0->f_1);
num3.f_2=uParam0->f_2;
*uParam0={
num3 
};
return;
}


float func_126(Hash hParam0, int iParam1) // Position - 0xAFBE{
var unk;
var unk4;
float num;
float num2;
if(hParam0==0) return 5f;
func_120(hParam0, &unk, &unk4, 1086324736, 1080033280, 1077936128);
num={
unk4 - unk 
};
num2=SYSTEM::SQRT((num * 0.5f * num * 0.5f) + (num.f_1 * 0.5f * num.f_1 * 0.5f) + (num.f_2 * 0.5f * num.f_2 * 0.5f)) + iParam1;
return num2;
}
BOOL func_127(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, var uParam5, var uParam6, var uParam7, float fParam8, Hash hParam9, int iParam10) // Position - 0xB03E{
if(func_118(uParam0, uParam5, fParam8, hParam9, 1036831949)) return true;
func_119(uParam0, iParam3, hParam4, &Global_1981305, &(Global_1981305.f_3), &(Global_1981305.f_6), 1036831949);
func_119(uParam5, fParam8, hParam9, &(Global_1981305.f_7), &(Global_1981305.f_10), &(Global_1981305.f_13), 1036831949);
if(MISC::GET_POINT_AREA_OVERLAP(Global_1981305, Global_1981305.f_3, Global_1981305.f_6, Global_1981305.f_7, Global_1981305.f_10, Global_1981305.f_13)) return true;
return false;
}
BOOL func_128(Player plParam0) // Position - 0xB0DC{
if(func_132(PLAYER::PLAYER_ID(), plParam0)) return true;
Global_2764201={
GET_GAMER_HANDLE_PLAYER(plParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764201)) return true;
if(func_129(PLAYER::PLAYER_ID(), plParam0)) return true;
return false;
}
BOOL func_129(Player plParam0, Player plParam1) // Position - 0xB123{
Player player;
player=func_130(plParam0);
if(!player==_INVALID_PLAYER_INDEX())if(player==func_130(plParam1)) return true;
return false;
}
Player func_130(Player plParam0) // Position - 0xB14E{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return Global_1894573[plParam0 /*608*/].f_10;
return _INVALID_PLAYER_INDEX();
}
struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0xB171{
var gamerHandle;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
return gamerHandle;
}
BOOL func_132(Player plParam0, Player plParam1) // Position - 0xB188{
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764201={
GET_GAMER_HANDLE_PLAYER(plParam0) 
};
Global_2764214={
GET_GAMER_HANDLE_PLAYER(plParam1) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764201)){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764214)){
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764131, 35, &Global_2764201);
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764166, 35, &Global_2764214);
if(Global_2764131==Global_2764166) return true;
}}}
return false;
}
BOOL func_133(Player plParam0) // Position - 0xB1F5{
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(plParam0)) || Global_2657589[plParam0 /*466*/].f_255) return true;
return false;
}
BOOL func_134(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, Player plParam5, int iParam6) // Position - 0xB220{
Player i;
Player player;
for (i=0;
i < 32;
i=i + 1){
if(!plParam5==i || iParam6==1){
player=i;
if(_NETWORK_IS_PLAYER_VALID(player, false, true) && _NETWORK_IS_PLAYER_VALID(plParam5, false, true))if(Global_2648605.f_261[i])if(func_118(Global_2648605.f_131[i /*3*/], uParam0, iParam3, hParam4, 1036831949)) return true;
elseif(func_118(_GET_PLAYER_COORDS(player), uParam0, iParam3, hParam4, 1036831949)) return true;
elseif(Global_2648605.f_261[i])if(func_118(Global_2648605.f_131[i /*3*/], uParam0, iParam3, hParam4, 1036831949)) return true;
elseif(_NETWORK_IS_PLAYER_VALID(player, false, false))if(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(player)))if(func_118(_GET_PLAYER_COORDS(player), uParam0, iParam3, hParam4, 1036831949)) return true;
}}
return false;
}


void func_135(int iParam0) // Position - 0xB32F{
if(Global_2635559.f_682 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_681) < 30000)if(iParam0==-1 || iParam0 > -1 && Global_2635559.f_682 < iParam0) Global_2635559.f_676=2;
else Global_2635559.f_676=5;
else Global_2635559.f_676=5;
return;
}


void func_136(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0xB39A{
var unk;
if(iParam3==0 && func_137(vParam0, 0.01f)) return;
if(iParam3 < 30 && SYSTEM::VMAG(vParam0) > 0f){
unk={
Global_2635559.f_2737[iParam3 /*3*/] 
};
Global_2635559.f_2737[iParam3 /*3*/]={
vParam0 
};
func_136(unk, iParam3 + 1);
}
return;
}
BOOL func_137(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0xB403{
int i;
for (i=0;
i < 30;
i=i + 1){
if(SYSTEM::VDIST(vParam0, Global_2635559.f_2737[i /*3*/]) < iParam3) return true;
}
return false;
}
BOOL func_138(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0xB43E{
var unk;
var unk4;
var unk7;
int i;
float num;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return false;
}else{
func_249();
for (i=0;
i < 3;
i=i + 1){
if(Global_2635559.f_687[i]==-1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_119(uParam0, iParam3, hParam4, &unk, &unk4, &unk7, iParam6);
if(bParam5){
num=MISC::ABSF(unk.f_2 - unk4.f_2);
unk.f_2=unk.f_2 + ((num * 0.5f) - 2f);
unk4.f_2=unk4.f_2 + (num * 0.5f);
}
Global_2635559.f_687[i]=NETWORK::NETWORK_ADD_CLIENT_ENTITY_ANGLED_AREA(unk, unk4, iParam6);
Global_2635559.f_691[i]=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635559.f_699=Global_2635559.f_687[i];
return true;
}}}
return false;
}


void func_139(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, var uParam5) // Position - 0xB50F{
struct<8> eventData;
*uParam5=func_140(&uParam0, &uParam3, &hParam4);
eventData=2067191610;
eventData.f_1=PLAYER::PLAYER_ID();
eventData.f_2={
uParam0 
};
eventData.f_5=uParam3;
eventData.f_6=hParam4;
eventData.f_7=*uParam5;
SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 8, _GET_LOBBY_SCRIPT_EVENT_BITS(true, true));
return;
}
Hash func_140(var uParam0, var uParam1, var uParam2) // Position - 0xB55F{
var unk;
Hash hashKey;
TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
TEXT_LABEL_APPEND_INT(&unk, SYSTEM::ROUND(*uParam0), 64);
TEXT_LABEL_APPEND_INT(&unk, SYSTEM::ROUND(uParam0->f_1), 64);
TEXT_LABEL_APPEND_INT(&unk, SYSTEM::ROUND(uParam0->f_2), 64);
TEXT_LABEL_APPEND_INT(&unk, SYSTEM::ROUND(*uParam1), 64);
TEXT_LABEL_APPEND_INT(&unk, *uParam2, 64);
hashKey=MISC::GET_HASH_KEY(&unk);
return hashKey;
}


void func_141(var uParam0, int iParam1, var uParam2) // Position - 0xB5AD{
int i;
i=0;
if(Global_2635559.f_1754 > 0){
for (i=0;
func_192(uParam0, iParam1, uParam2)==0 && i < 2;
i=i + 1){
}
if(i==2) uParam2->f_33=0;
else return;
}
for (i=0;
func_142(uParam0, iParam1, uParam2)==0 && i < 6;
i=i + 1){}
return;
}

int func_142(var uParam0, int iParam1, var uParam2) // Position - 0xB61C{
int num;
float outPosition;
float outPosition2;
int nodeFlags;
var density;
int flags;
int nthClosestVehicleNodeIdWithHeading;
int outHeading;
BOOL flag;
BOOL flag2;
BOOL flag3;
float num2;
float num3;
int num4;
int i;
int num5;
BOOL flag4;
BOOL flag5;
BOOL flag6;
BOOL flag7;
float num6;
BOOL flag8;
int num7;
float num8;
int randomIntInRange;
var unk3;
float num9;
var unk6;
float num10;
BOOL flag9;
num=0;
if(!SYSTEM::VMAG(uParam2->f_35) > 0f) uParam2->f_35={
*uParam0 
};
if(uParam2->f_15){
if(func_188(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), true, true)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_51) uParam2->f_6=9999.9f;
if(uParam2->f_48) func_183(uParam0, true);
if(uParam0->f_2 < -80f){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}
nodeFlags=0;
flag=true;
if(uParam2->f_11){
nodeFlags=nodeFlags + 2;
nodeFlags=nodeFlags + 1;
flag=false;
}elseif(uParam2->f_10==0 || uParam2->f_33 > 0 && uParam2->f_16){
nodeFlags=nodeFlags + 1;
flag=false;
}
nodeFlags=nodeFlags + 4;
num2=3f;
num3=5f;
switch (uParam2->f_33){
case 0:
num2=3f;
num3=5f;
break;
case 1:
num2=2.75f;
num3=7.5f;
break;
default:
num2=2.5f;
num3=10f;
break;
}
num4=0;
Global_2643122.f_162=0;
Global_2643122.f_163=0;
Global_2643122.f_164=-99;
Global_2643122.f_165={
0f, 0f, 0f 
};
for (i=0;
i < 40;
i=i + 1){
Global_2643122[i /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[i]=0f;
}
num5=1;
if(func_123(uParam2->f_34) !=0){
num5=3;
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
uParam2->f_18=0;
}
while (true){
nthClosestVehicleNodeIdWithHeading=PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, num * num5, &outPosition2, &outHeading, nodeFlags, num2, num3);
if(PATHFIND::IS_VEHICLE_NODE_ID_VALID(nthClosestVehicleNodeIdWithHeading)){
PATHFIND::GET_VEHICLE_NODE_POSITION(nthClosestVehicleNodeIdWithHeading, &outPosition);
flag3=false;
if(Global_2643122.f_164==nthClosestVehicleNodeIdWithHeading) flag3=true;
Global_2643122.f_165={
outPosition 
};
if(uParam2->f_10 || uParam2->f_33 > 0 || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(nthClosestVehicleNodeIdWithHeading) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(nthClosestVehicleNodeIdWithHeading)){
PATHFIND::GET_VEHICLE_NODE_PROPERTIES(outPosition, &density, &flags);
if(SYSTEM::VDIST(outPosition, uParam2->f_35) > uParam2->f_4){
if(!func_176(&outPosition, false)){
if(uParam2->f_13 || flags & 64==0 || uParam2->f_33==1){
if(uParam2->f_14 || flags & 16==0){
if(flags & 128==0 && flags & 256==0 && flags & 512==0){
if(!func_173(outPosition)){
outPosition={
func_168(outPosition, &outPosition2, outHeading, uParam2->f_9, *uParam2, flag, uParam2->f_11, uParam2->f_34, &flag2, flag3, true, uParam2->f_51, uParam2->f_60) 
};
if(SYSTEM::VMAG(outPosition) > 0f){
if(!func_167(outPosition, 5f)){
if(outPosition.f_2 >=uParam2->f_35.f_2 - uParam2->f_7 || uParam2->f_33 >=2){
if(outPosition.f_2 <=uParam2->f_35.f_2 + uParam2->f_6 || uParam2->f_33 >=2){
if(func_163(outPosition, uParam2)){
if(uParam2->f_48 && !func_183(&outPosition, false) || uParam2->f_48==0){
flag4=true;
if(!flag3){
if(flag2){
num=num + -1;
flag4=false;
}
}
if(SYSTEM::VMAG(outPosition) > 0f){
if(uParam2->f_5 > 0f && SYSTEM::VDIST(outPosition, outPosition.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5 || uParam2->f_5 <=0f || uParam2->f_33 >=2){
if(uParam2->f_12 && !func_162(outPosition, outPosition2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56) || !uParam2->f_12){
if(!uParam2->f_15 || !func_188(uParam2->f_35, &outPosition, &(uParam2->f_38), &(uParam2->f_45), false, true)){
if(uParam2->f_8){
flag5=uParam2->f_31;
flag6=true;
flag7=true;
num6=uParam2->f_49;
if(!uParam2->f_55){
flag5=false;
flag6=false;
flag7=false;
num6=1f;
}
elseif(uParam2->f_17){
flag5=false;
flag6=false;
flag7=false;
if(uParam2->f_33==1) num6=num6 * 0.375f;
}
else{
flag6=true;
flag7=true;
if(uParam2->f_28)if(uParam2->f_33==1) num6=num6 * 0.375f;
}
flag8=false;
if(!func_161(outPosition, outPosition2, uParam2->f_34))if(uParam2->f_3 > 7f)if(func_199(outPosition, 6f, 1f, 1f, 5f, flag5, flag6, flag7, num6, uParam2->f_58, -1, true, uParam2->f_3, false, 0, false, false)) flag8=true;
elseif(func_199(outPosition, 6f, 1f, 1f, 5f, flag5, flag6, flag7, num6, uParam2->f_58, -1, true, 0f, false, 0, false, false) && !func_117(outPosition, outPosition2, uParam2->f_34, true, true, false, false, 0, false)) flag8=true;
if(flag8 || uParam2->f_33 >=2){
if(uParam2->f_29 || uParam2->f_30 || uParam2->f_52 || uParam2->f_33 >=2){
num8=0f;
if(uParam2->f_52) num7=func_151(outPosition, uParam2->f_54, &num8);
if(!uParam2->f_52 || uParam2->f_52 && num7 <=uParam2->f_53){
if(uParam2->f_52){
if(num7 < uParam2->f_53){
for (i=0;
i < Global_2643122.f_162;
i=i + 1){
Global_2643122[i /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[i]=0f;
}
Global_2643122.f_162=0;
uParam2->f_53=num7;
}
}
if(uParam2->f_30){
if(Global_2643122.f_162==0){
Global_2643122[0 /*3*/]={
outPosition 
};
Global_2643122.f_121[0]=outPosition2;
}
else{
for (i=0;
i < Global_2643122.f_162 + 1;
i=i + 1){
if(i < 40){
if(SYSTEM::VDIST2(outPosition, uParam2->f_35) < SYSTEM::VDIST2(Global_2643122[i /*3*/], uParam2->f_35)){
func_150(outPosition, outPosition2, i);
i=Global_2643122.f_162 + 1;
}
}
}
}
Global_2643122.f_162=Global_2643122.f_162 + 1;
if(Global_2643122.f_162 >=5)if(uParam2->f_52 && uParam2->f_53==0 || uParam2->f_52==0) num=100;
elseif(Global_2643122.f_162==40) num=100;
}
else{
Global_2643122[Global_2643122.f_162 /*3*/]={
outPosition 
};
Global_2643122.f_121[Global_2643122.f_162]=outPosition2;
Global_2643122.f_162=Global_2643122.f_162 + 1;
if(func_163(outPosition, uParam2)) Global_2643122.f_163=Global_2643122.f_163 + 1;
if(Global_2643122.f_162 >=10)if(uParam2->f_52 && uParam2->f_53==0 || uParam2->f_52==0) num=100;
elseif(Global_2643122.f_162==40) num=100;
}
}
}
else{
*uParam0={
outPosition 
};
*iParam1=outPosition2;
return 1;
}
}
elseif(flag4){
num=num + 1;
}
}
else{
*uParam0={
outPosition 
};
*iParam1=outPosition2;
return 1;
}
}
}
else{
num4=num4 + 1;
}
}
else{
num=100;
}
}
}
else{
num=num + 1;
}
}
elseif(!uParam2->f_32){
num=100;
}
}
else{
num=num + 1;
}}else{
num=num + 1;
}}
}
}
else{
num=num + 1;
}}}else{
num=num + 1;
}
}
else{
num=num + 1;
}}else{
num4=num4 + 1;
}}else{
num4=num4 + 1;
}}
num=num + 1;
if(num >=40 + num4 || num >=100){
if(Global_2643122.f_162 > 0 && uParam2->f_29 || uParam2->f_30 || uParam2->f_33 >=2){
if(uParam2->f_30){
*uParam0={
Global_2643122[0 /*3*/] 
};
*iParam1=Global_2643122.f_121[0];
return 1;
}else{
if(Global_2643122.f_163 > 0 && !Global_2643122.f_163==Global_2643122.f_162) func_148(0, uParam2);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643122.f_162);
if(uParam2->f_18 && uParam2->f_30) randomIntInRange=0;
unk3={
Global_2643122[0 /*3*/] 
};
num9=Global_2643122.f_121[0];
Global_2643122[0 /*3*/]={
Global_2643122[randomIntInRange /*3*/] 
};
Global_2643122.f_121[0]=Global_2643122.f_121[randomIntInRange];
Global_2643122[randomIntInRange /*3*/]={
unk3 
};
Global_2643122.f_121[randomIntInRange]=num9;
*uParam0={
Global_2643122[0 /*3*/] 
};
*iParam1=Global_2643122.f_121[0];
return 1;
}}else{
uParam2->f_33=uParam2->f_33 + 1;
if(uParam2->f_33 < 3){
return 0;
}else{
func_147(num4, *uParam0, &num, &outPosition, &outPosition2, uParam2, flag, outHeading, nodeFlags, num2, num3, flag2);
unk6={
outPosition 
};
num10=outPosition2;
if(!uParam2->f_50) flag9=true;
else flag9=false;
if(func_188(uParam2->f_35, &unk6, &(uParam2->f_38), &(uParam2->f_45), flag9, true) || func_183(&unk6, flag9)){
if(!uParam2->f_50){
uParam2->f_33=0;
uParam2->f_50=1;
*uParam0={
unk6 
};
*iParam1=num10;
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
return 0;
}else{
*uParam0={
unk6 
};
*iParam1=num10;
return 1;
}
}
else{
*uParam0={
unk6 
};
*iParam1=num10;
return 1;
}}}}}else{
uParam2->f_33=uParam2->f_33 + 1;
if(uParam2->f_33 < 3){
return 0;
}else{
func_143(&Global_1574205, uParam0, iParam1, *uParam0);
if(uParam2->f_11) uParam2->f_27=1;
return 1;
}}
Global_2643122.f_164=nthClosestVehicleNodeIdWithHeading;
}
return 0;
}


void func_143(var uParam0, var uParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xC04B{
float num;
float num2;
int i;
int num3;
num=1E+09f;
num3=-1;
for (i=0;
i < *uParam0;
i=i + 1){
num2=SYSTEM::VDIST(uParam0->[i /*4*/], vParam3);
if(num2 < num){
if(!func_144(uParam0->[i /*4*/], 5f, PLAYER::PLAYER_ID(), 0, 0)){
num=num2;
num3=i;
}}}
if(!num3==-1){
*uParam1={
uParam0->[num3 /*4*/] 
};
*iParam2=uParam0->[num3 /*4*/].f_3;
}
return;
}
BOOL func_144(var uParam0, var uParam1, var uParam2, float fParam3, Player plParam4, int iParam5, int iParam6) // Position - 0xC0CF{
if(func_146(uParam0, fParam3, plParam4, iParam5, false) || func_145(uParam0, plParam4, iParam6)) return true;
return false;
}

int func_145(var uParam0, var uParam1, var uParam2, Player plParam3, int iParam4) // Position - 0xC100{
Player i;
int j;
Player player;
for (i=0;
i < 32;
i=i + 1){
if(!plParam3==i || iParam4==1){
player=i;
for (j=0;
j < 2;
j=j + 1){
if(!Global_2648605.f_461[i /*11*/][j /*5*/].f_4==0)if(func_118(uParam0, Global_2648605.f_461[i /*11*/][j /*5*/], Global_2648605.f_461[i /*11*/][j /*5*/].f_3, Global_2648605.f_461[i /*11*/][j /*5*/].f_4, 1036831949))if(_NETWORK_IS_PLAYER_VALID(player, false, true) && _NETWORK_IS_PLAYER_VALID(plParam3, false, true)) return 1;
else return 1;
}}}
return 0;
}

int func_146(Vector3 vParam0, var uParam1, var uParam2, float fParam3, Player plParam4, int iParam5, BOOL bParam6) // Position - 0xC1C2{
Player i;
Player player;
BOOL flag;
for (i=0;
i < 32;
i=i + 1){
if(!plParam4==i || iParam5==1){
player=i;
flag=false;
if(bParam6)if(_NETWORK_IS_PLAYER_VALID(player, false, true) && _NETWORK_IS_PLAYER_VALID(plParam4, false, true))if(PLAYER::GET_PLAYER_TEAM(player)==PLAYER::GET_PLAYER_TEAM(plParam4)) flag=true;
if(!flag)if(_NETWORK_IS_PLAYER_VALID(player, false, true) && _NETWORK_IS_PLAYER_VALID(plParam4, false, true))if(Global_2648605.f_261[i])if(SYSTEM::VDIST(Global_2648605.f_131[i /*3*/], vParam0) < fParam3) return 1;
elseif(SYSTEM::VDIST(_GET_PLAYER_COORDS(player), vParam0) < 1f) return 1;
elseif(Global_2648605.f_261[i])if(SYSTEM::VDIST(Global_2648605.f_131[i /*3*/], vParam0) < fParam3) return 1;
elseif(_NETWORK_IS_PLAYER_VALID(player, false, true))if(SYSTEM::VDIST(_GET_PLAYER_COORDS(player), vParam0) < 1f) return 1;
}}
return 0;
}


void func_147(int iParam0, Vector3 vParam1, var uParam2, var uParam3, var uParam4, Vector3* pvParam5, float* pfParam6, var uParam7, BOOL bParam8, int iParam9, int iParam10, float fParam11, float fParam12, BOOL bParam13) // Position - 0xC2DF{
int i;
for (i=0;
i < 30;
i=i + 1){
*uParam4=MISC::GET_RANDOM_INT_IN_RANGE(1 + iParam0, 40 + iParam0);
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *uParam4, pvParam5, pfParam6, &iParam9, iParam10, fParam11, fParam12)){
if(SYSTEM::VMAG(*pvParam5) > 0f){
*pvParam5={
func_168(*pvParam5, pfParam6, iParam9, uParam7->f_9, *uParam7, bParam8, uParam7->f_11, uParam7->f_34, &bParam13, false, false, uParam7->f_51, uParam7->f_60) 
};
if(!func_173(*pvParam5)){
i=999;
return;
}}}}
return;
}


void func_148(int iParam0, var uParam1) // Position - 0xC37C{
if(!func_163(Global_2643122[iParam0 /*3*/], uParam1)){
Global_2643122.f_162=Global_2643122.f_162 - 1;
func_149(iParam0);
if(Global_2643122.f_162 > Global_2643122.f_163) func_148(iParam0, uParam1);
}elseif(iParam0 < 39){
func_148(iParam0 + 1, uParam1);
}
return;
}


void func_149(int iParam0) // Position - 0xC3D7{
while (iParam0 < 39){
if(iParam0 < 39){
Global_2643122[iParam0 /*3*/]={
Global_2643122[iParam0 + 1 /*3*/] 
};
Global_2643122.f_121[iParam0]=Global_2643122.f_121[iParam0 + 1];
}
iParam0=iParam0 + 1;
}
return;
}


void func_150(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4) // Position - 0xC422{
Vector3 vector;
float num;
vector={
Global_2643122[iParam4 /*3*/] 
};
num=Global_2643122.f_121[iParam4];
Global_2643122[iParam4 /*3*/]={
uParam0 
};
Global_2643122.f_121[iParam4]=fParam3;
if(iParam4 <=Global_2643122.f_162 && iParam4 < 39)if(SYSTEM::VMAG(vector) > 0f) func_150(vector, num, iParam4 + 1);
return;
}

int func_151(Vector3 vParam0, var uParam1, var uParam2, float fParam3, var uParam4) // Position - 0xC48F{
Player i;
Vector3 vector;
int num;
Player player;
float num2;
float num3;
num2=99999.9f;
for (i=0;
i < 32;
i=i + 1){
player=i;
if(func_152(player)){
vector={
_GET_PLAYER_COORDS(player) 
};
num3=SYSTEM::VDIST(vParam0, vector);
if(num3 < fParam3){
if(num3 < num2) num2=num3;
num=num + 1;
}}}
*uParam4=num2;
return num;
}
BOOL func_152(Player plParam0) // Position - 0xC4F7{
if(_NETWORK_IS_PLAYER_VALID(plParam0, false, true))if(!func_159(plParam0))if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), plParam0))if(!PLAYER::GET_PLAYER_TEAM(plParam0)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))if(func_156(PLAYER::PLAYER_ID(), true, false))if(!func_153(PLAYER::GET_PLAYER_TEAM(plParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1)) return true;
else return true;
elseif(PLAYER::GET_PLAYER_TEAM(plParam0)==-1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1)if(!func_156(PLAYER::PLAYER_ID(), true, false))if(!func_128(plParam0)) return true;
else return true;
return false;
}
BOOL func_153(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xC5A5{
int num;
int num2;
if(iParam2==1){
if(iParam0==iParam1) return true;
return false;
}
if(iParam0 > -1 && iParam1 > -1 && iParam0==iParam1) return true;
if(iParam0 > -1 && iParam0 < 4 && iParam1 > -1 && iParam1 < 4){
num=Global_1058070.f_14[iParam0];
if(iParam3 !=-1) num=iParam3;
if(num < 17 && num > -1){
if(IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23341, num)){
num2=Global_1058070.f_14[iParam1];
if(num2 < 17 && num2 > -1){
switch (iParam0){
case 0:
if(!func_154(iParam0, num, iParam1, num2) || !func_154(iParam1, num2, iParam0, num)) return IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[num], 0 + iParam1);
break;
case 1:
if(!func_154(iParam0, num, iParam1, num2) || !func_154(iParam1, num2, iParam0, num)) return IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[num], 4 + iParam1);
break;
case 2:
if(!func_154(iParam0, num, iParam1, num2) || !func_154(iParam1, num2, iParam0, num)) return IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[num], 8 + iParam1);
break;
case 3:
if(!func_154(iParam0, num, iParam1, num2) || !func_154(iParam1, num2, iParam0, num)) return IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[num], 12 + iParam1);
break;
}}}}}
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return IS_BIT_SET(Global_4718592.f_1214, 0);
case 1:
return IS_BIT_SET(Global_4718592.f_1214, 1);
case 2:
return IS_BIT_SET(Global_4718592.f_1214, 2);
case 3:
return IS_BIT_SET(Global_4718592.f_1214, 3);
default:
break;
}
break;
case 1:
switch (iParam1){
case 0:
return IS_BIT_SET(Global_4718592.f_1214, 4);
case 1:
return IS_BIT_SET(Global_4718592.f_1214, 5);
case 2:
return IS_BIT_SET(Global_4718592.f_1214, 6);
case 3:
return IS_BIT_SET(Global_4718592.f_1214, 7);
default:
break;
}
break;
case 2:
switch (iParam1){
case 0:
return IS_BIT_SET(Global_4718592.f_1214, 8);
case 1:
return IS_BIT_SET(Global_4718592.f_1214, 9);
case 2:
return IS_BIT_SET(Global_4718592.f_1214, 10);
case 3:
return IS_BIT_SET(Global_4718592.f_1214, 11);
default:
break;
}
break;
case 3:
switch (iParam1){
case 0:
return IS_BIT_SET(Global_4718592.f_1214, 12);
case 1:
return IS_BIT_SET(Global_4718592.f_1214, 13);
case 2:
return IS_BIT_SET(Global_4718592.f_1214, 14);
case 3:
return IS_BIT_SET(Global_4718592.f_1214, 15);
default:
break;
}
break;
}
return false;
}
BOOL func_154(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xC8F0{
BOOL num;
Player player;
Ped playerPed;
Hash entityModel;
Hash entityModel2;
Player i;
if(iParam0==iParam2) return true;
if(!IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23342, iParam1)) return false;
if(!IS_BIT_SET(Global_4718592.f_1265[iParam2 /*23466*/].f_23342, iParam3)) return false;
num=1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) entityModel2=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
i=0;
for (i=0;
i <=31;
i=i + 1){
player=i;
if(!_NETWORK_IS_PLAYER_VALID(player, true, true) || _NETWORK_IS_PLAYER_IN_SCTV(player, 0) || IS_BIT_SET(Global_2657589[player /*466*/].f_199, 2) || func_155(player)){
}elseif(PLAYER::GET_PLAYER_TEAM(player) !=iParam2){
}else{
playerPed=PLAYER::GET_PLAYER_PED(player);
if(PED::IS_PED_INJURED(playerPed)){
}else{
entityModel=ENTITY::GET_ENTITY_MODEL(playerPed);
if(entityModel2==joaat("MP_F_Freemode_01") || entityModel2==joaat("MP_M_Freemode_01"))if(entityModel==joaat("MP_F_Freemode_01") || entityModel==joaat("MP_M_Freemode_01")) return true;
else return false;
elseif(entityModel2 !=entityModel) return false;
}}}
return num;
}
BOOL func_155(Player plParam0) // Position - 0xCA1C{
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_36.f_18, 14);
}
BOOL func_156(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCA34{
if(bParam1)if(func_157(plParam0)) return 1;
!bParam2;
if(Global_1853910[plParam0 /*862*/]==-1) return 0;
return 1;
}
BOOL func_157(Player plParam0) // Position - 0xCA66{
return func_158(plParam0);
}
BOOL func_158(Player plParam0) // Position - 0xCA74{
return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_11.f_1, 0);
}
BOOL func_159(Player plParam0) // Position - 0xCA8B{
if(_NETWORK_IS_PLAYER_IN_SCTV(plParam0, 0)) return true;
if(func_160())if(plParam0==PLAYER::PLAYER_ID()) return true;
if(IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2)) return true;
return false;
}
BOOL func_160() // Position - 0xCACA{
return IS_BIT_SET(Global_2621446, 3);
}
BOOL func_161(Vector3 vParam0, var uParam1, var uParam2, int iParam3, Hash hParam4) // Position - 0xCAD8{
int flags;
Vehicle closestVehicle;
Hash entityModel;
var entityCoords;
float entityHeading;
flags=1;
flags=flags + 2;
flags=flags + 4;
flags=flags + 8;
flags=flags + 16;
flags=flags + 32;
flags=flags + 64;
flags=flags + 131076;
closestVehicle=VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, flags);
if(ENTITY::DOES_ENTITY_EXIST(closestVehicle) && !ENTITY::IS_ENTITY_DEAD(closestVehicle, false)){
entityModel=ENTITY::GET_ENTITY_MODEL(closestVehicle);
entityCoords={
ENTITY::GET_ENTITY_COORDS(closestVehicle, false) 
};
entityHeading=ENTITY::GET_ENTITY_HEADING(closestVehicle);
if(func_127(vParam0, iParam3, hParam4, entityCoords, entityHeading, entityModel, 0)) return true;
}
flags=flags + 4096;
flags=flags + 8192;
flags=flags + 16384;
closestVehicle=VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, flags);
if(ENTITY::DOES_ENTITY_EXIST(closestVehicle) && !ENTITY::IS_ENTITY_DEAD(closestVehicle, false)){
entityModel=ENTITY::GET_ENTITY_MODEL(closestVehicle);
entityCoords={
ENTITY::GET_ENTITY_COORDS(closestVehicle, false) 
};
entityHeading=ENTITY::GET_ENTITY_HEADING(closestVehicle);
if(func_127(vParam0, iParam3, hParam4, entityCoords, entityHeading, entityModel, 0)) return true;
}
return false;
}
BOOL func_162(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, Player plParam5, int iParam6, int iParam7) // Position - 0xCBE4{
if(func_134(uParam0, iParam3, hParam4, plParam5, iParam6) || func_197(uParam0, iParam3, hParam4, plParam5, iParam7)) return true;
return false;
}
BOOL func_163(Vector3 vParam0, var uParam1, var uParam2, var uParam3) // Position - 0xCC1A{
if(uParam3->f_18){
switch (uParam3->f_26){
case 0:
if(func_166(vParam0, uParam3->f_19, uParam3->f_25, false, false)) return true;
break;
case 1:
if(func_164(vParam0, uParam3->f_19, uParam3->f_22, false, false)) return true;
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam3->f_19, uParam3->f_22, uParam3->f_25, false, true)) return true;
break;
}
return false;
}
return true;
}
BOOL func_164(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8, BOOL bParam9, BOOL bParam10) // Position - 0xCCAB{
func_165(&fParam3, &fParam6);
if(!fParam0 >=fParam3 || !fParam0.f_1 >=fParam3.f_1 || !fParam0 <=fParam6 || !fParam0.f_1 <=fParam6.f_1) return 0;
if(bParam9 && bParam10) return 1;
elseif(bParam9)if(fParam0.f_2 >=fParam3.f_2) return 1;
elseif(bParam10)if(fParam0.f_2 <=fParam6.f_2) return 1;
elseif(fParam0.f_2 >=fParam3.f_2 && fParam0.f_2 <=fParam6.f_2) return 1;
return 0;
}


void func_165(var uParam0, var uParam1) // Position - 0xCD56{
var unk;
if(*uParam0 > *uParam1){
unk=*uParam1;
*uParam1=*uParam0;
*uParam0=unk;
}
if(uParam0->f_1 > uParam1->f_1){
unk=uParam1->f_1;
uParam1->f_1=uParam0->f_1;
uParam0->f_1=unk;
}
if(uParam0->f_2 > uParam1->f_2){
unk=uParam1->f_2;
uParam1->f_2=uParam0->f_2;
uParam0->f_2=unk;
}
return;
}
BOOL func_166(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7, BOOL bParam8) // Position - 0xCDB8{
if(bParam7 && bParam8){
vParam0.f_2=0f;
vParam3.f_2=0f;
return SYSTEM::VDIST(vParam0, vParam3) < fParam6 + 0.01f;
}elseif(bParam7){
if(vParam0.f_2 > vParam3.f_2) vParam0.f_2=vParam3.f_2;
return SYSTEM::VDIST(vParam0, vParam3) < fParam6 + 0.01f;
}elseif(bParam8){
if(vParam0.f_2 < vParam3.f_2) vParam0.f_2=vParam3.f_2;
return SYSTEM::VDIST(vParam0, vParam3) < fParam6 + 0.01f;
}
return SYSTEM::VDIST(vParam0, vParam3) < fParam6 + 0.01f;
}
BOOL func_167(var uParam0, var uParam1, var uParam2, float fParam3) // Position - 0xCE6B{
int i;
if(func_156(PLAYER::PLAYER_ID(), true, false)){
if(*Global_4980736.f_39172 > 0){
for (i=0;
i < *Global_4980736.f_39172;
i=i + 1){
if(Global_4980736.f_39173[i /*148*/].f_7 !=0)if(func_118(uParam0, Global_4980736.f_39173[i /*148*/], Global_4980736.f_39173[i /*148*/].f_6, Global_4980736.f_39173[i /*148*/].f_7, fParam3)) return true;
}}
if(Global_4980736.f_5991 > 0){
for (i=0;
i < Global_4980736.f_5991;
i=i + 1){
if(Global_4980736.f_5994[i /*492*/].f_15 !=0)if(func_118(uParam0, Global_4980736.f_5994[i /*492*/], Global_4980736.f_5994[i /*492*/].f_3, Global_4980736.f_5994[i /*492*/].f_15, 0.5f)) return true;
}}
if(*Global_4980736.f_84915 > 0){
for (i=0;
i < *Global_4980736.f_84915;
i=i + 1){
if(Global_4980736.f_84919[i /*499*/].f_12 !=0)if(func_118(uParam0, Global_4980736.f_84919[i /*499*/], Global_4980736.f_84919[i /*499*/].f_3, Global_4980736.f_84919[i /*499*/].f_12, 0.5f)) return true;
}}
if(Global_1058070.f_268 > 0){
for (i=0;
i < Global_1058070.f_268;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_233[i]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_233[i], false))if(func_118(uParam0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_233[i], true), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_233[i]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_233[i]), 0.5f)) return true;
}}
if(Global_1058070.f_266 > 0){
for (i=0;
i < Global_1058070.f_266;
i=i + 1){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_119[i]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_119[i], false))if(func_118(uParam0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_119[i], true), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_119[i]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_119[i]), 0.5f)) return true;
}}}
return false;
}


Vector3 func__168(Vector3 vParam0, var uParam1, var uParam2, float* pfParam3, int iParam4, BOOL bParam5, Vector3 vParam6, var uParam7, var uParam8, BOOL bParam9, BOOL bParam10, Hash hParam11, var uParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16) // Position - 0xD0FF{
var offsetFromCoordAndHeadingInWorldCoords;
var density;
int flags;
var unk3;
int value;
int value2;
float num;
float xOffset;
BOOL flag;
BOOL flag2;
float num2;
var outPosition;
Vector3 vector;
var unk10;
if(bParam15){
if(SYSTEM::VMAG(vParam6) > 0f)if(!func_171(vParam0, *pfParam3, vParam6)) *pfParam3=*pfParam3 + 180f;
return vParam0;
}
PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vParam0, &density, &flags);
if(flags & 1024==0 && !bParam10){
PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &unk3, &unk3, &value, &value2, &num, bParam9);
if(value==value2) *uParam12=1;
if(bParam14){
if(!flags & 128==0) return 0f, 0f, 0f;
if(!flags & 256==0) return 0f, 0f, 0f;
if(!flags & 512==0) return 0f, 0f, 0f;
if(value + value2 !=iParam4) return 0f, 0f, 0f;
if(VEHICLE::IS_THIS_MODEL_A_HELI(hParam11) && func_170(vParam0)) return 0f, 0f, 0f;
}
if(bParam13 && *uParam12){
*pfParam3=*pfParam3 + 180f;
if(*pfParam3 > 360f) *pfParam3=*pfParam3 + -360f;
}
if(*pfParam3 <=90f || *pfParam3 > 270f) flag=true;
else flag=false;
flag2=false;
if(flag)if(value==0)if(bParam14) return 0f, 0f, 0f;
elseif(iParam4==value) flag2=true;
elseif(value2==0)if(bParam14) return 0f, 0f, 0f;
elseif(iParam4==value2) flag2=true;
if(num < 0f){
xOffset=0f;
}else{
if(flag){
if(flag2) xOffset=4.2f * SYSTEM::TO_FLOAT(value) * 0.5f;
else xOffset=4.2f * SYSTEM::TO_FLOAT(value);
if(flag2)if(value > 2) xOffset=xOffset + ((float)value - 2 * 1f);
elseif(value > 1) xOffset=xOffset + ((float)value - 1 * 1f);
}else{
if(flag2) xOffset=4.2f * SYSTEM::TO_FLOAT(value2) * 0.5f;
else xOffset=4.2f * SYSTEM::TO_FLOAT(value2);
if(flag2)if(value2 > 2) xOffset=xOffset + ((float)value2 - 2 * 1f);
elseif(value2 > 1) xOffset=xOffset + ((float)value2 - 1 * 1f);
}
if(!flags & 64==0) xOffset=xOffset + (0.95f * num);
if(!flags & 4==0 || !flags & 8==0) xOffset=xOffset + -0.5f;
if(!flags & 32==0 && flags & 4==0 && flags & 8==0) xOffset=xOffset + -1f;
if(!bParam5 || !flags & 8==0) xOffset=xOffset + (4.2f * -0.5f);
if(!hParam11==0){
if(flags & 8 !=0) num2=func_169(hParam11, 3.5f);
else num2=func_169(hParam11, 1.5f);
if(num2 > 1.8f) xOffset=xOffset + ((num2 - 1.8f) * -0.5f);
}}}
if(SYSTEM::VMAG(vParam6) > 0f)if(!func_171(vParam0, *pfParam3, vParam6))if(bParam5 || bParam16 || flags & 1024 !=0 || vParam0.f_2==0f && bParam10) *pfParam3=*pfParam3 + 180f;
elseif(bParam14) return 0f, 0f, 0f;
if(xOffset < 0f) xOffset=0f;
offsetFromCoordAndHeadingInWorldCoords={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, *pfParam3, xOffset, 0f, 0f) 
};
if(bParam5){
if(PATHFIND::GET_ROAD_BOUNDARY_USING_HEADING(vParam0, *pfParam3, &outPosition)){
vector={
outPosition - vParam0 
};
if(!hParam11==0){
unk10={
vector / F2V(SYSTEM::VMAG(vector)) 
};
if(flags & 8 !=0) num2=func_169(hParam11, 3.5f);
else num2=func_169(hParam11, 1.5f);
unk10={
unk10 *{
num2 * 0.5f, num2 * 0.5f, num2 * 0.5f 
}};
vector={
vector - unk10 
};
outPosition={
vParam0 + vector 
};
}
unk10={
offsetFromCoordAndHeadingInWorldCoords - outPosition 
};
offsetFromCoordAndHeadingInWorldCoords={
outPosition 
};
}}
return offsetFromCoordAndHeadingInWorldCoords;
}


float func_169(Hash hParam0, float fParam1) // Position - 0xD54E{
var unk;
float num;
float num2;
func_120(hParam0, &unk, &num, 1086324736, 1080033280, 1077936128);
num2=num - unk;
if(num2 < fParam1) return fParam1;
return num2;
}
BOOL func_170(float fParam0, var uParam1, var uParam2) // Position - 0xD585{
float groundZ;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(fParam0, fParam0.f_1, fParam0.f_2 + 500f, &groundZ, false, false)){
groundZ=groundZ - fParam0.f_2;
if(groundZ > 6f) return true;
}
return false;
}
BOOL func_171(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6) // Position - 0xD5BD{
var unk;
var unk4;
unk={
0f, 1f, 0f 
};
func_125(&unk, 0f, 0f, iParam3);
unk4={
uParam4 - uParam0 
};
if(func_172(unk4, unk) >=0f) return true;
return false;
}


float func_172(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xD5F9{
return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}
BOOL func_173(var uParam0, var uParam1, var uParam2) // Position - 0xD61A{
int i;
int num;
num=func_175(uParam0);
for (i=0;
i < Global_2642829[num];
i=i + 1){
if(func_174(uParam0, &Global_2642126[num /*78*/][i /*7*/])) return true;
}
for (i=0;
i < Global_2642829[8];
i=i + 1){
if(func_174(uParam0, &Global_2642126[8 /*78*/][i /*7*/])) return true;
}
return false;
}
BOOL func_174(Vector3 vParam0, var uParam1, var uParam2, var uParam3) // Position - 0xD695{
return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
}

int func_175(float fParam0, var uParam1, var uParam2) // Position - 0xD6B5{
if(fParam0.f_1 > Global_2642117[0]) return 0;
if(fParam0.f_1 > Global_2642117[1])if(fParam0 < Global_2642121[0]) return 1;
else return 2;
if(fParam0.f_1 > Global_2642117[2])if(fParam0 < Global_2642121[1]) return 3;
elseif(fParam0 < Global_2642121[2]) return 4;
elseif(fParam0 < Global_2642121[3]) return 5;
else return 6;
return 7;
}
BOOL func_176(var uParam0, BOOL bParam1) // Position - 0xD750{
var unk;
var unk2;
float randomFloatInRange;
if(func_182(*uParam0)){
if(bParam1){
unk2={
*uParam0 
};
randomFloatInRange=MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
func_181(&unk2, Global_2635559.f_593, Global_2635559.f_596, 1036831949, false, randomFloatInRange);
if(func_177(unk2, &unk) || func_182(unk2)){
unk2={
*uParam0 
};
func_181(&unk2, Global_2635559.f_593, Global_2635559.f_596, 1036831949, true, randomFloatInRange);
}
*uParam0={
unk2 
};
}}
return false;
}
BOOL func_177(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xD7E8{
int i;
int num;
if(func_180()) return false;
num=func_179();
for (i=0;
i < num;
i=i + 1){
if(Global_2635559.f_368[i /*12*/].f_9==true){
if(func_178(uParam0, &Global_2635559.f_368[i /*12*/], 1008981770, false, false)){
*uParam3=i;
return true;
}}}
return false;
}
BOOL func_178(Vector3 vParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xD84C{
switch (uParam3->f_10){
case 0:
return func_166(vParam0, *uParam3, uParam3->f_6 + iParam4 + ((float)Global_2635559.f_2735 * uParam3->f_8), bParam5, bParam6);
case 1:
return func_164(vParam0, *uParam3 +{
iParam4 * -1f, iParam4 * -1f, iParam4 * -1f 
}
, uParam3->f_3 +{
iParam4, iParam4, iParam4 
}
, bParam5, bParam6);
case 2:
if(bParam5 && bParam6) return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, false);
elseif(bParam5)if(OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(vParam0.f_2 < uParam3->f_2 && vParam0.f_2 < uParam3->f_3.f_2)) return true;
else return false;
elseif(bParam6)if(OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(vParam0.f_2 > uParam3->f_2 && vParam0.f_2 > uParam3->f_3.f_2)) return true;
else return false;
else return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
break;
}
return false;
}

int func_179() // Position - 0xD9AD{
int i;
int num;
for (i=0;
i < 10;
i=i + 1){
if(Global_2635559.f_368[i /*12*/].f_9) num=num + 1;
}
return num;
}
BOOL func_180() // Position - 0xD9E0{
return Global_1950108.f_528;
}


void func_181(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, BOOL bParam6, float fParam7) // Position - 0xD9EF{
Vector3 vector;
var unk3;
vector={
*uParam0 - uParam1 
};
vector.f_2=0f;
if(SYSTEM::VMAG(vector) > 0f){
vector={
vector / F2V(SYSTEM::VMAG(vector)) 
};
}else{
vector={
0f, 1f, 0f 
};
if(fParam7==0f) func_125(&vector, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
else func_125(&vector, 0f, 0f, fParam7);
}
vector={
vector *{
fParam4 + iParam5, fParam4 + iParam5, fParam4 + iParam5 
}};
if(!bParam6) unk3={
uParam1 + vector 
};
else unk3={
uParam1 - vector 
};
*uParam0=unk3;
uParam0->f_1=unk3.f_1;
return;
}
BOOL func_182(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xDA97{
float num;
if(Global_2635559.f_596 > 0f){
num=SYSTEM::VDIST(vParam0, Global_2635559.f_593);
if(num < Global_2635559.f_596) return 1;
}
return 0;
}
BOOL func_183(var uParam0, BOOL bParam1) // Position - 0xDAD0{
BOOL flag;
flag=false;
if(Global_2635559.f_26.f_18){
switch (Global_2635559.f_26.f_17){
case 0:
if(func_166(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_16, false, false)) flag=true;
break;
case 1:
if(func_164(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, false, false)) flag=true;
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, false, true)) flag=true;
break;
}
if(flag)if(bParam1) *uParam0={
func_184(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, Global_2635559.f_26.f_17, 1036831949, false) 
};
}
return flag;
}


Vector3 func__184(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8, float fParam9, int iParam10, int iParam11, BOOL bParam12) // Position - 0xDBC2{
int i;
Vector3 outPosition;
switch (iParam10){
case 0:
func_181(&vParam0, vParam3, fParam9, iParam11, bParam12, 0);
break;
case 1:
func_187(&vParam0, vParam3, fParam6, iParam11, bParam12);
break;
case 2:
func_185(&vParam0, vParam3, fParam6, fParam9, iParam11, bParam12);
break;
}
for (i=0;
i < 40;
i=i + 1){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, i * 5, &outPosition, 1, 0f, 0f);
switch (iParam10){
case 0:
if(!func_166(outPosition, vParam3, fParam9, false, false)) return outPosition;
break;
case 1:
if(!func_164(outPosition, vParam3, fParam6, false, false)) return outPosition;
break;
case 2:
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(outPosition, vParam3, fParam6, fParam9, false, true)) return outPosition;
break;
}}
return vParam0;
}


void func_185(var uParam0, float fParam1, var uParam2, var uParam3, float fParam4, var uParam5, var uParam6, float fParam7, int iParam8, BOOL bParam9) // Position - 0xDCC5{
float x1;
float x2;
Vector3 vector;
float num;
Vector3 vector2;
Vector3 vector3;
float num2;
var unk11;
var unk14;
var unk17;
float x12;
float x22;
x1={
fParam4 - fParam1 
};
x1.f_2=0f;
x2={
*uParam0 - fParam1 
};
x2.f_2=0f;
vector={
func_186(0f, 0f, 1f, x1) 
};
vector={
vector / F2V(SYSTEM::VMAG(vector)) 
};
num=SYSTEM::VMAG(x2) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(x1, x1.f_1, x2, x2.f_1));
if(num < fParam7 * 0.5f){
if(!bParam9)if(func_172(vector, x2) >=0f) vector={
vector *{
((fParam7 * 0.5f) - num) + iParam8, ((fParam7 * 0.5f) - num) + iParam8, ((fParam7 * 0.5f) - num) + iParam8 
}};
else vector={
vector *{
(((fParam7 * 0.5f) - num) + iParam8) * -1f, (((fParam7 * 0.5f) - num) + iParam8) * -1f, (((fParam7 * 0.5f) - num) + iParam8) * -1f 
}};
elseif(func_172(vector, x2) >=0f) vector={
vector *{
((fParam7 * 0.5f) + num + iParam8) * -1f, ((fParam7 * 0.5f) + num + iParam8) * -1f, ((fParam7 * 0.5f) + num + iParam8) * -1f 
}};
else vector={
vector *{
(fParam7 * 0.5f) + num + iParam8, (fParam7 * 0.5f) + num + iParam8, (fParam7 * 0.5f) + num + iParam8 
}};
vector2={
*uParam0 + vector 
};
num2=SYSTEM::VDIST(fParam1, fParam1.f_1, 0f, fParam4, fParam4.f_1, 0f);
unk11={
(fParam1 + fParam4) /{
2f, 2f, 2f 
}};
unk11.f_2=0f;
vector={
func_186(0f, 0f, 1f, x1) 
};
vector={
vector / F2V(SYSTEM::VMAG(vector)) 
};
vector={
vector *{
fParam7 * 0.5f, fParam7 * 0.5f, fParam7 * 0.5f 
}};
unk14={
unk11 - vector 
};
unk17={
unk11 + vector 
};
x12={
unk17 - unk14 
};
x12.f_2=0f;
x22={
*uParam0 - unk14 
};
x22.f_2=0f;
vector={
func_186(0f, 0f, 1f, x12) 
};
vector={
vector / F2V(SYSTEM::VMAG(vector)) 
};
num=SYSTEM::VMAG(x22) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(x12, x12.f_1, x22, x22.f_1));
if(!bParam9)if(func_172(vector, x22) >=0f) vector={
vector *{
((num2 * 0.5f) - num) + iParam8, ((num2 * 0.5f) - num) + iParam8, ((num2 * 0.5f) - num) + iParam8 
}};
else vector={
vector *{
(((num2 * 0.5f) - num) + iParam8) * -1f, (((num2 * 0.5f) - num) + iParam8) * -1f, (((num2 * 0.5f) - num) + iParam8) * -1f 
}};
elseif(func_172(vector, x22) >=0f) vector={
vector *{
((num2 * 0.5f) + num + iParam8) * -1f, ((num2 * 0.5f) + num + iParam8) * -1f, ((num2 * 0.5f) + num + iParam8) * -1f 
}};
else vector={
vector *{
(num2 * 0.5f) + num + iParam8, (num2 * 0.5f) + num + iParam8, (num2 * 0.5f) + num + iParam8 
}};
vector3={
*uParam0 + vector 
};
if(SYSTEM::VDIST(vector2, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vector3, *uParam0, uParam0->f_1, 0f)) *uParam0={
vector2 
};
else *uParam0={
vector3 
};
}
return;
}


Vector3 func__186(float fParam0, float fParam1, float fParam2, var uParam3, var uParam4, var uParam5) // Position - 0xDF94{
return (fParam0.f_1 * uParam3.f_2) - (fParam0.f_2 * uParam3.f_1), (fParam0.f_2 * uParam3) - (fParam0 * uParam3.f_2), (fParam0 * uParam3.f_1) - (fParam0.f_1 * uParam3);
}


void func_187(var uParam0, float fParam1, var uParam2, var uParam3, float fParam4, var uParam5, var uParam6, int iParam7, BOOL bParam8) // Position - 0xDFCD{
float num;
float num2;
float num3;
float num4;
float num5;
float num6;
float num7;
num={
*uParam0 
};
num2=*uParam0 - fParam1;
num3=*uParam0 - fParam4;
if(num2 < num3) num4=num2;
else num4=num3;
num5=uParam0->f_1 - fParam1.f_1;
num6=uParam0->f_1 - fParam4.f_1;
if(num5 < num6) num7=num5;
else num7=num6;
num={
*uParam0 
};
if(!bParam8)if(num4 < num7)if(num2 < num3) num=fParam1 - iParam7;
else num=fParam4 + iParam7;
elseif(num5 < num6) num.f_1=fParam1.f_1 - iParam7;
else num.f_1=fParam4.f_1 + iParam7;
elseif(num4 < num7)if(num2 < num3) num=fParam4 + iParam7;
else num=fParam1 - iParam7;
elseif(num5 < num6) num.f_1=fParam4.f_1 + iParam7;
else num.f_1=fParam1.f_1 - iParam7;
*uParam0={
num 
};
return;
}
BOOL func_188(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, BOOL bParam6, BOOL bParam7) // Position - 0xE0CC{
int i;
BOOL flag;
if(func_241(uParam0)){
if(func_191(uParam3, bParam6, false, true, true)){
if(bParam6){
}
return true;
}}
if(func_189(uParam3, bParam6, true)){
if(bParam6){
}
return true;
}
if(bParam7)if(func_137(*uParam3, 1056964608)) return true;
flag=false;
for (i=0;
i < *uParam4;
i=i + 1){
if(SYSTEM::VDIST(*uParam3, uParam4->[i /*3*/]) < uParam5->[i]){
if(bParam6) func_181(uParam3, uParam4->[i /*3*/], uParam5->[i], 1036831949, false, 0);
flag=true;
}}
if(flag) return true;
return false;
}
BOOL func_189(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE188{
int num;
var unk;
var unk2;
if(func_177(*uParam0, &num)){
if(bParam1){
unk2={
*uParam0 
};
func_190(&unk2, &Global_2635559.f_368[num /*12*/], 1036831949, false, bParam2);
if(func_177(unk2, &unk) || func_182(unk2)){
unk2={
*uParam0 
};
func_190(&unk2, &Global_2635559.f_368[num /*12*/], 1036831949, true, bParam2);
}
*uParam0={
unk2 
};
}
return true;
}
return false;
}


void func_190(var uParam0, var uParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE20C{
if(bParam4){
switch (uParam1->f_10){
case 0:
*uParam0={
func_184(*uParam0, *uParam1, 0f, 0f, 0f, uParam1->f_6 + ((float)Global_2635559.f_2735 * uParam1->f_8), 0, iParam2, bParam3) 
};
break;
case 1:
*uParam0={
func_184(*uParam0, *uParam1, uParam1->f_3, 0f, 1, iParam2, bParam3) 
};
break;
case 2:
*uParam0={
func_184(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, iParam2, bParam3) 
};
break;
}}else{
switch (uParam1->f_10){
case 0:
func_181(uParam0, *uParam1, uParam1->f_6 + ((float)Global_2635559.f_2735 * uParam1->f_8), iParam2, bParam3, 0);
break;
case 1:
func_187(uParam0, *uParam1, uParam1->f_3, iParam2, bParam3);
break;
case 2:
func_185(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, iParam2, bParam3);
break;
}}
return;
}
BOOL func_191(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE316{
int i;
var unk;
for (i=0;
i < 12;
i=i + 1){
if(Global_2640505[i /*17*/].f_9==1){
if(!bParam2 || bParam2 && Global_2640505[i /*17*/].f_16){
if(func_178(*uParam0, &Global_2640505[i /*17*/], 1008981770, bParam4, false)){
if(bParam1){
if(Global_2640505[i /*17*/].f_12){
*uParam0={
Global_2640505[i /*17*/].f_13 
};
}
else{
unk={
*uParam0 
};
func_190(&unk, &Global_2640505[i /*17*/], 1036831949, false, bParam3);
if(func_191(&unk, false, false, false, true)){
unk={
*uParam0 
};
func_190(&unk, &Global_2640505[i /*17*/], 1036831949, true, false);
}
*uParam0={
unk 
};
}}
return true;
}}}}
return false;
}

int func_192(var uParam0, int iParam1, var uParam2) // Position - 0xE3F1{
int randomIntInRange;
int i;
int num;
float x1;
float num2;
int j;
BOOL flag;
BOOL flag2;
BOOL flag3;
float num3;
BOOL flag4;
int num4;
float num5;
var unk3;
float num6;
if(Global_2635559.f_1754 > 0){
i=0;
num=0;
if(!SYSTEM::VMAG(uParam2->f_35) > 0f) uParam2->f_35={
*uParam0 
};
if(uParam2->f_15){
if(func_188(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), true, true)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_48){
if(func_183(uParam0, true)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam0->f_2 < -80f){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}
Global_2643122.f_162=0;
Global_2643122.f_163=0;
for (j=0;
j < 40;
j=j + 1){
Global_2643122[j /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[j]=0f;
}
if(uParam2->f_30) func_195(*uParam0);
elseif(uParam2->f_29) func_194();
else func_193();
for (i=0;
i < Global_2635559.f_1754;
i=i + 1){
num=Global_2635559.f_2160[i];
if(num > -1 && num < 101){
x1={
Global_2635559.f_1755[num /*4*/] 
};
num2=Global_2635559.f_1755[num /*4*/].f_3;
if(SYSTEM::VMAG(x1) > 0f){
if(uParam2->f_57 && SYSTEM::VDIST(x1, uParam2->f_35) > uParam2->f_4 || uParam2->f_57==0){
if(uParam2->f_5 > 0f && SYSTEM::VDIST(x1, x1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5 || uParam2->f_5 <=0f){
if(uParam2->f_12 && !func_162(x1, num2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56) || !uParam2->f_12){
if(!uParam2->f_15 || !func_188(uParam2->f_35, &x1, &(uParam2->f_38), &(uParam2->f_45), false, true)){
if(uParam2->f_8){
flag=uParam2->f_31;
flag2=true;
flag3=true;
num3=uParam2->f_49;
if(!uParam2->f_55){
flag=false;
flag2=false;
flag3=false;
num3=1f;
}
elseif(uParam2->f_17){
flag=false;
flag2=false;
flag3=false;
if(uParam2->f_33==1) num3=num3 * 0.375f;
}
else{
flag2=true;
flag3=true;
if(uParam2->f_28)if(uParam2->f_33==1) num3=num3 * 0.375f;
}
flag4=false;
if(!func_161(x1, num2, uParam2->f_34))if(uParam2->f_3 > 7f)if(func_199(x1, 6f, 1f, 1f, 5f, flag, flag2, flag3, num3, uParam2->f_58, -1, true, uParam2->f_3, false, 0, false, false)) flag4=true;
elseif(func_199(x1, 6f, 1f, 1f, 5f, flag, flag2, flag3, num3, uParam2->f_58, -1, true, 0f, false, 0, false, false) && !func_117(x1, num2, uParam2->f_34, true, true, false, false, uParam2->f_58, false)) flag4=true;
if(flag4){
if(uParam2->f_29 || uParam2->f_30 || uParam2->f_52){
num5=0f;
if(uParam2->f_52) num4=func_151(x1, uParam2->f_54, &num5);
if(!uParam2->f_52 || uParam2->f_52 && num4 <=uParam2->f_53){
if(uParam2->f_52){
if(num4 < uParam2->f_53){
for (j=0;
j < Global_2643122.f_162;
j=j + 1){
Global_2643122[j /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[j]=0f;
}
Global_2643122.f_162=0;
uParam2->f_53=num4;
}
}
if(uParam2->f_30){
if(Global_2643122.f_162==0){
Global_2643122[0 /*3*/]={
x1 
};
Global_2643122.f_121[0]=num2;
}
else{
for (j=0;
j < Global_2643122.f_162 + 1;
j=j + 1){
if(j < 40){
if(SYSTEM::VDIST2(x1, uParam2->f_35) < SYSTEM::VDIST2(Global_2643122[j /*3*/], uParam2->f_35)){
func_150(x1, num2, j);
j=Global_2643122.f_162 + 1;
}
}
}
}
Global_2643122.f_162=Global_2643122.f_162 + 1;
if(Global_2643122.f_162 >=5)if(uParam2->f_52 && uParam2->f_53==0 || uParam2->f_52==0) i=Global_2635559.f_1754;
elseif(Global_2643122.f_162==40) i=Global_2635559.f_1754;
}
else{
Global_2643122[Global_2643122.f_162 /*3*/]={
x1 
};
Global_2643122.f_121[Global_2643122.f_162]=num2;
Global_2643122.f_162=Global_2643122.f_162 + 1;
if(Global_2643122.f_162 >=10)if(uParam2->f_52 && uParam2->f_53==0 || uParam2->f_52==0) i=Global_2635559.f_1754;
elseif(Global_2643122.f_162==40) i=Global_2635559.f_1754;
}}}else{
*uParam0={
x1 
};
*iParam1=num2;
return 1;
}
}
}
else{
*uParam0={
x1 
};
*iParam1=num2;
return 1;
}}}
}}}}}
if(Global_2643122.f_162 > 0){
if(uParam2->f_30){
*uParam0={
Global_2643122[0 /*3*/] 
};
*iParam1=Global_2643122.f_121[0];
return 1;
}else{
if(Global_2643122.f_163 > 0 && !Global_2643122.f_163==Global_2643122.f_162) func_148(0, uParam2);
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643122.f_162);
unk3={
Global_2643122[0 /*3*/] 
};
num6=Global_2643122.f_121[0];
Global_2643122[0 /*3*/]={
Global_2643122[randomIntInRange /*3*/] 
};
Global_2643122.f_121[0]=Global_2643122.f_121[randomIntInRange];
Global_2643122[randomIntInRange /*3*/]={
unk3 
};
Global_2643122.f_121[randomIntInRange]=num6;
*uParam0={
Global_2643122[0 /*3*/] 
};
*iParam1=Global_2643122.f_121[0];
return 1;
}}else{
uParam2->f_33=uParam2->f_33 + 1;
if(uParam2->f_33 < 2){
return 0;
}elseif(uParam2->f_59 && Global_2635559.f_1754 > 0){
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635559.f_1754);
*uParam0={
Global_2635559.f_1755[randomIntInRange /*4*/] 
};
*iParam1=Global_2635559.f_1755[randomIntInRange /*4*/].f_3;
return 1;
}else{
return 0;
}}}
return 0;
}


void func_193() // Position - 0xEA90{
int i;
for (i=0;
i < Global_2635559.f_1754;
i=i + 1){
Global_2635559.f_2160[i]=i;
}
return;
}


void func_194() // Position - 0xEABD{
int i;
int randomIntInRange;
int randomIntInRange2;
int num;
for (i=0;
i < Global_2635559.f_1754;
i=i + 1){
Global_2635559.f_2160[i]=i;
}
for (i=0;
i < Global_2635559.f_1754;
i=i + 1){
randomIntInRange=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635559.f_1754);
randomIntInRange2=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635559.f_1754);
num=Global_2635559.f_2160[randomIntInRange];
Global_2635559.f_2160[randomIntInRange]=Global_2635559.f_2160[randomIntInRange2];
Global_2635559.f_2160[randomIntInRange2]=num;
}
return;
}


void func_195(var uParam0, var uParam1, var uParam2) // Position - 0xEB4E{
float num;
int num2;
int num3;
num=-1f;
while (num3 < Global_2635559.f_1754){
num2=func_196(uParam0, num, &num);
Global_2635559.f_2160[num3]=num2;
num3=num3 + 1;
}
return;
}

int func_196(Vector3 vParam0, var uParam1, var uParam2, float fParam3, var uParam4) // Position - 0xEB89{
int num;
float num2;
float num3;
int i;
num=-1;
num2=100000000f;
for (i=0;
i < Global_2635559.f_1754;
i=i + 1){
num3=SYSTEM::VDIST2(vParam0, Global_2635559.f_1755[i /*4*/]);
if(num3 < num2 && num3 > fParam3){
num=i;
num2=num3;
}}
*uParam4=num2;
return num;
}
BOOL func_197(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, Player plParam5, int iParam6) // Position - 0xEBEB{
Player i;
int j;
Player player;
for (i=0;
i < 32;
i=i + 1){
if(!plParam5==i || iParam6==1){
player=i;
for (j=0;
j < 2;
j=j + 1){
if(func_198(uParam0, hParam4, Global_2648605.f_461[i /*11*/][j /*5*/], Global_2648605.f_461[i /*11*/][j /*5*/].f_4))if(func_127(uParam0, iParam3, hParam4, Global_2648605.f_461[i /*11*/][j /*5*/], Global_2648605.f_461[i /*11*/][j /*5*/].f_3, Global_2648605.f_461[i /*11*/][j /*5*/].f_4, 0))if(_NETWORK_IS_PLAYER_VALID(player, false, true) && _NETWORK_IS_PLAYER_VALID(plParam5, false, true)) return true;
else return true;
}}}
return false;
}
BOOL func_198(Vector3 vParam0, var uParam1, var uParam2, Hash hParam3, Vector3 vParam4, var uParam5, var uParam6, Hash hParam7) // Position - 0xECC5{
float num;
float num2;
float num3;
num=func_126(hParam3, 1008981770);
num2=func_126(hParam7, 1008981770);
num3=SYSTEM::VDIST(vParam0, vParam4);
if(num3 < num + num2) return true;
return false;
}
BOOL func_199(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, float fParam10, BOOL bParam11, int iParam12, BOOL bParam13, int iParam14, BOOL bParam15, int iParam16, BOOL bParam17, BOOL bParam18) // Position - 0xED05{
Global_2635559.f_2=0;
if(fParam3 > 0f)if(VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(fParam0, fParam3)) return 0;
if(fParam4 > 0f)if(PED::IS_ANY_PED_NEAR_POINT(fParam0, fParam0.f_1, fParam0.f_2 + 1f, fParam4) || PED::IS_ANY_PED_NEAR_POINT(fParam0, fParam4)) return 0;
if(fParam5 > 0f)if(OBJECT::IS_ANY_OBJECT_NEAR_POINT(fParam0, fParam5, bParam18)) return 0;
Global_2635559.f_2=Global_2635559.f_2 + 1;
if(bParam13)if(FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(fParam0, 2.5f) > 0) return 0;
Global_2635559.f_2=Global_2635559.f_2 + 1;
if(iParam14 > 0f)if(func_204(fParam0, iParam14, true, true, bParam15, bParam17, bParam11, bParam15, false)) return 0;
Global_2635559.f_2=Global_2635559.f_2 + 1;
if(bParam8)if(fParam6 > 0f)if(func_200(fParam0, fParam6, bParam7, bParam9, fParam10, bParam11, iParam12, iParam16, bParam17)) return 0;
Global_2635559.f_2=Global_2635559.f_2 + 1;
return 1;
}
BOOL func_200(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0xEE17{
Player i;
Player player;
int num;
if(bParam4 && !bParam7){
if(_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true)){
if(!CAM::IS_SCREEN_FADED_OUT()){
num=iParam6;
if(iParam9 > 0f) num=iParam9;
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_201(PLAYER::PLAYER_ID()), vParam0, true) <=num + fParam3)if(CAM::IS_SPHERE_VISIBLE(vParam0, fParam3)) return true;
}}}
for (i=0;
i < 32;
i=i + 1){
player=i;
if(_NETWORK_IS_PLAYER_VALID(player, true, true)){
if(!_NETWORK_IS_PLAYER_IN_SCTV(player, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), player)){
if(bParam4==true || bParam4==false && player !=PLAYER::PLAYER_ID()){
if(func_133(player) || !bParam10 && !Global_2657589[player /*466*/].f_270){
num=iParam6;
if(iParam9 > 0f)if(!PLAYER::GET_PLAYER_TEAM(player)==-1)if(PLAYER::GET_PLAYER_TEAM(player)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())) num=iParam9;
if(!bParam7)if(bParam5 || bParam5==false && PLAYER::GET_PLAYER_TEAM(player) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || PLAYER::GET_PLAYER_TEAM(player)==-1)if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_201(player), vParam0, true) <=num + fParam3)if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(player, vParam0, fParam3)) return true;
elseif(PLAYER::GET_PLAYER_TEAM(player) !=iParam8 || PLAYER::GET_PLAYER_TEAM(player)==-1)if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_201(player), vParam0, true) <=num + fParam3)if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(player, vParam0, fParam3)) return true;
}}}}}
return false;
}


Vector3 func__201(Player plParam0) // Position - 0xEFCF{
Player player;
player=plParam0;
if(func_203() && Global_1853910[player /*862*/].f_832 && !_IS_NULL_VECTOR(Global_1853910[player /*862*/].f_833)) return Global_1853910[player /*862*/].f_833;
return _GET_PLAYER_COORDS(plParam0);
}
BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xF022{
if(fParam0==0f && fParam0.f_1==0f && fParam0.f_2==0f) return true;
return false;
}


var func__203() // Position - 0xF04C{
return Global_2683862.f_19;
}
BOOL func_204(Vector3 vParam0, var uParam1, var uParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0xF05A{
Player i;
Player player;
for (i=0;
i < 32;
i=i + 1){
player=i;
if(bParam8==true && PLAYER::PLAYER_ID() !=player || bParam8==false){
if(_NETWORK_IS_PLAYER_VALID(player, bParam4, bParam5)){
if(bParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), player)){
if(!bParam7 || !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(player)) && func_133(player)){
if(!bParam6 || bParam6==true && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(player) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && bParam9 && bParam6 && func_128(player)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(player))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(_GET_PLAYER_COORDS(player), vParam0, true) < iParam3) return true;
}
}}}}}}
return false;
}
BOOL func_205(var uParam0, var uParam1, var uParam2) // Position - 0xF15E{
var unk;
if(Global_2793044.f_936 && func_206(uParam0, &unk)) return true;
return false;
}
BOOL func_206(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xF184{
int i;
int num;
int num2;
*uParam3=-1;
num2=func_218(uParam0, 0);
if(!num2==-1){
for (i=83;
i <=87;
i=i + 1){
num=i;
if(func_207(num)){
if(func_218(Global_1950108.f_542[i /*3*/], 0)==num2){
*uParam3=i + 1000;
return true;
}}}}
return false;
}
BOOL func_207(int iParam0) // Position - 0xF1E8{
int num;
Player player;
num=func_217(iParam0);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_293==num) return true;
player=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
if(player !=_INVALID_PLAYER_INDEX())if(Global_1853910[player /*862*/].f_267.f_293==num) return true;
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7==iParam0) return true;
if(func_216(PLAYER::PLAYER_ID(), false) || func_213(PLAYER::PLAYER_ID()) && func_71(func_212(PLAYER::PLAYER_ID()))==12) return true;
if(func_211(PLAYER::PLAYER_ID()) || func_213(PLAYER::PLAYER_ID()) && func_71(func_212(PLAYER::PLAYER_ID()))==8) return true;
if(func_210(PLAYER::PLAYER_ID()) || func_213(PLAYER::PLAYER_ID()) && func_71(func_212(PLAYER::PLAYER_ID()))==5) return true;
if(func_209(PLAYER::PLAYER_ID()) || func_213(PLAYER::PLAYER_ID()) && func_71(func_212(PLAYER::PLAYER_ID()))==10) return true;
if(func_208(PLAYER::PLAYER_ID()) || func_213(PLAYER::PLAYER_ID()) && func_71(func_212(PLAYER::PLAYER_ID()))==6) return true;
return false;
}
BOOL func_208(Player plParam0) // Position - 0xF350{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_71(Global_2657589[plParam0 /*466*/].f_321.f_7)==6;
return false;
}
BOOL func_209(Player plParam0) // Position - 0xF396{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_71(Global_2657589[plParam0 /*466*/].f_321.f_7)==10;
return false;
}
BOOL func_210(Player plParam0) // Position - 0xF3DD{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[plParam0 /*466*/].f_321.f_10 !=_INVALID_PLAYER_INDEX()) return func_71(Global_2657589[plParam0 /*466*/].f_321.f_7)==5;
return false;
}
BOOL func_211(Player plParam0) // Position - 0xF43C{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[plParam0 /*466*/].f_321.f_10 !=_INVALID_PLAYER_INDEX()) return func_71(Global_2657589[plParam0 /*466*/].f_321.f_7)==8;
return false;
}

int func_212(Player plParam0) // Position - 0xF49C{
if(plParam0 !=_INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true)) return Global_2657589[plParam0 /*466*/].f_321.f_17;
return -1;
}
BOOL func_213(Player plParam0) // Position - 0xF4CD{
if(plParam0 !=_INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(func_215(plParam0) && !func_214(plParam0)) return true;
return false;
}
BOOL func_214(Player plParam0) // Position - 0xF506{
if(plParam0 !=_INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true)) return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321, 4);
return false;
}
BOOL func_215(Player plParam0) // Position - 0xF537{
if(plParam0 !=_INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true)) return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321, 3);
return false;
}
BOOL func_216(Player plParam0, BOOL bParam1) // Position - 0xF568{
Vehicle vehiclePedIsIn;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)==joaat("terbyte")) return true;
}}
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[plParam0 /*466*/].f_321.f_10 !=_INVALID_PLAYER_INDEX()) return func_71(Global_2657589[plParam0 /*466*/].f_321.f_7)==12;
return false;
}

int func_217(int iParam0) // Position - 0xF5F6{
switch (iParam0){
case 83:
return 1;
case 84:
return 2;
case 85:
return 3;
case 86:
return 4;
case 87:
return 5;
}
return 0;
}

int func_218(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xF647{
int i;
for (i=0;
i < 12;
i=i + 1){
if(Global_2640505[i /*17*/].f_9==1 || iParam3==0)if(func_178(uParam0, &Global_2640505[i /*17*/], 0.1f, false, false)) return i;
}
return -1;
}


void func_219(var uParam0, var uParam1, var uParam2, Hash hParam3) // Position - 0xF69B{
int i;
int num;
int num2;
var unk4;
if(Global_2635559.f_45.f_319) return;
if(!func_237()){
hParam3==0;
num=func_236(uParam0);
if(num > -1){
func_248();
switch (num){
case 0:
func_235(-1139.6785f, -2694.1648f, 12.949f, 283.4298f);
func_235(-1137.4546f, -2690.167f, 12.9448f, 283.0835f);
func_235(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
func_235(-1099.8976f, -2688.6108f, 12.9473f, 295.3925f);
func_235(-1110.5096f, -2693.2358f, 12.9595f, 298.84f);
func_235(-1081.8075f, -2690.0146f, 12.7567f, 219.1729f);
func_235(-1075.5862f, -2697.0898f, 12.7567f, 224.8977f);
func_235(-1095.1333f, -2659.9954f, 12.7567f, 190.9326f);
func_235(-1096.5112f, -2649.4827f, 12.6066f, 182.7913f);
break;
case 1:
func_235(-1411.7308f, -533.6462f, 30.2703f, 215.116f);
func_235(-1416.4075f, -527.0309f, 30.6453f, 215.2683f);
func_235(-1432.1458f, -580.9922f, 29.5263f, 118.3858f);
func_235(-1438.8004f, -584.4678f, 29.595f, 118.1207f);
break;
case 2:
func_235(-780.5905f, 292.8159f, 84.673f, 97.2697f);
func_235(-788.6147f, 291.8073f, 84.72f, 97.7348f);
func_235(-765.572f, 294.4459f, 84.5182f, 93.9327f);
func_235(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
break;
case 3:
func_235(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
func_235(-647.239f, 49.2068f, 40.7135f, 355.9723f);
func_235(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
func_235(-610.5603f, 5.1258f, 41.2404f, 98.696f);
break;
case 4:
func_235(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
func_235(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
func_235(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
func_235(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
break;
case 5:
func_235(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
func_235(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
func_235(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
func_235(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
break;
case 6:
func_235(-58.1347f, -573.486f, 36.5789f, 341.8442f);
func_235(-64.227f, -590.2214f, 35.1654f, 338.972f);
func_235(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
func_235(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
break;
case 7:
func_235(-232.1917f, -978.1431f, 28.166f, 160.2115f);
func_235(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
func_235(-251.993f, -998.3963f, 28.3747f, 249.3297f);
func_235(-262.222f, -994.5226f, 29.23f, 249.4673f);
break;
case 8:
func_235(151.624f, -1309.343f, 28.2023f, 243.201f);
func_235(152.7886f, -1305.608f, 28.2023f, 243.9973f);
func_235(145.8017f, -1287.1896f, 28.312f, 120.6275f);
func_235(142.8935f, -1282.2864f, 28.3156f, 120.3024f);
break;
case 9:
func_235(-2333.5747f, 272.6518f, 168.4671f, 23.0287f);
func_235(-2322.187f, 277.638f, 168.4671f, 23.4249f);
func_235(-2316.2224f, 279.9105f, 168.4671f, 23.0175f);
func_235(-2314.3955f, 290.9f, 168.4671f, 114.3983f);
func_235(-2316.8096f, 296.424f, 168.4671f, 113.6228f);
func_235(-2318.572f, 299.2423f, 168.4671f, 293.83f);
func_235(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
func_235(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
func_235(-2345.0815f, 277.3852f, 168.4671f, 113.4219f);
func_235(-2347.7766f, 282.6038f, 168.4671f, 292.7772f);
func_235(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
func_235(-2352.6807f, 294.4205f, 168.4671f, 115.5597f);
break;
case 10:
func_233(78);
break;
case 11:
func_233(79);
break;
case 12:
func_233(82);
break;
case 13:
func_233(81);
break;
case 14:
func_233(73);
break;
case 15:
func_235(382.9244f, 443.8122f, 142.9934f, 78.3408f);
func_235(391.2023f, 442.4812f, 142.5089f, 82.2125f);
func_235(400.1477f, 441.0816f, 142.0776f, 83.4259f);
func_235(414.2964f, 439.2628f, 141.5056f, 80.8689f);
break;
case 16:
func_233(75);
break;
case 17:
func_233(76);
break;
case 18:
func_233(77);
break;
case 19:
func_235(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
func_235(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
func_235(-931.6637f, 703.693f, 151.369f, 87.7447f);
func_235(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
break;
case 20:
func_233(80);
break;
case 21:
case 25:
func_233(87);
break;
case 22:
case 26:
func_233(88);
break;
case 23:
case 27:
func_233(89);
break;
case 24:
case 28:
func_233(90);
break;
case 29:
case 30:
if(func_232(hParam3)) func_233(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33);
break;
case 31:
func_235(-352.53f, -1836.742f, 21.924f, 274.8f);
func_235(-336.412f, -1837.341f, 22.497f, 264.6f);
func_235(-320.707f, -1840.342f, 23.195f, 257.4f);
func_235(-304.646f, -1843.295f, 24.219f, 261.599f);
func_235(-288.991f, -1844.123f, 25.228f, 269.599f);
func_235(-273.031f, -1842.69f, 26.27f, 278.199f);
func_235(-361.271f, -1814.526f, 21.63f, 96.399f);
func_235(-343.939f, -1813.331f, 22.368f, 87.999f);
func_235(-326.881f, -1814.914f, 23.106f, 78.799f);
func_235(-310.941f, -1818.223f, 23.957f, 78.799f);
func_235(-294.16f, -1820.207f, 25.092f, 89.199f);
func_235(-277.392f, -1819.237f, 26.283f, 100.199f);
func_235(-257.213f, -1838.977f, 27.318f, 285.799f);
func_235(-261.286f, -1815.615f, 27.439f, 110.399f);
func_235(-246.086f, -1808.691f, 28.576f, 117.398f);
func_235(-231.901f, -1800.767f, 28.619f, 119.398f);
func_235(-199.77f, -1989.34f, 26.62f, 180.997f);
func_235(-201.159f, -1971.41f, 26.62f, 190.798f);
func_235(-205.571f, -1954.537f, 26.62f, 199.998f);
func_235(-197.879f, -1940.822f, 26.62f, 114.998f);
func_235(-141.311f, -1967.41f, 21.805f, 91.997f);
func_235(-141.145f, -1977.861f, 21.813f, 91.997f);
func_235(-140.565f, -1988.289f, 21.815f, 91.997f);
func_235(-145.045f, -2032.168f, 21.956f, 73.597f);
func_235(-147.923f, -2041.781f, 21.956f, 73.597f);
func_235(-185.791f, -1948.005f, 26.62f, 18.596f);
func_235(-181.155f, -1965.422f, 26.62f, 8.196f);
func_235(-179.172f, -1984.332f, 26.62f, 1.396f);
func_235(-225.88f, -1824.637f, 28.897f, 299.596f);
func_235(-211.722f, -1816.401f, 28.859f, 300.796f);
func_235(-217.99f, -1792.624f, 28.649f, 119.196f);
func_235(-203.828f, -1784.264f, 28.678f, 119.996f);
func_235(-194.254f, -2018.756f, 26.62f, 75f);
func_235(-186.956f, -2031.369f, 26.62f, 338f);
func_235(-194.916f, -2047.94f, 26.62f, 329.8f);
func_235(-205.565f, -2064.553f, 26.62f, 320.2f);
func_235(-218.606f, -2077.97f, 26.62f, 311.2f);
func_235(-233.372f, -2089.601f, 26.62f, 304f);
func_235(-207.822f, -2002.11f, 26.62f, 173.799f);
func_235(-207.567f, -2027.579f, 26.62f, 158.599f);
func_235(-215.235f, -2042.272f, 26.62f, 148.999f);
func_235(-227.643f, -2058.498f, 26.62f, 138.799f);
func_235(-242.977f, -2071.452f, 26.62f, 125.798f);
func_235(-256.624f, -2087.982f, 26.62f, 204.198f);
func_235(-249.549f, -2098.767f, 26.62f, 294.198f);
func_235(-228.998f, -2048.889f, 26.62f, 141.198f);
func_235(-176.963f, -2009.239f, 24.519f, 261.597f);
func_235(-195.128f, -1806.447f, 28.814f, 299.997f);
func_235(-180.02f, -1797.414f, 28.797f, 299.997f);
func_235(-165.796f, -1787.672f, 28.788f, 304.597f);
func_235(-188.124f, -1774.765f, 28.711f, 123.197f);
func_235(-417.428f, -1836.374f, 19.238f, 121.797f);
func_235(-430.967f, -1844.844f, 18.468f, 121.797f);
func_235(-444.94f, -1853.739f, 17.786f, 121.797f);
break;
}}else{
num2=3;
unk4=3;
if(func_229(uParam0, &num2, &unk4) || func_206(uParam0, &num2[0]) && VEHICLE::IS_THIS_MODEL_A_PLANE(hParam3) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam3)){
func_248();
for (i=0;
i < num2;
i=i + 1){
if(num2[i] > 1000){
num2[i]=num2[i] - 1000;
unk4[i]=1;
}
if(num2[i] >=83 && num2[i] <=87) Global_2635559.f_516=1;
if(!unk4[i] && func_228(num2[i], -1)){
if(func_232(hParam3)) func_233(num2[i]);
}elseif(unk4[i]){
if(func_227(PLAYER::PLAYER_PED_ID()) || func_226(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_THIS_MODEL_A_PLANE(hParam3) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam3)){
if(func_225(hParam3)){
func_224(num2[i]);
}elseif(func_223(hParam3)){
func_222(num2[i]);
func_224(num2[i]);
}else{
func_222(num2[i]);
func_224(num2[i]);
}
}
else{
func_220(num2[i], hParam3);
}}else{
func_233(num2[i]);
}}}}}
return;
}


void func_220(int iParam0, Hash hParam1) // Position - 0x10496{
switch (iParam0){
case 23:
func_235(434.1898f, 6535.8237f, 27.0084f, 66.9998f);
func_235(434.9146f, 6539.661f, 26.9691f, 66.9998f);
func_235(435.1928f, 6543.2983f, 26.889f, 66.9998f);
func_235(429.8495f, 6506.581f, 27.1807f, 59.7997f);
func_235(429.8463f, 6511.1104f, 27.0717f, 60.9997f);
func_235(434.2748f, 6581.816f, 26.1303f, 85.1993f);
func_235(443.1016f, 6580.7173f, 26.0739f, 85.1993f);
func_235(451.9748f, 6579.9365f, 26.0319f, 85.1993f);
break;
case 26:
func_235(-148.9694f, 6325.5522f, 30.4564f, 224.1983f);
func_235(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
func_235(-136.8806f, 6347.6216f, 30.4906f, 43.9982f);
func_235(-142.1459f, 6342.532f, 30.49f, 44.7982f);
func_235(-136.6504f, 6357.0615f, 30.4907f, 43.9982f);
func_235(-151.1909f, 6358.461f, 30.4907f, 223.398f);
func_235(-141.4154f, 6365.8306f, 30.4907f, 43.3979f);
func_235(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
break;
case 24:
func_235(60.7522f, 6465.8066f, 30.3941f, 213.3973f);
func_235(57.4131f, 6462.5503f, 30.3663f, 213.3973f);
func_235(48.0438f, 6452.6685f, 30.3245f, 213.3973f);
func_235(40.6765f, 6445.235f, 30.3475f, 213.3973f);
func_235(37.8298f, 6442.521f, 30.3489f, 213.3973f);
func_235(35.0212f, 6439.866f, 30.3332f, 213.3973f);
func_235(32.1837f, 6437.2104f, 30.2991f, 213.3973f);
func_235(29.4732f, 6434.5264f, 30.3702f, 213.3973f);
break;
case 25:
func_235(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
func_235(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
func_235(-395.8286f, 6123.6353f, 30.2987f, 46.3965f);
func_235(-389.1636f, 6117.2407f, 30.3641f, 46.3965f);
func_235(-370.6174f, 6129.7793f, 30.4414f, 45.7965f);
func_235(-360.983f, 6130.575f, 30.4401f, 45.7965f);
func_235(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
func_235(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
break;
case 22:
func_235(45.2181f, 6341.1074f, 30.2296f, 14.3964f);
func_235(41.6057f, 6339.476f, 30.2306f, 14.3964f);
func_235(39.2508f, 6359.469f, 30.2398f, 207.3965f);
func_235(36.3203f, 6356.893f, 30.2398f, 207.3965f);
func_235(51.6043f, 6365.022f, 30.2399f, 33.5965f);
func_235(65.6465f, 6380.6265f, 30.2398f, 212.9964f);
func_235(24.8587f, 6366.3604f, 30.2286f, 32.7965f);
func_235(19.6254f, 6360.736f, 30.2305f, 32.7965f);
break;
case 28:
func_235(94.0245f, 181.2181f, 103.5566f, 160.3953f);
func_235(91.0039f, 182.2811f, 103.6179f, 160.3953f);
func_235(68.365f, 148.2105f, 103.5812f, 339.9951f);
func_235(62.2104f, 150.5185f, 103.6101f, 339.9951f);
func_235(69.5198f, 186.4278f, 103.9415f, 69.7949f);
func_235(62.59f, 189.0833f, 103.9981f, 69.7949f);
func_235(55.6095f, 191.8089f, 104.2827f, 69.7949f);
func_235(154.7309f, 182.1333f, 104.6903f, 160.1945f);
break;
case 31:
func_235(322.4916f, -714.5293f, 28.1574f, 158.5941f);
func_235(329.5591f, -694.4284f, 28.1656f, 158.5941f);
func_235(324.565f, -684.3934f, 28.3133f, 247.194f);
func_235(326.4054f, -679.9403f, 28.3192f, 247.194f);
func_235(297.1177f, -804.3891f, 28.4859f, 160.594f);
func_235(288.5461f, -814.6994f, 28.1563f, 163.194f);
func_235(286.0127f, -821.7357f, 28.3093f, 163.194f);
func_235(283.6725f, -828.9533f, 28.1247f, 158.994f);
break;
case 29:
func_235(-1448.5511f, -355.0512f, 43.3715f, 313.3925f);
func_235(-1454.8193f, -359.998f, 42.7885f, 311.3925f);
func_235(-1462.6747f, -360.1352f, 42.9255f, 223.392f);
func_235(-1447.9648f, -368.3028f, 42.5412f, 5.9918f);
func_235(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
func_235(-1473.2195f, -346.7773f, 43.5318f, 213.9913f);
func_235(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
func_235(-1496.0033f, -395.7657f, 38.1394f, 45.7909f);
break;
case 30:
func_235(-1174.4911f, -1381.0103f, 3.9253f, 116.5903f);
func_235(-1183.1477f, -1392.5593f, 3.6319f, 304.9901f);
func_235(-1160.9639f, -1417.7592f, 3.7043f, 65.7899f);
func_235(-1151.6115f, -1411.3774f, 3.9411f, 63.5895f);
func_235(-1167.1865f, -1424.0696f, 3.4884f, 123.5897f);
func_235(-1148.2198f, -1409.1637f, 4.0217f, 63.5895f);
func_235(-1137.1096f, -1372.8176f, 3.8993f, 27.5895f);
func_235(-1140.6079f, -1365.7474f, 4.0573f, 27.5895f);
break;
case 27:
func_235(1414.237f, -1656.3444f, 60.2449f, 332.7893f);
func_235(1416.6677f, -1659.9332f, 60.6982f, 332.7893f);
func_235(1419.3271f, -1663.9718f, 61.2382f, 332.7893f);
func_235(1421.5574f, -1667.3671f, 61.7479f, 332.7893f);
func_235(1423.7439f, -1670.8531f, 62.3125f, 332.7893f);
func_235(1412.1573f, -1652.7456f, 59.9105f, 332.7893f);
func_235(1426.2009f, -1673.5977f, 62.7133f, 330.1893f);
func_235(1435.8038f, -1694.7296f, 65.0743f, 352.5892f);
break;
case 33:
func_235(2810.7869f, 4435.9204f, 47.5295f, 20.7996f);
func_235(2808.4128f, 4443.922f, 47.3732f, 14.7995f);
func_235(2806.298f, 4451.7856f, 47.1865f, 15.3995f);
func_235(2803.9253f, 4459.858f, 46.9823f, 15.3995f);
func_235(2801.7563f, 4467.7554f, 46.8147f, 15.3995f);
func_235(2893.563f, 4430.258f, 47.338f, 105.9994f);
func_235(2903.7246f, 4425.8535f, 47.3523f, 23.1992f);
func_235(2907.0764f, 4418.0586f, 47.6301f, 23.1992f);
break;
case 36:
func_235(1680.4476f, 4821.131f, 41.0599f, 186.399f);
func_235(1679.7604f, 4829.447f, 40.9167f, 186.399f);
func_235(1678.6683f, 4838.03f, 41.0221f, 187.7989f);
func_235(1677.6119f, 4846.028f, 41.0452f, 187.7989f);
func_235(1675.8512f, 4860.4336f, 41.0901f, 187.7989f);
func_235(1674.8434f, 4868.3433f, 41.0684f, 187.7989f);
func_235(1673.543f, 4875.752f, 41.0684f, 186.7986f);
func_235(1672.5254f, 4884.972f, 41.0478f, 186.7986f);
break;
case 34:
func_235(422.863f, 3583.9014f, 32.2386f, 313.5986f);
func_235(426.6211f, 3583.2083f, 32.2386f, 313.5986f);
func_235(430.466f, 3582.042f, 32.2386f, 313.5986f);
func_235(434.2751f, 3580.8806f, 32.2386f, 313.5986f);
func_235(438.1525f, 3579.911f, 32.2386f, 313.5986f);
func_235(442.0173f, 3578.9482f, 32.2386f, 313.5986f);
func_235(420.2694f, 3572.995f, 32.2385f, 353.7984f);
func_235(424.4825f, 3572.1f, 32.2386f, 348.1984f);
break;
case 35:
func_235(627.005f, 2726.019f, 40.7692f, 4.3984f);
func_235(620.9771f, 2725.7585f, 40.7897f, 4.3984f);
func_235(614.8536f, 2725.355f, 40.8321f, 4.3984f);
func_235(611.1158f, 2737.3875f, 40.9734f, 185.3984f);
func_235(598.9713f, 2736.2607f, 41.0602f, 186.5986f);
func_235(592.6151f, 2735.8865f, 41.0602f, 186.5986f);
func_235(586.0421f, 2735.9004f, 41.0535f, 186.5986f);
func_235(627.4468f, 2742.742f, 40.8963f, 183.5979f);
break;
case 32:
func_235(214.3318f, 2492.2598f, 53.9736f, 312.7978f);
func_235(213.9953f, 2496.666f, 53.8128f, 312.7978f);
func_235(213.7524f, 2501.2512f, 53.5958f, 312.7978f);
func_235(213.6645f, 2505.9084f, 53.3477f, 312.7978f);
func_235(213.4478f, 2510.7341f, 53.1055f, 312.7978f);
func_235(212.9148f, 2515.2676f, 52.9376f, 312.7978f);
func_235(211.5983f, 2519.2163f, 52.6753f, 312.7978f);
func_235(210.1288f, 2523.1873f, 52.3493f, 312.7978f);
break;
case 38:
func_235(153.6785f, -2476.1921f, 4.9877f, 178.4004f);
func_235(150.9209f, -2516.9785f, 4.9909f, 179.9999f);
func_235(150.9499f, -2524.965f, 4.9905f, 179.9999f);
func_235(153.866f, -2467.2422f, 4.9877f, 178.4004f);
func_235(150.8115f, -2533.139f, 4.9895f, 180.0004f);
func_235(153.8647f, -2433.386f, 5.2336f, 170.2002f);
func_235(142.7427f, -2536.147f, 5f, 205.0002f);
func_235(138.8267f, -2535.8647f, 5f, 205.0002f);
break;
case 41:
func_235(-341.4255f, -2734.4514f, 5.0413f, 314.8f);
func_235(-334.0134f, -2741.43f, 5.0269f, 314.8f);
func_235(-329.7832f, -2745.6042f, 5.0196f, 314.8f);
func_235(-336.4781f, -2716.1392f, 5.0028f, 134.1994f);
func_235(-334.2752f, -2718.8884f, 5.0048f, 135.1992f);
func_235(-327.6603f, -2725.6445f, 5.0103f, 135.1992f);
func_235(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
func_235(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
break;
case 39:
func_235(1143.7303f, -3105.0913f, 4.8989f, 146.1979f);
func_235(1140.0088f, -3104.954f, 4.8985f, 146.1979f);
func_235(1136.2671f, -3104.69f, 4.8969f, 146.1979f);
func_235(1132.7316f, -3104.2769f, 4.8944f, 146.1979f);
func_235(1128.7235f, -3104.5398f, 4.896f, 146.1979f);
func_235(1125.1063f, -3104.0566f, 4.8942f, 146.1979f);
func_235(1117.7996f, -3103.6743f, 4.8922f, 146.1979f);
func_235(1114.0154f, -3103.448f, 4.8931f, 146.1979f);
break;
case 40:
func_235(653.1188f, -2700.255f, 5.2101f, 24.7971f);
func_235(656.1305f, -2707.2454f, 5.214f, 24.7971f);
func_235(659.3307f, -2714.3784f, 5.2188f, 22.7968f);
func_235(662.2627f, -2722.2275f, 5.2188f, 19.1968f);
func_235(649.2115f, -2728.3586f, 5.1124f, 20.5967f);
func_235(646.2606f, -2720.8333f, 5.1103f, 21.3967f);
func_235(643.4582f, -2713.846f, 5.1099f, 21.3967f);
func_235(640.3513f, -2706.5708f, 5.108f, 21.3967f);
break;
case 37:
func_235(-260.5913f, -2615.2546f, 5.0502f, 274.5953f);
func_235(-253.2161f, -2614.8955f, 5.0502f, 271.5953f);
func_235(-245.6569f, -2614.8618f, 5.0502f, 271.5953f);
func_235(-238.214f, -2614.8472f, 5.0502f, 271.5953f);
func_235(-238.013f, -2630.9614f, 5.0331f, 271.3949f);
func_235(-260.9724f, -2631.4185f, 5.0355f, 276.9951f);
func_235(-253.401f, -2631.1082f, 5.0319f, 272.195f);
func_235(-245.5563f, -2631.0598f, 5.0323f, 272.195f);
break;
case 83:
func_235(-1190.795f, -3371.393f, 12.945f, 348.399f);
func_235(-1185.634f, -3373.893f, 12.945f, 348.399f);
func_235(-1114.818f, -3414.185f, 12.945f, 314.199f);
func_235(-1110.976f, -3416.37f, 12.945f, 314.199f);
func_235(-1098.6207f, -3460.7915f, 12.9453f, 329.799f);
func_235(-1093.3098f, -3463.4644f, 12.9453f, 329.799f);
func_235(-1089.4333f, -3443.2336f, 12.945f, 329.799f);
func_235(-1084.2706f, -3446.3103f, 12.945f, 329.799f);
func_235(-1093.8082f, -3452.4072f, 12.9451f, 329.799f);
func_235(-1088.3829f, -3455.466f, 12.9451f, 329.799f);
func_235(-1118.4736f, -3411.3848f, 12.9451f, 313.199f);
func_235(-1181.003f, -3375.6584f, 12.945f, 346.799f);
func_235(-1212.0713f, -3382.2832f, 12.9451f, 328.999f);
func_235(-1217.7085f, -3378.6228f, 12.9451f, 328.999f);
func_235(-1216.9865f, -3390.3958f, 12.9452f, 328.999f);
func_235(-1222.5657f, -3386.7068f, 12.9452f, 328.999f);
func_235(-1222.06f, -3398.8823f, 12.9452f, 328.999f);
func_235(-1227.6981f, -3394.9456f, 12.9451f, 328.999f);
func_235(-1097.5173f, -3472.0862f, 12.9453f, 328.999f);
func_235(-1102.951f, -3468.6187f, 12.9452f, 328.999f);
func_235(-1227.2528f, -3407.38f, 12.9452f, 328.999f);
func_235(-1232.8358f, -3403.5723f, 12.9452f, 328.999f);
break;
case 84:
func_235(-1364.879f, -3285.201f, 12.945f, 330.2f);
func_235(-1359.229f, -3288.52f, 12.945f, 330.2f);
func_235(-1369.636f, -3293.617f, 12.945f, 330.2f);
func_235(-1363.881f, -3296.796f, 12.945f, 330.2f);
func_235(-1432.898f, -3247.702f, 12.945f, 330.2f);
func_235(-1437.282f, -3255.429f, 12.945f, 330.2f);
func_235(-1441.623f, -3262.969f, 12.945f, 330.2f);
func_235(-1443.954f, -3251.006f, 12.945f, 330.2f);
func_235(-1374.159f, -3301.61f, 12.945f, 330.2f);
func_235(-1368.508f, -3304.924f, 12.945f, 330.2f);
func_235(-1359.905f, -3276.1177f, 12.9448f, 330.4f);
func_235(-1354.2279f, -3279.6296f, 12.9448f, 330.4f);
func_235(-1406.4932f, -3246.2234f, 12.9449f, 344.5997f);
func_235(-1411.0581f, -3243.6204f, 12.9449f, 344.5997f);
func_235(-1415.326f, -3241.0137f, 12.9449f, 344.5997f);
func_235(-1419.899f, -3238.1157f, 12.9449f, 344.5997f);
func_235(-1370.9857f, -3268.9453f, 12.9449f, 322.3996f);
func_235(-1365.7346f, -3272.3633f, 12.9449f, 322.3996f);
func_235(-1373.3412f, -3313.2056f, 12.9448f, 329.5996f);
func_235(-1379.0914f, -3310.0037f, 12.9448f, 330.7996f);
func_235(-1436.9889f, -3228.515f, 12.9449f, 343.9996f);
func_235(-1444.064f, -3273.7512f, 12.945f, 330.7996f);
break;
case 85:
func_235(-2060.105f, 3186.159f, 31.81f, 329.599f);
func_235(-2065.521f, 3189.007f, 31.81f, 150.199f);
func_235(-2055.006f, 3194.989f, 31.81f, 329.599f);
func_235(-2060.471f, 3197.816f, 31.81f, 150.199f);
func_235(-2049.611f, 3204.032f, 31.81f, 329.599f);
func_235(-2055.048f, 3206.958f, 31.81f, 150.199f);
func_235(-2049.627f, 3216.253f, 31.81f, 150.199f);
func_235(-2039.024f, 3222.121f, 31.81f, 329.599f);
func_235(-2044.17f, 3213.208f, 31.81f, 329.599f);
func_235(-2044.672f, 3224.638f, 31.81f, 150.199f);
func_235(-2060.4863f, 3165.9277f, 31.8103f, 133.9988f);
func_235(-2055.7065f, 3163.0535f, 31.8103f, 133.9988f);
func_235(-2050.911f, 3160.0918f, 31.8103f, 133.9988f);
func_235(-1974.6353f, 3137.8467f, 31.8103f, 149.5986f);
func_235(-1970.3544f, 3145.22f, 31.8103f, 149.5986f);
func_235(-1965.7089f, 3153.2214f, 31.8103f, 149.5986f);
func_235(-1960.9915f, 3161.346f, 31.8103f, 149.5986f);
func_235(-1983.1697f, 3131.3298f, 31.8103f, 149.5986f);
func_235(-1976.614f, 3127.6274f, 31.8103f, 149.5986f);
func_235(-1991.5824f, 3127.264f, 31.8103f, 167.7985f);
func_235(-1995.584f, 3129.3687f, 31.8103f, 167.7985f);
func_235(-1999.335f, 3131.1824f, 31.8103f, 167.7985f);
break;
case 86:
func_235(-1843.828f, 3085.094f, 31.81f, 165.8f);
func_235(-1828.571f, 3084.114f, 31.841f, 329.2f);
func_235(-1823.414f, 3092.762f, 31.843f, 330f);
func_235(-1819.045f, 3100.435f, 31.845f, 330f);
func_235(-1833.313f, 3075.722f, 31.838f, 330f);
func_235(-1847.648f, 3076.8f, 31.835f, 165.8f);
func_235(-1838.479f, 3078.576f, 31.863f, 150.599f);
func_235(-1833.605f, 3086.784f, 31.863f, 150.599f);
func_235(-1828.424f, 3095.617f, 31.863f, 150.599f);
func_235(-1823.95f, 3102.821f, 31.862f, 150.599f);
func_235(-1819.2842f, 3110.6704f, 31.8615f, 150.2f);
func_235(-1814.545f, 3108.2295f, 31.8476f, 330.6f);
func_235(-1853.9388f, 3076.2705f, 31.8105f, 176.7996f);
func_235(-1857.7258f, 3078.6685f, 31.8105f, 176.7996f);
func_235(-1861.6259f, 3080.7766f, 31.8105f, 176.7996f);
func_235(-1865.5841f, 3083.1365f, 31.8103f, 176.7996f);
func_235(-1869.2551f, 3085.565f, 31.8103f, 176.7996f);
func_235(-1913.263f, 3125.3416f, 31.8103f, 150.7988f);
func_235(-1917.5464f, 3127.6785f, 31.8103f, 150.7988f);
func_235(-1922.7402f, 3130.5552f, 31.8103f, 150.7988f);
func_235(-1927.6763f, 3133.413f, 31.8103f, 150.7988f);
func_235(-1932.4185f, 3136.273f, 31.8103f, 150.7988f);
break;
case 87:
func_235(-2538.561f, 3303.172f, 31.814f, 296.999f);
func_235(-2530.309f, 3307.445f, 31.816f, 296.999f);
func_235(-2521.733f, 3311.833f, 31.817f, 296.999f);
func_235(-2512.881f, 3316.428f, 31.819f, 296.999f);
func_235(-2502.952f, 3321.518f, 31.821f, 296.999f);
func_235(-2542.613f, 3310.728f, 31.814f, 296.999f);
func_235(-2534.195f, 3314.753f, 31.815f, 296.999f);
func_235(-2525.635f, 3318.97f, 31.817f, 296.999f);
func_235(-2516.674f, 3323.545f, 31.819f, 296.999f);
func_235(-2507.153f, 3328.454f, 31.82f, 296.999f);
func_235(-2547.689f, 3298.791f, 31.812f, 296.999f);
func_235(-2551.2612f, 3306.3042f, 31.8123f, 296.999f);
func_235(-2497.446f, 3333.2957f, 31.821f, 296.999f);
func_235(-2494.089f, 3326.0647f, 31.8218f, 296.999f);
func_235(-2453.4045f, 3255.3882f, 31.8276f, 167.1986f);
func_235(-2449.37f, 3253.4165f, 31.8276f, 167.1986f);
func_235(-2445.4902f, 3251.1384f, 31.8276f, 167.1986f);
func_235(-2441.5747f, 3248.888f, 31.8276f, 167.1986f);
func_235(-2437.3193f, 3246.5542f, 31.8277f, 167.1986f);
func_235(-2432.7227f, 3244.232f, 31.8277f, 167.1986f);
func_235(-2485.2732f, 3330.8906f, 31.8239f, 298.1979f);
func_235(-2488.82f, 3338.3647f, 31.8226f, 298.1979f);
break;
case 89:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_235(1284.4156f, 2890.2993f, 45.0276f, 336.3999f);
func_235(1273.2477f, 2901.4277f, 45.0426f, 338.3999f);
func_235(1262.9448f, 2911.5352f, 43.2959f, 341.9999f);
func_235(1272.0938f, 2873.3875f, 45.3443f, 328.5991f);
func_235(1259.7849f, 2892.2168f, 45.1126f, 339.9999f);
func_235(1231.2787f, 2910.881f, 43.3085f, 12f);
func_235(1306.5148f, 2839.4749f, 46.8947f, 132.3996f);
func_235(1307.4529f, 2825.2756f, 45.1566f, 127.1998f);
func_235(1257.0292f, 2872.1567f, 45.9766f, 338.5992f);
func_235(1225.7644f, 2930.0952f, 41.6173f, 14.7999f);
}else{
func_235(1265.1229f, 2836.949f, 47.1021f, 119.9996f);
func_235(1258.1451f, 2831.6428f, 46.4503f, 135.7993f);
func_235(1240.8466f, 2828.7207f, 46.4388f, 39.5992f);
func_235(1236.8774f, 2835.4902f, 46.3491f, 22.9991f);
func_235(1235.6973f, 2843.4026f, 46.0231f, 2.7991f);
func_235(1237.6862f, 2850.6072f, 45.5261f, 335.5991f);
func_235(1241.1256f, 2858.816f, 45.0176f, 339.7991f);
func_235(1249.7152f, 2810.5876f, 47.2648f, 255.1992f);
func_235(1257.6963f, 2808.6086f, 47.014f, 266.1992f);
func_235(1265.5765f, 2808.3528f, 46.7598f, 277.199f);
func_235(1273.8081f, 2808.484f, 46.3872f, 263.999f);
func_235(1282.5354f, 2807.1335f, 45.9705f, 250.7989f);
func_235(1290.1676f, 2803.7449f, 45.8005f, 238.7988f);
func_235(1296.4451f, 2798.7769f, 46.0903f, 228.9988f);
func_235(1302.041f, 2792.3296f, 45.957f, 221.7987f);
func_235(1251.3888f, 2825.818f, 45.9856f, 119.1982f);
func_235(1285.4801f, 2819.238f, 45.044f, 228.3993f);
func_235(1293.0233f, 2814.1636f, 44.8859f, 233.399f);
func_235(1242.1803f, 2814.153f, 47.7108f, 227.3991f);
func_235(1236.3619f, 2819.6228f, 47.6845f, 224.399f);
func_235(1231.532f, 2825.855f, 47.4649f, 210.5992f);
func_235(1228.1774f, 2833.4233f, 47.3171f, 197.5993f);
func_235(1243.0946f, 2866.7493f, 44.6219f, 353.7992f);
func_235(1307.3458f, 2785.7866f, 46.1136f, 219.9997f);
func_235(1300.7516f, 2808.2244f, 44.5688f, 228.9997f);
func_235(1306.571f, 2802.4675f, 44.6275f, 224.1992f);
func_235(1244.4646f, 2875.6968f, 44.5839f, 353.7992f);
func_235(1312.4409f, 2795.4268f, 45.2701f, 218.5991f);
}
break;
case 90:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_235(14.4916f, 2660.7263f, 79.0178f, 310.1999f);
func_235(3.855f, 2672.388f, 78.437f, 319.2f);
func_235(-7.057f, 2682.247f, 77.472f, 319.2f);
func_235(-14.041f, 2663.43f, 77.4221f, 319.2f);
func_235(41.8086f, 2597.059f, 81.3524f, 301.9997f);
func_235(60.2273f, 2609.7449f, 79.5672f, 305.9998f);
func_235(34.0188f, 2659.7227f, 78.9894f, 314.2f);
func_235(29.4879f, 2675.3398f, 76.0202f, 314.2f);
func_235(19.0088f, 2686.1597f, 75.6897f, 314.2f);
func_235(7.6101f, 2697.1125f, 76.2923f, 314.2f);
}else{
func_235(50.6405f, 2633.902f, 79.4503f, 305.1998f);
func_235(46.2894f, 2639.9512f, 79.9122f, 305.1998f);
func_235(55.3668f, 2627.7727f, 79.6363f, 305.1998f);
func_235(59.9522f, 2620.408f, 80.0499f, 305.1998f);
func_235(42.1486f, 2646.0728f, 80.108f, 305.1998f);
func_235(68.1481f, 2630.0696f, 77.0725f, 305.1998f);
func_235(62.6048f, 2637.014f, 76.1722f, 305.1998f);
func_235(57.3543f, 2643.5598f, 75.5301f, 305.1998f);
func_235(52.611f, 2649.698f, 76.1354f, 305.1998f);
func_235(74.5845f, 2640.4746f, 72.602f, 305.1998f);
func_235(68.5462f, 2646.7837f, 71.6298f, 305.1998f);
func_235(62.426f, 2652.977f, 71.7029f, 305.1998f);
func_235(79.5597f, 2650.8347f, 68.668f, 305.1998f);
func_235(72.6035f, 2656.8574f, 67.3294f, 305.1998f);
func_235(83.4156f, 2660.2366f, 64.3198f, 305.1998f);
func_235(102.851f, 2688.009f, 51.732f, 224f);
func_235(109.815f, 2681.012f, 51.112f, 224f);
func_235(116.355f, 2674.26f, 50.529f, 224f);
func_235(125.138f, 2665.98f, 49.8f, 224f);
func_235(132.228f, 2659.865f, 49.26f, 228.4f);
func_235(139.354f, 2653.536f, 48.737f, 228.4f);
func_235(88.512f, 2702.995f, 53.042f, 224.199f);
func_235(81.565f, 2710.357f, 53.67f, 224.199f);
func_235(75.156f, 2716.981f, 54.223f, 224.199f);
func_235(68.442f, 2723.806f, 54.775f, 226.199f);
func_235(61.449f, 2730.606f, 55.308f, 226.199f);
func_235(53.702f, 2738.167f, 55.855f, 226.199f);
func_235(91.2443f, 2667.262f, 59.9931f, 314.599f);
}
break;
case 91:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_235(2772.011f, 3889.062f, 42.94f, 145.4f);
func_235(2785.592f, 3880.409f, 43.695f, 146.199f);
func_235(2788.387f, 3898.107f, 45.364f, 140.999f);
func_235(2801.558f, 3912.485f, 44.931f, 131.999f);
func_235(2805.531f, 3892.253f, 47.01f, 106.399f);
func_235(2824.791f, 3894.7869f, 47.4293f, 105.3989f);
func_235(2761.7385f, 3945.948f, 44.59f, 135.398f);
func_235(2814.5886f, 3930.404f, 44.816f, 134.9978f);
func_235(2747.6267f, 3930.92f, 43.8497f, 138.3978f);
func_235(2796.3115f, 3928.3164f, 42.6106f, 134.5979f);
}else{
func_235(2730.174f, 3890.294f, 42.435f, 54.6f);
func_235(2714.633f, 3918.283f, 42.938f, 16f);
func_235(2716.533f, 3910.15f, 42.699f, 19.6f);
func_235(2757.499f, 3874.045f, 42.724f, 64.8f);
func_235(2747.99f, 3878.676f, 42.561f, 62.8f);
func_235(2738.337f, 3884.314f, 42.614f, 57.2f);
func_235(2711.836f, 3926.255f, 42.931f, 21.6f);
func_235(2707.586f, 3934.558f, 42.984f, 27.6f);
func_235(2702.361f, 3943.039f, 42.951f, 30.6f);
func_235(2696.696f, 3951.317f, 43.012f, 34.8f);
func_235(2766.778f, 3868.911f, 42.822f, 59.8f);
func_235(2775.397f, 3863.697f, 43.204f, 54.2f);
func_235(2738.841f, 3869.927f, 42.492f, 242.799f);
func_235(2746.49f, 3865.861f, 42.808f, 239.599f);
func_235(2754.829f, 3861.039f, 42.906f, 240.799f);
func_235(2762.616f, 3856.316f, 42.895f, 240.799f);
func_235(2770.463f, 3851.383f, 43.216f, 233.199f);
func_235(2778.129f, 3844.914f, 43.26f, 229.199f);
func_235(2785.341f, 3837.918f, 43.141f, 224.999f);
func_235(2730.65f, 3875.186f, 42.437f, 231.999f);
func_235(2724.14f, 3880.885f, 42.469f, 224.599f);
func_235(2718.541f, 3887.508f, 42.614f, 217.399f);
func_235(2783.246f, 3857.409f, 43.175f, 45.199f);
func_235(2790.716f, 3850.631f, 43.125f, 45.199f);
func_235(2690.655f, 3959.246f, 43.255f, 40.199f);
func_235(2797.912f, 3842.523f, 43.166f, 40.199f);
func_235(2791.836f, 3830.845f, 43.14f, 221.999f);
func_235(2712.952f, 3894.566f, 42.484f, 14.799f);
}
break;
case 92:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_235(3374.661f, 5559.7095f, 12.3726f, 138.7999f);
func_235(3366.3652f, 5569.4487f, 13.9704f, 112.8f);
func_235(3358.4927f, 5581.4634f, 16.1783f, 112.8f);
func_235(3356.7053f, 5595.3633f, 15.4029f, 112.8f);
func_235(3336.662f, 5552.357f, 19.491f, 249.6f);
func_235(3336.791f, 5567.825f, 20.432f, 249.6f);
func_235(3335.2588f, 5599.0464f, 22.4606f, 249.6f);
func_235(3336.8108f, 5613.029f, 22.2159f, 249.6f);
func_235(3354.6956f, 5609.6987f, 15.9453f, 111.3999f);
func_235(3354.0056f, 5624.206f, 16.018f, 111.3999f);
}else{
func_235(3372.053f, 5506.134f, 20.8174f, 99.5999f);
func_235(3374.923f, 5520.1772f, 20.3207f, 86f);
func_235(3350.6433f, 5490.432f, 18.8423f, 139.9997f);
func_235(3364.1887f, 5502.9805f, 19.648f, 125.7999f);
func_235(3354.101f, 5484.773f, 19.619f, 116.399f);
func_235(3365.919f, 5519.9487f, 18.8008f, 102.9988f);
func_235(3341.889f, 5506.809f, 19.584f, 161.199f);
func_235(3338.581f, 5497.709f, 19.376f, 161.199f);
func_235(3335.674f, 5489.348f, 19.542f, 161.199f);
func_235(3332.019f, 5479.563f, 19.738f, 150.998f);
func_235(3327.404f, 5470.857f, 19.302f, 159.398f);
func_235(3323.903f, 5461.49f, 18.492f, 156.398f);
func_235(3320.016f, 5452.957f, 17.834f, 153.198f);
func_235(3315.782f, 5444.61f, 17.115f, 150.798f);
func_235(3335.4514f, 5455.7227f, 18.2323f, 162.1979f);
func_235(3338.7878f, 5464.8027f, 18.8631f, 163.7977f);
func_235(3362.4763f, 5488.2114f, 20.4432f, 108.5979f);
func_235(3371.2593f, 5491.2744f, 21.5286f, 104.9989f);
func_235(3342.201f, 5517.014f, 19.642f, 170.199f);
func_235(3343.267f, 5526.085f, 18.902f, 175.598f);
func_235(3343.531f, 5536.075f, 18.217f, 178.598f);
func_235(3357.257f, 5496.71f, 18.9729f, 132.5977f);
func_235(3342.3464f, 5473.345f, 19.1235f, 159.3987f);
func_235(3347.2363f, 5480.447f, 19.4672f, 131.199f);
func_235(3357.623f, 5516.9004f, 16.9016f, 118.7991f);
func_235(3361.366f, 5545.8857f, 15.5532f, 118.7991f);
func_235(3352.6123f, 5541.0127f, 16.3238f, 131.999f);
func_235(3343.349f, 5546.494f, 17.8738f, 173.9988f);
}
break;
case 93:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_235(43.848f, 6845.657f, 13.379f, 247.2f);
func_235(50.379f, 6861.146f, 15.105f, 247.2f);
func_235(32.501f, 6871.7773f, 13.3283f, 247.2f);
func_235(38.437f, 6885.796f, 13.3627f, 247.2f);
func_235(55.806f, 6875.081f, 14.824f, 247.2f);
func_235(11.616f, 6877.079f, 11.466f, 247.2f);
func_235(18.954f, 6891.633f, 11.37f, 247.2f);
func_235(26.68f, 6907.587f, 11.869f, 247.2f);
func_235(7.479f, 6907.895f, 12.024f, 247.2f);
func_235(44.9981f, 6901.3516f, 11.9426f, 247.2f);
}else{
func_235(35.591f, 6836.608f, 13.288f, 274.4f);
func_235(36.028f, 6830.135f, 13.801f, 270.8f);
func_235(35.114f, 6823.884f, 14.527f, 260.8f);
func_235(48.779f, 6838.693f, 14.337f, 273.6f);
func_235(56.738f, 6821.8f, 15.244f, 244.8f);
func_235(48.377f, 6825.895f, 14.656f, 249.8f);
func_235(49.11f, 6831.439f, 13.991f, 274.8f);
func_235(53.544f, 6818.275f, 16.342f, 243f);
func_235(46.162f, 6821.945f, 15.483f, 249.8f);
func_235(60.129f, 6836.8f, 15.605f, 269.6f);
func_235(40.88f, 6802.952f, 20.113f, 242.6f);
func_235(48.203f, 6799.134f, 20.897f, 244.4f);
func_235(70.449f, 6809.271f, 16.846f, 243f);
func_235(61.436f, 6814.266f, 16.71f, 244.2f);
func_235(56.142f, 6793.458f, 19.806f, 242.6f);
func_235(65.759f, 6791.12f, 18.433f, 276.4f);
func_235(77.305f, 6805.391f, 18.558f, 245.6f);
func_235(85.893f, 6800.243f, 18.535f, 249.8f);
func_235(56.85f, 6780.582f, 18.822f, 297.999f);
func_235(65.636f, 6784.669f, 18.789f, 293.799f);
func_235(74.121f, 6788.498f, 18.739f, 293.799f);
func_235(97.779f, 6796.32f, 19.02f, 276.799f);
func_235(106.76f, 6796.983f, 18.914f, 272.599f);
func_235(112.387f, 6802.858f, 18.994f, 210.599f);
func_235(117.58f, 6802.644f, 18.663f, 209.399f);
func_235(122.481f, 6802.693f, 18.468f, 209.399f);
func_235(127.182f, 6802.686f, 18.218f, 209.399f);
func_235(132.429f, 6801.882f, 17.949f, 209.399f);
}
break;
case 94:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_235(-2213.5515f, 2283.7258f, 31.7464f, 293.7993f);
func_235(-2196.7097f, 2290.824f, 32.0819f, 293.7993f);
func_235(-2232.397f, 2274.252f, 31.602f, 296.7993f);
func_235(-2180.471f, 2296.2056f, 32.9612f, 287.5992f);
func_235(-2180.8704f, 2419.6492f, 0.2324f, 147.7987f);
func_235(-2180.1663f, 2436.9097f, 0.2325f, 144.5987f);
func_235(-2185.2708f, 2457.022f, 0.2062f, 160.1985f);
func_235(-2329.4646f, 2393.6028f, 2.5699f, 289.7982f);
func_235(-2328.9775f, 2380.4062f, 2.7911f, 289.7982f);
func_235(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
}else{
func_235(-2239.671f, 2390.2925f, 10.756f, 189.2002f);
func_235(-2217.4128f, 2392.4712f, 12.2202f, 189.2002f);
func_235(-2238.863f, 2381.5598f, 13.1388f, 185.2003f);
func_235(-2215.6948f, 2383.0352f, 14.9809f, 189.4004f);
func_235(-2238.044f, 2372.67f, 15.07f, 187.4004f);
func_235(-2215.9604f, 2374.2507f, 17.0939f, 187.4004f);
func_235(-2237.494f, 2364.4673f, 15.3155f, 186.2004f);
func_235(-2216.8572f, 2365.651f, 18.9029f, 173.0005f);
func_235(-2218.5264f, 2357.0654f, 20.7893f, 179.0004f);
func_235(-2237.6248f, 2348.108f, 20.9097f, 179.0004f);
func_235(-2218.4473f, 2348.7327f, 22.9621f, 179.0004f);
func_235(-2238.1797f, 2339.141f, 22.5602f, 174.8003f);
func_235(-2218.7705f, 2340.1313f, 25.5237f, 177.2002f);
func_235(-2238.9978f, 2330.9585f, 25.7263f, 175.8005f);
func_235(-2219.2214f, 2331.9338f, 28.5604f, 177.8006f);
func_235(-2219.0774f, 2324.0657f, 30.9043f, 198.8006f);
func_235(-2239.4126f, 2322.913f, 28.0647f, 177.8008f);
func_235(-2240.014f, 2313.9507f, 29.5314f, 170.6008f);
func_235(-2241.5435f, 2305.8186f, 30.7136f, 163.4006f);
func_235(-2244.9043f, 2298.3877f, 31.4166f, 148.2005f);
func_235(-2249.3103f, 2290.8918f, 31.5742f, 139.2004f);
func_235(-2211.8962f, 2319.5813f, 31.7538f, 259.4002f);
func_235(-2203.961f, 2320.0159f, 31.9895f, 271.4001f);
func_235(-2255.1057f, 2285.4148f, 31.617f, 130.3999f);
func_235(-2196.1704f, 2320.341f, 32.2704f, 270.6003f);
func_235(-2261.3352f, 2280.2034f, 31.6562f, 130.0002f);
func_235(-2268.4468f, 2275.5276f, 31.7095f, 124.4001f);
func_235(-2188.258f, 2319.9846f, 32.5649f, 267.3998f);
}
break;
case 95:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_235(4.0332f, 3378.618f, 41.0822f, 247.1989f);
func_235(38.819f, 3321.2f, 37.0283f, 203.999f);
func_235(26.877f, 3309.062f, 37.93f, 191.9991f);
func_235(15.6727f, 3297.8457f, 39.0535f, 191.9991f);
func_235(-24.2865f, 3367.5269f, 41.4783f, 264.399f);
func_235(-23.1279f, 3352.254f, 40.52f, 280.399f);
func_235(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
func_235(97.4844f, 3335.3853f, 34.6164f, 7.9981f);
func_235(20.409f, 3370.8386f, 38.8393f, 235.799f);
func_235(48.457f, 3336.5862f, 35.8912f, 270.3979f);
}else{
func_235(25.9869f, 3349.7063f, 36.0366f, 273.9994f);
func_235(25.0176f, 3356.9146f, 36.4258f, 276.9998f);
func_235(36.2443f, 3351.3584f, 36.2386f, 272.5997f);
func_235(35.9352f, 3358.8157f, 37.0033f, 276.7998f);
func_235(25.9651f, 3342.673f, 36.2157f, 270.7997f);
func_235(30.027f, 3292.351f, 38.604f, 140.199f);
func_235(49.1614f, 3358.5894f, 35.9759f, 263.5988f);
func_235(48.288f, 3352.494f, 35.5841f, 261.1988f);
func_235(23.897f, 3283.152f, 39.381f, 145.399f);
func_235(60.9182f, 3356.2102f, 35.8814f, 255.3988f);
func_235(18.723f, 3274.025f, 40.054f, 155.799f);
func_235(59.0177f, 3350.0044f, 35.3204f, 255.7989f);
func_235(36.958f, 3298.847f, 38.001f, 127.799f);
func_235(54.165f, 3311.582f, 36.517f, 303.799f);
func_235(61.607f, 3317.105f, 35.916f, 306.999f);
func_235(68.994f, 3323.129f, 35.364f, 308.199f);
func_235(76.266f, 3329.467f, 34.805f, 311.399f);
func_235(82.757f, 3335.915f, 34.344f, 316.598f);
func_235(46.5977f, 3306.196f, 37.1628f, 304.9976f);
func_235(14.664f, 3263.688f, 40.931f, 160.398f);
func_235(50.8234f, 3324.118f, 36.2129f, 305.1976f);
func_235(11.7852f, 3256.1008f, 41.7031f, 159.198f);
func_235(89.575f, 3343.311f, 33.932f, 318.398f);
func_235(58.4154f, 3329.4229f, 35.6197f, 305.5979f);
func_235(65.3201f, 3334.253f, 35.1903f, 306.5977f);
func_235(72.1063f, 3339.7927f, 34.8449f, 308.5977f);
func_235(95.6614f, 3349.9172f, 33.696f, 316.1977f);
func_235(85.4387f, 3353.1833f, 33.8047f, 317.9978f);
}
break;
case 96:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_235(2135.708f, 1757.503f, 102.073f, 40.999f);
func_235(2148.674f, 1764.557f, 102.75f, 40.999f);
func_235(2160.511f, 1771.173f, 104.149f, 40.999f);
func_235(2172.842f, 1777.391f, 105.369f, 40.999f);
func_235(2127.938f, 1736.353f, 100.835f, 222.199f);
func_235(2141.682f, 1739.865f, 99.833f, 222.199f);
func_235(2152.786f, 1747.776f, 99.785f, 222.199f);
func_235(2166.356f, 1754.682f, 100.07f, 220.399f);
func_235(2090.66f, 1701.805f, 101.681f, 243.199f);
func_235(2066.149f, 1716.735f, 102.112f, 228.2f);
}else{
func_235(2073.0442f, 1725.9348f, 102.5096f, 225.2f);
func_235(2077.2405f, 1730.2992f, 102.5247f, 225.2f);
func_235(2081.68f, 1734.7421f, 102.5588f, 225.2f);
func_235(2086.0515f, 1739.0446f, 102.6618f, 225.2f);
func_235(2090.55f, 1743.53f, 102.6058f, 225.2f);
func_235(2095.2947f, 1748.2742f, 102.3022f, 225.2f);
func_235(2101.779f, 1721.807f, 101.927f, 225.2f);
func_235(2107.08f, 1727.001f, 101.932f, 225.2f);
func_235(2095.867f, 1716.475f, 101.925f, 225.2f);
func_235(2112.387f, 1732.492f, 101.849f, 225.2f);
func_235(2089.718f, 1710.779f, 101.978f, 225.2f);
func_235(2111.639f, 1717.132f, 100.855f, 225.2f);
func_235(2117.297f, 1722.655f, 100.704f, 225.2f);
func_235(2105.821f, 1711.672f, 101.065f, 225.2f);
func_235(2098.759f, 1704.866f, 101.209f, 225.2f);
func_235(2121.208f, 1713.145f, 99.65f, 225.2f);
func_235(2115.34f, 1707.542f, 99.829f, 225.2f);
func_235(2109.211f, 1702.247f, 100.079f, 225.2f);
func_235(2124.167f, 1704.036f, 98.584f, 225.2f);
func_235(2118.181f, 1698.253f, 98.645f, 225.2f);
func_235(2127.253f, 1694.878f, 97.078f, 225.2f);
func_235(2117.786f, 1738.219f, 101.839f, 225.2f);
func_235(2122.34f, 1728.011f, 100.627f, 225.2f);
func_235(2126.288f, 1718.542f, 99.501f, 225.2f);
func_235(2129.762f, 1709.847f, 98.352f, 225.2f);
func_235(2132.765f, 1700.777f, 96.999f, 225.2f);
func_235(2120.399f, 1689.165f, 97.388f, 225.2f);
func_235(2098.9944f, 1747.9292f, 102.2403f, 225.2f);
}
break;
case 97:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_235(1871.6914f, 358.5369f, 162.1067f, 153.1979f);
func_235(1858.9664f, 351.2935f, 161.7614f, 166.598f);
func_235(1873.6115f, 342.6637f, 161.6936f, 142.998f);
func_235(1887.6447f, 343.1557f, 162.1659f, 138.5979f);
func_235(1888.6436f, 328.0839f, 161.7489f, 139.398f);
func_235(1898.5963f, 315.2232f, 161.4418f, 173.7979f);
func_235(1896.7292f, 266.5388f, 161.1619f, 113.5978f);
func_235(1900.1672f, 281.3884f, 161.7807f, 115.197f);
func_235(1856.2855f, 294.624f, 161.442f, 167.9966f);
func_235(1868.6218f, 309.7907f, 162.6084f, 155.1968f);
}else{
func_235(1856.3777f, 255.9146f, 162.7158f, 147.6202f);
func_235(1837.2792f, 227.3696f, 165.2592f, 164.3995f);
func_235(1835.1923f, 219.3931f, 167.5468f, 169.9994f);
func_235(1833.5565f, 211.859f, 169.864f, 169.9994f);
func_235(1839.5338f, 194.4053f, 171.3841f, 172.9989f);
func_235(1838.2894f, 185.8157f, 171.2585f, 174.1989f);
func_235(1837.4781f, 177.0607f, 170.7063f, 174.1989f);
func_235(1840.4631f, 202.6959f, 170.8702f, 174.1989f);
func_235(1836.2964f, 168.7307f, 170.5786f, 174.1989f);
func_235(1835.412f, 159.3162f, 170.4163f, 171.1989f);
func_235(1826.9104f, 214.9648f, 172.2502f, 18.7986f);
func_235(1823.8047f, 223.0288f, 172.0794f, 21.7986f);
func_235(1820.599f, 231.144f, 172.2987f, 21.7986f);
func_235(1817.2448f, 239.1232f, 172.0878f, 21.7986f);
func_235(1814.0886f, 247.0423f, 171.7386f, 24.9986f);
func_235(1810.8789f, 255.6553f, 171.7517f, 19.3986f);
func_235(1807.7288f, 265.4899f, 172.2307f, 15.1986f);
func_235(1823.1471f, 197.3122f, 172.235f, 192.3984f);
func_235(1824.6414f, 184.4241f, 171.5948f, 183.3985f);
func_235(1825.019f, 171.2314f, 170.5843f, 183.3985f);
func_235(1824.7476f, 162.8998f, 170.4961f, 173.1985f);
func_235(1817.3447f, 214.6964f, 172.5223f, 203.9982f);
func_235(1813.4656f, 222.3717f, 172.3316f, 200.9982f);
func_235(1809.1141f, 230.8225f, 172.346f, 205.1983f);
func_235(1805.5945f, 239.3896f, 172.0033f, 197.9984f);
func_235(1802.5154f, 247.4269f, 171.8964f, 197.9984f);
func_235(1833.982f, 150.4025f, 170.411f, 163.7985f);
func_235(1823.0791f, 154.5105f, 170.8194f, 163.7985f);
}
break;
case 123:
case 124:
case 125:
func_221(896.357f, -3.23695f, 77.7645f, 147.3987f, hParam1, false);
func_221(899.759f, -5.54885f, 77.7645f, 147.3987f, hParam1, false);
func_221(903.021f, -7.62495f, 77.7645f, 147.3987f, hParam1, false);
func_221(906.474f, -9.70314f, 77.7645f, 147.3987f, hParam1, false);
func_221(909.884f, -11.888f, 77.7645f, 147.3987f, hParam1, false);
func_221(913.209f, -14.0965f, 77.7645f, 147.3987f, hParam1, false);
func_221(879.578f, 7.26725f, 77.7646f, 147.3987f, hParam1, false);
func_221(876.642f, 9.05555f, 77.7646f, 147.3987f, hParam1, false);
func_221(873.534f, 10.8622f, 77.7646f, 147.3987f, hParam1, false);
func_221(869.685f, -7.55887f, 77.7646f, 237.3985f, hParam1, false);
func_221(867.866f, -10.464f, 77.7646f, 237.3985f, hParam1, false);
func_221(866.077f, -13.4579f, 77.7646f, 237.3985f, hParam1, false);
func_221(864.322f, -16.4335f, 77.7646f, 237.3985f, hParam1, false);
func_221(862.534f, -19.2652f, 77.7644f, 237.3985f, hParam1, false);
func_221(887.524f, -18.7251f, 77.7647f, 237.3985f, hParam1, false);
func_221(885.594f, -21.7041f, 77.7647f, 237.3985f, hParam1, false);
func_221(883.691f, -24.7685f, 77.7647f, 237.3985f, hParam1, false);
func_221(881.827f, -27.7084f, 77.7644f, 237.3985f, hParam1, false);
func_221(880.013f, -30.5612f, 77.7644f, 237.3985f, hParam1, false);
func_221(884.931f, -17.2169f, 77.7646f, 57.5983f, hParam1, false);
func_221(883.043f, -20.1063f, 77.7646f, 57.5983f, hParam1, false);
func_221(881.118f, -22.9962f, 77.7644f, 57.5983f, hParam1, false);
func_221(879.345f, -25.9389f, 77.7644f, 57.5983f, hParam1, false);
func_221(877.631f, -28.8543f, 77.7644f, 57.5983f, hParam1, false);
func_221(903.231f, -28.6965f, 77.7647f, 57.5983f, hParam1, false);
func_221(901.368f, -31.6316f, 77.7647f, 57.5983f, hParam1, false);
func_221(899.552f, -34.4844f, 77.7647f, 57.5983f, hParam1, false);
func_221(897.669f, -37.4419f, 77.7647f, 57.5983f, hParam1, false);
func_221(895.831f, -40.3309f, 77.7647f, 57.5983f, hParam1, false);
func_221(932.842f, -25.6631f, 77.7647f, 147.798f, hParam1, false);
func_221(935.693f, -27.516f, 77.7647f, 147.798f, hParam1, false);
func_221(938.593f, -29.5809f, 77.7647f, 147.798f, hParam1, false);
break;
default:
break;
}
return;
}


void func_221(float fParam0, float fParam1, float fParam2, float fParam3, Hash hParam4, BOOL bParam5) // Position - 0x14370{
var unk;
var unk4;
float num;
Vector3 vector;
var offsetFromCoordAndHeadingInWorldCoords;
if(!hParam4==0){
func_120(hParam4, &unk, &unk4, 1086324736, 1080033280, 1077936128);
num=unk4.f_1 - unk.f_1;
if(bParam5) num=num * -1f;
num=num * 0.5f;
vector={
0f, num, 0f 
};
offsetFromCoordAndHeadingInWorldCoords={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(fParam0, fParam3, vector) 
};
func_235(offsetFromCoordAndHeadingInWorldCoords, fParam3);
}else{
func_235(fParam0, fParam3);
}
return;
}


void func_222(int iParam0) // Position - 0x143EA{
switch (iParam0){
case 83:
func_235(-1133.454f, -3371.672f, 12.945f, 329.799f);
func_235(-1119.748f, -3379.991f, 12.945f, 329.799f);
func_235(-1147.602f, -3363.505f, 12.945f, 329.799f);
func_235(-1161.988f, -3354.852f, 12.945f, 329.799f);
func_235(-1116.563f, -3358.99f, 12.945f, 329.799f);
func_235(-1131.23f, -3350.104f, 12.945f, 329.799f);
func_235(-1145.252f, -3341.608f, 12.945f, 329.799f);
func_235(-1115.202f, -3339.265f, 12.945f, 329.799f);
func_235(-1129.559f, -3330.697f, 12.945f, 329.799f);
func_235(-1114.664f, -3320.954f, 12.945f, 329.799f);
func_235(-1199.923f, -3369.502f, 12.945f, 350.399f);
func_235(-1212.069f, -3363.568f, 12.945f, 350.399f);
func_235(-1223.637f, -3356.694f, 12.945f, 350.399f);
func_235(-1102.284f, -3420.613f, 12.945f, 354.599f);
func_235(-1091.131f, -3427.396f, 12.945f, 354.599f);
func_235(-1079.372f, -3434.306f, 12.945f, 354.599f);
func_235(-1067.498f, -3441.878f, 13.114f, 354.599f);
func_235(-1055.714f, -3448.819f, 12.977f, 354.599f);
func_235(-1043.37f, -3455.796f, 13.146f, 354.599f);
func_235(-1017.023f, -3382.7773f, 12.8401f, 330.6f);
func_235(-1010.6078f, -3386.1028f, 12.8401f, 330.6f);
func_235(-1004.6581f, -3389.8232f, 12.8401f, 330.6f);
func_235(-998.3798f, -3393.6443f, 12.8401f, 330.6f);
func_235(-991.5242f, -3397.297f, 12.8401f, 330.6f);
func_235(-985.0826f, -3401.2468f, 12.8401f, 330.6f);
func_235(-978.2733f, -3405.0312f, 12.8401f, 330.6f);
func_235(-971.724f, -3409.109f, 12.8401f, 330.6f);
func_235(-964.4719f, -3413.2021f, 13.1463f, 330.6f);
func_235(-1022.9401f, -3392.3716f, 12.8401f, 330.6f);
func_235(-1016.2192f, -3395.8198f, 12.8401f, 330.6f);
func_235(-1009.873f, -3399.143f, 12.8401f, 330.6f);
func_235(-1003.4357f, -3402.9822f, 12.8401f, 330.6f);
func_235(-997.0872f, -3406.928f, 12.8401f, 330.6f);
func_235(-990.2305f, -3410.5476f, 12.8401f, 330.6f);
func_235(-983.4429f, -3414.0933f, 12.8401f, 330.6f);
func_235(-976.8809f, -3417.8457f, 12.8401f, 330.6f);
func_235(-969.4039f, -3421.7268f, 13.1463f, 330.6f);
func_235(-1028.2509f, -3401.834f, 12.8401f, 330.6f);
func_235(-1021.6307f, -3405.433f, 12.8401f, 330.6f);
func_235(-1015.2093f, -3408.5625f, 12.8401f, 330.6f);
func_235(-1008.8096f, -3412.4836f, 12.8401f, 330.6f);
func_235(-1002.2773f, -3415.9873f, 12.8401f, 330.6f);
func_235(-995.7023f, -3419.9705f, 12.8401f, 330.6f);
func_235(-989.1453f, -3423.9883f, 12.8401f, 330.6f);
func_235(-982.6298f, -3427.9812f, 12.8401f, 330.6f);
func_235(-974.9305f, -3431.8328f, 13.1463f, 330.6f);
break;
case 84:
func_235(-1356.991f, -3242.228f, 12.945f, 330f);
func_235(-1369.313f, -3234.758f, 12.945f, 330f);
func_235(-1381.751f, -3227.408f, 12.945f, 330f);
func_235(-1394.302f, -3220.021f, 12.945f, 330f);
func_235(-1354.339f, -3223.129f, 12.945f, 330f);
func_235(-1366.302f, -3215.809f, 12.945f, 330f);
func_235(-1378.492f, -3208.645f, 12.945f, 330f);
func_235(-1350.322f, -3203.405f, 12.945f, 330f);
func_235(-1362.684f, -3196.451f, 12.945f, 330f);
func_235(-1347.089f, -3182.69f, 12.945f, 330f);
func_235(-1452.642f, -3222.367f, 12.945f, 347.799f);
func_235(-1464.229f, -3215.108f, 12.945f, 347.799f);
func_235(-1476.133f, -3207.652f, 12.945f, 347.799f);
func_235(-1488.295f, -3200.033f, 12.945f, 347.799f);
func_235(-1336.877f, -3272.344f, 12.945f, 8.199f);
func_235(-1323.381f, -3279.614f, 12.945f, 8.199f);
func_235(-1309.671f, -3287.749f, 12.945f, 8.199f);
func_235(-1296.963f, -3294.511f, 12.945f, 8.199f);
func_235(-1501.978f, -3193.849f, 12.945f, 350.599f);
func_235(-1344.7162f, -3288.3333f, 12.9445f, 331.2f);
func_235(-1338.1412f, -3290.3352f, 12.9445f, 331.2f);
func_235(-1331.473f, -3294.1785f, 12.9445f, 331.2f);
func_235(-1324.9207f, -3297.9976f, 12.9445f, 331.2f);
func_235(-1318.1293f, -3301.9568f, 12.9445f, 331.2f);
func_235(-1350.4662f, -3294.226f, 12.9445f, 331.2f);
func_235(-1343.482f, -3297.5762f, 12.9445f, 331.2f);
func_235(-1336.3976f, -3302.4556f, 12.9445f, 331.2f);
func_235(-1329.8203f, -3306.8196f, 12.945f, 331.2f);
func_235(-1322.7612f, -3310.3525f, 12.945f, 331.2f);
func_235(-1316.5869f, -3314.5557f, 12.945f, 331.2f);
func_235(-1326.5376f, -3318.499f, 12.945f, 331.2f);
func_235(-1335.7401f, -3313.6777f, 12.945f, 331.2f);
func_235(-1350.8479f, -3302.6187f, 12.9446f, 331.2f);
func_235(-1357.9606f, -3306.8862f, 12.945f, 331.2f);
func_235(-1335.2017f, -3322.4285f, 12.9452f, 331.2f);
func_235(-1351.4011f, -3311.566f, 12.9452f, 331.2f);
func_235(-1344.2549f, -3305.965f, 12.9451f, 331.2f);
func_235(-1299.8324f, -3305.5732f, 12.945f, 331.2f);
func_235(-1293.4141f, -3309.4128f, 12.945f, 331.2f);
func_235(-1286.8353f, -3313.1567f, 12.945f, 331.2f);
func_235(-1303.9878f, -3313.0999f, 12.945f, 331.2f);
func_235(-1297.4025f, -3316.699f, 12.945f, 331.2f);
func_235(-1290.9685f, -3320.5193f, 12.945f, 331.2f);
func_235(-1308.2695f, -3320.6118f, 12.945f, 331.2f);
func_235(-1301.9681f, -3324.7139f, 12.945f, 331.2f);
func_235(-1295.4827f, -3328.4216f, 12.945f, 331.2f);
break;
case 85:
func_235(-2039.992f, 3132.191f, 31.81f, 149.399f);
func_235(-2025.075f, 3128.63f, 31.81f, 197.599f);
func_235(-2049.589f, 3142.464f, 31.81f, 109.199f);
func_235(-2088.648f, 3081.327f, 31.81f, 150.599f);
func_235(-2070.669f, 3111.575f, 31.81f, 123.399f);
func_235(-2053.385f, 3109.703f, 31.81f, 150.599f);
func_235(-2044.448f, 3094.012f, 31.81f, 181.799f);
func_235(-2071.825f, 3093.477f, 31.81f, 150.599f);
func_235(-2060.579f, 3085.924f, 31.81f, 150.599f);
func_235(-2062.712f, 3066.073f, 31.81f, 150.599f);
func_235(-2094.385f, 3190.445f, 31.81f, 117.799f);
func_235(-2083.056f, 3182.885f, 31.81f, 117.799f);
func_235(-2071.578f, 3175.554f, 31.81f, 117.799f);
func_235(-2120.249f, 3173.97f, 31.81f, 25.199f);
func_235(-2067.547f, 3146.325f, 31.81f, 14.998f);
func_235(-2080.506f, 3154.591f, 31.81f, 15.798f);
func_235(-2093.278f, 3159.793f, 31.81f, 14.798f);
func_235(-2106.614f, 3167.605f, 31.81f, 21.198f);
func_235(-2106.347f, 3196.902f, 31.81f, 117.799f);
func_235(-2024.4253f, 3102.7073f, 31.8103f, 150.7997f);
func_235(-2018.0736f, 3099.056f, 31.8103f, 150.7997f);
func_235(-2009.0316f, 3094.1711f, 31.8103f, 150.7997f);
func_235(-2002.9235f, 3090.6692f, 31.8103f, 150.7997f);
func_235(-1996.5417f, 3087.2014f, 31.8103f, 150.7997f);
func_235(-1990.2324f, 3083.5342f, 31.8103f, 150.7997f);
func_235(-1983.5184f, 3080.0334f, 31.8103f, 150.7997f);
func_235(-2029.1602f, 3094.3572f, 31.8103f, 150.7997f);
func_235(-2022.4309f, 3090.7034f, 31.8103f, 150.7997f);
func_235(-2013.7017f, 3086.0151f, 31.8103f, 150.7997f);
func_235(-2007.6703f, 3082.42f, 31.8103f, 150.7997f);
func_235(-2001.2112f, 3078.5693f, 31.8103f, 150.7997f);
func_235(-1994.6436f, 3074.6538f, 31.8103f, 150.7997f);
func_235(-1987.9342f, 3070.6543f, 31.8103f, 150.7997f);
func_235(-2033.7764f, 3086.0315f, 31.8103f, 150.7997f);
func_235(-2026.9293f, 3082.094f, 31.8103f, 150.7997f);
func_235(-2018.663f, 3077.3406f, 31.8103f, 150.7997f);
func_235(-2012.3446f, 3073.7073f, 31.8103f, 150.7997f);
func_235(-2006.0515f, 3070.0894f, 31.8103f, 150.7997f);
func_235(-1999.1693f, 3066.1316f, 31.8103f, 150.7997f);
func_235(-1992.5424f, 3062.2566f, 31.8103f, 150.7997f);
func_235(-2038.5449f, 3077.3445f, 31.8103f, 150.7997f);
func_235(-2031.5873f, 3073.3438f, 31.8103f, 150.7997f);
func_235(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
func_235(-2012.8864f, 3063.2188f, 31.8103f, 150.7997f);
func_235(-2003.4811f, 3057.141f, 31.8103f, 150.7997f);
func_235(-1996.6183f, 3053.1948f, 31.8103f, 150.7997f);
break;
case 86:
func_235(-1885.1868f, 3095.3445f, 31.81f, 150.2f);
func_235(-1898.637f, 3072.816f, 31.811f, 150.2f);
func_235(-1886.469f, 3065.78f, 31.811f, 150.2f);
func_235(-1874.621f, 3058.437f, 31.81f, 150.2f);
func_235(-1862.818f, 3051.244f, 31.81f, 150.2f);
func_235(-1915.317f, 3041.652f, 31.811f, 150.2f);
func_235(-1896.724f, 2997.848f, 31.81f, 150.2f);
func_235(-1932.975f, 3011.781f, 31.81f, 150.2f);
func_235(-1875.668f, 3034.438f, 31.811f, 150.2f);
func_235(-1886.144f, 3016.285f, 31.81f, 150.2f);
func_235(-1913.706f, 3104.196f, 31.81f, 118.599f);
func_235(-1925.44f, 3112.236f, 31.81f, 118.599f);
func_235(-1938.08f, 3119.383f, 31.81f, 118.599f);
func_235(-1927.822f, 3072.679f, 31.81f, 13.399f);
func_235(-1940.575f, 3079.031f, 31.81f, 13.399f);
func_235(-1953.344f, 3084.888f, 31.81f, 13.399f);
func_235(-1965.91f, 3091.929f, 31.81f, 13.399f);
func_235(-1978.86f, 3100.029f, 31.81f, 13.399f);
func_235(-1950.928f, 3126.457f, 31.81f, 118.999f);
func_235(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
func_235(-1969.3618f, 3079.9094f, 31.8103f, 150.1997f);
func_235(-1963.6726f, 3076.8867f, 31.8103f, 150.1997f);
func_235(-1958.5238f, 3073.8992f, 31.8103f, 150.1997f);
func_235(-1979.8282f, 3074.704f, 31.8103f, 150.1997f);
func_235(-1973.9005f, 3071.4185f, 31.8103f, 150.1997f);
func_235(-1967.9165f, 3068.089f, 31.8103f, 150.1997f);
func_235(-1949.9164f, 3068.72f, 31.8103f, 150.1997f);
func_235(-1961.9336f, 3064.5999f, 31.8103f, 150.1997f);
func_235(-1984.3324f, 3067.03f, 31.8103f, 150.1997f);
func_235(-1978.182f, 3063.2861f, 31.8103f, 150.1997f);
func_235(-1972.0605f, 3060.1907f, 31.8103f, 150.1997f);
func_235(-1952.6101f, 3059.5513f, 31.8103f, 150.1997f);
func_235(-1956.9585f, 3051.5894f, 31.8103f, 150.1997f);
func_235(-1988.7778f, 3059.1355f, 31.8103f, 150.1997f);
func_235(-1982.174f, 3055.5908f, 31.8103f, 150.1997f);
func_235(-1975.5795f, 3051.8984f, 31.8103f, 150.1997f);
func_235(-1969.1392f, 3048.2803f, 31.8103f, 150.1997f);
func_235(-1962.2495f, 3044.2559f, 31.8103f, 150.1997f);
func_235(-1989.4796f, 3050.4673f, 31.8103f, 150.1997f);
func_235(-1977.3248f, 3043.7864f, 31.8103f, 150.1997f);
func_235(-1971.0696f, 3040.306f, 31.8103f, 150.1997f);
func_235(-1964.4087f, 3037.1184f, 31.8103f, 150.1997f);
func_235(-1998.3752f, 3042.3486f, 31.8103f, 150.1997f);
func_235(-1991.7688f, 3038.47f, 31.8103f, 150.1997f);
func_235(-1978.7179f, 3035.164f, 31.8103f, 150.1997f);
func_235(-1971.4832f, 3031.3157f, 31.8103f, 150.1997f);
break;
case 87:
func_235(-2484.323f, 3249.294f, 31.828f, 151f);
func_235(-2495.313f, 3255.746f, 31.828f, 151f);
func_235(-2472.644f, 3242.684f, 31.828f, 151f);
func_235(-2506.313f, 3262.27f, 31.823f, 151f);
func_235(-2461.494f, 3235.93f, 31.828f, 151f);
func_235(-2505.602f, 3238.049f, 31.828f, 151f);
func_235(-2481.937f, 3224.8f, 31.828f, 151f);
func_235(-2516.813f, 3244.266f, 31.823f, 151f);
func_235(-2470.03f, 3217.899f, 31.828f, 151f);
func_235(-2493.933f, 3231.308f, 31.828f, 151f);
func_235(-2443.467f, 3227.753f, 31.828f, 175.8f);
func_235(-2431.365f, 3220.9f, 31.828f, 175.8f);
func_235(-2419.883f, 3214.708f, 31.828f, 175.8f);
func_235(-2501.903f, 3272.865f, 31.822f, 123.999f);
func_235(-2513.555f, 3280.176f, 31.817f, 123.999f);
func_235(-2524.776f, 3287.276f, 31.973f, 123.999f);
func_235(-2407.718f, 3208.055f, 31.827f, 176.199f);
func_235(-2395.689f, 3201.125f, 31.827f, 176.199f);
func_235(-2383.498f, 3194.211f, 31.833f, 176.199f);
func_235(-2426.2195f, 3238.211f, 31.8616f, 150.5996f);
func_235(-2419.0515f, 3233.8662f, 31.8726f, 150.5996f);
func_235(-2412.0686f, 3229.8538f, 31.8859f, 150.5996f);
func_235(-2405.2817f, 3225.8093f, 31.8841f, 150.5996f);
func_235(-2398.6238f, 3222.135f, 31.9249f, 150.5996f);
func_235(-2391.7288f, 3218.2295f, 31.9354f, 150.5996f);
func_235(-2384.7268f, 3214.5242f, 31.9585f, 150.5996f);
func_235(-2377.55f, 3210.4607f, 31.9192f, 150.5996f);
func_235(-2369.9604f, 3205.8352f, 31.8267f, 150.5996f);
func_235(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
func_235(-2397.4807f, 3232.3745f, 31.9879f, 150.5996f);
func_235(-2390.5237f, 3228.1255f, 31.9758f, 150.5996f);
func_235(-2383.9856f, 3223.9946f, 31.986f, 150.5996f);
func_235(-2377.176f, 3219.6948f, 31.9615f, 150.5996f);
func_235(-2370.5244f, 3215.946f, 32.002f, 150.5996f);
func_235(-2400.2302f, 3243.846f, 31.8311f, 150.5996f);
func_235(-2393.2798f, 3240.281f, 32.0164f, 150.5996f);
func_235(-2386.3555f, 3236.8193f, 32.0616f, 150.5996f);
func_235(-2379.3818f, 3232.7395f, 32.0318f, 150.5996f);
func_235(-2372.314f, 3229.1956f, 32.0177f, 150.5996f);
func_235(-2365.1528f, 3225.7322f, 32.0145f, 150.5996f);
func_235(-2395.04f, 3252.6436f, 31.8557f, 150.5996f);
func_235(-2388.6838f, 3249.0916f, 32.0198f, 150.5996f);
func_235(-2382.1272f, 3245.0447f, 32.0086f, 150.5996f);
func_235(-2374.9053f, 3240.9375f, 32.0085f, 150.5996f);
func_235(-2368.1396f, 3237.3276f, 32.0177f, 150.5996f);
func_235(-2361.068f, 3233.3955f, 31.9573f, 150.5996f);
break;
default:
break;
}
return;
}
BOOL func_223(Hash hParam0) // Position - 0x159B9{
switch (hParam0){
case joaat("microlight"):
case joaat("havok"):
case joaat("seabreeze"):
case joaat("rogue"):
case joaat("pyro"):
case joaat("buzzard"):
case joaat("frogger"):
case joaat("maverick"):
case joaat("supervolito"):
case joaat("supervolito2"):
case joaat("volatus"):
case joaat("cuban800"):
case joaat("besra"):
case joaat("duster"):
case joaat("stunt"):
case joaat("velum"):
case joaat("velum2"):
case joaat("vestra"):
case joaat("lazer"):
case joaat("alphaz1"):
case joaat("howard"):
case joaat("molotok"):
case joaat("nokota"):
case joaat("starling"):
case joaat("conada"):
return true;
default:
}
return false;
}


void func_224(int iParam0) // Position - 0x15A63{
switch (iParam0){
case 83:
case 84:
func_235(-947.712f, -3367.704f, 12.944f, 60f);
func_235(-904.692f, -3293.072f, 12.944f, 60f);
func_235(-863.71f, -3221.978f, 12.944f, 60f);
func_235(-966.418f, -3162.773f, 12.944f, 60f);
func_235(-1007.435f, -3233.93f, 12.944f, 60f);
func_235(-1050.455f, -3308.559f, 12.944f, 60f);
func_235(-1145.673f, -3253.456f, 12.944f, 60f);
func_235(-1098.386f, -3181.428f, 12.944f, 60f);
func_235(-1060.474f, -3108.903f, 12.944f, 60f);
func_235(-1155.391f, -3053.632f, 12.944f, 60f);
func_235(-1196.114f, -3125.146f, 12.948f, 60f);
func_235(-1235.552f, -3201.86f, 12.944f, 60f);
func_235(-1344.446f, -3139.177f, 12.944f, 60f);
func_235(-1301.308f, -3064.341f, 12.944f, 60f);
func_235(-1260.135f, -2992.912f, 12.944f, 60f);
func_235(-1364.244f, -2932.9f, 12.98f, 60f);
func_235(-1405.284f, -3004.108f, 12.96f, 60f);
func_235(-1448.29f, -3078.72f, 12.95f, 60f);
func_235(-1535.732f, -3028.318f, 12.945f, 60f);
func_235(-1492.639f, -2953.558f, 12.945f, 60f);
func_235(-1451.506f, -2882.2f, 12.944f, 60f);
func_235(-1553.927f, -2823.12f, 13.002f, 60f);
func_235(-1595.097f, -2894.571f, 12.944f, 60f);
func_235(-1637.836f, -2968.714f, 12.945f, 60f);
func_235(-1740.971f, -2911.484f, 12.944f, 330f);
func_235(-1696.293f, -2833.978f, 12.944f, 330f);
func_235(-1651.502f, -2756.273f, 12.945f, 330f);
func_235(-1588.258f, -2647.575f, 12.944f, 330f);
func_235(-1536.862f, -2681.378f, 12.945f, 330f);
func_235(-1529.025f, -2544.485f, 12.944f, 330f);
break;
case 85:
case 86:
case 87:
func_235(-1970.422f, 2825.696f, 31.81f, 60.4f);
func_235(-2033.307f, 2855.526f, 31.83f, 60.4f);
func_235(-2091.018f, 2888.691f, 31.81f, 60.4f);
func_235(-2206.717f, 2955.363f, 31.81f, 60.4f);
func_235(-2268.817f, 2990.846f, 31.81f, 60.4f);
func_235(-2324.039f, 3023.154f, 31.811f, 60.4f);
func_235(-2435.806f, 3087.705f, 31.824f, 60.4f);
func_235(-2543.753f, 3149.909f, 31.821f, 60.4f);
func_235(-1944.848f, 2898.798f, 31.81f, 125.398f);
func_235(-1978.705f, 2924.367f, 31.846f, 151.999f);
func_235(-2064.849f, 2955.153f, 31.867f, 151.199f);
func_235(-2106.165f, 2980.687f, 31.81f, 104.599f);
func_235(-2302.367f, 3088.676f, 31.814f, 150.598f);
func_235(-2152.113f, 2924.162f, 31.81f, 60.198f);
func_235(-2488.232f, 3118.146f, 31.822f, 59.798f);
func_235(-2277.922f, 3133.756f, 31.811f, 120.598f);
func_235(-2604.776f, 3185.186f, 31.812f, 59.998f);
func_235(-2608.107f, 3305.049f, 31.812f, 60.198f);
func_235(-2718.936f, 3323.203f, 31.81f, 201.198f);
func_235(-2658.718f, 3216.499f, 31.812f, 59.998f);
func_235(-2380.372f, 3055.341f, 31.826f, 60.4f);
func_235(-2790.616f, 3286.24f, 31.812f, 240.397f);
func_235(-2770.946f, 3322.605f, 31.812f, 240.397f);
func_235(-2678.805f, 3339.186f, 31.812f, 199.597f);
func_235(-2743.882f, 3224.094f, 31.81f, 303.397f);
func_235(-2701.354f, 3203.092f, 31.994f, 328.397f);
func_235(-2249.816f, 2944.609f, 31.937f, 330.196f);
func_235(-2586.579f, 3137.286f, 31.935f, 330.196f);
func_235(-2134.76f, 2878.728f, 31.81f, 330.196f);
func_235(-1949.075f, 2861.21f, 31.811f, 58.798f);
break;
default:
break;
}
return;
}
BOOL func_225(Hash hParam0) // Position - 0x16039{
switch (hParam0){
case joaat("hydra"):
case joaat("dodo"):
case joaat("mammatus"):
case joaat("annihilator"):
case joaat("tula"):
case joaat("hunter"):
case joaat("mogul"):
case joaat("cargobob"):
case joaat("cargobob2"):
case joaat("shamal"):
case joaat("savage"):
case joaat("luxor"):
case joaat("luxor2"):
case joaat("nimbus"):
case joaat("swift"):
case joaat("swift2"):
case joaat("valkyrie"):
case joaat("titan"):
case joaat("skylift"):
case joaat("miljet"):
case joaat("bombushka"):
case joaat("volatol"):
case joaat("alkonost"):
return true;
default:
}
return false;
}

int func_226(Ped pedParam0) // Position - 0x160D7{
if(!ENTITY::DOES_ENTITY_EXIST(pedParam0)) return 0;
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(pedParam0, true), -1308.118f, -2934.2695f, 13.7545f) < 1000f) return 1;
return 0;
}

int func_227(Ped pedParam0) // Position - 0x16115{
if(!ENTITY::DOES_ENTITY_EXIST(pedParam0)) return 0;
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(pedParam0, true), -2270.2446f, 3127.9133f, 31.8118f) < 1000f) return 1;
return 0;
}
BOOL func_228(int iParam0, int iParam1) // Position - 0x16153{
if(iParam1==-1){
switch (iParam0){
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return true;
}}elseif(iParam1==91){
switch (iParam0){
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
return true;
}}elseif(iParam1==97){
switch (iParam0){
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return true;
}}
return false;
}
BOOL func_229(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x16230{
int i;
int j;
int num;
float num2;
float num3;
num=0;
num2=50f;
for (i=1;
i <=130;
i=i + 1){
if(num < *uParam3){
j=0;
for (j=0;
j < 2;
j=j + 1){
if(SYSTEM::VDIST(fParam0, fParam0.f_1, 0f, Global_1312228[i /*1951*/].f_3[j /*3*/], Global_1312228[i /*1951*/].f_3[j /*3*/].f_1, 0f) < num2){
uParam3->[num]=i;
uParam4->[num]=0;
num=num + 1;
j=99;
}}}}
for (i=0;
i < 162;
i=i + 1){
num2=50f;
if(i >=83 && i <=87)if(func_207(i)) num2=300f;
else num2=0f;
if(i >=89 && i <=97)if(func_230(i)) num2=75f;
else num2=0f;
if(i >=123 && i <=125) num2=150f;
if(num < *uParam3){
num3=SYSTEM::VDIST(fParam0, fParam0.f_1, 0f, Global_1950108.f_542[i /*3*/], Global_1950108.f_542[i /*3*/].f_1, 0f);
if(num3 < num2){
uParam3->[num]=i;
uParam4->[num]=1;
num=num + 1;
}}}
if(num > 0) return true;
return false;
}
BOOL func_230(int iParam0) // Position - 0x16396{
int num;
Player player;
num=func_231(iParam0);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_300==num) return true;
player=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
if(player !=_INVALID_PLAYER_INDEX())if(Global_1853910[player /*862*/].f_267.f_300==num) return true;
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7==iParam0) return true;
return false;
}

int func_231(int iParam0) // Position - 0x1640A{
switch (iParam0){
case 89:
return 1;
case 90:
return 2;
case 91:
return 3;
case 92:
return 4;
case 93:
return 5;
case 94:
return 6;
case 95:
return 7;
case 96:
return 8;
case 97:
return 9;
}
return 0;
}
BOOL func_232(Hash hParam0) // Position - 0x16491{
if(VEHICLE::IS_THIS_MODEL_A_BIKE(hParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(hParam0) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(hParam0)) return true;
return false;
}


void func_233(int iParam0) // Position - 0x164BF{
switch (iParam0){
case 78:
func_235(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
func_235(-612.8933f, 692.116f, 148.7577f, 79.1005f);
func_235(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
func_235(-639.3558f, 696.9992f, 150.5134f, 77.481f);
break;
case 79:
func_235(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
func_235(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_235(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_235(-668.575f, 668.7567f, 149.4004f, 69.8844f);
break;
case 82:
func_235(382.9244f, 443.8122f, 142.9934f, 78.3408f);
func_235(391.2023f, 442.4812f, 142.5089f, 82.2125f);
func_235(400.1477f, 441.0816f, 142.0776f, 83.4259f);
func_235(414.2964f, 439.2628f, 141.5056f, 80.8689f);
break;
case 81:
func_235(-1294.6403f, 468.1975f, 96.4245f, 141.8551f);
func_235(-1300.5077f, 468.0167f, 96.8298f, 139.6287f);
func_235(-1283.8943f, 467.2136f, 95.4036f, 95.058f);
func_235(-1273.5837f, 454.4406f, 94.2269f, 30.8724f);
break;
case 73:
func_235(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
func_235(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
func_235(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
func_235(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
break;
case 75:
func_235(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
func_235(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_235(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_235(-668.575f, 668.7567f, 149.4004f, 69.8844f);
break;
case 76:
func_235(-668.575f, 668.7567f, 149.4004f, 69.8844f);
func_235(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_235(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_235(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
break;
case 77:
func_235(128.4334f, 578.7522f, 182.2934f, 106.5458f);
func_235(97.7791f, 576.8907f, 181.5599f, 91.3539f);
func_235(83.5896f, 576.4791f, 181.0832f, 89.7262f);
func_235(69.9599f, 575.9902f, 180.5019f, 91.4926f);
break;
case 80:
func_235(-872.1293f, 698.7591f, 148.5084f, 339.673f);
func_235(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
func_235(-907.3458f, 695.8158f, 150.396f, 270.6491f);
func_235(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
break;
case 87:
if(func_234()){
func_235(-1608.297f, -556.875f, 33.406f, 310f);
func_235(-1616.095f, -563.402f, 33.049f, 309.4f);
func_235(-1560.29f, -531.69f, 34.576f, 35.3994f);
func_235(-1555.303f, -538.781f, 34.044f, 35.3994f);
}else{
func_235(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
func_235(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
func_235(-1582.6805f, -534.1682f, 34.4171f, 307.8589f);
func_235(-1619.6575f, -531.5862f, 33.4254f, 128.9132f);
func_235(-1560.2571f, -532.3268f, 34.5436f, 216.0882f);
func_235(-1553.6981f, -541.3412f, 33.8662f, 215.8465f);
func_235(-1611.769f, -601.588f, 31.2908f, 50.7362f);
func_235(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
}
break;
case 88:
if(func_234()){
func_235(-1402.362f, -511.396f, 30.888f, 35.4f);
func_235(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
func_235(-1407.634f, -503.839f, 31.35f, 35.4f);
func_235(-1346.0068f, -523.3546f, 30.6339f, 125.9976f);
}else{
func_235(-1390.6045f, -528.6405f, 29.8387f, 35.4572f);
func_235(-1357.0851f, -531.4611f, 29.7218f, 125.0906f);
func_235(-1346.2356f, -523.9114f, 30.6f, 124.7302f);
func_235(-1337.8523f, -518.1096f, 31.2329f, 124.6998f);
func_235(-1336.3901f, -556.0637f, 29.7514f, 33.8088f);
func_235(-1340.2145f, -508.9828f, 31.4089f, 98.7714f);
func_235(-1348.6066f, -510.3536f, 30.9263f, 99.2425f);
func_235(-1380.7642f, -536.3867f, 29.3128f, 63.6203f);
}
break;
case 89:
if(func_234()){
func_235(-102.737f, -597.379f, 35.053f, 160.999f);
func_235(-97.793f, -589.568f, 35.082f, 134.799f);
func_235(-110.357f, -619.402f, 35.055f, 160.599f);
func_235(-112.561f, -627.723f, 35.046f, 165.399f);
}else{
func_235(-108.2604f, -613.6386f, 35.055f, 160.8063f);
func_235(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
func_235(-112.84f, -629.6357f, 35.0662f, 174.9843f);
func_235(-98.7403f, -590.3209f, 35.075f, 139.7632f);
func_235(-98.3748f, -612.642f, 35.137f, 161.1124f);
func_235(-92.595f, -595.4065f, 35.1888f, 161.3083f);
func_235(-104.4742f, -630.1472f, 35.1396f, 161.184f);
func_235(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
}
break;
case 90:
if(func_234()){
func_235(-59.349f, -779.238f, 43.134f, 228.398f);
func_235(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
func_235(-65.212f, -772.66f, 43.151f, 219.398f);
func_235(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
}else{
func_235(-59.684f, -779.4568f, 43.114f, 228.7591f);
func_235(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
func_235(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
func_235(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
func_235(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
func_235(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
func_235(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
func_235(-9.239f, -773.0505f, 43.0788f, 318.0367f);
}
break;
case 91:
func_235(246.5035f, -1798.7494f, 26.1131f, 212.5996f);
func_235(247.8968f, -1797.0166f, 26.1131f, 212.5996f);
func_235(249.3848f, -1795.3737f, 26.1131f, 212.5996f);
func_235(250.8498f, -1793.6952f, 26.1131f, 212.5996f);
func_235(262.9285f, -1784.205f, 26.1131f, 164.5991f);
func_235(266.8129f, -1787.4761f, 26.1131f, 164.5991f);
func_235(264.814f, -1785.8008f, 26.1131f, 164.5991f);
func_235(269.0069f, -1789.1599f, 26.1131f, 164.5991f);
break;
case 92:
func_235(-1464.5f, -927.9f, 9f, 296.7991f);
func_235(-1466f, -926.1f, 9f, 296.7991f);
func_235(-1467.9f, -924.7f, 9f, 296.7991f);
func_235(-1469.7f, -923.7f, 9f, 296.7991f);
func_235(-1462.4808f, -931.2933f, 9.1294f, 296.5982f);
func_235(-1460.6387f, -932.9284f, 9.1315f, 296.5982f);
func_235(-1454.9226f, -931.1019f, 9.0872f, 237.1973f);
func_235(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
break;
case 93:
func_235(30.0784f, -1024.1604f, 28.4469f, 234.5994f);
func_235(29.1695f, -1026.7191f, 28.4453f, 234.5994f);
func_235(28.2538f, -1029.2955f, 28.4421f, 234.5994f);
func_235(27.3737f, -1031.767f, 28.3937f, 234.5994f);
func_235(32.6932f, -1017.0634f, 28.4531f, 234.5994f);
func_235(33.672f, -1014.3994f, 28.4552f, 234.5994f);
func_235(37.488f, -1014.344f, 28.4781f, 175.5986f);
func_235(39.4909f, -1015.0972f, 28.484f, 175.5986f);
break;
case 94:
func_235(45.0033f, 2784.3918f, 56.8782f, 103.5999f);
func_235(43.316f, 2785.9026f, 56.8782f, 103.5999f);
func_235(41.6126f, 2787.3599f, 56.8782f, 103.5999f);
func_235(39.9584f, 2788.773f, 56.8782f, 103.5999f);
func_235(35.2347f, 2792.135f, 56.8781f, 208.7997f);
func_235(33.7771f, 2790.3794f, 56.8781f, 208.7997f);
func_235(30.7578f, 2786.8003f, 56.8781f, 208.7997f);
func_235(29.3121f, 2785.0447f, 56.8745f, 208.7997f);
break;
case 95:
func_235(-332.5679f, 6069.1445f, 30.2175f, 152.9999f);
func_235(-334.2811f, 6070.7866f, 30.2212f, 152.9999f);
func_235(-335.9948f, 6072.4536f, 30.2455f, 152.9999f);
func_235(-337.675f, 6074.252f, 30.2727f, 152.9999f);
func_235(-339.3682f, 6075.9043f, 30.3074f, 152.9999f);
func_235(-341.0913f, 6077.7285f, 30.3114f, 152.9999f);
func_235(-342.9239f, 6079.5225f, 30.3122f, 152.9999f);
func_235(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
break;
case 96:
func_235(1738.4215f, 3716.7786f, 33.0787f, 6.9999f);
func_235(1736.2074f, 3715.9885f, 33.094f, 6.9999f);
func_235(1748.4423f, 3714.1697f, 33.0889f, 39.399f);
func_235(1750.4752f, 3715.007f, 33.1067f, 39.399f);
func_235(1747.1798f, 3721.1023f, 33.007f, 95.199f);
func_235(1746.4128f, 3723.2554f, 32.9738f, 95.199f);
func_235(1740.67f, 3717.6128f, 33.0616f, 8.199f);
func_235(1733.937f, 3715.0796f, 33.1236f, 8.199f);
break;
case 97:
func_235(947.9371f, -1452.7367f, 30.143f, 331.5991f);
func_235(950.2141f, -1452.8257f, 30.1364f, 331.5991f);
func_235(952.4588f, -1452.8821f, 30.129f, 331.5991f);
func_235(954.6608f, -1452.8694f, 30.1303f, 331.5991f);
func_235(935.1006f, -1452.7012f, 30.1907f, 316.999f);
func_235(932.5459f, -1452.5793f, 30.2194f, 316.999f);
func_235(929.9319f, -1452.5665f, 30.2647f, 316.999f);
func_235(927.4857f, -1452.4463f, 30.3167f, 316.999f);
break;
case 98:
func_235(186.6051f, 306.8702f, 104.389f, 162.3999f);
func_235(184.3881f, 306.7666f, 104.3845f, 162.3999f);
func_235(182.1681f, 306.6823f, 104.375f, 162.3999f);
func_235(183.3219f, 296.2871f, 104.3707f, 350.7995f);
func_235(180.9933f, 296.3411f, 104.3704f, 350.7995f);
func_235(178.6569f, 296.4709f, 104.3701f, 350.7995f);
func_235(195.1475f, 304.4284f, 104.4644f, 77.3989f);
func_235(195.0814f, 301.8218f, 104.5287f, 77.3989f);
break;
case 99:
func_235(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
func_235(-33.3895f, -199.7716f, 51.355f, 5.3995f);
func_235(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
func_235(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
func_235(-17.9628f, -206.2525f, 51.3702f, 29.399f);
func_235(-14.8043f, -207.5648f, 51.4707f, 29.399f);
func_235(-11.8482f, -208.6405f, 51.5633f, 29.399f);
func_235(-9.1304f, -209.4894f, 51.6472f, 29.399f);
break;
case 100:
func_235(2478.5203f, 4082.1372f, 36.8208f, 227.5999f);
func_235(2477.5574f, 4079.9456f, 36.8014f, 227.5999f);
func_235(2465.1226f, 4081.35f, 37.0655f, 167.4f);
func_235(2463.017f, 4082.271f, 37.0653f, 167.4f);
func_235(2467.7002f, 4080.332f, 37.0649f, 167.4f);
func_235(2469.5867f, 4079.5378f, 37.061f, 167.4f);
func_235(2481.3542f, 4088.5535f, 36.9131f, 209.4f);
func_235(2482.4421f, 4091.0234f, 36.9472f, 209.4f);
break;
case 101:
func_235(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
func_235(-29.4917f, 6404.5776f, 30.4903f, 291.1999f);
func_235(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
func_235(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
func_235(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
func_235(-23.7283f, 6412.8384f, 30.4904f, 176.5999f);
func_235(-20.5405f, 6409.8047f, 30.4905f, 176.5999f);
func_235(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
break;
case 102:
func_235(-1138.0574f, -1572.1804f, 3.4157f, 125.9996f);
func_235(-1142.0298f, -1574.9825f, 3.4133f, 125.9996f);
func_235(-1145.05f, -1592.8104f, 3.3855f, 306.5991f);
func_235(-1139.9331f, -1589.211f, 3.3978f, 306.5991f);
func_235(-1124.2949f, -1578.7758f, 3.3854f, 306.5991f);
func_235(-1119.9537f, -1575.5509f, 3.3852f, 306.5991f);
func_235(-1124.9417f, -1562.9855f, 3.2916f, 168.9988f);
func_235(-1127.0386f, -1564.395f, 3.292f, 168.9988f);
break;
default:
break;
}
return;
}
BOOL func_234() // Position - 0x176BA{
return Global_2683862.f_17;
}


void func_235(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x176C8{
if(Global_2635559.f_1754 < 101){
if(SYSTEM::VMAG(fParam0) <=0.01f) return;
Global_2635559.f_1755[Global_2635559.f_1754 /*4*/]={
fParam0 
};
Global_2635559.f_1755[Global_2635559.f_1754 /*4*/].f_3=fParam3;
Global_2635559.f_1754=Global_2635559.f_1754 + 1;
}
return;
}

int func_236(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1772D{
int i;
if(SYSTEM::VDIST(Global_2635559.f_2904, vParam0) < Global_2635559.f_2912) return Global_2635559.f_2907;
Global_2635559.f_2904={
vParam0 
};
for (i=0;
i < 32;
i=i + 1){
if(vParam0.f_2 <=0f) vParam0.f_2=(Global_2642883[i /*7*/].f_2 + Global_2642883[i /*7*/].f_3.f_2) * 0.5f;
if(func_174(vParam0, &Global_2642883[i /*7*/])){
Global_2635559.f_2907=i;
return i;
}}
Global_2635559.f_2907=-1;
return -1;
}
BOOL func_237() // Position - 0x177CF{
if(IS_BIT_SET(Global_4718592.f_13, 0) && !Global_2684799.f_6436) return false;
return false;
}
BOOL func_238(float fParam0, var uParam1, var uParam2, BOOL bParam3, int iParam4) // Position - 0x177F7{
int i;
int num;
float num2;
int num3;
num3=0;
for (i=83;
i <=84 + 1;
i=i + 1){
if(bParam3)if(func_207(i)) num=iParam4;
else num=0f;
else num=iParam4;
num2=SYSTEM::VDIST(fParam0, fParam0.f_1, 0f, Global_1950108.f_542[i /*3*/], Global_1950108.f_542[i /*3*/].f_1, 0f);
if(num2 < num) num3=num3 + 1;
}
if(num3 > 0) return true;
return false;
}


void func_239() // Position - 0x17879{
int i;
for (i=0;
i < 30;
i=i + 1){
Global_2635559.f_2737[i /*3*/]={
0f, 0f, 0f 
};
}
return;
}
BOOL func_240(var uParam0, BOOL bParam1) // Position - 0x178A4{
int i;
var unk;
unk={
*uParam0 
};
for (i=0;
i < 2;
i=i + 1){
if(unk.f_2 <=0f) unk.f_2=(Global_2642839[i /*7*/].f_2 + Global_2642839[i /*7*/].f_3.f_2) * 0.5f;
if(func_174(unk, &Global_2642839[i /*7*/])){
if(bParam1){
func_185(&unk, Global_2642839[i /*7*/], Global_2642839[i /*7*/].f_3, Global_2642839[i /*7*/].f_6, 1036831949, false);
*uParam0={
unk 
};
}
return true;
}}
return false;
}
BOOL func_241(var uParam0, var uParam1, var uParam2) // Position - 0x17941{
int num;
var unk;
if(!Global_2635559.f_515 && !Global_2635559.f_516){
if(!Global_2635559.f_45.f_317){
if(!func_245(PLAYER::PLAYER_ID(), true)) return true;
if(!func_244(uParam0, 1008981770)){
if(!func_191(&uParam0, false, false, false, true)) return true;
elseif(func_191(&uParam0, false, true, false, true)) return true;
}else{
num=func_243(uParam0, 1008981770);
if(num > -1){
unk={
func_242(&Global_2635559.f_45[num /*12*/]) 
};
if(!func_191(&unk, false, false, false, true))if(!func_191(&uParam0, false, false, false, true)) return true;
}}}}
return false;
}


Vector3 func__242(var uParam0) // Position - 0x17A01{
switch (uParam0->f_10){
case 0:
return *uParam0;
case 1:
case 2:
return (*uParam0 + uParam0->f_3) *{
0.5f, 0.5f, 0.5f 
};
}
return *uParam0;
}

int func_243(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x17A4A{
int i;
for (i=0;
i < 4;
i=i + 1){
if(Global_2635559.f_45[i /*12*/].f_9)if(func_178(uParam0, &Global_2635559.f_45[i /*12*/], iParam3, false, false)) return i;
}
return -1;
}
BOOL func_244(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x17A92{
int i;
for (i=0;
i < 4;
i=i + 1){
if(Global_2635559.f_45[i /*12*/].f_9)if(func_178(uParam0, &Global_2635559.f_45[i /*12*/], iParam3, false, 0)) return true;
}
return false;
}
BOOL func_245(Player plParam0, BOOL bParam1) // Position - 0x17AD9{
if(func_40() !=0) return func_246(plParam0) !=0;
return func_156(plParam0, bParam1, false);
}

int func_246(Player plParam0) // Position - 0x17B00{
if(_NETWORK_IS_PLAYER_VALID(plParam0, false, true)) return Global_2657589[plParam0 /*466*/].f_1;
return 0;
}

int func_247(BOOL bParam0) // Position - 0x17B22{
if(CAM::IS_SCREEN_FADED_OUT()) return 10000;
if(bParam0) return 5000;
return 1000;
}


void func_248() // Position - 0x17B45{
int i;
var unk;
for (i=0;
i < 101;
i=i + 1){
Global_2635559.f_1755[i /*4*/]={
unk 
};
}
Global_2635559.f_1754=0;
return;
}


void func_249() // Position - 0x17B79{
int i;
for (i=0;
i < 3;
i=i + 1){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_691[i])){
if(SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_691[i]){
if(!Global_2635559.f_687[i]==-1){
if(NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635559.f_687[i])){
NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2635559.f_687[i]);
Global_2635559.f_687[i]=-1;
}else{
Global_2635559.f_687[i]=-1;
}}}}elseif(!Global_2635559.f_687[i]==-1){
Global_2635559.f_687[i]=-1;
}}
return;
}
BOOL func_250() // Position - 0x17C25{
if(!Global_2635559.f_606==0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_611) < func_247(false)) return true;
return false;
}
BOOL func_251() // Position - 0x17C59{
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())if(!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE()==5) return false;
if(Global_2635559.f_517==MISC::GET_FRAME_COUNT()) return false;
if(!func_253(PLAYER::PLAYER_ID()) && !func_252(false)) return false;
return true;
}
BOOL func_252(BOOL bParam0) // Position - 0x17CB0{
bParam0;
return Global_1575035;
}
BOOL func_253(Player plParam0) // Position - 0x17CC1{
if(plParam0==-1) return false;
else return IS_BIT_SET(Global_2672505.f_1, plParam0);
return true;
}


float func_254() // Position - 0x17CE3{
return 10f;
}
Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x17CF0{
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}


void func_256(int iParam0) // Position - 0x17D03{
int num;
int offset;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()) return;
num=iParam0 / 32;
offset=iParam0 % 32;
MISC::SET_BIT(&iLocal_85.f_2[num], offset);
return;
}


void func_257(Player plParam0) // Position - 0x17D32{
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()) return;
iLocal_85.f_5=plParam0;
return;
}


void func_258() // Position - 0x17D4B{
if(func_20() > 0){
func_289();
func_282();
func_274();
func_261();
}
if(func_260(NETWORK::PARTICIPANT_ID()) !=3 && func_20()==3) func_259(3);
switch (func_260(NETWORK::PARTICIPANT_ID())){
case 0:
if(func_20() > 0) func_259(2);
break;
case 2:
break;
case 3:
break;
}
return;
}


void func_259(int iParam0) // Position - 0x17DBD{
uLocal_93[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1=iParam0;
return;
}

int func_260(Player plParam0) // Position - 0x17DD1{
return uLocal_93[plParam0 /*4*/].f_1;
}


void func_261() // Position - 0x17DE1{
if(!func_271()) return;
if(func_267())if(!func_266(PLAYER::PLAYER_ID())) func_264();
elseif(func_266(PLAYER::PLAYER_ID())) func_262();
return;
}


void func_262() // Position - 0x17E1D{
func_263(11);
return;
}


void func_263(int iParam0) // Position - 0x17E2B{
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_6), iParam0);
return;
}


void func_264() // Position - 0x17E48{
func_265(11);
return;
}


void func_265(int iParam0) // Position - 0x17E56{
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_6), iParam0);
return;
}
BOOL func_266(Player plParam0) // Position - 0x17E73{
return func_6(plParam0, 11);
}
BOOL func_267() // Position - 0x17E83{
if(func_5(PLAYER::PLAYER_ID())) return false;
if(!func_7()) return false;
if(func_270() !=0) func_269(0);
if(func_268(NETWORK::PARTICIPANT_ID(), 1)){
if(func_270()==0) func_269(1);
return false;
}
if(func_12(2)) return false;
return true;
}
BOOL func_268(Player plParam0, int iParam1) // Position - 0x17EDD{
int num;
int num2;
num=iParam1 / 32;
num2=iParam1 % 32;
return IS_BIT_SET(uLocal_93[plParam0 /*4*/].f_2[num], num2);
}


void func_269(int iParam0) // Position - 0x17F02{
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_303=iParam0;
return;
}

int func_270() // Position - 0x17F1C{
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_303;
}
BOOL func_271() // Position - 0x17F34{
if(!func_272()) return false;
return true;
}
BOOL func_272() // Position - 0x17F49{
return func_273(PLAYER::PLAYER_ID());
}
BOOL func_273(Player plParam0) // Position - 0x17F59{
return func_6(plParam0, 9);
}


void func_274() // Position - 0x17F69{
if(!func_281()) return;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_280(PLAYER::PLAYER_PED_ID(), func_16(), 120f, true))if(!func_268(NETWORK::PARTICIPANT_ID(), 1)) func_279(1);
elseif(func_268(NETWORK::PARTICIPANT_ID(), 1)) func_278(1);
if(!func_268(NETWORK::PARTICIPANT_ID(), 0) && func_275()) func_279(0);
return;
}
BOOL func_275() // Position - 0x17FE0{
if(func_272()){
if(!func_280(PLAYER::PLAYER_PED_ID(), func_16(), 1000f, true)) return true;
if(func_277(PLAYER::PLAYER_ID(), true, true)) return true;
if(func_276(PLAYER::PLAYER_ID())) return true;
if(func_215(PLAYER::PLAYER_ID())) return true;
}elseif(!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(func_17())){
return true;
}
return false;
}
BOOL func_276(Player plParam0) // Position - 0x1804D{
if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 14)) return true;
if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 11)) return true;
return false;
}
BOOL func_277(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x18086{
if(plParam0==_INVALID_PLAYER_INDEX()) return false;
if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 0)) return true;
if(bParam1)if(IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 1)) return true;
if(bParam2)if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return true;
return false;
}


void func_278(int iParam0) // Position - 0x180EA{
int num;
int offset;
num=iParam0 / 32;
offset=iParam0 % 32;
MISC::CLEAR_BIT(&uLocal_93[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2[num], offset);
return;
}


void func_279(int iParam0) // Position - 0x18114{
int num;
int offset;
num=iParam0 / 32;
offset=iParam0 % 32;
MISC::SET_BIT(&uLocal_93[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2[num], offset);
return;
}
BOOL func_280(Ped pedParam0, Vehicle veParam1, float fParam2, BOOL bParam3) // Position - 0x1813E{
return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3), ENTITY::GET_ENTITY_COORDS(veParam1, bParam3)) <=fParam2 * fParam2;
}
BOOL func_281() // Position - 0x18160{
if(func_7()) return true;
return false;
}


void func_282() // Position - 0x18174{
int num;
if(func_287(false))if(func_285()) num=1;
else num=2;
else num=0;
if(num !=func_284()){
switch (func_284()){
case 2:
if(!func_309(1) && num==0) func_113(1);
break;
case 0:
if(func_272() && !func_268(NETWORK::PARTICIPANT_ID(), 0) && num==2) func_279(0);
break;
}
func_283(num);
}
return;
}


void func_283(int iParam0) // Position - 0x181FF{
iLocal_137=iParam0;
return;
}

int func_284() // Position - 0x1820B{
return iLocal_137;
}
BOOL func_285() // Position - 0x18215{
return _IS_PLAYER_BOSS_OF_ORGANIZATION(PLAYER::PLAYER_ID());
}
BOOL _IS_PLAYER_BOSS_OF_ORGANIZATION(Player plParam0) // Position - 0x18225{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX()) return Global_1894573[plParam0 /*608*/].f_10==plParam0;
return false;
}
BOOL func_287(BOOL bParam0) // Position - 0x1825A{
return _IS_PLAYER_IN_AN_ORGANIZATION(PLAYER::PLAYER_ID(), bParam0);
}
BOOL _IS_PLAYER_IN_AN_ORGANIZATION(Player plParam0, BOOL bCanBeBoss) // Position - 0x1826C{
if(!bCanBeBoss)if(_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0)) return false;
return Global_1894573[plParam0 /*608*/].f_10 !=_INVALID_PLAYER_INDEX();
}


void func_289() // Position - 0x18297{
int num;
if(func_19() > 0) func_294();
switch (func_19()){
case 0:
break;
case 1:
break;
case 2:
if(!func_12(3) && !func_268(NETWORK::PARTICIPANT_ID(), 2) && func_7() && !NETWORK::NETWORK_IS_ENTITY_FADING(func_16()) && func_292(func_10()) && func_291(func_16())==0){
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(func_16(), true);
NETWORK::NETWORK_FADE_OUT_ENTITY(func_16(), false, true);
func_279(2);
}
break;
case 3:
if(!func_12(4) && !func_268(NETWORK::PARTICIPANT_ID(), 3) && func_7() && !ENTITY::IS_ENTITY_VISIBLE(func_16())) func_279(3);
break;
case 4:
if(!func_12(5) && !func_268(NETWORK::PARTICIPANT_ID(), 4) && func_7() && func_292(func_10())){
num=func_10();
func_290(&num);
func_279(4);
}
break;
case 5:
break;
}
return;
}


void func_290(var uParam0) // Position - 0x183C0{
Entity entity;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)) !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0);
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
entity=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::DELETE_ENTITY(&entity);
}
return;
}

int func_291(Vehicle veParam0) // Position - 0x183F9{
int i;
int num;
int num2;
if(!ENTITY::IS_ENTITY_DEAD(veParam0, false)){
num=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veParam0) + 1;
for (i=0;
i < num;
i=i + 1){
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, i - 1, false)) num2=num2 + 1;
}}
return num2;
}
BOOL func_292(int iParam0) // Position - 0x18440{
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || !NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())if(func_293(iParam0)) return true;
return false;
}
BOOL func_293(int iParam0) // Position - 0x18475{
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
}
return false;
}


void func_294() // Position - 0x18497{
if(func_300()){
if(!HUD::DOES_BLIP_EXIST(blLocal_142)){
blLocal_142=HUD::ADD_BLIP_FOR_ENTITY(func_16());
HUD::SET_BLIP_SPRITE(blLocal_142, func_299());
func_296(&blLocal_142, func_298());
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blLocal_142, func_295());
}}elseif(HUD::DOES_BLIP_EXIST(blLocal_142)){
HUD::REMOVE_BLIP(&blLocal_142);
}
return;
}


char* func_295() // Position - 0x184EA{
return "CASINO_VD" /*Luxury Car*/;
}


void func_296(var uParam0, int iParam1) // Position - 0x184F5{
int num;
if(HUD::DOES_BLIP_EXIST(*uParam0)){
num=func_297(iParam1);
HUD::SET_BLIP_COLOUR(*uParam0, num);
}
return;
}

int func_297(eHudColour ehcParam0) // Position - 0x1851B{
int r;
int g;
int b;
var a;
switch (ehcParam0){
case 1:
return 4;
case 0:
return 4;
case 6:
return 59;
case 18:
return 2;
case 13:
return 5;
case 116:
return 38;
case 28:
return 6;
case 29:
return 7;
case 30:
return 8;
case 31:
return 9;
case 32:
return 10;
case 33:
return 11;
case 34:
return 12;
case 35:
return 13;
case 36:
return 14;
case 37:
return 15;
case 38:
return 16;
case 39:
return 17;
case 40:
return 18;
case 41:
return 19;
case 42:
return 20;
case 43:
return 21;
case 44:
return 22;
case 45:
return 23;
case 46:
return 24;
case 47:
return 25;
case 48:
return 26;
case 49:
return 27;
case 50:
return 28;
case 51:
return 29;
case 52:
return 30;
case 53:
return 31;
case 54:
return 32;
case 55:
return 33;
case 56:
return 34;
case 57:
return 35;
case 58:
return 36;
case 59:
return 37;
case 9:
return 57;
case 10:
return 53;
case 118:
return 57;
case 14:
return 56;
case 3:
return 55;
case 21:
return 50;
case 15:
return 51;
case 20:
return 52;
case 11:
return 54;
case 23:
return 58;
case 12:
return 60;
case 24:
return 61;
case 4:
return 62;
default:
}
HUD::GET_HUD_COLOUR(ehcParam0, &r, &g, &b, &a);
return (r * 16777216) + (g * 65536) + (b * 256) + a;
}

int func_298() // Position - 0x18783{
return 12;
}
eBlipSprite func_299() // Position - 0x1878D{
return BLIP_GANG_VEHICLE;
}
BOOL func_300() // Position - 0x18797{
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10())) return false;
if(func_19() !=1) return false;
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), func_16(), false)) return false;
if(!func_7()) return false;
return true;
}


void func_301(int iParam0) // Position - 0x187DC{
uLocal_93[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=iParam0;
return;
}
BOOL func_302() // Position - 0x187EE{
func_303();
return true;
}


void func_303() // Position - 0x187FB{
func_265(10);
return;
}

int func_304() // Position - 0x18809{
return iLocal_85;
}

int func_305(Player plParam0) // Position - 0x18813{
return uLocal_93[plParam0 /*4*/];
}


void func_306() // Position - 0x18821{
int i;
Player playerIndex;
BOOL flag;
for (i=0;
i < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS();
i=i + 1){
uLocal_126[i]=_INVALID_PLAYER_INDEX_0();
}
for (i=0;
i < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS();
i=i + 1){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(i)){
uLocal_126[i]=i;
playerIndex=NETWORK::NETWORK_GET_PLAYER_INDEX(uLocal_126[i]);
if(_NETWORK_IS_PLAYER_VALID(playerIndex, false, true)){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(!flag)if(func_268(uLocal_126[i], 1)) flag=true;
if(!func_12(1))if(func_268(uLocal_126[i], 0)) func_256(1);
if(!func_12(3))if(func_268(uLocal_126[i], 2)) func_256(3);
if(!func_12(4))if(func_268(uLocal_126[i], 3)) func_256(4);
if(!func_12(5))if(func_268(uLocal_126[i], 4)) func_256(5);
}}}}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())if(flag)if(!func_12(2)) func_256(2);
elseif(func_12(2)) func_307(2);
return;
}


void func_307(int iParam0) // Position - 0x1893D{
int num;
int offset;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()) return;
num=iParam0 / 32;
offset=iParam0 % 32;
MISC::CLEAR_BIT(&iLocal_85.f_2[num], offset);
return;
}
Player _INVALID_PLAYER_INDEX_0() // Position - 0x1896C{
return -1;
}
BOOL func_309(int iParam0) // Position - 0x18975{
int num;
int num2;
num=iParam0 / 32;
num2=iParam0 % 32;
return IS_BIT_SET(uLocal_135[num], num2);
}
BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x18994{
if(Global_1575035==false)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return true;
if(func_316()) return true;
if(Global_2696915) return true;
if(func_315()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(159))if(!func_313()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(157)) return true;
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()) return true;
if(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() !=0)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())==0) return true;
return false;
}
Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x18A18{
switch (func_40()){
case 0:
return func_312();
case 2:
return joaat("creator");
}
return 0;
}
Hash func_312() // Position - 0x18A4B{
switch (Global_2697019){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}
BOOL func_313() // Position - 0x18A6F{
return Global_2683862.f_698;
}
BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x18A7E{
if(SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0)) return true;
return false;
}
BOOL func_315() // Position - 0x18A95{
return Global_2694524;
}
BOOL func_316() // Position - 0x18AA1{
return Global_2683862.f_693;
}


void func_317() // Position - 0x18AB0{
SYSTEM::WAIT(0);
return;
}


void func_318() // Position - 0x18ABD{
if(func_272() && func_2() !=3) func_324();
if(func_323(PLAYER::PLAYER_ID())) func_322();
if(func_266(PLAYER::PLAYER_ID())) func_262();
if(func_5(PLAYER::PLAYER_ID())) func_321();
if(func_270() !=0) func_269(0);
if(func_2() !=0) func_319();
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_319() // Position - 0x18B25{
int netId;
netId=func_10();
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(netId)) func_320(&netId);
return;
}


void func_320(var uParam0) // Position - 0x18B42{
Entity entity;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
entity=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&entity);
}
return;
}


void func_321() // Position - 0x18B66{
func_263(12);
return;
}


void func_322() // Position - 0x18B74{
func_263(10);
return;
}
BOOL func_323(Player plParam0) // Position - 0x18B82{
return func_6(plParam0, 10);
}


void func_324() // Position - 0x18B92{
func_263(9);
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_304=0;
return;
}
BOOL func_325(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) // Position - 0x18BB1{
func_328(8, uParam0);
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
_NETWORK_ENSURE_SCRIPT_IS_NETWORKED(0, -1, false);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_85, 8, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_93, 33, 0);
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
return true;
}
int _NETWORK_ENSURE_SCRIPT_IS_NETWORKED(int iParam0, int iParam1, BOOL bNoTerminate) // Position - 0x18BE8{
int i;
for (i=NETWORK::NETWORK_GET_SCRIPT_STATUS();
i !=2;
i=NETWORK::NETWORK_GET_SCRIPT_STATUS()){
if(i==3 || i==4 || i==5 || i==6)if(!bNoTerminate) func_327();
else return 0;
if(!func_252(false)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!bNoTerminate) func_327();
else return 0;
if(func_316())if(!bNoTerminate) func_327();
else return 0;
if(_DOES_EVENT_OF_TYPE_EXIST(157))if(!bNoTerminate) func_327();
else return 0;
}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bNoTerminate) func_327();
else return 0;
}}
SYSTEM::WAIT(0);
}
if(iParam1 > -1) Global_1574666=i;
if(iParam0==0)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!bNoTerminate) func_327();
else return 0;
elseif(!NETWORK::NETWORK_IS_IN_SESSION())if(!bNoTerminate) func_327();
else return 0;
return 1;
}


void func_327() // Position - 0x18CFE{
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_328(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0x18D0A{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) func_327();
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, uParam1.f_16);
return;
}
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x18D29{
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