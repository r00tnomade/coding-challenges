void battery_bars(unsigned percent, char *bars) {
    unsigned bar_num = percent / 20;

    bars[0] = '[';

    for (unsigned i = 0; i < 5; i++) {
        bars[i + 1] = (i < bar_num) ? '#' : '.';
    }

    bars[6] = ']';
    bars[7] = '\0';
}
