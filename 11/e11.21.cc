while (cin >> word)
  ++word_count.insert({word, 0}).first->second;
word_count.insert => pair
pair.first => iterator
iterator->second => value
++value
