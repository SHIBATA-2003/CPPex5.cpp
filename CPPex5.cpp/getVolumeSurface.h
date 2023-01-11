#pragma once
struct BOX {
	double x;
	double y;
	double z;
	double volume;
	double surface;
	double packSize;
};
void getVolumeSurface(BOX* box);
bool isSendable(BOX* box);

