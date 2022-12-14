#ifndef PLANE_H_
#define PLANE_H_
#include <Eigen/Dense>
#include <iostream>
#include <tuple>

#include "object.h"


class Plane : public Object {
 public:
  Plane(utilsStructs::materialK k, double shininess, Eigen::Vector3d pPI,
        Eigen::Vector3d nBar)
      : Object(k, shininess), pPI(pPI), nBar(nBar) {
  };

  std::tuple<double, double> intersectRay(Eigen::Vector3d, Eigen::Vector3d);
  Eigen::Vector3d getNormal(Eigen::Vector3d);

 private:
  Eigen::Vector3d pPI;
  Eigen::Vector3d nBar;

};

#endif