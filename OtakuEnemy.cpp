#include <string>
#include "GameEngine.hpp"
#include "Point.hpp"
#include "OtakuEnemy.hpp"

OtakuEnemy::OtakuEnemy(int x, int y, float rp) : Enemy("play/enemy-4.png", x, y, 10, 50, 5, 5, "Otaku"), RushPoint(rp){
    // TODO2 (6/8): You can imitate the 2 files: 'NormalEnemy.hpp', 'NormalEnemy.cpp' to create a new enemy.
}

float OtakuEnemy::getRushPoint()
{
    return RushPoint;
}
