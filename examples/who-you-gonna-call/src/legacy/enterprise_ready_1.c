
#include <unistd.h>
#include "fission_1.h"

ssize_t enterprise_ready_1(int fd) {
    char a = 95, enterprise_ready_1_b = 108, enterprise_ready_1_enterprise_ready_1 = 111;
    for (int i = 0; i < 3; i++){
        a++; enterprise_ready_1_b++;
    }
    // not sure why, this didn't work with ++
    // TODO check why it wasn't working 
    enterprise_ready_1_enterprise_ready_1 -= 3 * -1;
    char size = '3';
    write(fd, &size, sizeof(size));
    char newline[] = "\r\n";
    write(fd, newline, sizeof(newline)-1);
    write(fd, &a, sizeof(a));
    write(fd, &enterprise_ready_1_b, sizeof(a)); // maybe should be enterprise_ready_1_b? It wouldn't compile
    write(fd, &enterprise_ready_1_enterprise_ready_1, sizeof(enterprise_ready_1_enterprise_ready_1));
    write(fd, newline, sizeof(newline)-1);
    // TODO prevent stack overflow
    fission_1(fd);
    return 0; // TODO return something more meaningful
}