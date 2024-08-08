// ./a.out < data.txt
#include <stdio.h>

int main(void)
{
    int i;
    double x;
    double avg = 0.0;
    double navg;
    double sum = 0.0;
    FILE* ptr = fopen("data.txt", "r");

    printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n\n",
      "Count","Item","Average","Naive avg",
      "_____","____","_______","_________");
    for (i = 1; scanf("%lf", &x) == 1; ++i) {
        avg += (x - avg) / i;
        sum += x;
        navg = sum / i;
        printf("%5d%17e%17e%17e\n", i, x, avg, navg);
    }
    //while (fscanf(ptr, "%lf", x) == 1) {
    //    printf("%lf\n", x);
    //}
    return 0;
}
