/*
最大公倍数
最小公倍数
*/
template <typename T>
T gcd(T a, T b){
  if(a%b == 0){
    return(b);
  }
  else {
    return(gcd(b, a%b));
  }
}
template <typename T>
T lcm(T a, T b){
  return a * b / gcd(a, b);
}
