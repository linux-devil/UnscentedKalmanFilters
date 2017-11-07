#include <iostream>
#include "tools.h"

using Eigen::VectorXd;
using Eigen::MatrixXd;
using std::vector;

Tools::Tools() {}

Tools::~Tools() {}

VectorXd Tools::CalculateRMSE(const vector<VectorXd> &estimations,
                              const vector<VectorXd> &ground_truth) {
  /**
  TODO:
    * Calculate the RMSE here.
  */
  VectorXd rmserror(4);
  rmserror << 0,0,0,0;
  if(estimations.size()==0 || estimations.size() != ground_truth.size()){
    return rmserror;
  }
  for(unsigned int x = 0 ; x<estimations.size();++x){
    VectorXd residuals = estimations[x] - ground_truth[x];
    residuals = residuals.array()*residuals.array();
    rmserror += residuals;
  }

  rmserror /= estimations.size();
  rmserror = rmserror.array().sqrt();
  return rmserror;
}
