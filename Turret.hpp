#ifndef TURRET_HPP
#define TURRET_HPP
#include <allegro5/base.h>
#include <list>
#include <vector>
#include <string>

#include "Point.hpp"
#include "Sprite.hpp"

class Bullet;
class Enemy;
class PlayScene;

class Turret: public Engine::Sprite {
protected:
    float hp;
    int price;
    float coolDown;
    float reload = 0;
    float rotateRadian = 2 * ALLEGRO_PI;
    std::list<Turret*>::iterator lockedTurretIterator;
    std::string turrent_type;
    PlayScene* getPlayScene();
    // Reference: Design Patterns - Factory Method.
    virtual void CreateBullet() = 0;
    virtual void OnExplode();

public:
    bool Enabled = true;
    bool Preview = false;
    Enemy* Target = nullptr;
    std::list<Enemy*> lockedEnemies;
	std::list<Bullet*> lockedBullets;
    Turret(/*std::string imgBase,*/std::string imgTurret, float x, float y, float radius, float hp, int price, float coolDown);
    void Hit(float damage);
    void Update(float deltaTime) override;
    void Draw() const override;
	int GetPrice() const;
};
#endif // TURRET_HPP



