/**
 * Weather Forecast Data using 2nd dimention array
 * Yearly Data from 2015 to 2019
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-26
 * psw7347@gmail.com
 */

#include <stdio.h>

#define MONTHS   12
#define YEARS   5


void print_Monthly_Data();
void print_Yearly_Average_Data();
void print_Monthly_Average_Data();

int main()
{
    // data
    double year2015[MONTHS] = {-0.9, 1.0, 6.3, 13.3, 18.9, 23.6, 25.8, 26.3, 22.4, 15.5, 8.9, 1.6};
    double year2016[MONTHS] = {-3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2};
    double year2017[MONTHS] = {-1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9};
    double year2018[MONTHS] = {-4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6};
    double year2019[MONTHS] = {-0.9, 1.0, 7.1, 12.1, 19.4, 22.5, 25.9, 27.2, 22.6, 16.4, 7.6, 1.4};

    double *years[YEARS] = {year2015, year2016, year2017, year2018, year2019};

    print_Monthly_Data(years[0], years[1], years[2], years[3], years[4]); // print monthly temperature
    print_Yearly_Average_Data(years[0], years[1], years[2], years[3], years[4]);  // print annual average temperature
    print_Monthly_Average_Data(years[0], years[1], years[2], years[3], years[4]);

    return 0;
}

void print_Monthly_Data(double *year2015, double *year2016, double *year2017,
                        double *year2018, double *year2019) {
    printf("[Temperature Data]\n");
    // make 2nd dimention array
    double *data[YEARS] = {year2015, year2016, year2017, year2018, year2019};

    printf("Year index  : \t");
    for (int idx = 1; idx <= MONTHS; idx++) {
        printf("%d\t\t", idx);
    }
    printf("\n");

    for (int i = 0; i < YEARS; i++) {
        printf("Year %d\t:\t", i+2015);
        for (int j = 0; j < MONTHS; j++) {
            printf("%.1f \t", data[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void print_Yearly_Average_Data(double *year2015, double *year2016, double *year2017,
                       double *year2018, double *year2019) {
    double *data[YEARS] = {year2015, year2016, year2017, year2018, year2019};
    printf("[Yearly average temperatures of %d years]\n", YEARS);

    for (int i = 0; i < YEARS; i++) {
        double average = 0.0;
        for (int j = 0; j < MONTHS; j++) {
            average += data[i][j];
        }
        printf("Year %d : average temperature = %.1f\n", i + 2015, average/12);
    }
    printf("\n");
}

void print_Monthly_Average_Data(double *year2015, double *year2016, double *year2017,
                        double *year2018, double *year2019) {
    double *data[YEARS] = {year2015, year2016, year2017, year2018, year2019};

    printf("[Monthly average temperature for %d years]\n", YEARS);
    printf("Month index  : \t");
    for (int idx = 1; idx <= MONTHS; idx++) {
        printf("%d\t\t", idx);
    }
    printf("\n");

    printf("Average \t : \t");
    for (int i = 0; i < MONTHS; i++) {
        double average = 0.0;
        for (int j = 0; j < YEARS; j++) {
            average += data[j][i];
        }
        printf("%.1f \t", average/YEARS);
    }
    printf("\n");
}