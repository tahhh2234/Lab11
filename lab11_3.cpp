#include<iostream>
#include<iomanip>
#include<fstream>
#include<cmath>
using namespace std;

int main(){
    int count = 0;
    double sum = 0, mean, stdDev, lol = 0;
    ifstream source;
    source.open("score.txt");
    string text;
    while(getline(source,text)){
        count++;
        sum += atof(text.c_str()); 
        lol += pow(atof(text.c_str()),2);
    }

    mean = sum/count;
    stdDev = pow((lol/count)-pow(mean,2),1/2.0);

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << stdDev;
}

