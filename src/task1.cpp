int getRecommendation(char gender, float height, float weight)
{
	float perfect_weightM = height - 100;
	float perfect_weightW = height - 110;
	/*if (gender == 'm' &&  weight == perfect_weightM)
		return 0;
	else if (gender == 'm' && weight < perfect_weightM)
		return -1;
	else if (gender == 'm' && weight > perfect_weightM)
		return 1;
	else if (gender == 'w' && weight == perfect_weightW)
		return 0;
	else if (gender == 'w' && weight < perfect_weightW)
		return -1;
	else if (gender == 'w' && weight > perfect_weightW)
		return 1;*/
	if ((gender == 'm' &&  weight == perfect_weightM) || (gender == 'w' && weight == perfect_weightW))
		return 0;
	else if ((gender == 'm' && weight < perfect_weightM) || (gender == 'w' && weight < perfect_weightW))
		return -1;
	else if ((gender == 'm' && weight > perfect_weightM) || (gender == 'w' && weight > perfect_weightW))
		return 1;

}