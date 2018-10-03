#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"

using namespace std;


// Easier to manipulate the data
struct MPC_SOL {
  vector<double> x;
  vector<double> y;
  vector<double> delta;
  vector<double> a;
};


class MPC {
 public:
  MPC();

  virtual ~MPC();

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuatotions.
  MPC_SOL Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);

};

#endif /* MPC_H */