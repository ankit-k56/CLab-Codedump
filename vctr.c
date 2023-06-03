#include<stdio.h>
int main(){ 
    float a1,b1,c1,a2,b2,c2,dt,dr1,dr2,dr3;
    int dt;
    printf("Enter the value of a1 a2 a3 b1 b2 b3: ");
    scanf("%f%f%f%f%f%f",&a1,&b1,&c1,&a2,&b2,&c2);
    dt = a1*a2+b1*b2+c1*c2;
    dr3 = ((a1*b2)-(b1*a2));
    dr1 = ((b1*c2)-(c1*b2));
    dr2 = ((a1*c2)-(c1*a2));

    printf("The value of dot product is: %f\n",dt);
    printf("Vector after cross product: %fi %fj %fk",dr1, dr2, dr3);
    return 0;
}