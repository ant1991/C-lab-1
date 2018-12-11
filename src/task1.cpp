int getRecommendation(char gender, float height, float weight)

{
	float Ideal_Weight = 0;							//объ€вл€ем значение идеального веса

	if(gender=='m')
	{
		Ideal_Weight = height - 100;
		if (weight < Ideal_Weight)
			return -1;
		else if (weight > Ideal_Weight)
			return 1;
		else if (weight == Ideal_Weight)
			return 0;
	}

	if(gender=='w')
	{
		Ideal_Weight = height-110;
		if (weight < Ideal_Weight)
			return -1;
		else if (weight > Ideal_Weight)
			return 1;
		else if (weight == Ideal_Weight)
			return 0;
	}
}