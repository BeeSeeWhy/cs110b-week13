#include <cstring>
#include <fstream>
#include <iostream>
#include "house.h"
using namespace std;

int main () {
    string input;
    House home;
    ifstream infile;
    // Open file
    infile.open("Sacramentorealestatetransactions.csv", ios::in);

    // Test if file fails
    if(infile) {
      // Read if success
      getline(infile, input, ',');
      while(infile) {
        // Display last line read
        cout << input << endl;

        // Read next line
        getline(infile, input, ',');
      }
      // Close the file
      infile.close();
    }
    else cout << "ERROR: cannot open file" << endl;
    return 0;
}
