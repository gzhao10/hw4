//Problems 1 and 5

int prob1(){
  int i = 0;
  int ans = 0;
  while (i < 1000){
    if (i % 3 == 0 || i % 5 == 0)
      ans += i;
    i++;
  }
  return ans;
}

long prob5(){
  int i = 20;
  long ans = 20;
  while (i > 0){
    if (ans % i != 0){
      ans++;
      i = 20;
    }
    else (i--);
  }
  return ans;
}
