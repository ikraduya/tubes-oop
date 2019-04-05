/**
 * @file LinkedListTest.h
 * @author Ikraduya
 * @date 2019-03-22
 */

#include <iostream>
#include <gtest/gtest.h>
#include "../TestHeaders.h"
#include "LinkedListException.h"

struct LinkedListTest : testing::Test{
  LinkedList<int>* lInt = new LinkedList<int>();
  LinkedList<Coordinate>* lCoordinate = new LinkedList<Coordinate>();
	LinkedListTest(){

	}
	~LinkedListTest(){
		delete lInt;
    delete lCoordinate;
	}
};

TEST_F(LinkedListTest, PlayerArah) {
  EXPECT_EQ(0, lInt->count());
  EXPECT_EQ(0, lCoordinate->count());
  lInt->add(10);
  lInt->add(0);
  lCoordinate->add(Coordinate(0,0));
  lCoordinate->add(Coordinate(10,0));
  EXPECT_EQ(2, lInt->count());
  EXPECT_EQ(2, lCoordinate->count());
  EXPECT_EQ(10, lInt->get(0));
  EXPECT_EQ(0, lInt->get(1));
  EXPECT_EQ(Coordinate(0,0).getX(), lCoordinate->get(0).getX());
  EXPECT_EQ(Coordinate(0,0).getY(), lCoordinate->get(0).getY());
  EXPECT_EQ(Coordinate(10,0).getY(), lCoordinate->get(1).getY());
  EXPECT_EQ(Coordinate(10,0).getX(), lCoordinate->get(1).getX());
  
  EXPECT_EQ(0, lInt->find(10));
  EXPECT_EQ(-1, lInt->find(9));
  EXPECT_EQ(1, lCoordinate->find(Coordinate(10,0)));
  EXPECT_EQ(-1, lCoordinate->find(Coordinate(90,0)));

  lInt->remove(10);
  EXPECT_EQ(1, lInt->count());
  EXPECT_EQ(false, lInt->isEmpty());
  lInt->remove(0);
  EXPECT_EQ(0, lInt->count());
  lCoordinate->remove(Coordinate(10,0));
  EXPECT_EQ(false, lCoordinate->isEmpty());
  EXPECT_EQ(1, lCoordinate->count());
  lCoordinate->remove(Coordinate(0,0));
  EXPECT_EQ(0, lCoordinate->count());

  EXPECT_EQ(true, lInt->isEmpty());
  EXPECT_EQ(true, lCoordinate->isEmpty());
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
