/**********************************************************
**             Email:wangbyyy@qq.com
**---------------------------------------------------------
**  Description: 此文件为 单腿跳跃机器人 逻辑 文件
**  Version    : 
**  Notes      : 使用键盘 ↑ ↓ ← → 控制机器人跳动方向
**  Author     : 于宪元
**********************************************************/
#include <stdio.h>
#include <stdlib.h>

#include <webots/keyboard.h>
#include <webots/robot.h>

#include "q_controller.h"
#include "q_webotsInterface.h"

int main(int argc, char **argv)
{

  wb_robot_init();
  webots_device_init(); //webots initialization
  robot_init();         //robot initialization
  while (wb_robot_step(TIME_STEP) != -1)
  {
    updateRobotState(); //update the current state of the robot
    robot_control();    //controlling the robot
  };
  robot_free(); //free the memory
  wb_robot_cleanup();
  return 0;
}
