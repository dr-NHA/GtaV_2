function TP(Player){
if(Player.Address!=LocalPlayer.Address&&Player.Health>3){
Player.Entity.Frozen_LegionStyle=true;
Player.Entity.Invisible=true;
Player.Health=2;ChangePickupVales();
Player.SetPosition(LocalPlayer.PositionWithHeading(2,2),2.3);
}}
function Fin(Player){
if(Player.Address!=LocalPlayer.Address){ChangePickupVales();
Player.SetPosition(LocalPlayer.Position_WayBelow(200),2.3);
Player.Entity.Frozen_LegionStyle=false;
Player.Entity.Invisible=false;
}}


for(var i=0;i<PedArray.length;i++){
TP(PedArray[i]);
}
function MassKill(){
for(var i=0;i<PedArray.length;i++){
Fin(PedArray[i]);
}ChangePickupVales();}

Wait_ThenCall(4200, "MassKill();");



function HPV() {//Creates Our Function For Editing Pickup Values
    for (var i = 0; i < PickupArray.length; i++) {//Loop Through Pickups From PickupArray
        PickupArray[i].Amount= RandomNumberBetween(100000, 2000000);//Set The Pickup Value To A Random Amount Between 1000 & 2000
    }//Ends The Loop
}//Ends The Function

function ChangePickupVales(){
for (var i = 1; i <= 12; i++) {//Making A For Loop
    //Calls Our Function To Heighten Pickup Values After A Delay Till The For Loop Ends
Wait_ThenCall(2*i, "HPV();");
}//Ending Our For Loop
}

