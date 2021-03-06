#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void RHS(double* out, double *x) {

    out[0] = x[0]; // exponentielles Wachstum; die ableitung von e^x ist e^x deshalb X=x
}

int main() {

    int maxIter = 5000;
    double x = 0.01;
    double f = 0;
    double h = 1e-3;
    double step = 0; //aktuller zetiwert 



    FILE *fp;
    fp = fopen("euler.txt", "w");
    if (fp == NULL) {
        printf("Datei konnte NICHT geoeffnet werden.\n");
        return -1;
    }

    fprintf(fp, "%lf %lf \n", step, x);


    for (int i = 0; i < maxIter; i++) {
        step = step + h; // entspricht zeile wiki tk = t0 + kh
        RHS(&f, &x);
        x = x + h * f; // x entspricht y 
        fprintf(fp, "%lf %lf \n", step, x);
    }

    fclose(fp);
    FILE* gnuplotPipe = popen("gnuplot -persistent", "w");
    fprintf(gnuplotPipe, "plot 'euler.txt' using 1:2\n"); //Send commands to gnuplot one by one.
    printf("finished\n");

    return 0;
}