#ifndef OTAKUENEMY_HPP_INCLUDED
#define OTAKUENEMY_HPP_INCLUDED
#include "Enemy.hpp"

class OtakuEnemy : public Enemy {
private:
    float RushPoint;
public:
	OtakuEnemy(int x, int y, float rp);
	float getRushPoint();
	void CreateBullet() override;
};

#endif // OTAKUENEMY_HPP_INCLUDED
