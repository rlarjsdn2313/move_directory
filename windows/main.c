#include <direct.h>

void move_directory(char* path) {
    chdir(path+3);
}

int main() {
    char path[100] = "cd test";
    move_directory(path);

    return 0;
}