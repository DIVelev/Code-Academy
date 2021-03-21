CC=gcc
CFLAGS = -WALL -g 
DEPS = social_media.h
COMPILE=$(CC) -g

CFILES=$(dir \s *.c*) #social_media_func.c social_media.c
OBJECT=social_media_func.c.o social_media.o #$(CFILES:.c=.o)
TARGET=social_media

$(TARGET):$(OBJECT)
	$(COMPILE) -o $@ $(OBJECT)
.c:.o
	$(COMPILE) -c $< -o $@
clean:
	del $(TARGET).exe $(OBJECT)
