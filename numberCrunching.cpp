#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

string lineToProcess(ifstream &inStream)
{
    /**
     * TODO:
     *     This function should read one line out of the file `inStream`,
     *     and return that line as a string.
     **/
       
        string numberLine;
         getline(inStream, numberLine);
       
    return numberLine;
}

int numberOfNumbersIn(string line)
{
    /**
     * TODO:
     *     This function should return how many integers are present in `line`.
     *     You may assume that the integers are separated by spaces, as shown
     *     in "vals.txt".
     **/
     int numberOfSpaces = 0;
     int index = 0;
     // 70 13 23
     while (index < line.length()){
            if(line.at(index) == ' ' ){
                numberOfSpaces = numberOfSpaces + 1;
            }

     index = index + 1;
   
     }
     return numberOfSpaces + 1;
}
int sumXNumbers(ifstream &inStream, int x)
{
    /**
     * TODO:
     *     This function should read `x` integers out of the file `inStream`,
     *     add them together, and return the resulting sum.
     **/
     int index = 0;
     int n;
     int sum = 0;
     while (index < x){
        inStream >> n;
        sum = sum + n;
        index = index + 1;
     }

     return sum;
}

void calculateSums(string infile) {
    ifstream stream1(infile);
    ifstream stream2(infile);

    string line;
    if (stream1.is_open() && stream2.is_open()) {
        while ((line = lineToProcess(stream1)) != "") {
            cout << sumXNumbers(stream2, numberOfNumbersIn(line)) << endl;
        }
    }

    stream1.close();
    stream2.close();
}

int main(int argc, const char *argv[]) {
    calculateSums(argv[1]);
    return 0;
}
