#include <string>

#include "SofaEnemy.hpp"

SofaEnemy::SofaEnemy(int x, int y) : Enemy("play/enemy-2.png", x, y, 16, 100, 10, 10, "Sofa"){
	// Use bounding circle to detect collision is for simplicity, pixel-perfect collision can be implemented quite easily,
	// and efficiently if we use AABB collision detection first, and then pixel-perfect collision.
}
