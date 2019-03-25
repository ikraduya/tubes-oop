#include "Map.h"
#include <sstream>
#include <string>

  /**
   * @brief ctor parameter
   *
   * @param mapFilename Nama file yang berisi map
   *
   * contoh isi file:
   * 2 3
   * # - W
   * P @
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

  cell = new Cell*[px.getP()];
  for(int i=0; i<px.getP(); i++) cell[i] = new Cell[px.getL()];

  std::string mark;
  for(int i=0; i<px.getL(); i++){
    std::getline(file, line);
    ss = std::stringstream(line);

    for(int j=0; j<px.getP(); j++){
      ss >> mark;

      if(mark == "x"){
        place = Coordinate(i,j); cell[i][j] = Barn(place, false);
      }else if(mark == "@"){
        place = Coordinate(i,j); cell[i][j] = Barn(place, true);
      }else if(mark == "o"){
        place = Coordinate(i,j); cell[i][j] = Coop(place, false);
      }else if(mark == "*"){
        place = Coordinate(i,j); cell[i][j] = Coop(place, true);
      }else if(mark == "-"){
        place = Coordinate(i,j); cell[i][j] = Grassland(place, false);
      }else if(mark == "#"){
        place = Coordinate(i,j); cell[i][j] = Grassland(place, true);
      }else if(mark == "M") cell[i][j] = Mixer(i,j);
      else if(mark == "T") cell[i][j] = Truck(i,j);
      else if(mark == "W") cell[i][j] = Well(i,j);
    }
  }
}

  /**
   * @brief Destroy the Map object
   */
Map::~Map(){
  for(int i=0; i<px.getP(); i++) delete[] cell[i];
  delete[] cell;
}
