#include <iostream>
#include <BDoorControl.h>
#include <protocol/BDoorProtocol.h>
#include <string>

using namespace std;
int main() {
	BDoorControl bdoorcontrol = BDoorControl();
	while (true)
	{
		string usermess;
		getline(cin, usermess);
		if (usermess == "�˳�") {
			return 0;
		}
		string recvmess;
		bdoorcontrol.EnterCommand(usermess, recvmess);
		cout << recvmess << endl;
	}
}