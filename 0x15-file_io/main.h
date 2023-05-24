#ifndef MIMI_M
#define MIMI_M

#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_textfile(char *filename, char *filecopy, int letters);
int create_copyfile(const char *filename, char *text_content);
int append_text_to_copyfile(const char *filename, char *text_content);

#endif
