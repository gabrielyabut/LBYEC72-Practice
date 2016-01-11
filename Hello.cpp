#include<stdio.h>
#include<stdlib.h>

#define PI 3.14159

void printNameCourse();
float computeCircleArea(float radius);

int main(){
float area;
float radius;

radius = 10;

area = computeCircleArea(radius);

printf("the Area is: %f\n\n", area);



return EXIT_SUCCESS;
}



float computeCircleArea(float functionRadius){

return PI*functionRadius*functionRadius;
return EXIT_SUCCESS;
}
