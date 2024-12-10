# Lidar Test Node

A simple ROS node to read data from a Lidar sensor and display the distances of objects in the front, back, left, and right directions. This program aims to test the Lidar sensor and understand the use of ROS subscribers with LaserScan data.

## Description

This node subscribes to the `/scan` topic to receive data from a Lidar sensor in the form of `sensor_msgs/LaserScan` messages. The program calculates the distance to objects based on specific angles:
- **0° (Front)**
- **90° (Left)**
- **180° (Back)**
- **270° (Right)**

The distances are displayed in the terminal using `ROS_INFO`.

## Purpose

- **Lidar Sensor Testing**: Ensure that data from the Lidar sensor is correctly received via ROS.
- **Object Distance Monitoring**: Display distances to objects in the front, back, left, and right directions.
- **Learning ROS**: A simple example of implementing subscribers and callbacks in ROS.

## How It Works

1. Initialize a ROS node named `lidar_test_node`.
2. Subscribe to the `/scan` topic to receive Lidar data.
3. The callback function calculates the distances to objects based on specific angles.
4. The distances are displayed in the terminal.
