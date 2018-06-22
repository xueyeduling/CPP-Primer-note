#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
typedef struct {
	string name;
	int age;
} person;
int main()
{
	//vector<int> ivec{ 1,2 };
	//// the compiler determines the type of b and e;
	//// b denotes the first element and e denotes one past the last element in v
	//auto b = ivec.begin(), e = ivec.end();
	//vector<int> ivec2{ 1,2 };
	//auto b2 = ivec.begin(), e2 = ivec2.end();
	//vector<person> pervec;
	//person p1 = { "he",20 };
	//person p2 = { "wnag",20 };
	//pervec.push_back(p1);
	//pervec.push_back(p2);
	//auto pb = pervec.begin(), eb = pervec.end();

	//cout << eb->name<<endl;

	//string s("some string");
	//if (s.begin() != s.end()) {	// make sure s is not empty
	//	auto it = s.begin();	// it denotes the first character in s
	//	*it = toupper(*it);		// make that character upperccase
	//}
	//cout << s << endl;

	// process characters in s until we ren out of characters or we hit a whitespace
	//for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
	//	*it = toupper(*it);// capitalize the current character
	//cout << s << endl;

	//vector<int>::iterator it;// it can read and write vector<int> elements
	//vector<string>::iterator it2;// it2 can read and write characters in a string
	//vector<int>::const_iterator it3;// it3 can read but not write element
	//vector<string>::const_iterator ite4;// it4 dan rand but not write characters

	//vector<int> v;
	//const vector<int> cv;
	//auto it1 = v.begin();//it1 has type vector<int>::iterator
	//auto it2 = cv.begin();// it2 has type vector<int>::const_iterator;

	//(*it).empty()// dereferences it and calls the member empty on the resulting object
	//*it.empty()// error: attempts to fetch the member named empty from it
	//		   //but it is an iterator and has no member named empty 

	//vector<string> text;
	//// print each line in text up to the firt blank line
	//for (auto it = text.cbegin; it != text.cend() && !it->empty(); ++it)
	//	cout << *it << endl;

	//vector<int> vi{ 1,2,3,4,5,6,7,8,9 };
	//// compute an iterator to the element closest to the midpoint of vi
	//auto mid = vi.begin() + vi.size() / 2;
	//cout << *mid << endl;
	//auto disc = vi.begin() - vi.end();

	// text must be sorted
	// beg and end will denote the range we're searching
	//vector<string> text;
	//auto beg = text.begin(), end = text.end();
	//auto mid = text.begin() + (end - beg) / 2; // original midpoint
	//// while there are still elements to look at and we haven't yet found sought
	//while (mid != end&*mid != sought) {
	//	if (sought < *mid)	// is the element we want in the first half?
	//		end = mid;		// if so, adjust the range to ignore the second half
	//	else				// the element we want is in the second half
	//		beg = mid + 1;	// start looking with the element just after mid
	//	mid = beg + (end - beg) / 2	// new midpoint
	//}


	system("pause");
	return 0;
}