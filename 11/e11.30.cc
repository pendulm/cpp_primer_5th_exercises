auto pos = authors.equal_range(search_item);
pos.first->second
type of pos is pair<iterator, iterator>
pos.first is authors.upper_bound
auther.upper_bound is a iterator points to a value_type
value_type of a map is a pair<string, string>
so pos.first->second is the value
