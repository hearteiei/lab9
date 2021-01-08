#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main () {
    int count = 0;
    float sum = 0, sqrsum = 0;
    float mean;
    float stddevi;
    string textline;
    
	ifstream source;
    source.open("score.txt");
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        count++;
    }
    source.close();

    source.open("score.txt");
    while (getline(source,textline))
    {
        sqrsum += pow((atof(textline.c_str())),2);
    }

    mean = sum/count;
    stddevi = pow(( (sqrsum/count)- pow(mean,2) ),0.5);



    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << setprecision(3);
    cout << "Standard deviation = " << stddevi;

    source.close();
    return 0;
}
