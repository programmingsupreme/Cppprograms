#include <iostream>
#include <iomanip>


using namespace std;
int main(){

        //                                       ______________                                                                   _________________       ______________
	/*\\\\\\\                   ////////     |                   lllll                 ((((((((((     00000000000000      !  /        |        \      |
	 * \\\\\\                   ///////      |                   lllll                ((              000        000      !/          |         \     |
	 *  \\\\\\      ||||||      //////       |---------          lllll               (((              000        000      |           |         |     |------
	 *   \\\\\      ||||||      /////        |                   lllll              ((((              000        000      |           |         |     |
	 *    \\\\      ||||||      ////         |                   lllll               (((              000        000      |           |         |     |
	 *     \\\      ||||||      ///          |---------          lllll                ((              000        000      |           |         |     |------
	 *      \\      ||||||      //           |                   llllllllllllllll      ((             000        000      |           |         |     |
	 *       \______||||||______/            |_____________      llllllllllllllll       (((((((((     00000000000000      |           |         |     |_____________
	 *
	 */

	int numofnum,a,counter;

	cout<<"Welcome to the mean Calculator by Vikram N.\nHow many numbers would you like to enter?"<<endl;
	cin>>numofnum;
	counter=numofnum;
	for(counter!=0;counter>0;counter--)
	//while(numofnum>0)
	{
	
		cout<<"Enter your number "<<counter<<endl;
		cin>>a;
		a=a+a;
	}

	cout<<"The mean is "<<a/numofnum<<endl;


	return 0;
}
