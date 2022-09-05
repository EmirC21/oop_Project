#include"DepthCamera.h"
#include "PointCloudInterface.h"
#include<iostream>
#include<list>
using namespace std;
/**
* @Author	: Elif Can 152120191031
* @date		: 19.01.2022
* @brief	: bu kodda tüm sýnýflarý kullanarak main yazýldý
*/
int main() {
	DepthCamera DC1, DC2;
	DC1.setfileName("camera1.txt");
	DC2.setfileName("camera2.txt");
	
	PointCloudRecorder PCR;
	PointCloudInterface PCI;
	PCI.addGenerator(&DC1);
	PCI.addGenerator(&DC2);
	PCI.setRecorder(&PCR);
	PCI.generate();
	PCI.record();

	system("pause");
}