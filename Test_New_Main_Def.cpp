#include "Test_New_Main.h"

void Player::Move(int X, int Y) {
    Player::posX = X;
    Player::posY = Y;
    cout << "\n(" << X << "," << Y << ")\n";
}

void Player2::Move2(int X2, int Y2) {
    Player2::posX2 = X2;
    Player2::posY2= Y2;
    cout << "\n(" << X2 << "," << Y2 << ")\n";
}