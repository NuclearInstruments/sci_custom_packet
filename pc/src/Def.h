#include <windows.h>
#include <stdlib.h>
#include <stdint.h>
#pragma once

typedef struct {
	int Csocket;
	int connected;
	uint32_t __IICBASEADDRESS;
	uint32_t __IICBASEADDRESS_STATUS;
	int socketType;
} NI_HANDLE;

typedef struct NI_IIC_HANDLE
{
	NI_HANDLE *dev_con;
	uint32_t __IICBASEADDRESS;
	uint32_t __IICBASEADDRESS_STATUS;
} NI_IIC_HANDLE;



typedef struct
{
	uint64_t Time_Code;
	uint64_t RunTime_Code;
	uint32_t AsicID;
	uint32_t Pack_Id;
	uint32_t *Charge;
	uint32_t *CoarseTime;
	uint32_t *FineTime;
	uint32_t *Hit;
} t_ASIC_packet;


typedef struct
{
	t_ASIC_packet *packets;
	int allocated_packets;
	int valid_packets;
} t_ASIC_packet_collection;
