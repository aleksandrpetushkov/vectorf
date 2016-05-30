#include <iostream>
#include <fstream>
//#include <unistd.h>
#include <sys/types.h> 

using namespace std;

unsigned int main()
{
	//cout << "Hw";

	FILE *f;
	f = fopen("data.dd", "wb+");

	fstream file("file.dat", ios_base::out | ios::binary);

	//*
		if (!f)
	{
		cout << "ther bad\n";
	}
	//*/
	else
	{
		int z = 5;
		cout << (char)z;
		cin.get();

		char str_out[255] = { "my string" };
		ofstream fout("file.txt", ios::binary);
		fout.seekp(999);

		fout << "\n";
		fout.seekp(999);

		fout << (char)0;



		fout.seekp(500);
		fout << "a";
		//fout.write('', sizeof(str_out));
		//fout.write(ch, sizeof(z));
		fout.close();
		
		cin.get();
		char str_in[255];
		ifstream fin("file", ios::binary);
		if (fin)
		{
			while (fin.read(str_in, sizeof(str_in)))
				cout << str_in << endl;
		}
		/*
		int k = 10;
		int n = 7;
		fwrite(&n, 4, 1, f);
		fwrite(&k, 4, 1, f);
		fread(&k, 4, 1, f);
		cout << k << endl;
		//*/
	}
	
	cin.get();
	return 0;
}



