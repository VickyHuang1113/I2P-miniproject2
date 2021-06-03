#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "GeneralEnemyBullet.hpp"
#include "Group.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "Enemy.hpp"
#include "Turret.hpp"
#include "NormalEnemy.hpp"

NormalEnemy::NormalEnemy(int x, int y) : Enemy("play/enemy-1.png", x, y, 10, 50, 5, 5, 0.5, "Normal"){
}

void NormalEnemy::CreateBullet() {
	Engine::Point diff = Engine::Point(-1,0);
	float rotation = ALLEGRO_PI / 2;
	getPlayScene()->EnemyBulletGroup->AddNewObject(new GeneralEnemyBullet(Position , diff, rotation, this));
}
