#include <stdio.h>
#include <stdlib.h>
#include "element.h"



int main(){
ELEMENT e1,e2;
e1=saisir_ELEMENT();
printf("e1=%f",e1);
e2=affect_ELEMENT(4);
compare_ELEMENT(e1,e2);
return 0;}   
