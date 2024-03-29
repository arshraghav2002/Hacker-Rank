#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



vector<int> gradingStudents(vector<int> grades) {
     vector<int> finalGrades  ;
    for(int i = 0; i < grades.size();i++){
        int grade = grades.at(i);
      if (grade > 37)  {         
          int mul = floor(grade / 5.0) + 1;
          int fg = mul * 5;
          if(fg-grade < 3){
              finalGrades.push_back(fg);
          } else {
            finalGrades.push_back(grade);
          }
      }
      else{
            finalGrades.push_back(grade);
      }
    }
    return finalGrades
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string grades_count_temp;
    getline(cin, grades_count_temp);

    int grades_count = stoi(ltrim(rtrim(grades_count_temp)));

    vector<int> grades(grades_count);

    for (int i = 0; i < grades_count; i++) {
        string grades_item_temp;
        getline(cin, grades_item_temp);

        int grades_item = stoi(ltrim(rtrim(grades_item_temp)));

        grades[i] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
