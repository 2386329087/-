#ifndef __AS608_H
#define __AS608_H

#include "debug.h"
#include <string.h>

#define OPEN_USART2_RECEIVE     USART_ITConfig(UART8, USART_IT_RXNE, ENABLE)
#define CLOSE_USART2_RECEIVE    USART_ITConfig(UART8, USART_IT_RXNE, DISABLE)

#define     AS608_WAK_RCC                   RCC_APB2Periph_GPIOB
#define     AS608_WAK_PORT                  GPIOB
#define     AS608_WAK_PIN                   GPIO_Pin_0

#define     AS608_WAK_EXTILINE_PORT         GPIO_PortSourceGPIOB
#define     AS608_WAK_EXTILINE_PIN          GPIO_PinSource0

#define     AS608_WAK_EXTILINE_NUMBER       EXTI_Line0

#define     AS608_WAK_NVIC_CHANNEL          EXTI0_IRQn


#define     FINGER_EXIST        1
#define     FINGER_NO_EXIST     0

#define     CLEAR_BUFFER        {memset(as608_receive_data,'\0',sizeof(as608_receive_data));as608_receive_count = 0;}

#define     EXIT        0

#define     CharBuffer1     0x01
#define     CharBuffer2     0x02

extern uint8_t as608_receive_data[128]; //���ָ�Ʒ�����Ϣ
extern uint8_t as608_receive_count;

extern uint16_t ID;                         //���ID�� �������ɾ������
extern uint16_t NUM;                        //��Ÿ��� �������ɾ������
extern uint8_t finger_status;

void AS608_PIN_Init(void);

void as60x_wak_init(void);

uint8_t as608_detection_finger(uint16_t wait_time);                     //�����ָ�Ƿ���ģ����
uint8_t as608_detection_data(uint16_t wait_time,uint16_t **ID_OR_NUM);  //���ָ��ģ�鷵�ص�����
uint8_t as608_detection_checknum(char *data,uint16_t **ID_OR_NUM);      //������ݰ�������Ƿ�׼ȷ


uint8_t as608_add_fingerprint(uint16_t PageID);                     //¼��ָ�ƺ���
uint16_t as608_verify_fingerprint(void);                                //��ָ֤�ƺ���
uint8_t as608_delete_fingerprint(void);                             //ɾ��ָ�ƺ���
uint8_t as608_empty_all_fingerprint(void);                          //�������ָ�ƺ���
uint8_t as608_find_fingerprints_num(void);                          //����ָ�Ƹ�������

void Uart8_SendData(uint8_t Data);

#endif
