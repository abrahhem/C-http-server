
server: main.o httpd.o includes.o
	gcc -g -fno-stack-protector main.o httpd.o includes.o -o server -Wl, -no-pie

main.o: main.c httpd.h includes.h
	gcc main.c -c

httpd.o: httpd.c httpd.h
	gcc httpd.c -c

includes.o: includes.c includes.h
	gcc includes.c -c

clean:
	rm -f *.o server