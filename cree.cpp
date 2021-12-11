#include <iostream>
#include <fstream>
#include "json.hpp"

// For convenience
using json = nlohmann::json;
using namespace std;

int main(){
json obj;
obj["Name"] = "Inshal";
obj["Roll no"] = "42";
obj["Dept"] = "CSE";
obj["cgpa"] = "7.99";

ofstream file("output.json");
file<<setw(4)<<obj<<endl;
file.close();
cout<<"JSON Object Created:";
for (auto& element : obj) {
	cout << element << '\n';
}
}
