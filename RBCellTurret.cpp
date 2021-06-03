#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "AudioHelper.hpp"
#include "ChipBullet.hpp"
#include "Group.hpp"
#include "RBCellTurret.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "Enemy.hpp"

const int RBCellTurret::Price = 30;
RBCellTurret::RBCellTurret(float x, float y) :
	Turret("play/turret-3.png", x, y, 10, 50, Price, 0.5) {
    //Created by imitating 'WBCellTurret.hpp', 'WBCellTurret.cpp'
	// Move center downward, since we the turret head is slightly biased upward.
	Anchor.y += 8.0f / GetBitmapHeight();
}
void RBCellTurret::CreateBullet() {
	Engine::Point diff = Engine::Point(1,0);
	float rotation = ALLEGRO_PI / 2;
	getPlayScene()->BulletGroup->AddNewObject(new ChipBullet(Position , diff, rotation, this));
	AudioHelper::PlayAudio("gun.wav");
}
