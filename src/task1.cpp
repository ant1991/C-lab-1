/*Функция getRecommendation должна возвращать: -1 - вес недостаточен
Идеальный_вес=Рост-100 - для мужчин 'm'			1 - вес избыточен
Идеальный_вес=Рост-110 - для женщин. 'w'		0 - вес идеален
 */

int getRecommendation(char gender, float height, float weight)
{
	float delta = 100 + weight - height;
	if (gender == 'w') delta = delta + 10;

	if (delta == 0) 
		return 0;
	else if (delta < 0)
		return -1;
	else if (delta > 0)
		return 1;
}