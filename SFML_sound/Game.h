// Game.h
#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "Snake.h"
#include "Fruit.h"
#include "ScoreBoard.h"

// 表示整個貪吃蛇遊戲的類
class Game {
public:
    // 建構函數：初始化遊戲窗口和元件
    Game();

    // 運行遊戲循環
    void run();

private:
    // 處理用戶輸入事件
    void handleInput();

    // 更新遊戲狀態
    void update();

    // 渲染遊戲畫面
    void render();

    sf::RenderWindow window; // 渲染窗口
    Snake snake;             // 貪吃蛇
    Fruit fruit;             // 水果
    ScoreBoard scoreboard;   //計分板
    sf::Texture tileTexture, snakeheadTexture, snakeBodyTexture, fruitTexture, gameOverTextTexture; // 紋理
    sf::Sprite tileSprite, snakeheadSprite, snakeBodySprite, fruitSprite, gameOverTextSprite;    // 物件精靈
    sf::Font font, font2, font3, font4, font5;
    sf::Text scoreText;
    bool isPaused; // 暫停狀態
    void reset(); // 重置遊戲
    bool gameOver; // 遊戲結束狀態
};

#endif // GAME_H
