//
// Created by Александр Широков on 07.10.2023.
//
#include "movie_db.h"

bool find_name_from_list(json temp , std::string temp_name)
{
    std::vector<std::string> temp_list = temp;
    for (int i=0; i<temp_list.size(); ++i) {
        if(temp_list[i]==temp_name) return true;
    }
    return false;
}


int task2()
{
    json j;
    //std::vector<MOVIE>;
    std::ifstream f ("movie.json");
    j = json::parse(f);
    std::cout<<"\tTo search a film by name of actor.\n";
    std::string name;
    while(name!="exit" /*exit cond*/) { //main loop
        std::cout<<"Input name of actor: ";
        std::getline(std::cin, name);
        if(name!="exit") { //if no exit
            std::string describe;
            bool is_find;
            //In the main roles
            for (json::iterator it = j.begin(); it != j.end(); ++it) { //loop by movies
                if(find_name_from_list(it.value()["In the main roles"],name)){
                    is_find=true;
                    describe+=it.key()+" (main role), ";
                }; //end if
                if(find_name_from_list(it.value()["Scenario"],name)){
                    is_find=true;
                    describe+=it.key()+" (scenario), ";
                }; //end if
                if(is_find) std::cout << describe.erase(describe.length()-2) << std::endl;
                is_find=false;
                describe.clear();
            } // end loop by movies
        } // end if no exit
    } //end main loop


}
