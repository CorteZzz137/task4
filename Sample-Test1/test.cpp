#include "pch.h"
#include "..//task4/task4.h"


TEST(Task4_1, Test1) {
	string s = "      df        asdasdasd  df    sdsdsd  df    .";
	delete_last(s);
	EXPECT_TRUE(s == "asdasdasd sdsdsd");
}

TEST(Task4_1, Test2) {
	string s = "         .";
	delete_last(s);
	EXPECT_TRUE(s == "");
}

TEST(Task4_2, Test1) {
	string s = "123 12345 123456 1234567";
	replace_last_and_first(s);
	EXPECT_TRUE(s == "321 52341 623451 7234561");
}

TEST(Task4_2, Test2) {
	string s = "";
	replace_last_and_first(s);
	EXPECT_TRUE(s == "");
}

TEST(Task4_2, Test3) {
	string s = "        ";
	replace_last_and_first(s);
	EXPECT_TRUE(s == "");
}

TEST(Task4_2, Test4) {
	string s = " hhh      ";
	replace_last_and_first(s);
	EXPECT_TRUE(s == "hhh");
}


