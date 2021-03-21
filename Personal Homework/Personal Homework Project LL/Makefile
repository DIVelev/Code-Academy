CC=gcc
CFLAGS= -g
DEPS = social_media.h
OBJ = social_media.o social_media_func.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

social_media: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	del social_media.o social_media.exe social_media_func.o