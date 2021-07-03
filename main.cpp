#include <iostream>
#include <ctime>
#include<fstream>
using namespace std;

int main() {
    time_t rawtime;
    struct tm * timeinfo;
    char data [80];
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    string timetest;
    timetest= strftime (data,80,"[+] %Y-%m-%d %H:%M:%S",timeinfo);
  cout<<data;


  std::ofstream outfile;

  outfile.open("test.txt", std::ios_base::app); // append instead of overwrite


  outfile<<data <<endl;

 return 0;
 }
