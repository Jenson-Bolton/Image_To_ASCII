#include <iostream>
#include <string>
#include <fstream>

int lengthOfString(char* string) {
    int i;
    for (i = 0; string[i] != '\0'; ++i);
    return i;
}

int main(int argc, char **argv) {

    // Test Code
    
    /*
        if (argc > 0) {
            std::cout << argv[argc-1] << std::endl;
        }
        std::cout << "HI" << std::endl;
        return 0;
    */
    
    char *characters = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/\\|()1{}[]?-_+~<>i!lI;:,\"^`'. ";
    char *image_path;

    if (argc > 0) {
        image_path = argv[1];
    }

    else {
        std::cout << "Requires file a path" << std::endl;
        return 1;
    }



    std::size_t file_size = 0;

    std::fstream Image;
    Image.open(image_path);

    if(!Image) {
        std::cout << "Cannot open file!" << std::endl;
        return 1;
    }



/*
    char buffer[100];
    Image.read(buffer, 100);
    std::cout << buffer << std::endl;
    std::cout << "file end" << std::endl;
*/  

    Image.close();

    return 0;
}
