#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *fn, size_t let);
int create_file(const char *fn, char *ptr);
int append_text_to_file(const char *fn, char *ptr);

#endif
