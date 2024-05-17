#include "func.hpp"

namespace sd
    // Ôîðìàòèðîâàíèå âðåìåíè
{
    void FormatedTime(char string[], char newform[], size_t lenght)
    {
        time_t t = std::time(nullptr);
        std::strftime(string, lenght, newform, std::localtime(&t));

        string[4] = '.'; // ãîäû
        string[7] = '.'; // ìåñÿöû
        string[13] = ':'; // ñåêóíäû
        string[16] = ':'; // ìèëëèñåêóíäû
        string[19] = '\n'; // íîâàÿ ñòðîêà
        string[20] = '\0'; // êîíåö ñòðîêè â òåêñòîâîì ôàéëå
    }

    // Ñ÷¸ò÷èê ñòðîê
    int Lines(const char& file_name)
    {
        std::ifstream in(&file_name);
        int count = 0;
        std::string tmp;

        while (!in.eof())
        {
            std::getline(in, tmp);
            count++;
        }
        return count;
    }
}