#include "esp8266.h"
#include "lcd_st7789.h"

void esp8266_USART6_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    USART_InitTypeDef USART_InitStructure;
    // ����ʱ��
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_UART6, ENABLE);
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);

    /* USART6 TX-->C0  RX-->C1 */
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    GPIO_Init(GPIOC, &GPIO_InitStructure);
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; // RX����������
    GPIO_Init(GPIOC, &GPIO_InitStructure);

    USART_InitStructure.USART_BaudRate = 115200;                                    // ������
    USART_InitStructure.USART_WordLength = USART_WordLength_8b;                     // ����λ 8
    USART_InitStructure.USART_StopBits = USART_StopBits_1;                          // ֹͣλ 1
    USART_InitStructure.USART_Parity = USART_Parity_No;                             // ��У��
    USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None; // ��Ӳ������
    USART_InitStructure.USART_Mode = USART_Mode_Tx | USART_Mode_Rx;                 // ʹ�� RX �� TX

    USART_Init(UART6, &USART_InitStructure);
    DMA_Cmd(DMA2_Channel7, ENABLE); // �������� DMA
    USART_Cmd(UART6, ENABLE);       // ����UART
}

void esp8266_DMA_Init(void)
{
    DMA_InitTypeDef DMA_InitStructure;
        RCC_AHBPeriphClockCmd(RCC_AHBPeriph_DMA2, ENABLE);

        // TX DMA ��ʼ��
        DMA_DeInit(DMA2_Channel6);
        DMA_InitStructure.DMA_PeripheralBaseAddr = (u32)(&UART6->DATAR);        // DMA �����ַ����ָ���Ӧ������
        DMA_InitStructure.DMA_MemoryBaseAddr = 0x2000A000;                  // DMA �ڴ��ַ��ָ���ͻ��������׵�ַ
        DMA_InitStructure.DMA_DIR = DMA_DIR_PeripheralDST;                      // ���� : ���� ��Ϊ �յ㣬�� �ڴ� ->  ����
        DMA_InitStructure.DMA_BufferSize = 0;                                   // ��������С,��ҪDMA���͵����ݳ���,Ŀǰû�����ݿɷ�
        DMA_InitStructure.DMA_PeripheralInc = DMA_PeripheralInc_Disable;        // �����ַ����������
        DMA_InitStructure.DMA_MemoryInc = DMA_MemoryInc_Enable;                 // �ڴ��ַ����������
        DMA_InitStructure.DMA_PeripheralDataSize = DMA_PeripheralDataSize_Byte; // ��������λ��8λ(Byte)
        DMA_InitStructure.DMA_MemoryDataSize = DMA_MemoryDataSize_Byte;         // �ڴ�����λ��8λ(Byte)
        DMA_InitStructure.DMA_Mode = DMA_Mode_Normal;                           // ��ͨģʽ�������������ѭ������
        DMA_InitStructure.DMA_Priority = DMA_Priority_VeryHigh;                 // ���ȼ����
        DMA_InitStructure.DMA_M2M = DMA_M2M_Disable;                            // M2P,����M2M
        DMA_Init(DMA2_Channel6, &DMA_InitStructure);
}

void UART6_SendData(uint8_t Data)
{
    USART_SendData(UART6, Data);
    while (USART_GetFlagStatus(UART6, USART_FLAG_TXE) == RESET);
}

void UART6_SendString(char *String)
{
    uint8_t i;
    for (i = 0; String[i] != '\0'; i ++)
    {
        UART6_SendData(String[i]);
    }
}



