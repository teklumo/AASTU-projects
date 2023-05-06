#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int choose, block_sum[100], age[100], first[100] = {0}, second[100] = {0}, third[100] = {0}, fourth[100] = {0}, fifth[100] = {0}, n, m, year, count1(0), count2(0), count3(0), count4(0), count5(0), batch[5] = {count1, count2, count3, count4, count5};
	int min, max, min_batch, check2, max_batch, check;
	string min_block, max_block, block[100], name[100], block1, batch_name[5] = {"First", "Second", "Third", "Fourth", "Fifth"};
	char sex[100];
	cout << "enetr number of  students:";
	cin >> n;
	cout << "enter number of blocks:";
	cin >> m;
menu:
	cout << "\nMENU\n\t1.Register each student details (Name, age,gender…..).\n\t2.Record all the above data [data in the table].\n\t3.Which block has greatest number of students?\n\t4.Which block has smallest number of students?\n\t5.Totally how many students are living in all blocks?\n\t6.How many students are studies in each batch?\n\t7.Which block has no second year students?\n\t8.Which batch has greatest number of students?\n\t9.Which batch has smallest number of students?\n\t10.Display student data.";
	cin >> choose;
	if (choose == 1)
		goto qu1;
	if (choose == 2)
		goto qu2;
	if (choose == 3)
		goto qu3;
	if (choose == 4)
		goto qu4;
	if (choose == 5)
		goto qu5;
	if (choose == 6)
		goto qu6;
	if (choose == 7)
		goto qu7;
	if (choose == 8)
		goto qu8;
	if (choose == 9)
		goto qu9;
	if (choose == 10)
		goto qu10;
qu1:
	for (int i = 0; i < n; i++)
	{
		cout << "name of student one:";
		cin >> name[i];
		cout << "\tsex:";
		cin >> sex[i];
		cout << "\tage:";
		cin >> age[i];
	}
	goto menu;
qu2:

	for (int i = 0; i < m; i++)
	{
		cout << "enter name of block " << i + 1 << ":";

		cin >> block[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << name[i];
		cout << "\tblock:";
		cin >> block1;
		for (int j = 0; j < m; j++)
		{

			if (block1 == block[j])
			{
				cout << "\tur year:";
				cin >> year;
				if (year == 1)
				{
					count1++;
					first[j]++;
				}
				else if (year == 2)
				{
					count2++;
					second[j]++;
				}
				else if (year == 3)
				{
					count3++;
					third[j]++;
				}
				else if (year == 4)
				{
					count4++;
					fourth[j]++;
				}
				else if (year == 5)
				{
					count5++;
					fifth[j]++;
				}
				block_sum[j] = first[j] + second[j] + third[j] + fourth[j] + fifth[j];
			}
		}
	}
	batch[0] = count1;
	batch[1] = count2;
	batch[2] = count3;
	batch[3] = count4;
	batch[4] = count5;

	goto menu;
qu3:
	max = block_sum[0];
	max_block = block[0];
	for (int i = 0; i < m; i++)
	{
		if (block_sum[i] > max)
		{
			max = block_sum[i];
			max_block = block[i];
		}
	}
	cout << "\nBlock with greatest number of students:" << max_block;
	goto menu;
qu4:
	min = block_sum[0];
	min_block = block[0];
	for (int i = 0; i < m; i++)
	{
		if (block_sum[i] < min)
		{
			min = block_sum[i];
			min_block = block[i];
		}
	}
	cout << "\nBlock with  smallest number of students:" << min_block;
	goto menu;
qu5:
	cout << "\n";
	for (int i = 0; i < m; i++)
	{
		cout << block[i] << "=" << block_sum[i] << endl;
	}
	goto menu;
qu6:
	cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "BATCH " << i + 1 << ":" << batch[i] << endl;
	}
	goto menu;
qu7:
	for (int i = 0; i < m; i++)
	{
		if (second[i] == 0)
		{
			cout << "Block with no second year students:" << block[i] << endl;
		}
	}
	goto menu;
qu8:
	check = batch[0];
	max_batch = 0;

	for (int i = 0; i < 5; i++)
	{
		if (batch[i] > check)
		{
			check = batch[i];
			max_batch = i;
		}
	}
	cout << "\nBatch with greatest number of students:" << batch_name[max_batch];
	goto menu;
qu9:
	check2 = batch[0];
	min_batch = 0;
	for (int i = 0; i < 5; i++)
	{
		if (batch[i] < check2)
		{
			check2 = batch[i];
			min_batch = i;
		}
	}
	cout << "\nBatch with  smallest number of students:" << batch_name[min_batch];
	goto menu;
qu10:
	cout << "\n\t\t"
		 << "Student Batches\n";
	cout << "Blocks";
	for (int i = 0; i < 5; i++)
	{
		cout << "\t" << batch_name[i];
	}
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		cout << block[i] << "\t" << first[i] << "\t" << second[i] << "\t" << third[i] << "\t" << fourth[i] << "\t" << fifth[i] << endl;
	}
	goto menu;

	return 0;
}