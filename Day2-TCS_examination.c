#include<stdio.h>
int main(){

int T ;
printf("Enter the number of test cases: ");
scanf("%d",&T);
printf("\n");

for (int i = 0; i<T; i++){
int dragonDSA , dragonTOC , dragonDM ;
printf("Enter Dragon's score in DSA, TOC, and DM respectively: ");
scanf("%d %d %d", &dragonDSA, &dragonTOC, &dragonDM);

int slothDSA , slothTOC , slothDM ;
printf("Enter Sloth's score in DSA, TOC, and DM respectively: ");
scanf("%d %d %d", &slothDSA, &slothTOC, &slothDM);

int dragontotal = dragonDSA + dragonTOC + dragonDM ; 
int slothtotal = slothDSA + slothTOC + slothDM ;

// comparing based on the given conditions
if (dragontotal > slothtotal) {
     printf("Dragon gets the better rank. \n");} 

else if (slothtotal > dragontotal) {
     printf("Sloth gets the better rank. \n");} 
     
else // if total scores are tied than DSA scores will be compared

{

    if (dragonDSA > slothDSA) {
     printf("Dragon gets the better rank.\n");}   
    
    else if (slothDSA > dragonDSA) {
     printf("Sloth gets the better rank.\n"); }

    else // if DSA scores are tied then TOC scores will be compared
    
    {

     if (dragonTOC > slothTOC) {
         printf("Dragon gets the better rank.\n"); }
     else if (slothTOC > dragonTOC) {
         printf("Sloth gets the better rank.\n"); }

     else { // if everything is tied then they both get the same rank
        printf("Dragon and Sloth gets the same rank.\n"); } 
    }
}
}     
return 0;

}