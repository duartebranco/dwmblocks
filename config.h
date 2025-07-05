//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"",	"./statusbar/sb-tasks",	10,	26},
//  {"",	"./statusbar/sb-pacpackages",	0,	8},
//  {"",	"./statusbar/sb-news",		0,	6},
//  {"",	"./statusbar/sb-torrent",	20,	7},
//  {"",	"./statusbar/sb-doppler",	0,	13},
//  {"",	"./statusbar/sb-forecast",	18000,	5},
//  {"",	"./statusbar/sb-mailbox",	180,	12},
    {"",	"/home/duarte/app/dwmblocks/statusbar/sb-price", 9000, 21},
    {"",	"/home/duarte/app/dwmblocks/statusbar/sb-memory",	30,	14},
//  {"",	"/home/duarte/app/dwmblocks/statusbar/sb-internet",	5,	4},
    {"",	"/home/duarte/app/dwmblocks/statusbar/sb-nettraf",	30,	18},
    {"",	"/home/duarte/app/dwmblocks/statusbar/sb-volume",	0,	10},
    {"",	"/home/duarte/app/dwmblocks/statusbar/sb-brightness",	0,	11},
    {"",	"/home/duarte/app/dwmblocks/statusbar/sb-battery",	10,	3},
    {"",	"/home/duarte/app/dwmblocks/statusbar/sb-clock",	30,	1},
    {"",	"/home/duarte/app/dwmblocks/statusbar/sb-shut",	0,	15},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
