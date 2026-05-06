#include "CollegeList.h"
#include <iostream>
using namespace std;
void CollegeList::addCollege(const std::string& code, const std::string& name) {
	colleges[code] = name;
}

string CollegeList::getCollegeName(const std::string& code) const {
	return colleges.at(code);
}
void CollegeList::printColleges() const {
	for (const auto& college : colleges) {
		cout << college.first << " _ " << college.second << endl;
	}
}
const map<string, string>& CollegeList::getColleges() const {
	return colleges;
}