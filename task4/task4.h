#pragma once
#include <vector>
#include <sstream>

using namespace std;

void delete_last(string& s) {
	int pos;
	while ((pos = s.find_first_of(",.!;:'")) != string::npos) {
		s.replace(pos, 1, " ");
	}
	stringstream ss(s);
	vector<string> words;
	string tmp;
	while (ss >> tmp) {
		words.push_back(tmp);
	}
	string delWord = words.back();
	s = "";
	for (vector<string>::iterator it = words.begin(); it != words.end(); ++it) {

		if (*it == delWord) {
			it = words.erase(it);
		}
		if (it != words.end())
			s += *it + " ";
		else
			break;
	}
	s = s.substr(0, s.size() - 1);
}

void replace_last_and_first(string& s) {
	stringstream ss(s);
	vector<string> words;
	string tmp;
	while (ss >> tmp) {
		words.push_back(tmp);
	}
	s = "";
	for (vector<string>::iterator it = words.begin(); it != words.end(); ++it) {
		*it = it->back() + it->substr(1, it->length() - 2) + (*it)[0];
		s += *it + " ";
	}
	s = s.substr(0, s.size() - 1);
}