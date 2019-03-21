int recursive(int x){
  if(x>=1){
    return x*recursive(x-1);
  }
  else{
    return 1;
  }
}
