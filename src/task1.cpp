int getRecommendation(char gender, float height, float weight)
{
	int GoodWeight;
	if (gender == 'm')
		GoodWeight = height - 100;
	else if (gender == 'w')
		GoodWeight = height - 110;
	if (GoodWeight == weight)
		return 0;
	if (GoodWeight < weight)
		return 1;
    if (GoodWeight > weight)
		return -1;
} 
