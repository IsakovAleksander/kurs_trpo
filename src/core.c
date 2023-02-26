    int non_negative_diff(int a, int b) {
	int res = a - b;
	if (res < 0) {
		return 0;
	}
	return res;
}

int calc_cost(const Tariff* tariff, const Tariff* base) {
	const int minutes_diff = non_negative_diff(tariff.minutes, base.minutes);
	const int messages_diff = non_negative_diff(tariff.minutes, base.minutes);
	const int internet_diff = non_negative_diff(tariff.minutes, base.minutes);
	const minutes_cost = minutes_diff * extra_minutes;
	const messages_cost = messages_diff * extra_messages;
	const internet_cost = internet_diff * extra_internet;
	int result_cost = tariff.cost + minutes_cost + messages_cost + internet_cost;
	return result_cost;
}

int cheapest(Tariff* tariff, int size){
    int count = 1;
    int mincost = tariff[1].cost + tariff[2].cost + tariff[3].cost;
    Tariff buff;
    for(int i = 1; i < size; i++){
        buff.cost = calc_cost(tariff[i], buff);
        if(mincost > buff.cost){
            mincost = buff.cost;
            count = i;
        }
    }
    return count;
}
