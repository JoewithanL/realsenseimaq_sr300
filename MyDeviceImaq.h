/*
Copyright  (c) 2015 Intel Corporation.

The source code, information and material ("Material") contained
herein is owned by Intel Corporation or its suppliers or
licensors, and title to such Material remains with Intel
Corporation or its suppliers or licensors. The Material contains
proprietary information of Intel or its suppliers and licensors.
The Material is protected by worldwide copyright laws and treaty
provisions. No part of the Material may be used, copied,
reproduced, modified, published, uploaded, posted, transmitted,
distributed or disclosed in any way without Intel's prior express
written permission. No license under any patent, copyright or
other intellectual property rights in the Material is granted to
or conferred upon you, either expressly, by implication,
inducement, estoppel or otherwise. Any license under such
intellectual property rights must be express and approved by
Intel in writing.

Unless otherwise agreed by Intel in writing, you may not remove
or alter this notice or any other notice embedded in Materials by
Intel or Intel's suppliers or licensors in any way.

*/


#ifndef __MYDEVICEIMAQ_HEADER__
#define __MYDEVICEIMAQ_HEADER__

#include "RealSenseAdaptor.h"
#include "RealSenseDeviceFormat.h"
#include "pxcsensemanager.h"
#include "pxcprojection.h"
#include "pxccalibration.h"
#include "mwadaptorimaq.h"


void setSR300ColorFormat(imaqkit::IDeviceInfo*& deviceInfo)
{
	imaqkit::IDeviceFormat* deviceFormat =
		deviceInfo->createDeviceFormat(0, "RGB_1920×1080");
	RealSenseDeviceFormat* rsColorFormatInfo0 = new RealSenseDeviceFormat();
	rsColorFormatInfo0->setFormatWidth(1920);
	rsColorFormatInfo0->setFormatHeight(1080);
	rsColorFormatInfo0->setFormatNumBands(3);
	rsColorFormatInfo0->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);
	// Add the RealSenseDeviceFormat object to the imaqkit::IDeviceFormat object.
	// Specifying "true' makes this format the default format.
	deviceFormat->setAdaptorData(rsColorFormatInfo0);
	deviceInfo->addDeviceFormat(deviceFormat, true); //default format
	// Create a Device Format object.
	deviceFormat =
		deviceInfo->createDeviceFormat(1, "RGB_1280×720");
	RealSenseDeviceFormat* rsColorFormatInfo1 = new RealSenseDeviceFormat();
	rsColorFormatInfo1->setFormatWidth(1280);
	rsColorFormatInfo1->setFormatHeight(720);
	rsColorFormatInfo1->setFormatNumBands(3);
	rsColorFormatInfo1->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);
	deviceFormat->setAdaptorData(rsColorFormatInfo1);
	deviceInfo->addDeviceFormat(deviceFormat);

	deviceFormat =
		deviceInfo->createDeviceFormat(2, "RGB_1360x760");
	RealSenseDeviceFormat* rsColorFormatInfo2 = new RealSenseDeviceFormat();
	rsColorFormatInfo2->setFormatWidth(1360);
	rsColorFormatInfo2->setFormatHeight(760);
	rsColorFormatInfo2->setFormatNumBands(3);
	rsColorFormatInfo2->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);
	deviceFormat->setAdaptorData(rsColorFormatInfo2);
	deviceInfo->addDeviceFormat(deviceFormat);

	deviceFormat =
		deviceInfo->createDeviceFormat(3, "RGB_800x600");
	RealSenseDeviceFormat* rsColorFormatInfo3 = new RealSenseDeviceFormat();
	rsColorFormatInfo3->setFormatWidth(800);
	rsColorFormatInfo3->setFormatHeight(600);
	rsColorFormatInfo3->setFormatNumBands(3);
	rsColorFormatInfo3->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);
	deviceFormat->setAdaptorData(rsColorFormatInfo3);
	deviceInfo->addDeviceFormat(deviceFormat);

	deviceFormat =
		deviceInfo->createDeviceFormat(4, "RGB_640×480");
	RealSenseDeviceFormat* rsColorFormatInfo4 = new RealSenseDeviceFormat();
	rsColorFormatInfo4->setFormatWidth(640);
	rsColorFormatInfo4->setFormatHeight(480);
	rsColorFormatInfo4->setFormatNumBands(3);
	rsColorFormatInfo4->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);
	deviceFormat->setAdaptorData(rsColorFormatInfo4);
	deviceInfo->addDeviceFormat(deviceFormat);

	deviceFormat =
		deviceInfo->createDeviceFormat(5, "RGB_320×240");
	RealSenseDeviceFormat* rsColorFormatInfo5 = new RealSenseDeviceFormat();
	rsColorFormatInfo5->setFormatWidth(320);
	rsColorFormatInfo5->setFormatHeight(240);
	rsColorFormatInfo5->setFormatNumBands(3);
	rsColorFormatInfo5->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);
	deviceFormat->setAdaptorData(rsColorFormatInfo5);
	deviceInfo->addDeviceFormat(deviceFormat);

	deviceFormat =
		deviceInfo->createDeviceFormat(6, "RGB_320×180");
	RealSenseDeviceFormat* rsColorFormatInfo6 = new RealSenseDeviceFormat();
	rsColorFormatInfo6->setFormatWidth(320);
	rsColorFormatInfo6->setFormatHeight(180);
	rsColorFormatInfo6->setFormatNumBands(3);
	rsColorFormatInfo6->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);
	deviceFormat->setAdaptorData(rsColorFormatInfo6);
	deviceInfo->addDeviceFormat(deviceFormat);
}

void setSR300DepthFormat(imaqkit::IDeviceInfo*& deviceInfo)
{
	imaqkit::IDeviceFormat* deviceFormat =
		deviceInfo->createDeviceFormat(0, "Depth_640×480");
	RealSenseDeviceFormat* rsDepthFormatInfo0 = new RealSenseDeviceFormat();
	rsDepthFormatInfo0->setFormatWidth(640);
	rsDepthFormatInfo0->setFormatHeight(480);
	rsDepthFormatInfo0->setFormatNumBands(1);
	rsDepthFormatInfo0->setFormatFrameType(imaqkit::frametypes::MONO16);
	// Add the RealSenseDeviceFormat object to the imaqkit::IDeviceFormat object.
	// Specifying "true' makes this format the default format.
	deviceFormat->setAdaptorData(rsDepthFormatInfo0);
	deviceInfo->addDeviceFormat(deviceFormat, true);

	deviceFormat =
		deviceInfo->createDeviceFormat(1, "Depth_640×240");
	RealSenseDeviceFormat* rsDepthFormatInfo1 = new RealSenseDeviceFormat();
	rsDepthFormatInfo1->setFormatWidth(640);
	rsDepthFormatInfo1->setFormatHeight(240);
	rsDepthFormatInfo1->setFormatNumBands(1);
	rsDepthFormatInfo1->setFormatFrameType(imaqkit::frametypes::MONO16);
	deviceFormat->setAdaptorData(rsDepthFormatInfo1);
	deviceInfo->addDeviceFormat(deviceFormat);
	
	deviceFormat =
		deviceInfo->createDeviceFormat(2, "Depth_320×240");
	RealSenseDeviceFormat* rsDepthFormatInfo2 = new RealSenseDeviceFormat();
	rsDepthFormatInfo2->setFormatWidth(320);
	rsDepthFormatInfo2->setFormatHeight(240);
	rsDepthFormatInfo2->setFormatNumBands(1);
	rsDepthFormatInfo2->setFormatFrameType(imaqkit::frametypes::MONO16);
	deviceFormat->setAdaptorData(rsDepthFormatInfo2);
	deviceInfo->addDeviceFormat(deviceFormat);
}
#endif