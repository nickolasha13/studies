#include <iostream>
#include <vector>

/*
    typedef = reserved keyword used to create an addittional name
    (alias) for another data type.
    new identifier for an existing type
    helps with readability and reduces typos
    
    !!use when there is a clear benefit!!

    replaced with 'using' (works better with templates)
    now using is more popular due to the use with templates
    typedef is still used in some cases
*/

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
using pairlist_t = std::vector<std::pair<std::string, int>>;

int main(){

   //std::vector<std::pair<std::string, int>> pairlist
   pairlist_t pairlist; 

   return 0;
}