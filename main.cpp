#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

struct salon {
    int workers;
    int wait_time;
    int price;
    int rating; 
    string name;
    string reviews;
};

vector<string> read_csv_file(string filename) {
    fstream fin;

    fin.open(filename, ios::in);

    vector<string> row;
    string line, word, temp;

    while (fin >> temp) {
        row.clear();

        getline(fin, line);
        
        row.push_back(line);
    }

    return row;
}

int main(int arglen, char* argv[]) 
{ 
    if (arglen != 2) {
        return 2;
    }

    string filename = argv[1];
    cout << filename << endl;

    vector<string> row = read_csv_file(filename);

    cout << row[0] << endl;

    return 0;
}
 