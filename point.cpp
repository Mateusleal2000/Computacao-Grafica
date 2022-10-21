#include "point.h"

Eigen::Vector3d Point::getPF() { return this->P_F; }
std::tuple<Eigen::Vector3d, Eigen::Vector3d> Point::calculateL(
    Eigen::Vector3d P_I, Eigen::Vector3d n) {
  Eigen::Vector3d l(0, 0, 0);
  Eigen::Vector3d P_F = this->getPF();
  l = (P_F - P_I) / (P_F - P_I).norm();

  return std::make_tuple(l, this->getIF());
}