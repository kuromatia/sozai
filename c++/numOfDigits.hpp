/*
桁数を求める。
*/

#include <cmath>

template <typename T>
T numOfDigits(T num){
  if (num == 0){
    return 1;
  }
  else if (num<0){
    num *=-1;
    return (floor(log10(num))+1);
  }
  else{
    return (floor(log10(num))+1);
  }
}
/* ex.)
#include <iostream>
#include "kuroTools.hpp"

int main(){
  std::cout << numOfDigits(1) << '\n';      // 1
  std::cout << numOfDigits(123) << '\n';    // 3
  std::cout << numOfDigits(12345) << '\n';  // 5
  std::cout << numOfDigits(0) << '\n';      // 1
  std::cout << numOfDigits(-12345) << '\n'; // 5
  return 0;
}
*/
