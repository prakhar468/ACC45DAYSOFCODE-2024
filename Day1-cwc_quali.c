#include <stdio.h>
int main() {    
 int x ;
 printf("Enter the score: ");
 scanf("%d",&x); //input the points scored by team
   
   //check if the points are valid
 if(x>=1 && x<=20) { 

   //check if the team qualifies or not 
  if(x>=12) {
    printf("Yes");
  } 
       
  else 
    printf("No");
  } 
    
   //invalid points 
 else 
  printf("Invalid Input.\nPoints should be between 1 and 20.");
return 0;
}