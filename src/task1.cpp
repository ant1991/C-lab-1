int getRecommendation(char gender, float height, float weight)
{
	if (height - 100 == weight && gender == 'm')
		return 0;
	else if (height - 100 > weight && gender == 'm')
		return -1;
	else if (height - 100 < weight && gender == 'm')
		return 1;
	else if (height - 110 == weight && gender == 'w')
		return 0;
	else if (height - 110 > weight && gender == 'w')
		return -1;
	else if (height - 110 < weight && gender == 'w')
		return 1;
}
