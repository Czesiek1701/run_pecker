#include "gameboard.h"

GameBoard::GameBoard(QWidget *parentView)
    : QGraphicsScene(parentView)
{
    player = new Player(this, ":/data/pecker.bmp");
    creatures.push_back(player);
    // bot[0] = new Bot(this, ":/data/bot.bmp");
    // bot[1] = new Bot(this, ":/data/bot.bmp");
    // bot[2] = new Bot(this, ":/data/bot.bmp");
    for (int i=0;i<3;i++)
    {
        creatures.push_back(new Bot(this, ":/data/bot.bmp"));
    }

    sceneRect = new QRectF(0,0,300,300);
    this->setSceneRect(*sceneRect);
}

void GameBoard::updateCreatures()
{
    //player->actualize();
    for(Creature* c:creatures)
    {
        c->actualize();
    }
}

// QGraphicsScene* GameBoard::getQGraphicsScene()
// {
//     return QGraphicsScene;
// };
