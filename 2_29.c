#include <stdio.h>
#include <math.h>


int main() {
    double x;
    double y;
    double z;
    scanf("%lf %lf %lf",&x,&y,&z);

    double result = pow(x,z);
    printf("%0.2lf ",result);

    result = pow(y,2);
    result = pow(x, result);
    printf("%0.2lf ", result);

    printf("%0.2lf ",fabs(y));

    printf("%0.2lf \n", sqrt(pow(x*y,z)));


    return 0;
}
