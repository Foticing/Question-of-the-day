# 6-11行代码相似性很强，可以提取出一个公式模版
# %.o:%.c
# $(CC) $^ $(CFLAGS)  -o $@
# 百分号相当于一个通配符,相当于 *.o : *.c,表示当前目录所有的.o文件以及.c文件

OBJS = main.o tool1.o tool2.o
CC = gcc
CFLAGS = -c -Wall -g

mytool:$(OBJS)
	$(CC) $^ -o mytool
%.o:%.c
	$(CC) $^ $(CFLAGS)  -o $@

clean:
	$(RM) *.o mytool -r