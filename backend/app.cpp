#include <iostream>
#include <cstdlib>
#include <unistd.h>

int main() {
    std::string hostname;
    char buffer[256];
    gethostname(buffer, sizeof(buffer));
    hostname = buffer;

    std::cout << "Content-Type: text/plain\n\n";
    std::cout << "Served by backend: " << hostname << std::endl;
    return 0;
}
