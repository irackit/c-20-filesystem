
#include "ackit_directory.h"

namespace ackit{

    ackit_directory::ackit_directory(std::string directory){
        this->locator = std::filesystem::directory_entry{directory.c_str()};
    }
    
    ackit_directory::~ackit_directory( void ){}
    
    void ackit_directory::set_directory(std::string directory){
        this->locator = std::filesystem::directory_entry{directory.c_str()};
    }
    
    void ackit_directory::get_filename( void ){
        try{
            for( auto const &entry : std::filesystem::directory_iterator(this->locator)){      
                if(entry.is_regular_file()){
                   this->dir_list.push_back(entry.path().string());
                }
            }
        }
        catch( std::filesystem::filesystem_error const& e){
            std::cout<< e.what() <<std::endl;
        }
    }

    void ackit_directory::dump( void ){
        for( std::vector<std::string>::iterator begin = this->dir_list.begin(); begin != this->dir_list.end(); begin++){
            std::cout<<*begin<<std::endl;
        }
    }
}
