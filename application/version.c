#include <version.h>
#include "crc8_crc16.h"
#include "usart.h"

int Version_func(gimbal_control_t *judge_auto_shoot)
{
	//发送次数计数
	static int send_num = 0;
	//记录上位机发送角度
	static float yaw_angle_ref, pitch_angle_ref;
	//接收数据 判断头帧 crc 正确之后接收数据
	//数据错误返回0 正确返回1
	
	
	
	
		//yaw 数据
		judge_auto_shoot->ref_info_2->yaw_info = 
		//pitch数据
		judge_auto_shoot->ref_info_2->pitch_info = 
		//distance数据
		judge_auto_shoot->ref_info_2->distance_info = 
		
	judge_auto_shoot->gimbal_yaw_motor.absolute_angle_set = judge_auto_shoot->ref_info_2->distance_info;
	judge_auto_shoot->gimbal_pitch_motor.absolute_angle_set = judge_auto_shoot->ref_info_2->distance_info;

}
