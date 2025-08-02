#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// int main()
// {
//     string line = { " " };
//     ofstream file1;
//     file1.open("beef.txt");
//     file1 << "beef" << endl;
//     file1.close();
//     file1.open("beef.txt");

//     if (file1.is_open())
//     {
//         cout << "Enter what you would like to be contained in the file" << endl;
//         cin >> line;
//         ofstream file1;
//         file1 << line << endl;
//     }

//     return 0;
// }






int main(int c, char **v)
{
    string infile;
    string outfile;
    ifstream inputfile;
    ofstream outputfile;
    string  line;

    infile = v[1];
    outfile = v[2];
    inputfile.open(infile);
    outputfile.open(outfile);

    if (!inputfile || !outputfile)
    {
        cout << "cant open file !" << endl;
        return 1;
    }
    while (getline(inputfile, line))
    {
        outputfile << line << "!!!!!!!!!!!" << endl;
    }
    return 0;
}