#include <iostream>
#include <vector>
#include <bitset>

int main() {
  // Using std::vector<char> for performance
  std::vector<char> vecChar;
  vecChar.push_back(1); // Representing true
  vecChar.push_back(0); // Representing false
  bool b1 = vecChar[0];
  bool b2 = vecChar[1];
  std::cout << "Using std::vector<char>: " << b1 << " " << b2 << std::endl;

  //Using std::bitset for space efficiency 
  std::bitset<2> bitvec; 
  bitvec[0] = 1; 
  bitvec[1] = 0; 
  bool b3 = bitvec[0];
  bool b4 = bitvec[1];
  std::cout << "Using std::bitset: " << b3 << " " << b4 << std::endl; 
  return 0;
}
