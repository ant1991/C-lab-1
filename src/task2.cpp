const char * greet(int hour, int min)
{
	if ((0 <= hour) && (hour < 6))
	{
		return "Good night!";
	}
	else if ((6 <= hour) && (hour < 12))
	{
		return "Good morning!";
	}
	else if ((12 <= hour) && (hour < 18))
	{
		return "Good day!";
	}
	else if ((18 <= hour) && (hour <= 23))
	{
		return "Good evening!";
	}
	else
	{
		return "Uncorrect time!";
	}
}


/*
"Good night!"

"Good morning!"

"Good day!"

"Good evening!"

"Uncorrect time!"

"ночь" - с 00:00 до 06 : 00
"утро" - с 06 : 00 до 11 : 00
"день" - с 11 : 00 до 18 : 00
"вечер" - с 18 : 00 до 00 : 00
*/