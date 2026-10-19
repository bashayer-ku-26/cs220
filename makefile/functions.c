#include"functions.h"
int summation(int n){
if(n!=0){
return(n + summation(n-1));
}
else return 0;
}
int factorial(int n){
if(n!=1){
return(n*factorial(n-1));
}
else return 1;
}

