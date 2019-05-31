compile:
	gcc  get_next_line.c main.c -L. -lft

llcompile:
	gcc -g get_next_line.c main.c -L. -lft

out:
	./a.out test1.txt

llout:
	lldb a.out test1.txt
