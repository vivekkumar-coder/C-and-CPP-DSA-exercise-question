#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string (lowercase a-z): ";
    getline(cin, str);

    int seen = 0;       // Mask for characters seen at least once
    int duplicates = 0; // Mask for characters seen more than once

    // Step 1: Detect duplicates using Bitwise Merging (|) and Masking (&)
    for (char ch : str)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            int bitVal = 1 << (ch - 'a');

            // Masking: Check if we have already seen this character
            if ((seen & bitVal) != 0)
            {
                // Merging: Add to the duplicates mask
                duplicates = duplicates | bitVal;
            }
            else
            {
                // Merging: Mark as seen for the first time
                seen = seen | bitVal;
            }
        }
    }

    // Step 2: Print total repetitions for each duplicate character found
    cout << "\n--- Duplicate Summary ---\n";
    bool foundDuplicate = false;

    for (int i = 0; i < 26; i++)
    {
        int bitVal = 1 << i;

        // Masking: Check if letter 'i' is present in our duplicates mask
        if ((duplicates & bitVal) != 0)
        {
            char duplicateChar = 'a' + i;
            int totalCount = 0;

            // Count occurrences of this specific duplicate character in the string
            for (char ch : str)
            {
                if (ch == duplicateChar)
                {
                    totalCount++;
                }
            }

            cout << "'" << duplicateChar << "' repeated " << totalCount << " times.\n";
            foundDuplicate = true;
        }
    }

    if (!foundDuplicate)
    {
        cout << "No duplicate characters found.\n";
    }

    return 0;
}