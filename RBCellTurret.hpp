#ifndef RBCELLTURRENT_HPP_INCLUDED
#define RBCELLTURRENT_HPP_INCLUDED
#include "Turret.hpp"

class RBCellTurret: public Turret {
public:
	static const int Price;
    RBCellTurret(float x, float y);
	void CreateBullet() override;
};

#endif // RBCELLTURRENT_HPP_INCLUDED

