#include "../Include/Base.hxx"

getColors color;
getCoords coord;
Snake mainsnake;
Tail maintail;
Food mainfood;

void getValues() {
	color.get("./Res/colors.dat");
	coord.get("./Res/coords.dat");

	maintail.addTail(50);
	mainfood.addFood(40);
};
