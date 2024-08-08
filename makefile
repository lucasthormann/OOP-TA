CFLAGS = -Wall
CC = g++

all:
	$(CC) $(CFLAGS) -o trading TechIndustry.cpp AirlinesIndustry.cpp User.cpp VGIndustry.cpp EVIndustry.cpp Industry.cpp BuySellMenu.cpp ProfileMenu.cpp main.cpp -std=c++11

clean:
	rm trading
