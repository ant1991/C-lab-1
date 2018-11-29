const char * greet(int hour, int min)
{
	int time = (hour * 60) + min;
	if (time >= 0 && time < 360)
		return "Good night!\n";
	else if (time >= 360 && time < 660)
		return "Good morning!\n";
	else if (time >= 660 && time < 1080)
		return "Good day!\n";
	else if (time >= 1080 && time < 1440)
		return "Good evening!\n";
	else if (time > 1440)
		return "Uncorrect time!\n";
}