roslaunch ps6_client baxter_world.launch

rosrun baxter_traj_streamer traj_interpolator_as

rosrun baxter_tools enable_robot.py -e

rosrun ps6_client ps6_client
