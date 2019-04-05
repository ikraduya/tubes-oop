#include "Map.h"
#include <sstream>
#include <iostream>

/**
 * @brief ctor parameter
 *
 * @param mapFilename Nama file yang berisi map
 *
 */
Map::Map(std::string mapFilename){
  std::ifstream file;
  std::string line;
  std::stringstream ss;
  Coordinate place;

  file.open(mapFilename);
  std::getline(file, line);
  px = Ukuran(std::stoi(line.substr(0, line.find(" "))),
    std::stoi(line.substr(line.find(" ") + 1, line.find("\n"))));

  cell = new Cell*[px.getL()];
  for(int i=0; i<px.getL(); i++) cell[i] = new Cell[px.getP()];

  std::string mark;
  for(int i=0; i<px.getL(); i++){
    std::getline(file, line);
    ss = std::stringstream(line);

    for(int j=0; j<px.getP(); j++){
      ss >> mark;

      if(mark == "x"){
        place = Coordinate(j, i); cell[i][j] = Barn(place, false);
      }else if(mark == "@"){
        place = Coordinate(j, i); cell[i][j] = Barn(place, true);
      }else if(mark == "o"){
        place = Coordinate(j, i); cell[i][j] = Coop(place, false);
      }else if(mark == "*"){
        place = Coordinate(j, i); cell[i][j] = Coop(place, true);
      }else if(mark == "-"){
        place = Coordinate(j, i); cell[i][j] = Grassland(place, false);
      }else if(mark == "#"){
        place = Coordinate(j, i); cell[i][j] = Grassland(place, true);
      }else if(mark == "M") {
        cell[i][j] = Mixer(j, i);
        mixerPos = Coordinate(j, i);
      } else if(mark == "T") {
        cell[i][j] = Truck(j, i);
        truckPos = Coordinate(j, i);
      } else if(mark == "W") {
        cell[i][j] = Well(j, i);
        wellPos = Coordinate(j, i);
      } 
    }
  }
}

Cell*** Map::getMapPtr() {
  return &cell;
}

Coordinate Map::getMixerPosition() const {
  return mixerPos;
}
Coordinate Map::getTruckPosition() const {
  return truckPos;
}
Coordinate Map::getWellPosition() const {
  return wellPos;
}


Facility* Map::getMixerPtr() {
  return (Facility*) &(cell[mixerPos.getY()][mixerPos.getX()]);
} 

Facility* Map::getTruckPtr() {
  return (Facility*) &(cell[truckPos.getY()][truckPos.getX()]);
}

Facility* Map::getWellPtr() {
  return (Facility*) &(cell[wellPos.getY()][wellPos.getX()]);
}

/**
 * @brief Destroy the Map object
 */
Map::~Map(){
  for(int i=0; i<px.getL(); i++) {
    delete[] cell[i];
  }
  delete[] cell;
}

Ukuran Map::getUkuran() const { return px; }
Cell Map::getCell(int i, int j) const { return cell[i][j]; }
