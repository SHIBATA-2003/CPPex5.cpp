#include "getVolumeSurface.h"
struct BOX {	
	double x;	
	double y;	
	double z;	
	double volume;	
	double surface; 
	double packSize;
};

void getVolumeSurface(BOX* box) {
	box->volume = box->x * box->y * box->z;
	box->surface = 2 * (box->x * box->y + box->x * box->z + box->y * box->z);
	return;
}

bool isSendable(BOX* box)
{
	double BoxSize = box->x + box->y + box->z;
	if (BoxSize < 60)
	{
		box->packSize = 60;
	}
	else if (BoxSize < 80)
	{
		box->packSize = 80;
	}
	else if (BoxSize < 100)
	{
		box->packSize = 100;
	}
	else if (BoxSize < 120)
	{
		box->packSize = 120;
	}
	else if (BoxSize < 140)
	{
		box->packSize = 140;
	}
	else if (BoxSize < 160)
	{
		box->packSize = 160;
	}
	else if (BoxSize < 180)
	{
		box->packSize = 180;
	}
	else if (BoxSize < 200)
	{
		box->packSize = 200;
	}
	else
	{
		return false;
	}
	return true;
}