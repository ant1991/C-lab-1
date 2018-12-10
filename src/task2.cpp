const char* greet(int hour, int min)
{
	if (hour >= 0 && min >= 0 && hour < 6 && min < 60)	return "Good night!";
	else if (hour >= 6 && min >= 0 && hour < 11 && min < 60) return "Good morning!";
	else if (hour >= 11 && min >= 0 && hour < 18 && min < 60) return "Good day!";
	else if (hour >= 18 && min >= 0 && hour < 24 && min < 60) return "Good evening!";
	else return "Uncorrect time!";

}

/*"Good night!"
"Good morning!"
"Good day!"
"Good evening!"
"Uncorrect time!"

"ночь" - с 00:00 до 06 : 00
"утро" - с 06 : 00 до 11 : 00
"день" - с 11 : 00 до 18 : 00
"вечер" - с 18 : 00 до 00 : 00
*/