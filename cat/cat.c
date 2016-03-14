#include <stdio.h>
#include <unistd.h>

int main() {
  char buf[1024];
  ssize_t read_count;
  while ((read_count = read(0, buf, 1024))>0) {
    ssize_t write_count = write(1, buf, read_count);
    ssize_t write_sum = write_count;
    while (write_sum < read_count && write_count>0) {
      write_count = write(1, buf+write_sum, read_count-write_sum);
      write_sum += write_count;
    }
    if (write_sum < read_count) {
      printf("%s", "Oh, error :c");
    }
  }
  return 0;
}
