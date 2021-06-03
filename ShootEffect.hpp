#ifndef SHOOTEFFECT_HPP_INCLUDED
#define SHOOTEFFECT_HPP_INCLUDED
#include <allegro5/bitmap.h>
#include <memory>
#include <vector>
#include "Point.hpp"
#include "Sprite.hpp"

class PlayScene;

class ShootEffect : public Engine::Sprite {
protected:
	PlayScene* getPlayScene();
	float timeTicks;
	std::vector<std::shared_ptr<ALLEGRO_BITMAP>> bmps;
	float timeSpan = 0.2;
public:
	ShootEffect(Engine::Point position);
	void Update(float deltaTime) override;
};

#endif // SHOOTEFFECT_HPP_INCLUDED
