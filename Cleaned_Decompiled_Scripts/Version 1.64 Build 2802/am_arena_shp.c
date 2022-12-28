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
int iLocal_14=0;
float fLocal_15=0f;
var uLocal_16=0;
var uLocal_17=0;
char* sLocal_18=0;
var uLocal_19=0;
var uLocal_20=0;
int iLocal_21=0;
var uLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
var uLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
var uLocal_33=0;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
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
var uLocal_86=0;
var uLocal_87=0;
var uLocal_88=2147483647;
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
var uLocal_120=0;
var uLocal_121=0;
var uLocal_122=0;
var uLocal_123=0;
var uLocal_124=0;
var uLocal_125=0;
var uLocal_126=0;
var uLocal_127=0;
var uLocal_128=0;
var uLocal_129=0;
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
var uLocal_148=1;
var uLocal_149=0;
var uLocal_150=0;
var uLocal_151=0;
var uLocal_152=0;
BOOL bLocal_153=0;
var uScriptParam_0=2147483647;
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
var uScriptParam_17=0;
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
var uScriptParam_28=0;
var uScriptParam_29=0;
var uScriptParam_30=0;
var uScriptParam_31=0;
var uScriptParam_32=0;
var uScriptParam_33=0;
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
iLocal_14=-1;
fLocal_15=0.001f;
sLocal_18="NULL";
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) func_51(uScriptParam_0);
else func_49();
while (true){
func_48();
if(Global_262145.f_24076) func_49();
if(_SHOULD_NETWORK_SCRIPT_TERMINATE()) func_49();
func_1();
}
return;
}


void func_1() // Position - 0x78{
BOOL flag;
int num;
int num2;
flag=false;
if(Global_4536658){
if(Global_4540733[iLocal_21 /*12*/].f_11){
func_37(iLocal_21);
Global_4540733[iLocal_21 /*12*/].f_11=0;
}}
if(uLocal_22.f_66.f_8) func_17(uLocal_22.f_66);
if(uLocal_22.f_66.f_2==1 && Global_4536659 && func_16(&uLocal_22)) flag=true;
if(Global_4535172[iLocal_21 /*85*/].f_66==2147483647 && uLocal_22.f_66.f_12){
if(flag) func_15(false);
func_49();
}
if(uLocal_22.f_66.f_18 > 0 && !func_14()){
num2=1000 / SYSTEM::ROUND(MISC::GET_FRAME_TIME() * 1000f);
if(MISC::GET_FRAME_COUNT() - uLocal_22.f_66.f_18 > num2 * 10) uLocal_22.f_66.f_18=-1;
}
if(_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() && uLocal_22.f_66.f_2==1 && uLocal_22.f_66.f_13 && !uLocal_22.f_66.f_12){
if(MISC::GET_FRAME_COUNT() - uLocal_22.f_66.f_14 >=func_12(uLocal_22.f_66.f_5)){
num=0;
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
num=1;
}elseif(uLocal_22.f_66.f_2 !=1){
num=2;
}elseif(uLocal_22.f_66.f_5 !=1 && !NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&(uLocal_22.f_66), uLocal_22.f_66.f_6, uLocal_22.f_66.f_4, uLocal_22.f_66.f_7, uLocal_22.f_66.f_1, uLocal_22.f_66.f_10)){
num=3;
}elseif(!NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(uLocal_22.f_66)){
num=4;
}else{
uLocal_22.f_66.f_12=1;
Global_4535172[iLocal_21 /*85*/].f_66.f_12=1;
Global_4535172[iLocal_21 /*85*/].f_66=uLocal_22.f_66;
}
if(num !=0){
func_7(iLocal_21);
func_49();
}}}
if(!bLocal_153){
if(flag){
func_5(&uLocal_107, false);
bLocal_153=true;
}}elseif(flag){
TEXT_LABEL_ASSIGN_STRING(&(uLocal_107.f_1), "HUD_TRANSP" /*Transaction Pending*/, 64);
func_2(&uLocal_107, func_4(&uLocal_107));
}else{
bLocal_153=false;
func_15(false);
}
return;
}


void func_2(var uParam0, int iParam1) // Position - 0x27B{
if(iParam1==1){
*uParam0=0;
func_3(uParam0);
}
if(*uParam0==0){
if(uParam0->f_36){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_37){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_39){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_38){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_40){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_33, 70);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}else{
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}
*uParam0=1;
}
*uParam0==1;
return;
}


void func_3(var uParam0) // Position - 0x379{
uParam0->f_35=0;
return;
}

int func_4(var uParam0) // Position - 0x386{
return uParam0->f_35;
}


void func_5(var uParam0, BOOL bParam1) // Position - 0x392{
func_6(uParam0);
if(bParam1) func_15(false);
uParam0->f_35=1;
return;
}


void func_6(var uParam0) // Position - 0x3AF{
var unk;
unk.f_41=1;
*uParam0={
unk 
};
return;
}


void func_7(int iParam0) // Position - 0x3CA{
BOOL flag;
flag=false;
if(!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM()) flag=true;
if(iParam0 !=-1){
if(func_10(iParam0))if(!flag) NETSHOPPING::NET_GAMESERVER_BASKET_IS_ACTIVE();
elseif(!flag) NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
func_8(&Global_4535172[iParam0 /*85*/]);
}
return;
}


void func_8(Hash hParam0) // Position - 0x41E{
hParam0->f_66=0;
hParam0->f_66=2147483647;
hParam0->f_66.f_1=0;
hParam0->f_66.f_2=0;
hParam0->f_66.f_3=-1593119440;
hParam0->f_66.f_4=-2085313189;
hParam0->f_66.f_5=0;
hParam0->f_66.f_6=joaat("CATEGORY_CLOTH");
hParam0->f_66.f_7=-1161833819;
*hParam0=0;
hParam0->f_1=0;
hParam0->f_13=0;
hParam0->f_2=0;
func_9(&(hParam0->f_14));
func_9(&(hParam0->f_14.f_13));
TEXT_LABEL_ASSIGN_STRING(&(hParam0->f_14.f_26), "", 32);
TEXT_LABEL_ASSIGN_STRING(&(hParam0->f_14.f_34), "", 24);
TEXT_LABEL_ASSIGN_STRING(&(hParam0->f_14.f_40), "", 16);
TEXT_LABEL_ASSIGN_STRING(&(hParam0->f_14.f_44), "", 32);
hParam0->f_3=0;
hParam0->f_4=0;
hParam0->f_5=0;
hParam0->f_6=0;
hParam0->f_7=0;
hParam0->f_8=0;
hParam0->f_66.f_8=0;
hParam0->f_66.f_9=0;
hParam0->f_66.f_10=0;
hParam0->f_66.f_11=0;
hParam0->f_66.f_13=0;
hParam0->f_66.f_12=0;
hParam0->f_66.f_14=0;
hParam0->f_66.f_15=0;
hParam0->f_66.f_16=0;
hParam0->f_66.f_18=0;
return;
}


void func_9(var uParam0) // Position - 0x52A{
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_9=0;
uParam0->f_10=0;
uParam0->f_11=0;
uParam0->f_12=0;
return;
}
BOOL func_10(int iParam0) // Position - 0x572{
if(iParam0 >=0 && iParam0 < 15) return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
return false;
}

int func_11() // Position - 0x59D{
return Global_1574918;
}

int func_12(int iParam0) // Position - 0x5A9{
switch (iParam0){
case 0:
return Global_4536661;
case 1:
return Global_4536660;
}
return 0;
}
BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x5D9{
if(MISC::IS_PC_VERSION()) return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
return false;
}
BOOL func_14() // Position - 0x5F0{
return Global_100733.f_388 > 0;
}


void func_15(BOOL bParam0) // Position - 0x601{
HUD::BUSYSPINNER_OFF();
if(bParam0) HUD::PRELOAD_BUSYSPINNER();
return;
}
BOOL func_16(var uParam0) // Position - 0x616{
if(uParam0->f_66.f_4==joaat("SERVICE_SPEND_CASH_DROP")) return false;
return true;
}


void func_17(int iParam0) // Position - 0x631{
struct<7> eventData;
BOOL flag;
BOOL flag2;
int num;
var unk7;
BOOL flag3;
var unk92;
int num2;
int num3;
int num4;
flag=false;
flag2=false;
if(!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM()){
flag=true;
eventData=iParam0;
eventData.f_2=0;
}
if(flag || SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 7)){
unk7.f_66=2147483647;
num=func_36(eventData, &unk7);
if(num !=-1){
Global_4535172[num /*85*/].f_66.f_8=0;
if(Global_4535172[num /*85*/].f_66.f_18==0) Global_4535172[num /*85*/].f_66.f_18=MISC::GET_FRAME_COUNT();
}
flag3=true;
if(num !=-1){
Global_4535172[num /*85*/].f_66.f_17=eventData.f_2;
}else{
Global_4536646.f_4=eventData.f_2;
Global_4536646.f_6=eventData.f_3;
Global_4536646.f_7=eventData.f_4;
Global_4536646.f_8=eventData.f_5;
Global_4536646.f_9=eventData.f_6;
if(Global_4536646.f_10==0) Global_4536646.f_10=MISC::GET_FRAME_COUNT();
}
switch (eventData.f_2){
case 0:
if(num !=-1){
Global_4540733[num /*12*/]=Global_4535172[num /*85*/].f_66.f_3;
Global_4540733[num /*12*/].f_1=Global_4535172[num /*85*/].f_66.f_7;
Global_4540733[num /*12*/].f_2=Global_4535172[num /*85*/].f_66.f_4;
Global_4540733[num /*12*/].f_3=Global_4535172[num /*85*/].f_66.f_1;
Global_4540733[num /*12*/].f_5=eventData.f_1;
Global_4540733[num /*12*/].f_6=eventData.f_3;
Global_4540733[num /*12*/].f_7=eventData.f_4;
Global_4540733[num /*12*/].f_8=eventData.f_5;
Global_4540733[num /*12*/].f_9=eventData.f_6;
Global_4540733[num /*12*/].f_11=1;
Global_4535172[num /*85*/].f_66.f_2=2;
if(Global_4535172[num /*85*/].f_66.f_11 & 4 !=0) func_32(num, flag3);
elseif(_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())if(flag3) NETSHOPPING::NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Global_4535172[num /*85*/].f_66, &unk92);
}
break;
default:
if(num !=-1){
Global_4535172[num /*85*/].f_66.f_2=3;
if(Global_4535172[num /*85*/].f_66.f_11 & 1 !=0 && Global_4535172[num /*85*/].f_66.f_9 < 2 && func_31(eventData.f_2)){
if(func_10(num)){
if(func_24()){
Global_4535172[num /*85*/].f_66.f_2=1;
Global_4535172[num /*85*/].f_66.f_9=Global_4535172[num /*85*/].f_66.f_9 + 1;
}elseif(Global_4535172[num /*85*/].f_66.f_11 & 2 !=0){
Global_4536676=Global_4535172[num /*85*/].f_66.f_4;
Global_4536678=Global_4535172[num /*85*/].f_66.f_6;
Global_4536679=eventData.f_2;
Global_4536677=Global_4535172[num /*85*/].f_66.f_1;
if(func_23(Global_4536676) && _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM()){
if(!func_22(Global_4535172[num /*85*/].f_66)){
num2=func_21();
Global_4536533[num2 /*7*/]=Global_4535172[num /*85*/].f_66;
Global_4536533[num2 /*7*/].f_2=Global_4536676;
Global_4536533[num2 /*7*/].f_3=Global_4536678;
Global_4536533[num2 /*7*/].f_1=Global_4536677;
Global_4536533[num2 /*7*/].f_4=NETWORK::GET_NETWORK_TIME();
}}else{
Global_4536673=1;
}}
}
elseif(func_20(&num)){
Global_4535172[num /*85*/].f_66.f_2=1;
Global_4535172[num /*85*/].f_66.f_9=Global_4535172[num /*85*/].f_66.f_9 + 1;
}
elseif(Global_4535172[num /*85*/].f_66.f_11 & 2 !=0){
Global_4536676=Global_4535172[num /*85*/].f_66.f_4;
Global_4536678=Global_4535172[num /*85*/].f_66.f_6;
Global_4536679=eventData.f_2;
Global_4536677=Global_4535172[num /*85*/].f_66.f_1;
if(func_23(Global_4536676) && _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM()){
if(!func_22(Global_4535172[num /*85*/].f_66)){
num3=func_21();
Global_4536533[num3 /*7*/]=Global_4535172[num /*85*/].f_66;
Global_4536533[num3 /*7*/].f_2=Global_4536676;
Global_4536533[num3 /*7*/].f_3=Global_4536678;
Global_4536533[num3 /*7*/].f_1=Global_4536677;
Global_4536533[num3 /*7*/].f_4=NETWORK::GET_NETWORK_TIME();
}}else{
Global_4536673=1;
}
}}elseif(Global_4535172[num /*85*/].f_66.f_11 & 2 !=0){
Global_4536676=Global_4535172[num /*85*/].f_66.f_4;
Global_4536678=Global_4535172[num /*85*/].f_66.f_6;
Global_4536679=eventData.f_2;
Global_4536677=Global_4535172[num /*85*/].f_66.f_1;
if(func_23(Global_4536676) && _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() && func_31(eventData.f_2)){
if(!func_22(Global_4535172[num /*85*/].f_66)){
num4=func_21();
Global_4536533[num4 /*7*/]=Global_4535172[num /*85*/].f_66;
Global_4536533[num4 /*7*/].f_2=Global_4536676;
Global_4536533[num4 /*7*/].f_3=Global_4536678;
Global_4536533[num4 /*7*/].f_1=Global_4536677;
Global_4536533[num4 /*7*/].f_4=NETWORK::GET_NETWORK_TIME();
}
}
else{
Global_4536673=1;
}}
if(Global_4535172[num /*85*/].f_66.f_2==3){
if(flag2){
func_19(1, Global_4535172[num /*85*/].f_66.f_4);
Global_4536673=0;
}
if(Global_4535172[num /*85*/].f_66.f_11 & 4 !=0) func_18(num, Global_4535172[num /*85*/].f_66.f_4, Global_4535172[num /*85*/].f_66.f_10, Global_4535172[num /*85*/].f_66.f_1, eventData.f_2);
}}
break;
}}
return;
}


void func_18(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4) // Position - 0xBA8{
switch (iParam1){
case joaat("SERVICE_SPEND_BETTING"):
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), 0);
break;
}
if(iParam0 !=-1) func_7(iParam0);
return;
}


void func_19(int iParam0, int iParam1) // Position - 0xBE0{
Global_2697013=iParam1;
Global_2697012=iParam0;
return;
}
BOOL func_20(var uParam0) // Position - 0xBF4{
BOOL flag;
BOOL flag2;
flag=false;
if(!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM()) flag=true;
flag2=1;
if(*uParam0==-1 || func_10(*uParam0)) return false;
if(!flag){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536674=1;
return false;
}
if(Global_2695819){
if(Global_4535172[*uParam0 /*85*/].f_66.f_6==joaat("CATEGORY_WEAPON_AMMO") || Global_4535172[*uParam0 /*85*/].f_66.f_6==joaat("CATEGORY_MART")){
Global_4536675=1;
return false;
}}}
if(flag || flag2 || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(Global_4535172[*uParam0 /*85*/].f_66)){
if(flag2 && !flag){
}
Global_4535172[*uParam0 /*85*/].f_66.f_13=1;
Global_4535172[*uParam0 /*85*/].f_66.f_12=0;
Global_4535172[*uParam0 /*85*/].f_66.f_14=MISC::GET_FRAME_COUNT();
if(flag){
if(*uParam0 !=-1){
Global_4535172[*uParam0 /*85*/].f_66.f_8=1;
Global_4535172[*uParam0 /*85*/].f_66.f_12=1;
}}
Global_4535172[*uParam0 /*85*/].f_66.f_18=0;
return true;
}
return false;
}

int func_21() // Position - 0xD24{
int i;
int num;
int num2;
num2=Global_4536533;
for (i=0;
i <=num2 - 1;
i=i + 1){
if(Global_4536533[i /*7*/] !=0 && Global_4536533[i /*7*/] !=2147483647) num=num + 1;
}
if(num >=num2) return 0;
return num;
}
BOOL func_22(int iParam0) // Position - 0xD7A{
int i;
int num;
num=Global_4536533;
if(iParam0==2147483647 || iParam0==0) return false;
for (i=0;
i <=num - 1;
i=i + 1){
if(Global_4536533[i /*7*/]==iParam0) return true;
if(Global_4536533[i /*7*/].f_6==iParam0){
Global_4536533[i /*7*/].f_4=NETWORK::GET_NETWORK_TIME();
Global_4536533[i /*7*/].f_6=2147483647;
return true;
}}
return false;
}
BOOL func_23(int iParam0) // Position - 0xDF8{
if(iParam0==joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN") || iParam0==joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS") || iParam0==joaat("SERVICE_EARN_JOB_BONUS") || iParam0==joaat("SERVICE_EARN_BEND_JOB") || iParam0==joaat("SERVICE_EARN_JOBS") || iParam0==joaat("SERVICE_EARN_BOSS") || iParam0==joaat("SERVICE_EARN_GOON") || iParam0==joaat("SERVICE_EARN_BOSS_AGENCY") || iParam0==joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND") || iParam0==joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT") || iParam0==joaat("SERVICE_EARN_PREMIUM_JOB") || iParam0==joaat("SERVICE_EARN_SMUGGLER_AGENCY") || iParam0==joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS") || iParam0==joaat("SERVICE_EARN_WAGE_PAYMENT") || iParam0==joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND") || iParam0==joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD") || iParam0==joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS") || iParam0==joaat("SERVICE_EARN_GANGOPS_WAGES") || iParam0==joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS") || iParam0==joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION") || iParam0==joaat("SERVICE_EARN_GANGOPS_SETUP") || iParam0==joaat("SERVICE_EARN_GANGOPS_FINALE") || iParam0==joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2") || iParam0==joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3") || iParam0==joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4") || iParam0==joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2") || iParam0==joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3") || iParam0==joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4") || iParam0==joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE") || iParam0==joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE") || iParam0==joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO") || iParam0==joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING") || iParam0==joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER") || iParam0==joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE") || iParam0==joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE") || iParam0==joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO") || iParam0==joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY") || iParam0==joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS") || iParam0==joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD") || iParam0==joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE") || iParam0==joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION") || iParam0==joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION") || iParam0==joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL") || iParam0==joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK") || iParam0==joaat("SERVICE_EARN_FMBB_WAGE_BONUS") || iParam0==joaat("SERVICE_EARN_NIGHTCLUB_DANCING_AWARD") || iParam0==joaat("SERVICE_EARN_BB_EVENT_BONUS") || iParam0==joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD") || iParam0==joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1") || iParam0==joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2") || iParam0==joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3") || iParam0==joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4") || iParam0==joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH") || iParam0==joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED") || iParam0==joaat("SERVICE_EARN_ARENA_WAR") || iParam0==joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL") || iParam0==joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT") || iParam0==joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES") || iParam0==joaat("SERVICE_EARN_CASINO_MISSION_REWARD") || iParam0==joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD") || iParam0==joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME") || iParam0==joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME") || iParam0==joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME") || iParam0==joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME") || iParam0==joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME") || iParam0==joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME") || iParam0==joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH") || iParam0==joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR") || iParam0==joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE") || iParam0==joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY") || iParam0==joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE") || iParam0==joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER") || iParam0==joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD") || iParam0==joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM") || iParam0==joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION") || iParam0==joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION") || iParam0==joaat("SERVICE_EARN_CASINO_HEIST_FINALE") || iParam0==joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB") || iParam0==joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT") || iParam0==joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED") || iParam0==joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER") || iParam0==joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF") || iParam0==joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL") || iParam0==joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH") || iParam0==joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE") || iParam0==joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT") || iParam0==joaat("SERVICE_EARN_COLLECTABLE_ITEM") || iParam0==joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION") || iParam0==joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS") || iParam0==joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE") || iParam0==joaat("SERVICE_EARN_ISLAND_HEIST_FINALE") || iParam0==joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE") || iParam0==joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL") || iParam0==joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF") || iParam0==joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST") || iParam0==joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE") || iParam0==joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK") || iParam0==joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR") || iParam0==joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF") || iParam0==joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP") || iParam0==joaat("SERVICE_EARN_ISLAND_HEIST_PREP") || iParam0==joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION") || iParam0==joaat("SERVICE_EARN_TUNER_ROBBERY_PREP") || iParam0==joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE") || iParam0==joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP") || iParam0==joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE") || iParam0==joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS") || iParam0==joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY") || iParam0==joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY") || iParam0==joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK") || iParam0==joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN") || iParam0==joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS") || iParam0==joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID") || iParam0==joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB") || iParam0==joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID") || iParam0==joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD") || iParam0==joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT") || iParam0==joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT") || iParam0==joaat("SERVICE_EARN_AGENCY_STORY_PREP") || iParam0==joaat("SERVICE_EARN_AGENCY_STORY_FINALE") || iParam0==joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON") || iParam0==joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT") || iParam0==joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY") || iParam0==joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP") || iParam0==joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY") || iParam0==joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP") || iParam0==joaat("SERVICE_EARN_FROM_CONTRABAND") || iParam0==joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER") || iParam0==joaat("SERVICE_EARN_SIGHTSEEING_REWARD") || iParam0==joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT") || iParam0==joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO") || iParam0==joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE") || iParam0==joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR") || iParam0==joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE") || iParam0==joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL") || iParam0==joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN") || iParam0==joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY") || iParam0==joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH") || iParam0==joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS") || iParam0==883337077 || iParam0==-1274418755 || iParam0==-1853979468 || iParam0==-239888995 || iParam0==1163066566 || iParam0==-955087020 || iParam0==1874391251 || iParam0==1633116913 || iParam0==668586600 || iParam0==15168061 || iParam0==590289134 || iParam0==99792878 || iParam0==1866258778 || iParam0==-178394060 || iParam0==409592287 || iParam0==593836803 || iParam0==1973036520 || iParam0==2063456538 || iParam0==-728008329 || iParam0==119239868) return true;
return false;
}
BOOL func_24() // Position - 0x16B2{
BOOL flag;
BOOL flag2;
int num;
int transactionId;
flag=false;
if(!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM()) flag=true;
flag2=1;
num=func_30();
if(num==-1) return false;
if(!flag){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
if(func_29(Global_4535172[num /*85*/].f_66.f_6, Global_4535172[num /*85*/].f_66.f_4, Global_4535172[num /*85*/].f_66.f_1)==1) Global_4536674=1;
return false;
}
if(Global_2695819){
if(Global_4535172[num /*85*/].f_66.f_6==joaat("CATEGORY_WEAPON_AMMO") || Global_4535172[num /*85*/].f_66.f_6==joaat("CATEGORY_MART")){
Global_4536675=1;
return false;
}}}
transactionId=func_28(num);
if(transactionId !=2147483647){
if(flag || flag2 || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(transactionId)){
Global_4535172[num /*85*/].f_66.f_13=1;
Global_4535172[num /*85*/].f_66.f_12=0;
Global_4535172[num /*85*/].f_66.f_14=MISC::GET_FRAME_COUNT();
if(flag){
Global_4535172[num /*85*/].f_66.f_8=1;
Global_4535172[num /*85*/].f_66.f_12=1;
}
Global_4535172[num /*85*/].f_66.f_18=0;
if(flag || flag2) func_25(Global_4535172[num /*85*/], num);
Global_4536659=true;
return true;
}}
return false;
}


void func_25(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85) // Position - 0x1812{
struct<36> eventData;
int playerBits;
if(iParam85 < 0) return;
eventData.f_2=2147483647;
eventData=-444617715;
eventData.f_1=PLAYER::PLAYER_ID();
eventData.f_2={
uParam0.f_66 
};
eventData.f_2.f_33=iParam85;
playerBits=_GET_PLAYER_SCRIPT_EVENT_BITS(eventData.f_1);
if(Global_262145.f_24076 && !Global_262145.f_24077 && !Global_262145.f_24078) return;
if(!playerBits==0){
func_26();
SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 36, playerBits);
}
return;
}


void func_26() // Position - 0x18A4{
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
return;
}
int _GET_PLAYER_SCRIPT_EVENT_BITS(int iParam0) // Position - 0x18B3{
var address;
if(iParam0 !=-1) MISC::SET_BIT(&address, iParam0);
return address;
}

int func_28(int iParam0) // Position - 0x18CB{
if(iParam0 >=0 && iParam0 < 15) return Global_4535172[iParam0 /*85*/].f_66;
return -1;
}

int func_29(int iParam0, int iParam1, int iParam2) // Position - 0x18F2{
if(iParam0==-433440095 || iParam0==joaat("CATEGORY_SERVICE_WITH_THRESHOLD")){
switch (iParam1){
case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
if(iParam2 >=10000) return 1;
else return 0;
break;
case joaat("SERVICE_EARN_PICKUP"):
case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
case joaat("SERVICE_EARN_CASHING_OUT"):
case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
if(iParam2 >=1000) return 1;
else return 2;
break;
case joaat("SERVICE_EARN_DEBUG"):
return 0;
case joaat("SERVICE_EARN_INITIAL_CASH"):
case joaat("SERVICE_EARN_JOBS"):
case joaat("SERVICE_EARN_BETTING"):
case joaat("SERVICE_EARN_LOTTERY"):
case joaat("SERVICE_EARN_CHALLENGE_WIN"):
case joaat("SERVICE_EARN_PROPERTY_SALES"):
case joaat("SERVICE_EARN_VEHICLE_SALES"):
case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
case joaat("SERVICE_EARN_CRATE_DROP"):
case joaat("SERVICE_EARN_HOLDUPS"):
case joaat("SERVICE_EARN_IMPORT_EXPORT"):
case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
case joaat("SERVICE_EARN_JOBSHARE_CASH"):
case joaat("SERVICE_EARN_NOT_BADSPORT"):
case joaat("SERVICE_EARN_BANK_INTEREST"):
case joaat("SERVICE_EARN_ROCKSTAR"):
case joaat("SERVICE_EARN_CNCW"):
case joaat("SERVICE_EARN_CNCB"):
case joaat("SERVICE_EARN_JOB_BONUS"):
case joaat("SERVICE_EARN_BEND_JOB"):
case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
case joaat("SERVICE_EARN_REFUND_LOTTERY"):
case -1426920838:
case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
case joaat("SERVICE_EARN_BOSS"):
case joaat("SERVICE_EARN_GOON"):
case joaat("SERVICE_EARN_BOSS_AGENCY"):
case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
case joaat("SERVICE_EARN_PREMIUM_JOB"):
case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
case joaat("SERVICE_EARN_REFUNDAMMODROP"):
case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
case joaat("SERVICE_EARN_GANGOPS_WAGES"):
case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
case joaat("SERVICE_EARN_GANGOPS_SETUP"):
case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
case joaat("SERVICE_EARN_GANGOPS_FINALE"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
case joaat("SERVICE_EARN_NIGHTCLUB_DANCING_AWARD"):
case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
case joaat("SERVICE_EARN_ARENA_WAR"):
case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
return 1;
case joaat("SERVICE_SPEND_AIRSTRIKE"):
case joaat("SERVICE_SPEND_AMMO_DROP"):
case joaat("SERVICE_SPEND_BACKUP_GANG"):
case joaat("SERVICE_SPEND_BACKUP_HELI"):
case joaat("SERVICE_SPEND_BOAT_PICKUP"):
case joaat("SERVICE_SPEND_BOUNTY"):
case joaat("SERVICE_SPEND_BULL_SHARK"):
case joaat("SERVICE_SPEND_CAR_IMPOUND"):
case joaat("SERVICE_SPEND_CASH_SHARED"):
case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
case joaat("SERVICE_SPEND_HELI_PICKUP"):
case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
case joaat("SERVICE_SPEND_HIRE_MUGGER"):
case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
return 2;
default:
return 0;
}
switch (iParam1){
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
case joaat("SERVICE_EARN_FROM_CONTRABAND"):
case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
case 883337077:
case -1274418755:
case -1853979468:
case -239888995:
case 1163066566:
case -955087020:
case 1874391251:
return 1;
case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
return 2;
}}elseif(iParam0==joaat("CATEGORY_SERVICE_WITH_LIMIT") || iParam0==joaat("CATEGORY_PRICE_MODIFIER") || iParam0==joaat("CATEGORY_PRICE_OVERRIDE")){
return 0;
}
return 1;
}

int func_30() // Position - 0x1F04{
int i;
i=0;
for (i=0;
i < 15;
i=i + 1){
if(func_28(i) !=2147483647)if(func_10(i)) return i;
}
return -1;
}
BOOL func_31(int iParam0) // Position - 0x1F3F{
if(iParam0 >=500 && iParam0 <=599 || iParam0==408) return true;
return false;
}


void func_32(int iParam0, BOOL bParam1) // Position - 0x1F6C{
BOOL hasTheMoney;
BOOL notBankrupt;
var unk;
int num;
int num2;
var unk14;
var unk17;
if(iParam0==-1) return;
NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_28(iParam0));
if(Global_4535172[iParam0 /*85*/].f_66.f_10==1){}elseif(Global_4535172[iParam0 /*85*/].f_66.f_10==4){
hasTheMoney=true;
}elseif(Global_4535172[iParam0 /*85*/].f_66.f_10==2){
notBankrupt=true;
}
num=-1;
num.f_1=-1;
num.f_2=-1;
num.f_3=-1;
num.f_4=-1;
num.f_5=-1;
num.f_6=-1;
num.f_7=-1;
num.f_8=-1;
num.f_9=-1;
func_35(&num);
switch (Global_4535172[iParam0 /*85*/].f_66.f_4){
case joaat("SERVICE_SPEND_MOVE_YACHT"):
MONEY::NETWORK_SPENT_MOVE_YACHT(Global_4535172[iParam0 /*85*/].f_66.f_1, notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
unk_0x17E677BC555ACA6B(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14), notBankrupt, hasTheMoney, 0);
break;
case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
MONEY::NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], &(Global_4535172[iParam0 /*85*/].f_14), notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_CINEMA"):
MONEY::NETWORK_SPENT_CINEMA(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_STRIP_CLUB"):
MONEY::NETWORK_SPENT_IN_STRIPCLUB(Global_4535172[iParam0 /*85*/].f_66.f_1, notBankrupt, Global_4535172[iParam0 /*85*/].f_2, hasTheMoney);
break;
case joaat("SERVICE_EARN_JOB_BONUS"):
unk_0xD20D79671A598594(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
break;
case joaat("SERVICE_SPEND_TELESCOPE"):
MONEY::NETWORK_SPENT_TELESCOPE(Global_4535172[iParam0 /*85*/].f_66.f_1, notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_CALL_PLAYER"):
MONEY::NETWORK_SPENT_CALL_PLAYER(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14), notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_CARWASH"):
MONEY::NETWORK_SPENT_CARWASH(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_EARN_CRATE_DROP"):
MONEY::NETWORK_EARN_FROM_CRATE_DROP(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_HEALTHCARE"):
MONEY::NETWORK_BUY_HEALTHCARE(Global_4535172[iParam0 /*85*/].f_66.f_1, notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_EARN_BETTING"):
MONEY::NETWORK_EARN_FROM_BETTING(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_34));
break;
case joaat("SERVICE_SPEND_CASH_DROP"):
MONEY::NETWORK_SPENT_CASH_DROP(Global_4535172[iParam0 /*85*/].f_66.f_1, notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_ARREST_BAIL"):
MONEY::NETWORK_SPENT_ARREST_BAIL(Global_4535172[iParam0 /*85*/].f_66.f_1, notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
unk_0xA4E4AB7B246BB4B4(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_34), -1);
break;
case joaat("SERVICE_SPEND_BOUNTY_DM"):
MONEY::NETWORK_SPENT_BOUNTY(Global_4535172[iParam0 /*85*/].f_66.f_1, notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_WAGER"):
unk_0xB028602A9DE34C4F(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_SPEND_PAY_BOSS"):
unk_0x902E7F5EA6F641C7(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_SPEND_PAY_GOON"):
unk_0x2D5A5E4C003023CE(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
MONEY::NETWORK_SPENT_RENAME_ORGANIZATION(Global_4535172[iParam0 /*85*/].f_66.f_1, notBankrupt, hasTheMoney);
break;
case 2115896461:
unk_0x446798F7495DD7D8(Global_4535172[iParam0 /*85*/].f_66.f_1, notBankrupt, hasTheMoney, func_34(&(Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_265)));
break;
case 797947947:
unk_0x842B1C5AF61ACDE9(Global_4535172[iParam0 /*85*/].f_66.f_1, notBankrupt, hasTheMoney, func_34(&(Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_281)));
break;
case joaat("SERVICE_EARN_JOBS"):
MONEY::NETWORK_EARN_FROM_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
break;
case joaat("SERVICE_EARN_PREMIUM_JOB"):
MONEY::NETWORK_EARN_FROM_PREMIUM_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
break;
case joaat("SERVICE_SPEND_CAR_IMPOUND"):
MONEY::NETWORK_BUY_ITEM(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 14, 1, notBankrupt, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 0, 0, 0, hasTheMoney);
break;
case joaat("SERVICE_SPEND_PASSIVE"):
unk_0x43BB1316FFDE3086(Global_4535172[iParam0 /*85*/].f_66.f_1, notBankrupt, hasTheMoney, 0);
break;
case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
MONEY::NETWORK_EARN_FROM_BOUNTY(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14), &(Global_4535172[iParam0 /*85*/].f_14.f_13), 1);
break;
case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
MONEY::NETWORK_EARN_FROM_GANGATTACK_PICKUP(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_PICKUP"):
case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
MONEY::NETWORK_EARN_FROM_PICKUP(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
unk_0x096377350FDE5108(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_HOLDUPS"):
MONEY::NETWORK_EARN_FROM_HOLDUPS(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
MONEY::NETWORK_PAY_EMPLOYEE_WAGE(Global_4535172[iParam0 /*85*/].f_66.f_1, notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_UTILITY_BILLS"):
unk_0xF2D8B7E30F34379C(Global_4535172[iParam0 /*85*/].f_66.f_1, notBankrupt, hasTheMoney, &Global_4540944);
break;
case joaat("SERVICE_SPEND_PA_SERVICE_DANCER"):
unk_0xBCD0BD6B2A87805C(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
MONEY::NETWORK_SPENT_PA_HELI_PICKUP(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
MONEY::NETWORK_SPENT_MC_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
MONEY::NETWORK_SPENT_MC_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
MONEY::NETWORK_SPENT_MC_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
MONEY::NETWORK_SPENT_MC_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
MONEY::NETWORK_SPENT_MC_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, notBankrupt, hasTheMoney);
break;
case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
case joaat("SERVICE_EARN_REFUND_LOTTERY"):
case -1426920838:
case joaat("SERVICE_EARN_REFUNDAMMODROP"):
case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
MONEY::NETWORK_REFUND_CASH(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_40), &(Global_4535172[iParam0 /*85*/].f_14.f_44), notBankrupt);
break;
case joaat("SERVICE_EARN_ROCKSTAR"):
MONEY::NETWORK_EARN_FROM_ROCKSTAR(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_DESTROY_VEH", &unk);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_DISTRACT_COPS", &unk);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_PLANE_TAKEDOWN", &unk);
break;
case joaat("SERVICE_SPEND_FAIRGROUND"):
MONEY::NETWORK_BUY_FAIRGROUND_RIDE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, notBankrupt, hasTheMoney, 0);
break;
case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
unk_0x38FB1F701131E803(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0);
break;
case joaat("SERVICE_EARN_IMPORT_EXPORT"):
MONEY::NETWORK_EARN_FROM_IMPORT_EXPORT(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_3);
break;
case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
MONEY::NETWORK_EARN_FROM_AI_TARGET_KILL(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case joaat("SERVICE_SPEND_REQUEST_JOB"):
MONEY::NETWORK_SPENT_REQUEST_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, notBankrupt, hasTheMoney, Global_4535172[iParam0 /*85*/]);
break;
case joaat("SERVICE_SPEND_TAXI"):
if(Global_4535172[iParam0 /*85*/].f_66.f_16==1) num2=1;
unk_0xE80C5CBEC787289E(Global_4535172[iParam0 /*85*/].f_66.f_1, notBankrupt, hasTheMoney, 0, num2);
break;
case joaat("SERVICE_EARN_BEND_JOB"):
MONEY::NETWORK_EARN_FROM_BEND_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
break;
case joaat("SERVICE_EARN_CHALLENGE_WIN"):
unk_0x0706E3C3521ABA09(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_34), Global_4535172[iParam0 /*85*/].f_4);
break;
case joaat("SERVICE_EARN_NOT_BADSPORT"):
MONEY::NETWORK_EARN_FROM_NOT_BADSPORT(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4535172[iParam0 /*85*/].f_66.f_1, "RaceToPoint", false, false);
break;
case joaat("SERVICE_SPEND_PROSTITUTES"):
MONEY::NETWORK_SPENT_PROSTITUTES(Global_4535172[iParam0 /*85*/].f_66.f_1, false, false);
break;
case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
MONEY::NETWORK_BUY_ITEM(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_5, 1, notBankrupt, &(Global_4535172[iParam0 /*85*/].f_14.f_40), 0, 0, 0, hasTheMoney);
break;
case -2085313189:
switch (Global_4535172[iParam0 /*85*/].f_66.f_6){
case joaat("CATEGORY_WEAPON_AMMO"):
MONEY::NETWORK_BUY_ITEM(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_5, 1, notBankrupt, &(Global_4535172[iParam0 /*85*/].f_14.f_40), 0, 0, 0, hasTheMoney);
break;
}
break;
case joaat("SERVICE_SPEND_BETTING"):
MONEY::NETWORK_SPENT_BETTING(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, &(Global_4535172[iParam0 /*85*/].f_14.f_34), false, false);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_DELIVER", &unk);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_KILL", &unk);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_KILL_LIST", &unk);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_CP_COLLECTION", &unk);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_TIME_TRIAL", &unk);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_CHALLENGES", &unk);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_HELI", &unk);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_DEAD_DROP", &unk);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_PENNED_IN", &unk);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_PASS_THE_PARCEL", &unk);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_CRIMINAL_DAMAGE", &unk);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_PROPERTY", &unk);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_KING_OF_THE_HILL", &unk);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HUNT_THE_BEAST", &unk);
break;
case joaat("SERVICE_EARN_BOSS"):
unk_0xF2EAC2D361290FDF(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_GOON"):
MONEY::NETWORK_EARN_GOON(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_BOSS_AGENCY"):
MONEY::NETWORK_EARN_AGENCY(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_8);
break;
case joaat("SERVICE_EARN_FROM_CONTRABAND"):
MONEY::NETWORK_EARN_FROM_CONTRABAND(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_9);
break;
case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
MONEY::NETWORK_EARN_FROM_DESTROYING_CONTRABAND(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
MONEY::NETWORK_SPENT_ORDER_BODYGUARD_VEHICLE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
break;
case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
MONEY::NETWORK_SPENT_ORDER_WAREHOUSE_VEHICLE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
break;
case joaat("SERVICE_SPEND_JUKEBOX"):
MONEY::NETWORK_SPENT_JUKEBOX(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 0);
break;
case joaat("SERVICE_SPEND_BUSINESS"):
MONEY::NETWORK_SPENT_PAY_BUSINESS_SUPPLIES(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_9);
break;
case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
MONEY::NETWORK_EARN_FROM_VEHICLE_EXPORT(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7);
break;
case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
MONEY::NETWORK_SPENT_VEHICLE_EXPORT_MODS(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_10, Global_4535172[iParam0 /*85*/].f_11, Global_4535172[iParam0 /*85*/].f_12);
break;
case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
MONEY::NETWORK_SPENT_IMPORT_EXPORT_REPAIR(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
break;
case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
unk_0x9C45376A1294E50D(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_8);
break;
case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
MONEY::NETWORK_EARN_WAGE_PAYMENT_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_WAGE_PAYMENT"):
unk_0x9A9E6CDBC9F34AE5(Global_4535172[iParam0 /*85*/].f_66.f_1, 0);
break;
case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "GB_SALVAGE", &unk);
break;
case joaat("SERVICE_EARN_CASHING_OUT"):
MONEY::NETWORK_EARN_FROM_CASHING_OUT(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
unk_0xD9F1B54B70098ED3(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
break;
case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
unk_0xA4C94984AEC0AF8E(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
break;
case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
MONEY::NETWORK_EARN_FIRST_TIME_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
break;
case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
MONEY::NETWORK_SPENT_EMPLOY_ASSASSINS(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
break;
case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
MONEY::NETWORK_EARN_TARGET_REFUND(Global_4535172[iParam0 /*85*/].f_66.f_1, 0);
break;
case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
MONEY::NETWORK_EARN_TARGET_REFUND(Global_4535172[iParam0 /*85*/].f_66.f_1, 1);
break;
case joaat("SERVICE_EARN_GANGOPS_WAGES"):
MONEY::NETWORK_EARN_GANGOPS_WAGES(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
MONEY::NETWORK_EARN_GANGOPS_WAGES_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
MONEY::NETWORK_EARN_GANGOPS_PREP_PARTICIPATION(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_GANGOPS_SETUP"):
case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
MONEY::NETWORK_EARN_GANGOPS_SETUP(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
break;
case joaat("SERVICE_EARN_GANGOPS_FINALE"):
MONEY::NETWORK_EARN_GANGOPS_FINALE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
break;
case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 0);
break;
case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 1);
break;
case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 2);
break;
case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 3);
break;
case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 4);
break;
case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 5);
break;
case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 6);
break;
case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 7);
break;
case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 8);
break;
case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 9);
break;
case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 10);
break;
case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 0);
break;
case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 1);
break;
case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 2);
break;
case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
break;
case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
break;
case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
MONEY::NETWORK_EARN_DOOMSDAY_FINALE_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_9);
break;
case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
MONEY::NETWORK_SPEND_GANGOPS_SKIP_MISSION(Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
break;
case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
MONEY::NETWORK_SPEND_GANGOPS_START_STRAND(Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_1, false, true);
break;
case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
MONEY::NETWORK_EARN_BOUNTY_HUNTER_REWARD(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
if(_NETWORK_IS_PLAYER_VALID(PLAYER::INT_TO_PLAYERINDEX(Global_4535172[iParam0 /*85*/]), false, false)) MONEY::NETWORK_SPENT_NIGHTCLUB_ENTRY_FEE(PLAYER::INT_TO_PLAYERINDEX(Global_4535172[iParam0 /*85*/]), Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_66.f_1, false, true);
break;
case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
MONEY::NETWORK_SPENT_REHIRE_DJ(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], false, true);
break;
case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
MONEY::NETWORK_SPEND_NIGHTCLUB_BAR_DRINK(Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1, false, true);
break;
case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
MONEY::NETWORK_EARN_FROM_BUSINESS_BATTLE(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
unk_0xB83B085744F6C174(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
MONEY::NETWORK_EARN_FROM_BUSINESS_HUB_SELL(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_9);
break;
case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
unk_0x7B21B556399F29A8(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
MONEY::NETWORK_EARN_FMBB_WAGE_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
MONEY::NETWORK_SPENT_ARENA_JOIN_SPECTATOR(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15, false, true);
break;
case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
MONEY::NETWORK_EARN_BB_EVENT_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
MONEY::NETWORK_EARN_ARENA_SKILL_LEVEL_PROGRESSION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
MONEY::NETWORK_EARN_ARENA_CAREER_PROGRESSION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
MONEY::NETWORK_SPEND_ARENA_SPECTATOR_BOX(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], false, true);
break;
case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
MONEY::NETWORK_SPEND_MAKE_IT_RAIN(Global_4535172[iParam0 /*85*/].f_66.f_1, false, false);
break;
case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
MONEY::NETWORK_EARN_SPIN_THE_WHEEL_CASH(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
MONEY::NETWORK_SPEND_SPIN_THE_WHEEL_PAYMENT(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, true);
break;
case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
MONEY::NETWORK_EARN_ARENA_WAR_ASSASSINATE_TARGET(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_ARENA_WAR"):
MONEY::NETWORK_EARN_ARENA_WAR(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_16, Global_4535172[iParam0 /*85*/].f_1);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
MONEY::NETWORK_EARN_RC_TIME_TRIAL(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
MONEY::NETWORK_EARN_DAILY_OBJECTIVE_EVENT(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
MONEY::NETWORK_EARN_COLLECTABLES_ACTION_FIGURES(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
MONEY::NETWORK_EARN_CASINO_MISSION_REWARD(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
MONEY::NETWORK_EARN_CASINO_STORY_MISSION_REWARD(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
MONEY::NETWORK_EARN_CASINO_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case joaat("SERVICE_SPEND_CASINO_GENERIC"):
unk_0xFA5071F459A54000(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), Global_4535172[iParam0 /*85*/]);
break;
case joaat("SERVICE_SPEND_ARCADE_GAME"):
MONEY::NETWORK_SPEND_PLAY_ARCADE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
MONEY::NETWORK_SPEND_ARCADE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
MONEY::NETWORK_SPEND_CASINO_HEIST_SKIP_MISSION(Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
break;
case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 0, 0);
break;
case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
break;
case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
break;
case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_DEBUG"):
break;
}
switch (Global_4535172[iParam0 /*85*/].f_66.f_4){
case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
MONEY::NETWORK_EARN_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
break;
case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
MONEY::NETWORK_EARN_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
break;
case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
MONEY::NETWORK_EARN_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
MONEY::NETWORK_EARN_CASINO_HEIST_AWARDS(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
break;
case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
MONEY::NETWORK_EARN_CASINO_HEIST_AWARDS(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
MONEY::NETWORK_EARN_CASINO_COLLECTABLE_COMPLETED_COLLECTION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
MONEY::NETWORK_EARN_COLLECTABLE_COMPLETED_COLLECTION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
num=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &num);
break;
case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
num.f_1=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &num);
break;
case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
num.f_2=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &num);
break;
case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
num.f_3=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &num);
break;
case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
num.f_4=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &num);
break;
case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
num.f_5=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &num);
break;
case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
num.f_6=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &num);
break;
case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
num.f_7=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &num);
break;
case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
MONEY::NETWORK_SPEND_BEACH_PARTY(Global_4535172[iParam0 /*85*/]);
break;
case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
unk_0xDDC3F536EDA530D7(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
MONEY::NETWORK_EARN_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/].f_66.f_16, Global_4535172[iParam0 /*85*/], 0, 0);
break;
case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
MONEY::NETWORK_EARN_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
MONEY::NETWORK_EARN_FROM_ISLAND_HEIST_DJ_MISSION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
MONEY::NETWORK_SPEND_SUBMARINE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
break;
case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
MONEY::NETWORK_SPEND_SUBMARINE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, Global_4535172[iParam0 /*85*/].f_66.f_1, 0);
break;
case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
MONEY::NETWORK_SPEND_SUBMARINE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
MONEY::NETWORK_SPEND_CASINO_CLUB(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_10, Global_4535172[iParam0 /*85*/].f_11, Global_4535172[iParam0 /*85*/].f_12, Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7);
break;
case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
unk_0xD506AB2E4CDCB58C(Global_4535172[iParam0 /*85*/].f_66.f_1, -1, -1, Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
unk_0xD506AB2E4CDCB58C(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_1, MISC::GET_HASH_KEY(&(Global_4535172[iParam0 /*85*/].f_14.f_26)), -1, -1);
break;
case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
MONEY::NETWORK_EARN_CARCLUB_MEMBERSHIP(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
MONEY::NETWORK_EARN_DAILY_VEHICLE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
MONEY::NETWORK_EARN_DAILY_VEHICLE_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
unk_0x1A01677EC27573F3(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_44));
break;
case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
MONEY::NETWORK_SPEND_INTERACTION_MENU_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
unk_0x2FB9E5AFF13BBBD1(Global_4535172[iParam0 /*85*/].f_66.f_1, 277);
break;
case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
unk_0xB40F96D6D252839B(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Global_4540926);
break;
case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
unk_0x050E00EF3147C8A7(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
unk_0xC8D7A0BD9DF03F2C(Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
unk_0x08FC800C8292E3D7(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
unk_0x89B53A3D8B028463(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
unk_0x51C57EB1393F5210(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
unk_0x1F937579254BC384(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
unk_0x0ECD9F20C4C766A8(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
unk_0xF5F76DD24A185B08(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
unk_0x3479FBC3BA30F235(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_SPEND_REQUEST_SUPPLY"):
unk_0x5B16305919429CC1(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case joaat("SERVICE_SPEND_REQUEST_SOURCE_MOTORCYCLE"):
unk_0x7B3712C16D170E76(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case joaat("SERVICE_SPEND_REQUEST_OUT_OF_SIGHT"):
unk_0x12430783CDB9E80B(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
unk_0x9A817A880869D611(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
unk_0x59C66FFC48B94777(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_16, Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
unk_0xB05F90B296113984(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
break;
case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Global_4535172[iParam0 /*85*/].f_66.f_1, 1989714117);
break;
case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
unk_0x430F4990DB2E9D49(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
break;
case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
unk_0x9D37ED16F0152789(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case joaat("SERVICE_SPEND_TONY_LIMO"):
unk_0x76BFD614D74017E7(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case joaat("SERVICE_SPEND_HELI_PICKUP"):
unk_0xDF34820949F1269B(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
break;
case joaat("SERVICE_SPEND_BOAT_PICKUP"):
unk_0xEFD482B815CC8ACF(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
break;
case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
case -239888995:
case 1163066566:
case -955087020:
case 1874391251:
unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &unk);
break;
case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
unk_0x4FAF261C88BF8D20(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case -2081984382:
STATS::PLAYSTATS_NPC_PHONE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0);
break;
case 1089562091:
unk_0x76BFD614D74017E7(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case 883337077:
unk14=Global_4535172[iParam0 /*85*/].f_13;
unk14.f_1=Global_4535172[iParam0 /*85*/];
unk14.f_2=Global_4535172[iParam0 /*85*/].f_66.f_15;
unk_0x991E1588FAD9019D(Global_4535172[iParam0 /*85*/].f_66.f_1, &unk14);
break;
case -1274418755:
unk_0x9C0C6BD0F94CE391(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case -1853979468:
unk_0xCABC9874AFA70D6D(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 1633116913:
unk_0xE01D10BA8CD53621(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 668586600:
unk_0x40FF6CCCC476185C(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 15168061:
unk_0xCE4452AE85F5E252(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 590289134:
unk_0xC376B92D0E060970(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 99792878:
unk_0xDDF047577F1A02A7(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 1866258778:
unk_0xD1A8165767AD2D23(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case -178394060:
unk_0xC30650FA74A19D02(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 409592287:
unk_0xD01EBAEA1F905EF6(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 593836803:
unk_0xBEAFBB1B98B7EF55(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 1973036520:
unk_0xA914768AD35CD3A5(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 2063456538:
unk_0xE3942D59E8A7F70D(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case -728008329:
unk_0x136F11B5DF1B304D(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 119239868:
unk_0xCA3EF9B09A8D76B4(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
}
if(_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())if(bParam1) NETSHOPPING::NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Global_4535172[iParam0 /*85*/].f_66, &unk17);
func_7(iParam0);
return;
}
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x43CA{
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


var func__34(var uParam0) // Position - 0x442A{
return uParam0;
}


void func_35(var uParam0) // Position - 0x4434{
*uParam0=-1;
uParam0->f_1=-1;
uParam0->f_2=-1;
uParam0->f_3=-1;
uParam0->f_4=-1;
uParam0->f_5=-1;
uParam0->f_6=-1;
uParam0->f_7=-1;
uParam0->f_8=-1;
uParam0->f_9=-1;
return;
}

int func_36(int iParam0, var uParam1) // Position - 0x446D{
int i;
i=0;
for (i=0;
i < 15;
i=i + 1){
if(Global_4535172[i /*85*/].f_66==iParam0){
*uParam1={
Global_4535172[i /*85*/] 
};
return i;
}}
return -1;
}


void func_37(int iParam0) // Position - 0x44B0{
Hash hashKey;
Hash hash;
char* str;
BOOL flag;
BOOL flag2;
int num;
if(Global_4540733[iParam0 /*12*/].f_1==Global_4540733[iParam0 /*12*/].f_6)if(Global_4540733[iParam0 /*12*/].f_1 !=1445302971 && Global_4540733[iParam0 /*12*/].f_1 !=-1316591359) return;
hashKey=0;
str="Wardrobe";
hashKey=MISC::GET_HASH_KEY(str);
hashKey=hashKey || func_39();
hashKey=hashKey + Global_4538682;
func_38(&hash);
hashKey=hashKey || hash;
MISC::CLEAR_BIT(&hashKey, 28);
MISC::CLEAR_BIT(&hashKey, 29);
MISC::CLEAR_BIT(&hashKey, 26);
flag=Global_4540733[iParam0 /*12*/].f_9 && hashKey;
flag2=Global_4540733[iParam0 /*12*/].f_8 && hashKey;
num=Global_4540733[iParam0 /*12*/].f_7;
if(num==0) num=-2085313189;
if(Global_4540733[iParam0 /*12*/] !=Global_4540733[iParam0 /*12*/].f_5 || Global_4540733[iParam0 /*12*/].f_1 !=Global_4540733[iParam0 /*12*/].f_6 || Global_4540733[iParam0 /*12*/].f_2 !=num || Global_4540733[iParam0 /*12*/].f_3 !=flag2 + flag) Global_110350=1;
return;
}

int func_38(var uParam0) // Position - 0x45DC{
*uParam0=SYSTEM::SHIFT_LEFT(1, 2);
return 5410420;
}
Hash func_39() // Position - 0x45F1{
return SYSTEM::SHIFT_LEFT(1, 25);
}
BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x4600{
if(Global_1575035==0)if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return true;
if(func_47()) return true;
if(Global_2696915) return true;
if(func_46()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(159))if(!func_44()) return true;
if(_DOES_EVENT_OF_TYPE_EXIST(157)) return true;
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()) return true;
if(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() !=0)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())==0) return true;
return false;
}
Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x4684{
switch (func_43()){
case 0:
return func_42();
case 2:
return joaat("creator");
}
return 0;
}
Hash func_42() // Position - 0x46B7{
switch (Global_2697019){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_43() // Position - 0x46DB{
return Global_32163;
}
BOOL func_44() // Position - 0x46E6{
return Global_2683862.f_698;
}
BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x46F5{
if(SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0)) return true;
return false;
}
BOOL func_46() // Position - 0x470C{
return Global_2694524;
}
BOOL func_47() // Position - 0x4718{
return Global_2683862.f_693;
}


void func_48() // Position - 0x4727{
SYSTEM::WAIT(0);
return;
}


void func_49() // Position - 0x4734{
func_50();
return;
}


void func_50() // Position - 0x4740{
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_51(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33) // Position - 0x474C{
if(Global_262145.f_24076) func_49();
uLocal_22.f_66={
uParam0 
};
uLocal_22={
uParam0.f_19 
};
uLocal_22.f_14={
Global_4535172[uParam0.f_33 /*85*/].f_14 
};
iLocal_21=uParam0.f_33;
if(uParam0.f_33 < 0) func_49();
if(!func_52(uParam0, uParam0.f_33)){
func_7(uParam0.f_33);
func_49();
}
if(uLocal_22.f_66.f_2 !=0) uLocal_22.f_66.f_2=1;
return;
}
BOOL func_52(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19) // Position - 0x47D0{
if(Global_4535172[iParam19 /*85*/].f_66.f_1 !=uParam0.f_1) return false;
if(Global_4535172[iParam19 /*85*/].f_66.f_3 !=uParam0.f_3) return false;
if(Global_4535172[iParam19 /*85*/].f_66.f_4 !=uParam0.f_4) return false;
if(Global_4535172[iParam19 /*85*/].f_66.f_5 !=uParam0.f_5) return false;
if(Global_4535172[iParam19 /*85*/].f_66.f_6 !=uParam0.f_6) return false;
if(Global_4535172[iParam19 /*85*/].f_66.f_7 !=uParam0.f_7) return false;
if(Global_4535172[iParam19 /*85*/].f_66.f_14 !=uParam0.f_14) return false;
if(Global_4535172[iParam19 /*85*/].f_66.f_17 !=uParam0.f_17) return false;
return true;
}