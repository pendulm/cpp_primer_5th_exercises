struct PersonInfo {
  string name;
  vector<string> phones;
};

int main() {
  string line, word;
  vector<PersonInfo> people;
  while (getline(cin, line)) {
    PersonInfo info;
    istringstream record(line);
    record >> info.name;
    while (record >> word)
      info.phones.push_back(word);
    people.push_back(info);
  }
  return 0;
}
