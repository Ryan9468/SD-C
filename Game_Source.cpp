#include "main.h"

void Player::Move(int X, int Y) {
    Player::posX = X;
    Player::posY = Y;
    cout << "\n(" << this->posX << "," << this->posY << ")\n";
};

void Player2::Move2(int X, int Y) {
    Player2::posX2 = X;
    Player2::posY2 = Y;
    cout << "\n(" << this->posX2 << "," << this->posY2 << ")\n";
};