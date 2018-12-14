int getRecommendation(char gender, float height, float weight)
{

	float idealWeight = 0;
	if (gender == 'm')
		idealWeight = height - 100;
	else
		idealWeight = height - 110;
	if (idealWeight > weight)
		return -1;
	else if (idealWeight == weight)
		return 0;
	else 
		return 1;
	}

