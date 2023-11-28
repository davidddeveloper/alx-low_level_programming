#ifndef MAIN_H
#define MIN_H
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/* function prototypes */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
#endif /* MAIN_H */
