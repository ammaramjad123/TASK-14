#include"Header.h"
int main() {
	trafficSignal ts1;
	for (int i = 0; i < 3; i++)
	{
		if (i == 0) {
			ts1.setRed(true);
			ts1.setYellow(false);
			ts1.setGreen(false);
		}
		else if (i == 1)
		{
			ts1.setRed(false);
			ts1.setYellow(true);
			ts1.setGreen(false);
		}
		else if (i == 2)
		{
			ts1.setRed(false);
			ts1.setYellow(false);
			ts1.setGreen(true);
		}
		if (ts1.getRed())
		{
			cout << "__________" << endl;
			cout << "RED   ::on" << endl;
			cout << "YELLOW::" << endl;
			cout << "GREEN ::" << endl;
		}
		else if (ts1.getYellow())
		{
			cout << "__________" << endl;
			cout << "RED   ::" << endl;
			cout << "YELLOW::on" << endl;
			cout << "GREEN ::" << endl;
		}
		else if (ts1.getGreen())
		{
			cout << "__________" << endl;
			cout << "RED   ::" << endl;
			cout << "YELLOW::" << endl;
			cout << "GREEN ::on" << endl;
		}
		
	}
	system("pause");
	return 0;
}