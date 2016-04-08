#ifndef _BUNDLERCAMERA_H_
#define _BUNDLERCAMERA_H_
/*
* Class for storing a camera consisting of a rotation matrix,
* a translation vector, a focal length value and two parameters
* accounting for radial distortion
*/
#include<opencv2/opencv.hpp>

struct  BUNDLER_CAMERA
{
	cv::Matx33d	rotation;
	cv::Vec3d	translation;
	double		focal_length;
	double		k1, k2;

	size_t		id;
	int			width, height;
};

#endif