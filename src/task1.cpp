int getRecommendation(char gender, float height, float weight)
{

	float a = height - 100;
	float b = height - 110;
	if (gender == 'm' && a > weight)
		return -1;
	else if (gender == 'm' && a == weight)
		return 0;
	else if (gender == 'm' && a < weight)
		return 1;
	else if (gender == 'w' && b > weight)
		return -1;
	else if (gender == 'w' && b == weight)
		return 0;
	else
		return 1;
}

