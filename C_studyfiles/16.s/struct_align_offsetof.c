#include <stdio.h>
#include <stddef.h>

#pragma pack(push,1)
struct PacketHeader {
    char flags;
    int seq;
};
#pragma pakc(pop)

int main() {
    printf("%d\n", offsetof(struct PacketHeader, flags));
    printf("%d\n", offsetof(struct PacketHeader, seq));

    return 0;
}