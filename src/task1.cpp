

int getRecommendation(char gender, float height, float weight)
{
	int ret = 0;

	if (gender == 'm'){
		ret = (weight == (height - 100)) ? 0 : (weight < (height - 100)) ? -1 : 1;
	}
	else if (gender == 'w'){
		ret = (weight == (height - 110)) ? 0 : (weight < (height - 110)) ? -1 : 1;
	}

	return	ret;

}
