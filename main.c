#include <stdio.h>
#include <stdlib.h>

int main() {

    int status = 0;

    status &= 0;
     printf(" status1 = %d\n", status);
    status &= 0;
     printf(" status2 = %d\n", status);
    status &= 1;
     printf(" status3 = %d\n", status);
    status &= 0;
     printf(" status4 = %d\n", status);
    status &= 0;
     printf(" status5 = %d\n", status);

    return status;
}