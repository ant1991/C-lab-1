const char* greet(int thour, int tmin)


{
	if (thour >= 0 && thour < 6 )

		return "Good night!\n";

	else if (thour >= 06 && thour < 11 )

		return "Good morning!\n";

	else if (thour >= 11 && thour < 18 )

		return "Good day!\n";

	else if (thour >= 18 && thour <= 23 )

		return "Good evening!\n";

	else

		return "Uncorrect time \n ";
}