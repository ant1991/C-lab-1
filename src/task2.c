char * greet(int hour, int min)
{
	if (hour < 0 || hour > 23 || min < 0 || min > 59)
		return "Uncorrect time!";
	if (hour >= 0 && hour <=5 && min >= 0 && min <= 59)
		return "Good night!";
	if (hour >= 6 && hour <= 10 && min >= 0 && min <= 59)
		return "Good morning!";
	if (hour >= 11 && hour <=17 && min >= 0 && min <= 59)
		return "Good day!";
	if (hour >= 18 && hour <= 23 && min >= 0 && min <= 59)
		return "Good evening!";
}