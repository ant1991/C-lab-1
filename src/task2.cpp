const char* greet(int hour, int min)
{
	int time;
	time = hour * 60 + min;
	if (time <= 360)
		return "Good night!";
	else if (time <= 660)
		return "Good morning!";
	else if (time <= 1080)
		return "Good day!";
	else if (time <= 1440)
		return "Good evening!";
	else
		return "Uncorrect time!";
}