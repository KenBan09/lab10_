#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;


int main(){
    string textline;
    int count = 0;
    float sum = 0;
    float mean,num2;
    ifstream source;
    source.open ("score.txt");

    while (getline(source,textline)){

        sum += atof(textline.c_str());

        num2 += pow(atof(textline.c_str()),2) ;

        count++;

    }
    mean = sum/count; 

    cout << "Number of data = " << count << "\n";

    cout << setprecision(3);

    cout << "Mean = " << mean << "\n";

    cout << "Standard deviation = " << sqrt((num2/count)-pow(mean,2));

}