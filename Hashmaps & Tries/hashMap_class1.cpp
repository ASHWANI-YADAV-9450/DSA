#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
    // creation
    unordered_map<string, int> m;

    // insertion
    pair<string, int> p = make_pair("Scorpio", 9);
    m.insert(p);

    pair<string, int> p2("alto", 2);
    m.insert(p2);

    m["fortuner"] =10;


    // acccess
    cout <<m.at("alto") <<endl;
    cout <<m.at("Scorpio") << endl;

    cout <<m["fortuner"] << endl;

    // search
    cout <<m.count("fortuner") << endl; // if presend then it give value 1
    cout << m.count("Innova") << endl; // if not present then give value 0 

    if(m.find("fortuner") !=m.end()) {
        cout <<"Fortuner found" << endl;
    } else {
        cout <<"Fortuner not found" << endl;
    }

    cout <<m.size() <<endl;

    cout <<m.size() << endl;
    cout <<m["hummer"] << endl;
    cout <<m.size() << endl;

    cout <<"Printing all entries: " << endl;

    for(auto i:m) {
        cout <<i.first<<" -> " << i.second <<endl;
    }


    return 0;


}