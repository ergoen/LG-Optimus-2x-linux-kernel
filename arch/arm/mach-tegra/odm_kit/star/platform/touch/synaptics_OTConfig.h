// Untitled Project
// 02-06-2007 : 18:32:09

// This file is automatically generated by OneTouch Studio
// This file is very specific to a design

// ******************************************
// ******************************************
// ==> WARNING: ** DO NOT EDIT This file <== 
// ******************************************
// ******************************************

// NOTE: For OTLib 3.0 or earlier

#ifndef _SYNAOTCONFIG_H
#define _SYNAOTCONFIG_H

#define OT_ADDR							0x2C	// OneTouch Device I2C Slave Address

// OneTouch Register Definitions
#define OT_CONFIG_REG_START_ADDR		0x0000
#define OT_CONFIG_REG_END_ADDR			0x0025
#define OT_NUM_CONFIG_REG_BYTES			((OT_CONFIG_REG_END_ADDR - OT_CONFIG_REG_START_ADDR + 1)*2)

// Total number of Configuration Bytes
#define OT_NUM_CONFIG_BYTES			(OT_NUM_CONFIG_REG_BYTES + 2)

static NvU8	g_OT_Config[OT_NUM_CONFIG_BYTES]= {

	// High byte, followed by low Byte
	0x00, 0x00,		// base address of config registers
	0x00, 0x07,		// values of 0x0000
	0x00, 0x00,		// values of 0x0001
	0x00, 0x00,		// values of 0x0002
	0x00, 0x00,		// values of 0x0003
	0x00, 0x09,		// values of 0x0004
	0x00, 0x00,		// values of 0x0005
	0x00, 0x00,		// values of 0x0006
	0x00, 0x00,		// values of 0x0007
	0x00, 0x00,		// values of 0x0008
	0x00, 0x00,		// values of 0x0009
	0x00, 0x00,		// values of 0x000A
	0x00, 0x00,		// values of 0x000B
	0x00, 0x00,		// values of 0x000C
	0x00, 0x00,		// values of 0x000D
	0x00, 0x00,		// values of 0x000E
	0x00, 0x00,		// values of 0x000F
#if defined (CONFIG_MACH_STAR_SKT_REV_D) || defined(CONFIG_MACH_STAR_SKT_REV_E)
	0x00, 0xDC,		// values of 0x0010
	0xE6, 0x00,		// values of 0x0011
#else
	0x00, 0xFF,		// values of 0x0010
	0xFF, 0x00,		// values of 0x0011
#endif 
	0x00, 0x00,		// values of 0x0012
	0x00, 0x00,		// values of 0x0013
	0x00, 0x00,		// values of 0x0014
	0x00, 0x00,		// values of 0x0015
	0x00, 0x00,		// values of 0x0016
	0x00, 0x00,		// values of 0x0017
	0x00, 0x00,		// values of 0x0018
	0x00, 0x00,		// values of 0x0019
	0x00, 0x00,		// values of 0x001A
	0x00, 0x00,		// values of 0x001B
	0x00, 0x00,		// values of 0x001C
	0x00, 0x00,		// values of 0x001D
	0x00, 0x00,		// values of 0x001E
	0x00, 0x00,		// values of 0x001F
	0x00, 0x00,		// values of 0x0020
	0x00, 0x00,		// values of 0x0021
	0x00, 0x00,		// values of 0x0022
	0x00, 0x00,		// values of 0x0023
	0x00, 0x00,		// values of 0x0024
	0x00, 0x00		// values of 0x0025

};

#endif
