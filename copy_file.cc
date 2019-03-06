/*
 *        File: copy_file.cc
 *      Author: Emma Rice
 *        Date: March 5, 2019
 * Description: copy file to another file with a function that takes
 *              input and output stream as parameters
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

//function prototypes
void copy(ifstream &inStream, ofstream &outStream);
// function
// purpose
// parameters
// pre conditions
// post conditions

int main(int argc, char const *argv[])
{
    ifstream inStream;
    ofstream outStream;
    string inFileName, outFileName;

    cout << "Enter the input file name: ";
    cin >> inFileName;
    inStream.open(inFileName.c_str());

    //check for failure
    if (inStream.fail())
    {
      cout << "Error: unable to open file.\n";
      return 0;
    }

    cout << "Enter the output file name: ";
    cin >> outFileName;
    outStream.open(outFileName.c_str());
    if (outStream.fail())
    {
      cout << "Error: unable to open file.\n";
      return 0;
    }

    copy(inStream, outStream);

    return 0;
}// main

void copy(ifstream &inStream, ofstream &outStream)
{
string line;
getline(inStream, line);
while(!inStream.eof())
{
outStream << line;
outStream << "\n";
getline(inStream, line);
}
} //copy end
