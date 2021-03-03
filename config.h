//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",      "music",    0,    11},
	{"^c#E0AF68^",      "weather",    1800,    6},
	//{"",      "forecast",    300,    5},
	{"^c#F7768E^Mem:^d^ ",      "memory",    30,    1},
	{"^c#9EcE6A^",          "datetime",   5,    2},
	{"^c#4abaaf^", "internet",   0,    3},
	{"^c#4abaaf^", "volume",   0,    4},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "^c#a9b1d6^ | ^d^";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
