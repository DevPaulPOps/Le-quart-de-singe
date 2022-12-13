
#include "lib/quart_de_singe.h"

void test()
{

}

int main(int argc, char *argv[])
{

    char    **words = NULL;
    int     size = 0;
    char    word[256];
    int     i =0;
    char *test = "a";
    ifstream dict("test.txt");
    assert(dict);
    words = stockstring(dict,word,words,size);
    cout << "Le dictionnaire contient les mots suivants :" << endl;
    cout << is_in_the_file(words, test) << endl;
    detruire(words, size);
    return 0;
}


