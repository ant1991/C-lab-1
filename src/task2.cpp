

const char * greet(int hour, int min)
{
	if (hour < 6)
		return "Good night!\n";
	else if (hour >= 6 && hour < 11)
		return "Good morning!\n";
	else if (hour >= 11 && hour < 18)
		return "Good day!\n";
	else 
		return "Good evening!\n";
}