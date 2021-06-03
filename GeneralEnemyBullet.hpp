#ifndef GENERALENEMYBULLET_HPP_INCLUDED
#define GENERALENEMYBULLET_HPP_INCLUDED
#include "EnemyBullet.hpp"

class Enemy;
class Turret;
namespace Engine {
struct Point;
}  // namespace Engine

class GeneralEnemyBullet : public EnemyBullet {
public:
	explicit GeneralEnemyBullet(Engine::Point position, Engine::Point forwardDirection, float rotation, Enemy* parent);
	void OnExplode(Turret* turret) override;
};

#endif // GENERALENEMYBULLET_HPP_INCLUDED
