#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>
using json = nlohmann::json;

int main() {

    json j;
    j["movie"]="The Expendables 4";
    j["Year of production"]=2023;
    j["Country"]="USA";
    j["Genre"]="Action";
    j["Director"]="Scott Waugh";
    j["Scenario"]={"Max Adams", "Kurt Wimmer", "Ted Daggerhart"};
    j["Budget"]=100000000;
    j["In the main roles"]={
            "Jason Statham",
            "Fifty St.",
            "Megan Fox",
            "Sylvester Stallone",
            "Andy Garcia",
            "Dolph Lundgren",
            "Tony Ja",
            "Ico Wise",
            "Randy Couture",
            "Jacob Skipio"
    };
    std::ofstream file("movie.json");
    file << j;

    return 0;
}
