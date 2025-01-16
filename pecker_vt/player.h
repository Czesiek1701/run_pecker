#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include "creature.h"

class Player : public Creature
{
    Q_OBJECT
public:
    explicit Player(QGraphicsScene * scene, QString impath);
public slots:
    void getMovementWish(std::bitset<16> pressed);
signals:
};

#endif // PLAYER_H
