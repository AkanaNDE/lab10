#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
        int count = 0;
        float sum = 0;
        float sum_of_square = 0;
        float M = 0;
        float J = 0;
        string textline;
        ifstream source("score.txt");
        while (getline(source,textline))
        {
            float L = atof(textline.c_str());
            count++;
                sum += L;
                J += pow(L,2);
                
        }
        M = sum/count ;
        sum_of_square = sqrt((J/count)-(M*M));
        cout << "Number of data = " << count << "\n";
        cout << setprecision(3);
        cout << "Mean = " << M << "\n";
        cout << "Standard deviation = " << sum_of_square ;
}