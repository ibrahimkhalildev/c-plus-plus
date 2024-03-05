#include <bits/stdc++.h>
// #include <iostream>
// #include <fstream>

using namespace std;

int main()
{
    ofstream outptu_file;
    outptu_file.open("1.txt");

    outptu_file << "Hello world!\n";

    ofstream output_file2;
    output_file2.open("2.txt");

    output_file2 << "Are you ok?\n";

    ifstream input_file; //.open("02.txt");

    int x;
    double y, z;

    input_file.open("inp.txt");
    input_file >> x >> y >> z;
    cout << x << " " << y << " " << z << "\n";

    double de = 5.684584;

    cout<<setprecision(2)<<fixed<<de<<"\n";

    outptu_file.close();
    output_file2.close();
    input_file.close();

    return 0;
}
