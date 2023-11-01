//
// Created by Александр Широков on 07.10.2023.
//
#include "movie_db.h"

int task1() {

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
    std::ofstream file("movies.json");
    std::cout << j;
    file << j;

    return 0;
}
