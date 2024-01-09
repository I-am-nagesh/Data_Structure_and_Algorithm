#include <fstream>
using namespace std;

int main() {
  ofstream myfile;
  myfile.open("example.txt");
  myfile << "Writing this to a file first time.\n";
  myfile.close();
  return 0;
}
