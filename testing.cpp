#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>

void scanCallback(const sensor_msgs::LaserScan::ConstPtr& scan)
{
    float angle_front = 0.0;
    float angle_back = M_PI;
    float angle_left = M_PI / 2;
    float angle_right = -M_PI / 2;

    int index_front = (angle_front - scan->angle_min) / scan->angle_increment;
    int index_back = (angle_back - scan->angle_min) / scan->angle_increment;
    int index_left = (angle_left - scan->angle_min) / scan->angle_increment;
    int index_right = (angle_right - scan->angle_min) / scan->angle_increment;

    float front = (index_front >= 0 && index_front < scan->ranges.size()) ? scan->ranges[index_front] : -1;
    float back = (index_back >= 0 && index_back < scan->ranges.size()) ? scan->ranges[index_back] : -1;
    float left = (index_left >= 0 && index_left < scan->ranges.size()) ? scan->ranges[index_left] : -1;
    float right = (index_right >= 0 && index_right < scan->ranges.size()) ? scan->ranges[index_right] : -1;

    ROS_INFO("Front: %6.2f m, Back: %6.2f m, Left: %6.2f m, Right: %6.2f m", front, back, left, right);

}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "lidar_test_node"); 
    ros::NodeHandle n;
    ros::Subscriber col_sub = n.subscribe<sensor_msgs::LaserScan>("/scan", 1, scanCallback);
    ros::spin(); 

    return 0;
}
