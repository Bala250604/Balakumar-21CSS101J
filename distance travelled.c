#include <stdio.h>
int main() {
    float accleration,initial_velocity,timetaken,distance;
    printf("Enter the accleration value : ");
    scanf("%f",&accleration);
    printf("Enter the initial velocity : ");
    scanf("%f",&initial_velocity);
    printf("Enter the time taken : ");
    scanf("%f",&timetaken);
    distance = ((initial_velocity*timetaken)+(0.5*accleration*timetaken*timetaken ));
    printf("Distance travelled : %f\n",distance);
    //RA2211042010053
    return 0;
}
