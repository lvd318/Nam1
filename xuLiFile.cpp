
#include "xuLiFile.h"
#include<fstream>

Examinee readExaminee(string line_info)
{
	Examinee result;

	string s = line_info;
	int pos = s.find(",");
	string token;
	float exam[11];
	int i = 0;
	//Lay ID
	result.id = s.substr(0, s.find(","));
	s.erase(0, pos + 1);
	//Lay diem
	while ((pos = s.find(",")) != string::npos)
	{
		token = s.substr(0, pos);
		s.erase(0, pos + 1);

		if (token == "")
			exam[i] = 0;
		else if (i < 11)
		{
			exam[i] = stof(token);
		}
		i++;
	}

	result.math = exam[0];
	result.literature = exam[1];
	result.physic = exam[2];
	result.chemistry = exam[3];
	result.biology = exam[4];
	result.history = exam[5];
	result.geography = exam[6];
	result.civic_education = exam[7];
	result.natural_science = exam[8];
	result.social_science = exam[9];
	result.foreign_language = exam[10];

	return result;
}

vector<Examinee> readExamineeList(string file_name)
{
	vector<Examinee> examinee;
	ifstream fin(file_name, ios::in);
	string line_info;
	string a;
	int index = 0;

	if (fin.is_open())
	{
		getline(fin, a);
		while (!fin.eof())
		{
			getline(fin, line_info,'\n');
			examinee[index] = readExaminee(line_info);
			index++;
		}
		fin.close();
	}

	return examinee;
}

void writeTotal(vector<Examinee> examinee_list, string out_file_name)
{
	ofstream fout(out_file_name, ios::out);

	for (int i = 0; i < examinee_list.size(); i++)
	{
		examinee_list[i].natural_science = examinee_list[i].chemistry + examinee_list[i].physic + examinee_list[i].biology;
		examinee_list[i].social_science = examinee_list[i].history + examinee_list[i].geography + examinee_list[i].civic_education;
		float Sum = examinee_list[i].math + examinee_list[i].literature + examinee_list[i].foreign_language + examinee_list[i].natural_science + examinee_list[i].social_science;
		fout << examinee_list[i].id << " " << Sum << endl;
	}

	fout.close();
}
