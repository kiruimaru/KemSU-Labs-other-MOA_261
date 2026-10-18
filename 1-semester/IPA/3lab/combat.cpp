int calculateDamage(int attack, int armor){
	int damage = attack - armor;
	return (damage > 0) ? damage : 1;
}
int applyCriticalHit(int damage){
	return damage * 2;
}
