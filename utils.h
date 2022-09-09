#ifndef UTILS_H_
#define UTILS_H_

#include <memory>
#include <tuple>
#include <limits>
#include <vector>
#include <eigen3/Eigen/Dense>
#include "utilsStructs.h"
#include "displayStructs.h"
#include "object.h"
#include "sphere.h"

class Sphere;
namespace utils
{
    utilsStructs::Color traceRay(displayStructs::Camera camera, Eigen::Vector3d, std::vector<std::shared_ptr<displayStructs::LightSource>>, std::vector<std::shared_ptr<Object>>);
    std::tuple<double, std::shared_ptr<Object>> closestIntersection(Eigen::Vector3d, Eigen::Vector3d, double, double, std::vector<std::shared_ptr<Object>>);
    std::tuple<int, int, int> calculateLighting(std::shared_ptr<displayStructs::LightSource> lS, displayStructs::Camera camera, Eigen::Vector3d D, double t, std::shared_ptr<Object> closestObject, std::vector<std::shared_ptr<Object>> objects);
    bool isLightBlocked(std::shared_ptr<Object> closestObject, std::vector<std::shared_ptr<Object>> objects, Eigen::Vector3d P_I, std::shared_ptr<displayStructs::LightSource> lS, Eigen::Vector3d l);
}

#endif