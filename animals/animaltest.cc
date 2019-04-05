#include <gtest/gtest.h>
#include "../TestHeaders.h"



struct AnimalTest : testing::Test{
    Ayam *c = new Ayam();
    Bebek *d = new Bebek();
    Sapi *s = new Sapi();
    Kuda *h = new Kuda();
    Kambing *k = new Kambing();
    AnimalTest(){};
    ~AnimalTest(){ };
};

TEST_F(AnimalTest, TesBinatang){
    EXPECT_EQ(true, s->isKillAble());
    EXPECT_EQ(true, c->isKillAble());
    EXPECT_EQ(true, d->isKillAble());
    EXPECT_EQ(true, h->isKillAble());
    EXPECT_EQ(true, k->isKillAble());
    EXPECT_EQ(true, s->isAlive());
    EXPECT_EQ(true, c->isAlive());
    EXPECT_EQ(true, d->isAlive());
    EXPECT_EQ(true, h->isAlive());
    EXPECT_EQ(true, k->isAlive());
    EXPECT_EQ('g', k->getSymbol());
    EXPECT_EQ('c', c->getSymbol());
    EXPECT_EQ('b', d->getSymbol());
    EXPECT_EQ('s', s->getSymbol());
    EXPECT_EQ('h', h->getSymbol());
    EXPECT_EQ(true,s->isInteractAble());
    EXPECT_EQ(true, c->isInteractAble());
    EXPECT_EQ(true, d->isInteractAble());
    EXPECT_EQ(true, h->isInteractAble());
    EXPECT_EQ(true, k->isInteractAble());
    EXPECT_EQ(false, s->getIsHungry());
    EXPECT_EQ(false, c->getIsHungry());
    EXPECT_EQ(false, d->getIsHungry());
    EXPECT_EQ(false, h->getIsHungry());
    EXPECT_EQ(false, k->getIsHungry());

}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}