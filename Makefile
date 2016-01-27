all:
		g++ -Wall main.cpp -o main `pkg-config opencv --libs --cflags` && echo "OKe" && ./main
