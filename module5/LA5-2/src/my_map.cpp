#include <iostream>
#include <map> // for maps
#include <string>

int main()
{
    // Maps are a key-value pair element.
    std::map<int, std::string> info;
    // To add elements to the map, use insert() which takes a pair of key-values
    // To make a key-value pair, use the built-in function make_pair() 
    info.insert(std::make_pair(1, "Waldo Weber"));
    info.insert(std::make_pair(2, "Utah Jazz"));
    std::cout << "Size of the map: " <<info.size()<<std::endl;
    // Find key value
    auto position = info.find(1);
    if(position != info.end())
    {
        std::cout<<"Found it! The key is "<<position->first<<", and the value is "<<position->second<<"!"<<std::endl;
    
        std::cout<<"Using iterator"<<std::endl;
            for(auto it = std::begin(info); it!= std::end(info); ++it)
            {
                std::cout<<it->first<<" "<<it->second<<"\t";
            }
            std::cout<<std::endl;

            std::cout<<"Range based"<<std::endl;
            for(std::pair<int,std::string>element:info)
            {
                std::cout<<element.first<<" "<<element.second<<"\t";
            }
            std::cout<<std::endl;
    }
    return 0;
}