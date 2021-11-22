#include "ackit_directory.h"

int main(int argc, char** argv){

    ackit::ackit_directory ddd("C:/mingw/bin/");
    ddd.get_filename();
    ddd.dump();
    return 0;

}
