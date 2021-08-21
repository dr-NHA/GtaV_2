function Fin(Veh) {
    if (Veh.Address != LocalPlayer.Address) {
        Veh.Entity.Frozen_LegionStyle = true;
        Veh.Entity.SetPosition(LocalPlayer.PositionWithHeading(0, 0), 1.3);
        Veh.Entity.Frozen_LegionStyle = false;

    }
}

function DEST(Veh) {
    if (Veh.Address != LocalPlayer.Address) {
        Veh.Entity.Frozen_LegionStyle = true;
        Veh.Entity.SetPosition(LocalPlayer.PositionWithHeading(0, 0), -501.3); Veh.Entity.Frozen_LegionStyle = false;
    }
}


var OLD = LocalPlayer.Entity.GodMode;
LocalPlayer.Entity.GodMode = true;
for (var i = 0; i < VehicleArray.length; i++) {
    DEST(VehicleArray[i]);
}


LocalPlayer.Entity.GodMode = OLD;
