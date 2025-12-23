#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int count =0;
    float sum=0,Avg,sum_pow2=0,SD;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline)){
        sum += atof(textline.c_str());
        sum_pow2 += pow(atof(textline.c_str()),2);
        count++;
    }
    Avg = sum/count;
    SD = sqrt((sum_pow2/count)-pow(Avg,2));
    cout << setprecision(3);
    cout << "Number of data = "<< count <<"\n";
    cout << "Mean = "<< Avg <<"\n";
    cout << "Standard deviation = "<< SD <<"\n";
    return 0;
}