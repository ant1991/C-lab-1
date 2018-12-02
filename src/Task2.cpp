const char* greet(int hour, int min)
{

	if (hour >= 00 && hour < 5)
		return "Good night!";
	else if (hour >= 05 && hour < 11)
		return "Good morning!";
	else if (hour >= 11 && hour < 18)
		return "Good afternoon!";
	else if (hour >= 18 && hour < 24)
		return "Good evening!";
	else
		return "error";
}