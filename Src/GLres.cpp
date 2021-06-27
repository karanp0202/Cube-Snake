#include "../Include/Base.hxx"

getColors color;
getCoords coord;
Snake mainsnake;

void getValues() {
	color.get("./Res/colors.dat");
	coord.get("./Res/coords.dat");
};
