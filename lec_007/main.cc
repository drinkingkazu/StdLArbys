
#include <vector>
#include <iostream>
#include "../lec_001/mytimer.h"

class fatboy {
public:
  fatboy()  {}
  ~fatboy() {}
  
private:
  int _fat_data[10000];
  
};

int main() {

  std::vector<fatboy> my_vec;
  Watch my_watch;
  int n_entries = 1e4;

  std::cout << "[0] Will make a vector of fatboy (size = " << sizeof(fatboy)
	    << " bytes) with entries " << n_entries << std::endl;

  my_vec.reserve(n_entries);
  my_watch.Start();
  for(int i=0; i < n_entries; ++i) {
    fatboy my_fatboy;
    my_vec.push_back(my_fatboy);
  }
  std::cout << "[1] Using push_back, it took " << my_watch.WallTime() << " [s]" << std::endl;

  my_vec.clear();
  my_vec.reserve(n_entries);
  my_watch.Start();
  for(int i=0; i < n_entries; ++i) {
    fatboy my_fatboy;
    my_vec.emplace_back(my_fatboy);
  }

  std::cout << "[2] Using emplace_back, it took " << my_watch.WallTime() << " [s]" << std::endl;
  
  return 0;
}

