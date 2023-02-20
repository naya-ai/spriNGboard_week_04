#include <iostream>
#include <vector>

////////////////////////////////////
// INCLUDE NECESSARY HEADERS HERE //
////////////////////////////////////


using namespace std;

void print_vector (const vector<int>& v);

void test_algorithms (int N)
{
  vector<int> v(N,0);

  print_vector(v);

  iota(v.begin(), v.end(), 5);

  print_vector(v);

  reverse(v.begin()+2, v.end()-4);

  print_vector(v);

  fill(v.begin(), v.end()-11, 20);

  print_vector(v);

   sort (v.begin()+1, v.end()-1);

  print_vector(v);

  ///////////////////////////////////////////
  // USE sort WITH A COMPARISON LAMBDA     //
  // TO SORT ALL EVEN NUMBERS TO THE       //
  // FRONT AND ALL ODD NUMBERS TO THE BACK //
  ///////////////////////////////////////////

sort(v.begin(), v.end(), [](const int& front, const int& back) -> bool
  {
   if(front & 1 && back & 1)  
 return false;
 else if(front & 1)
 return false;
  else if(back & 1)
   return true; 
  return false; 
     });

  print_vector(v);
}

int main ()
{
  test_algorithms(15);
}

void print_vector (const vector<int>& v)
{
  cout << "v = ";
  for (auto& elem : v) {
    cout << elem << " ";
  }
  cout << endl;
}

