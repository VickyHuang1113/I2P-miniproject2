#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <list>
#include <vector>
#include <string>

#include "Point.hpp"
#include "Sprite.hpp"

class Bullet;
class PlayScene;
class Turret;

class Enemy : public Engine::Sprite {
protected:
	Engine::Point target; //Record it's end point. Being used in the calculation of end time.
	float speed;
	float hp;
	int money;
	float coolDown;
    float reload = 0;
	std::string enemy_type;
	PlayScene* getPlayScene();
	virtual void OnExplode();
	std::list<Enemy*>::iterator lockedEnemyIterator;
    virtual void CreateBullet() = 0;
public:
    Turret* Target = nullptr;
	float reachEndTime;
	std::list<Turret*> lockedTurrets;
	std::list<Bullet*> lockedBullets;
	Enemy(std::string img, float x, float y, float radius, float speed, float hp, int money, float coolDown, std::string type);
 	void Hit(float damage, std::string bullet_type = "Unknown");
	void Update(float deltaTime) override;
	void Draw() const override;
	std::string getEnemyType();
};
#endif // ENEMY_HPP

//NOTE: lockedEnemyIterator, CreateBullet, Target
