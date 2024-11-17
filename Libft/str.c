#include <stdio.h>

int main() {
    // UTF-8 binary for 😊
    char smiley[] = {0xF0, 0x9F, 0x98, 0x8A, 0x00}; // Null-terminated string

    // UTF-8 binary for 👍
    char thumbs_up[] = {0xF0, 0x9F, 0x91, 0x8D, 0x00}; // Null-terminated string

    // Print emojis
    printf("Smiley emoji: %s\n", smiley);
    printf("Thumbs-up emoji: %s\n", thumbs_up);

    return 0;
}
