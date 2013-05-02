#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
#include <string>
using std::string;
#include <fstream>
using std::ifstream;
#include <sstream>
using std::istringstream;
#include <map>
using std::map;
#include <cctype>
using std::isblank;

map<string, string> buildMap(ifstream& map_file) {
  string key, rest;
  map<string, string> mwords;
  while (map_file >> key) {
    getline(map_file, rest);

    auto iter = rest.begin();
    for (; iter != rest.end(); ++iter) {
      if (!isblank(*iter))
	break;
    }
    rest.erase(rest.begin(), iter);
    if (rest.empty())
      continue;
    mwords[key] = rest;
  }
  return mwords;
}

string transform(string word, map<string, string>& trans_map) {
  auto iter = trans_map.find(word);
  if (iter != trans_map.end()) {
    return iter->second;
  } else {
    return word;
  }
}

void word_transform(ifstream& map_file, ifstream& input) {
  auto word_maps = buildMap(map_file);
  
  string line;
  while (getline(input, line)) {
    istringstream iss(line);
    string word;
    bool first = true;
    while (iss >> word) {
      if (first)
	first = false;
      else
	cout << " ";
      cout << transform(word, word_maps);
    }
    cout << endl;
  }
}

int main(int argc, char *argv[]) {
  if (argc != 3)
    return -1;
  ifstream map_file(argv[1]);
  ifstream input_file(argv[2]);
  word_transform(map_file, input_file);
  return 0;
}
