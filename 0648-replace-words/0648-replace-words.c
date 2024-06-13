
#define MAX_WORD_LENGTH 100

char* findShortestRoot(char* word, char** dictionary, int dictionarySize) {
    char* shortestRoot = NULL;
    int shortestLength = MAX_WORD_LENGTH + 1; // Initialize to a large value

    for (int i = 0; i < dictionarySize; i++) {
        int rootLength = strlen(dictionary[i]);
        if (strncmp(word, dictionary[i], rootLength) == 0 && rootLength < shortestLength) {
            shortestRoot = dictionary[i];
            shortestLength = rootLength;
        }
    }
    return shortestRoot;
}

char* replaceWords(char** dictionary, int dictionarySize, char* sentence) {
    // Allocate memory for the result
    size_t maxResultSize = strlen(sentence) + 1;
    char* result = (char*)malloc(maxResultSize);
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    result[0] = '\0'; // Initialize result as an empty string

    char* word = strtok(sentence, " ");
    while (word != NULL) {
        char* root = findShortestRoot(word, dictionary, dictionarySize);
        if (root != NULL) {
            // Check if there's enough space left in result
            size_t wordLength = strlen(root);
            if (strlen(result) + wordLength + 2 > maxResultSize) {
                // Not enough space, reallocating memory
                maxResultSize *= 2;
                result = (char*)realloc(result, maxResultSize);
                if (result == NULL) {
                    fprintf(stderr, "Memory allocation failed\n");
                    exit(1);
                }
            }
            strcat(result, root);
        } else {
            // Check if there's enough space left in result
            size_t wordLength = strlen(word);
            if (strlen(result) + wordLength + 2 > maxResultSize) {
                // Not enough space, reallocating memory
                maxResultSize *= 2;
                result = (char*)realloc(result, maxResultSize);
                if (result == NULL) {
                    fprintf(stderr, "Memory allocation failed\n");
                    exit(1);
                }
            }
            strcat(result, word);
        }
        strcat(result, " ");
        word = strtok(NULL, " ");
    }

    // Remove the trailing space
    if (strlen(result) > 0) {
        result[strlen(result) - 1] = '\0';
    }

    return result; // Return the resulting string
}