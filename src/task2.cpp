/*
"ночь" - с 00:00 до 06:00 "Good night!"
"утро" - с 06:00 до 11:00 "Good morning!"
"день" - с 11:00 до 18:00 "Good day!"
"вечер" - с 18:00 до 00:00 "Good evening!"
"Uncorrect time!"
*/

const char * greet(int hour, int min)
{
	if ((0<=hour && hour<=23)&&(0 <= min && min <= 59))
	{
		int time = 60 * hour + min;

		if (time >= 0 && time < 6 * 60)
			return "Good night!";
		else if (time >= 6 * 60 && time < 11 * 60)
			return "Good morning!";
		else if (time >= 11 * 60 && time < 18 * 60)
			return "Good day!";
		else if (time >= 18 * 60 && time < 23 * 60)
			return "Good evening!";
	}
	else return "Uncorrect time!";
}