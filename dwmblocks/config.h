// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {

    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {" [", "sb-memory", 1, 16},
    {"] [", "sb-disk", 1, 16},
    {"] [", "sb-cpu", 1, 10},
    {"] [", "sb-battery", 60, 1},
    {"] [", "sb-clock", 1, 1},
    {"] ", "sb-clock", 1, 1},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = "";
static unsigned int delimLen = 5;
