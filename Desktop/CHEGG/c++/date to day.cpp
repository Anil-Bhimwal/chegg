#include<iostream>
using namespace std;

int main() {
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char* day[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int d, m, y, i;

    cout<<"Fill in a date after 01-01-1600 as dd-mm-yyyy: ";
    cin>>d>>m>>y;

    if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
        month[1] = 29;

    if (y < 1600 || m < 1 || m > 12 || d < 1 || d > month[m - 1]) {
        cout<<"This is an invalid date."<<endl;
        return 1;
    }

    for (i = 1600; i < y; i++)
        {if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
            d += 366;
        else
            d += 365;
        }
    for (i = 0; i < m - 1; i++)
        d += month[i];

    cout<<"This is a "<< day[d % 7-2];
    return 0;
}
