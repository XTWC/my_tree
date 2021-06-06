#include "player.h"

player::player()
{
	pointer_h = 0;
	blood = 100;
	gold = 0;
	exp = 0;
	level = 1;
	alive = true;
}

player::~player()
{

}

bool player::init()
{
	return true;
}

void player::judge_up()
{
	if (exp >= (level * (level + 1) * (level + 2)) / 6)
	{
		exp = 0;
		level += 1;
	}
}

bool player::alive_ornot(player &p)
{
	if (p.alive)
	{
		return true;
	}
	return false;
}
//
void player::add_hero(player &p,hero& h)
{
	
}

void player::add_equipment(equipment e)
{

}