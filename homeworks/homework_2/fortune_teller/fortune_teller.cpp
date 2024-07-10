#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <map>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::array;
using std::map;

string getUserName()
{
    string user_name;
    cout << "Please enter your name:" << endl;
    cin >> user_name;
    return user_name;
}

void getUserBirthSeason(string& birth_season)
{
    cout << "Please enter the time of year when you were born:" << endl;
    cout << "(pick from 'spring', 'summer', 'autumn', 'winter')" << endl;
    cin >> birth_season;
}

vector<string> getUserAdjectives()
{
    string buffer;
    vector<string> user_adjectives;
    cout << "Please enter an adjective:" << endl;
    cin >> buffer;
    user_adjectives.emplace_back(buffer);
    cout << "Please enter another adjective:" << endl;
    cin >> buffer;
    user_adjectives.emplace_back(buffer);
    return user_adjectives;
}

string getUserAdjective(string name, vector<string> adjectives)
{
    int i = name.size() % adjectives.size();
    return adjectives.at(i);
}

string getUserNoun(string birth_season)
{
    map<string, string> seasons_mapping = {{"spring", "STL guru"},
        {"summer", "C++ expert"},
        {"autumn", "coding beast"},
        {"winter", "software design hero"}};

    return seasons_mapping.at(birth_season);
}

string getEnding(string name)
{
    array<string, 3UL> endings = {
        "eats UB for breakfast",
        "finds errors quicker than the compiler",
        "is not afraid of C++ error messages"
    };
    
    int i = name.size() % endings.size();
    return endings.at(i);
}

int main(int argc, char* argv[])
{
    cout << "Welcome to the fortune teller program!" << endl;

    string user_name = getUserName();
    
    string birth_season;
    getUserBirthSeason(birth_season);
   
    vector<string> adjectives = getUserAdjectives();
    string adjective = getUserAdjective(user_name, adjectives);

    string user_noun = getUserNoun(birth_season);
    string ending = getEnding(user_name);

    cout << endl << "Here is your description:" << endl;    
    cout << user_name << ", the " << adjective <<
       " " << user_noun << " that " << ending << endl;
   
    return 0;
}
