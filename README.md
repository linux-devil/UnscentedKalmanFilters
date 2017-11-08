# UnscentedKalmanFilters

## Self-Driving Car Engineer Nanodegree Program

Implementation of Unscented Kalman Filter for sensor fusion [ Radar and Lidar] 

In this project, we will utilize a Kalman filter to estimate the state of a moving object of interest with noisy lidar and radar measurements. It is expected to keep the RMSE (error) values, [px, py, vx, and vy] less than or equal to the values [.09, .10, .40, .30].

# Other Important Dependencies
* cmake >= 3.5
    * All OSes: click here for installation instructions
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
    * Linux: make is installed by default on most Linux distros
    * Mac: install Xcode command line tools to get make
    * Windows: Click here for installation instructions
* gcc/g++ >= 5.4
    * Linux: gcc / g++ is installed by default on most Linux distros
    * Mac: same deal as make - install Xcode command line tools
    * Windows: recommend using MinGW

# Basic Build Instructions
1. Clone this repo.
2. Make a build directory: mkdir build && cd build
3. Compile: cmake .. && make
    * On windows, you may need to run: cmake .. -G "Unix Makefiles" && make
4. Run it: ./ExtendedKF

# Contents of the repo

src a directory with the project code:
1. main.cpp - reads in data, calls a function to run the Kalman filter, calls a function to calculate RMSE
2. ukf.cpp - the UKF filter itself, defines the predict function, the update function for lidar, and the update function for radar
3. tools.cpp - a function to calculate RMSE

# Why Unscented Kalman Filters :
### Kalman filters have the same mains steps: 1. Initialization, 2. Prediction, 3. Update. 
- Both Prediction and Update processes can be linear and non-linear.
- A Standard Kalman Filter (KF)  can be used for linear process but for non linear process there are 2 options: Extended and Unscented Kalman Filters.
- Extended Kalman Filter uses the Jacobian matrix to linearize non-linear functions; Unscented Kalman Filter, on the other hand, does not need to linearize non-linear functions, instead, the Unscented Kalman Filter maps representative points from a Gaussian distribution.
