#pragma once
#ifndef __player_H__
#define __player_H__
#include "cocos2d.h"
#include <vector>

using namespace cocos2d;

class equipment :public Node
{
public:
	Sprite picture;
	int price, ad, ap, blood, attack_speed, attack_distance;
};

class hero :public Node
{
public:
	Sprite picture;
	int level, blood, ad, ap, attack_speed, attack_distance;
	equipment my_equipment[6];
};

class player : public Node
{
public:
	player();
	~player();
	CREATE_FUNC(player);
	Sprite picture;
	virtual bool init();
	hero my_hero[9];
	int pointer_h;
	int gold,blood,exp,level;
	bool alive;
	void judge_up();
	void add_hero(player& p, hero& h);
	void add_equipment(equipment e);
	bool alive_ornot(player &p);
};
#endif
