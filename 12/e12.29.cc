void runQueries(ifstream &infile) {
  TextQuery tq(infile);
  bool isfirst = true;
  string s;
  do {
    if (isfirst) {
      cout << "enter word to look for, or q to quit: ";
      isfirst = false;
    }
    else {
      print(cout, tq.query(s)) << endl;
    }
    cin >> s;
  } while (s != 'q')
}


  
