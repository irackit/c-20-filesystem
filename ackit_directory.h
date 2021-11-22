
#ifndef _ackit_directory
#define _ackit_directory

#include <filesystem>
#include <string>
#include <iostream>
#include <vector>

namespace ackit{
    class ackit_directory{
    
        public:
            ackit_directory(std::string);
            ~ackit_directory( void );
            void set_directory(std::string);
            void get_filename( void );
            void dump( void );
        private:
            std::vector<std::string> dir_list;
            std::filesystem::directory_entry locator;
    };
}

#endif /* _ackit_directory */
