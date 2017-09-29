#include "iostream"
#include "sstream"

using namespace std;

int main()
{
	int max1, max2, str1[10], str2[10];

	for (string string; getline(cin, string); )
	{
		istringstream stream(string);
		bool failure = false;
		for (int i = 0; i < 10; ++i)
		{
			if (!(stream >> str1[i]))
			{
				failure = true;
				break;
			}
		}

		max1 = str1[1];

		if (!failure)
		{
			for (int i = 0; i < 10; ++i)
			{
				if (str1[i] > max1)
				{
					max1 = str1[i];
				}
			}

			break;
		}

		else
		{
			cout << "An error has occured while reading numbers from line" << endl;
		}
	}




	for (string string; getline(cin, string); )
	{
		istringstream stream(string);
		bool failure = false;
		for (int i = 0; i < 10; ++i)
		{
			if (!(stream >> str2[i]))
			{
				failure = true;
				break;
			}
		}

		max2 = str2[1];

		if (!failure) {
			for (int i = 0; i < 10; ++i) {
				if (str2[i] > max2) {
					max2 = str2[i];
				}
			}

			break;
		}
		else {
			cout << "An error has occured while reading numbers from line" << endl;
		}
	}

	cout << max1 + max2 << endl;
	cin.get();

	return 0;
}
