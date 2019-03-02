int getRecommendation(char gender, float height, float weight)
{
	int mangoodWeight=0, womengoodweight=0;
	mangoodWeight = height - 100;
	womengoodweight = height - 110;
		
	if (gender == 'm')
	{
		if (mangoodWeight == weight)
			return 0;
		else if (mangoodWeight < weight)
			return 1;
		else 
			return -1;
	}	
	else if (gender == 'w')
	{
		if (womengoodweight == weight)
			return 0;
		else if (womengoodweight < weight)
			return 1;
		else
			return -1;
	}
}