#include <version.h>
#include "crc8_crc16.h"
#include "usart.h"

int Version_func(gimbal_control_t *judge_auto_shoot)
{
	//���ʹ�������
	static int send_num = 0;
	//��¼��λ�����ͽǶ�
	static float yaw_angle_ref, pitch_angle_ref;
	//�������� �ж�ͷ֡ crc ��ȷ֮���������
	//���ݴ��󷵻�0 ��ȷ����1
	
	
	
	
		//yaw ����
		judge_auto_shoot->ref_info_2->yaw_info = 
		//pitch����
		judge_auto_shoot->ref_info_2->pitch_info = 
		//distance����
		judge_auto_shoot->ref_info_2->distance_info = 
		
	judge_auto_shoot->gimbal_yaw_motor.absolute_angle_set = judge_auto_shoot->ref_info_2->distance_info;
	judge_auto_shoot->gimbal_pitch_motor.absolute_angle_set = judge_auto_shoot->ref_info_2->distance_info;

}
