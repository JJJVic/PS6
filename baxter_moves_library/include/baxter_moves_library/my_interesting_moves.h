/* Copyright 2015 YQJ */
#ifndef MY_INTERESTING_MOVES_H
#define MY_INTERESTING_MOVES_H

#include <ros/ros.h>
#include <Eigen/Eigen>
#include <Eigen/Dense>
#include <Eigen/Geometry>
#include <Eigen/Eigenvalues>


typedef Eigen::Matrix<double, 7, 1> Vectorq7x1;

class InterestingMoves
{
public:
        ros::NodeHandle nh_;
        int g_count;

        explicit InterestingMoves(ros::NodeHandle *nh);

	/**
	 * This will give the baxter robot the command to extend its right arm
	 */
        void set_goal_extend_arm();

	/**
	 * This will give the baxter robot the command to bend its right elbow
	 */
        void set_goal_bend_arm();

	/**
	 * This will give the baxter robot the command to wave its right arm
	 */
        void set_goal_wave_arm();

        /**
	 * This will give the baxter robot the command to put down its right arm 
	 */
        void set_goal_putdown_arm();

private:
	/**
	 * This will calculate the trajectories and send the goal trajectory to the action server
	 * @param position: the desired position for the robot to go to
	 */
        void find_and_send_trajectory(Vectorq7x1 position);
};

#endif  // MY_INTERESTING_MOVES_H
