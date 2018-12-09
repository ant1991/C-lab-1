const char* greet(int hour, int min)
{

	if (hour >= 00 && hour < 6)
		return "Good night!";
	else if (hour >= 06 && hour < 12)
		return "Good morning!";
	else if (hour >= 12 && hour < 18)
		return "Good afternoon!";
	else if (hour >= 18 && hour < 24)
		return "Good evening!";
	else
		return "error";
}