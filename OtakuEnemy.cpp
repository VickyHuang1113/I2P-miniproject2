#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "GameEngine.hpp"
#include "GeneralEnemyBullet.hpp"
#include "Group.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "Enemy.hpp"
#include "Turret.hpp"
#include "OtakuEnemy.hpp"

OtakuEnemy::OtakuEnemy(int x, int y, float rp) : Enemy("play/enemy-4.png", x, y, 10, 50, 5, 5, 0.5, "Otaku"), RushPoint(rp){
    //Created by imitating 'NormalEnemy.hpp', 'NormalEnemy.cpp'
}

float OtakuEnemy::getRushPoint()
{
    return RushPoint;
}

void OtakuEnemy::CreateBullet() {
	Engine::Point diff = Engine::Point(-1,0);
	float rotation = ALLEGRO_PI / 2;
	getPlayScene()->EnemyBulletGroup->AddNewObject(new GeneralEnemyBullet(Position , diff, rotation, this));
}
