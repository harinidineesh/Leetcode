char* toHex(int num) {
    if (num == 0) {
        char* zeroHex = (char*)malloc(2 * sizeof(char)); 
        zeroHex[0] = '0';
        zeroHex[1] = '\0';
        return zeroHex;
    }

    char* hexadecimal = (char*)malloc(9 * sizeof(char)); 
    int index = 0;
    unsigned int number = (unsigned int)num; 

    while (number > 0) {
        int remainder = number % 16;
        if (remainder < 10)
            hexadecimal[index++] = remainder + '0';
        else
            hexadecimal[index++] = remainder + 'a' - 10; 
        number /= 16;
    }
    for (int i = 0; i < index / 2; ++i) {
        char temp = hexadecimal[i];
        hexadecimal[i] = hexadecimal[index - 1 - i];
        hexadecimal[index - 1 - i] = temp;
    }

    hexadecimal[index] = '\0';

    return hexadecimal;
}