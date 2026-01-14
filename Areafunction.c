#include<stdio.h>
#include<math.h>
float squarearea(float side);
float rectanglearea(float a,float b);
float circlearea(float rad);
int main(){
    float rad=2;
    printf("area of circle is:%f\n",circlearea(rad));
    float side=5;
    printf("area of square is:%f\n",squarearea(side));
    float a=4;
    float b=5;
    printf("area of rectangle is%f:",rectanglearea(a,b));
    return 0;
}
float squarearea(float side){
return side*side;
}
float rectanglearea(float a,float b){
return a*b;
}
float circlearea(float rad){
    return 3.14*rad*rad;
}
