#ifndef BULLET_HPP
#define BULLET_HPP
#include <string>

#include "Sprite.hpp"

class Enemy;
class PlayScene;
class Turret;
namespace Engine {
struct Point;
}  // namespace Engine

class Bullet : public Engine::Sprite {
protected:
	float speed;
	float damage;
	PlayScene* getPlayScene();
	virtual void OnExplode(Enemy* enemy);
	Turret* parent;
	std::string bullet_type;
public:
	Enemy* Target = nullptr;
	explicit Bullet(std::string img, float speed, float damage, Engine::Point position, Engine::Point forwardDirection, float rotation, Turret* parent, std::string type = "Unknown");
	void Update(float deltaTime) override;
	std::string getBulletType();
};
#endif // BULLET_HPP
