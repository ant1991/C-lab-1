const char* greet(int hour, int min)
{
	if (hour>=0 && hour < 6 && min>=0 && min <= 59)
		return "Good night!";
	else if (hour >= 6 && hour < 11 && min >= 0 && min <= 59)
		return "Good morning!";
	else if (hour >= 11 && hour < 18 && min >= 0 && min <= 59)
		return "Good day!";
	else if (hour >= 18 && hour < 23 && min >= 0 && min <= 59)
		return "Good evening!";
	else if (hour >= 24 || hour < 0 || min > 60 || min < 0)
	
		return "Uncorrect time!";
}
