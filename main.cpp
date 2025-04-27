#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <array>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <ctime>
#include <random> 


using namespace std;

class Student
{
  public:
          string name;
          int score;

  Student(string name, int score)
  {
    this->name = name;
    this->score = score;
  }        

};


int main() {

 vector <int> arr = {2, 9, 6, 2, 11, 9, 6};

 srand(time(NULL));
 shuffle(arr.begin(), arr.end());
 
 for(int a : arr)
 {
   cout << a << endl;
 }
 
 
    return 0;
}