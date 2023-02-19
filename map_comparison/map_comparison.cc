#include <iostream>
#include <vector>
#include <map>
#include <string>
#include<unordered_map> 

using namespace std;

void func_map (vector<pair<int,string>>& items)
{
  cout << endl << "=== BEGIN func_map ===" << endl;

  map<int,string> mp; 


  for (auto i=0; i<items.size(); i++){
    mp.insert(pair<int,string>(items[i]));
}

 for(auto &i : mp){
      cout << "[" <<  i.first << ", " << i.second << "] \n";
        }

  cout << endl << "=== END func_map ===" << endl;
}

void func_unordered_map (vector<pair<int,string>>& items)
{
  cout << endl << "=== BEGIN func_unordered_map ===" << endl;

unordered_map<int,string> randomMap;

for(auto i=0; i<items.size(); i++){
      randomMap.insert(pair<int, string>(items[i])); 
          cout << "[N,B,LF] = [" << randomMap.size() << "," << randomMap.bucket_count() << "," << randomMap.load_factor() << "]" << endl;
            }
              

for( auto &i : randomMap){
      cout << "[" << i.first << ", " << i.second << "] \n";
        }
        

  cout << endl << "=== END func_unordered_map ===" << endl;
}

int main ()
{
  vector<pair<int,string>> items = {
    {3, "three"},
    {13, "thirteen"},
    {2, "two"},
    {7, "seven"},
    {11, "eleven"},
    {20, "twenty"},
    {5, "five"},
    {96, "ninety six"},
    {97, "ninety seven"},
    {23, "twenty three"},
    {4, "four"},
    {59, "fifty nine"},
    {17, "seventeen"},
    {1, "one"}
  };

  func_map(items);
  func_unordered_map(items);

  return 0;
}

