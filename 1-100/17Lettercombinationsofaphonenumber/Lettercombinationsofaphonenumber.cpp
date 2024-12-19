#include <string>
#include <vector>

class Solution
{
public:
    std::vector<std::string> letterCombinations(std::string digits)
    {
        if (digits == "")
        {
            return {};
        }
        return recursive(digits, 0);
    }
    std::vector<std::string> recursive(std::string digits, int index)
    {
        if (index == digits.size())
        {
                return {""};
        }

        std::vector<std::string> ans = {};
        std::vector<std::string> temp = recursive(digits, index + 1);

        if(digits[index] == '7' || digits[index] == '9')
        {
            ans.insert(ans.end(), temp.begin(), temp.end());
            ans.insert(ans.end(), temp.begin(), temp.end());
            ans.insert(ans.end(), temp.begin(), temp.end());
            ans.insert(ans.end(), temp.begin(), temp.end());
        }
        else
        {
            ans.insert(ans.end(), temp.begin(), temp.end());
            ans.insert(ans.end(), temp.begin(), temp.end());
            ans.insert(ans.end(), temp.begin(), temp.end());
        }     
        
        if (digits[index] == '2')
        {
            for (int i = 0; i < ans.size() / 3; ++i)
            {
                ans[i] = "a" + ans[i];
            }
            for (int i = ans.size() / 3; i < ans.size() / 3 * 2; ++i)
            {
                ans[i] = "b" + ans[i];
            }
            for (int i = ans.size() / 3 * 2; i < ans.size(); ++i)
            {
                ans[i] = "c" + ans[i];
            }
        }
        else if (digits[index] == '3')
        {
            for (int i = 0; i < ans.size() / 3; ++i)
            {
                ans[i] = "d" + ans[i];
            }
            for (int i = ans.size() / 3; i < ans.size() / 3 * 2; ++i)
            {
                ans[i] = "e" + ans[i];
            }
            for (int i = ans.size() / 3 * 2; i < ans.size(); ++i)
            {
                ans[i] = "f" + ans[i];
            }
        }
        else if (digits[index] == '4')
        {
            for (int i = 0; i < ans.size() / 3; ++i)
            {
                ans[i] = "g" + ans[i];
            }
            for (int i = ans.size() / 3; i < ans.size() / 3 * 2; ++i)
            {
                ans[i] = "h" + ans[i];
            }
            for (int i = ans.size() / 3 * 2; i < ans.size(); ++i)
            {
                ans[i] = "i" + ans[i];
            }
        }
        else if (digits[index] == '5')
        {
            for (int i = 0; i < ans.size() / 3; ++i)
            {
                ans[i] = "j" + ans[i];
            }
            for (int i = ans.size() / 3; i < ans.size() / 3 * 2; ++i)
            {
                ans[i] = "k" + ans[i];
            }
            for (int i = ans.size() / 3 * 2; i < ans.size(); ++i)
            {
                ans[i] = "l" + ans[i];
            }
        }
        else if (digits[index] == '6')
        {
            for (int i = 0; i < ans.size() / 3; ++i)
            {
                ans[i] = "m" + ans[i];
            }
            for (int i = ans.size() / 3; i < ans.size() / 3 * 2; ++i)
            {
                ans[i] = "n" + ans[i];
            }
            for (int i = ans.size() / 3 * 2; i < ans.size(); ++i)
            {
                ans[i] = "o" + ans[i];
            }
        }
        else if (digits[index] == '7')
        {
            for (int i = 0; i < ans.size() / 4; ++i)
            {
                ans[i] = "p" + ans[i];
            }
            for (int i = ans.size() / 4; i < ans.size() / 2; ++i)
            {
                ans[i] = "q" + ans[i];
            }
            for (int i = ans.size() / 2; i < ans.size() / 4 * 3; ++i)
            {
                ans[i] = "r" + ans[i];
            }
            for (int i = ans.size() / 4 * 3; i < ans.size(); ++i)
            {
                ans[i] = "s" + ans[i];
            }
        }
        else if (digits[index] == '8')
        {
            for (int i = 0; i < ans.size() / 3; ++i)
            {
                ans[i] = "t" + ans[i];
            }
            for (int i = ans.size() / 3; i < ans.size() / 3 * 2; ++i)
            {
                ans[i] = "u" + ans[i];
            }
            for (int i = ans.size() / 3 * 2; i < ans.size(); ++i)
            {
                ans[i] = "v" + ans[i];
            }
        }
        else if (digits[index] == '9')
        {
            for (int i = 0; i < ans.size() / 4; ++i)
            {
                ans[i] = "w" + ans[i];
            }
            for (int i = ans.size() / 4; i < ans.size() / 2; ++i)
            {
                ans[i] = "x" + ans[i];
            }
            for (int i = ans.size() / 2; i < ans.size() / 4 * 3; ++i)
            {
                ans[i] = "y" + ans[i];
            }
            for (int i = ans.size() / 4 * 3; i < ans.size(); ++i)
            {
                ans[i] = "z" + ans[i];
            }
        }

        return ans;
    }
};