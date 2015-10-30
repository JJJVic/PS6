/* Copyright 2015 YQJ */
#include <ros/ros.h>
#include <baxter_moves_library/my_interesting_moves.h>

int main(int argc, char** argv)
{
    ros::init(argc, argv, "interesting_moves_usage");   // this is the name of this node
    ros::NodeHandle nh;

    InterestingMoves im(&nh);

    im.set_goal_extend_arm();

    im.set_goal_bend_arm();

    im.set_goal_wave_arm();

    im.set_goal_putdown_arm();

    return 0;
}
