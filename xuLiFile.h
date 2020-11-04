#pragma once
#ifndef _XU_LY_FILE
#define _XU_LY_FILE
#include <string>
#include <vector>

using namespace std;

#pragma pack(1)
struct Examinee
{
	string id;
	float math, literature, physic, chemistry, biology, history, geography,
		civic_education, natural_science, social_science, foreign_language;
};

Examinee readExaminee(string line_info);
vector<Examinee> readExamineeList(string file_name);
void writeTotal(vector<Examinee> examinee_list, string out_file_name);


#endif
