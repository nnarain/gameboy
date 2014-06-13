
#ifndef INSTRUCTION_SET
#define INSTRUCTION_SET

#define REDIRECT 0xCB

//! First set of instructions
struct Instruction instructionSet1[256] = {
	{&NOP, 4} /*0x0*/,
	{&NOP, 4} /*0x1*/,
	{&NOP, 4} /*0x2*/,
	{&incBC, 6} /*0x3*/,
	{&NOP, 4} /*0x4*/,
	{&NOP, 4} /*0x5*/,
	{&NOP, 4} /*0x6*/,
	{&NOP, 4} /*0x7*/,
	{&NOP, 4} /*0x8*/,
	{&NOP, 4} /*0x9*/,
	{&NOP, 4} /*0xa*/,
	{&NOP, 4} /*0xb*/,
	{&NOP, 4} /*0xc*/,
	{&NOP, 4} /*0xd*/,
	{&NOP, 4} /*0xe*/,
	{&NOP, 4} /*0xf*/,
	{&NOP, 4} /*0x10*/,
	{&NOP, 4} /*0x11*/,
	{&NOP, 4} /*0x12*/,
	{&NOP, 4} /*0x13*/,
	{&NOP, 4} /*0x14*/,
	{&NOP, 4} /*0x15*/,
	{&NOP, 4} /*0x16*/,
	{&NOP, 4} /*0x17*/,
	{&NOP, 4} /*0x18*/,
	{&NOP, 4} /*0x19*/,
	{&NOP, 4} /*0x1a*/,
	{&incDE, 6} /*0x1b*/,
	{&NOP, 4} /*0x1c*/,
	{&NOP, 4} /*0x1d*/,
	{&NOP, 4} /*0x1e*/,
	{&NOP, 4} /*0x1f*/,
	{&NOP, 4} /*0x20*/,
	{&NOP, 4} /*0x21*/,
	{&NOP, 4} /*0x22*/,
	{&NOP, 4} /*0x23*/,
	{&NOP, 4} /*0x24*/,
	{&NOP, 4} /*0x25*/,
	{&NOP, 4} /*0x26*/,
	{&NOP, 4} /*0x27*/,
	{&NOP, 4} /*0x28*/,
	{&NOP, 4} /*0x29*/,
	{&NOP, 4} /*0x2a*/,
	{&incHL, 6} /*0x2b*/,
	{&NOP, 4} /*0x2c*/,
	{&NOP, 4} /*0x2d*/,
	{&NOP, 4} /*0x2e*/,
	{&NOP, 4} /*0x2f*/,
	{&NOP, 4} /*0x30*/,
	{&NOP, 4} /*0x31*/,
	{&NOP, 4} /*0x32*/,
	{&NOP, 4} /*0x33*/,
	{&NOP, 4} /*0x34*/,
	{&NOP, 4} /*0x35*/,
	{&NOP, 4} /*0x36*/,
	{&NOP, 4} /*0x37*/,
	{&NOP, 4} /*0x38*/,
	{&NOP, 4} /*0x39*/,
	{&NOP, 4} /*0x3a*/,
	{&incSP, 6} /*0x3b*/,
	{&NOP, 4} /*0x3c*/,
	{&NOP, 4} /*0x3d*/,
	{&NOP, 4} /*0x3e*/,
	{&NOP, 4} /*0x3f*/,
	{&NOP, 4} /*0x40*/,
	{&NOP, 4} /*0x41*/,
	{&NOP, 4} /*0x42*/,
	{&NOP, 4} /*0x43*/,
	{&NOP, 4} /*0x44*/,
	{&NOP, 4} /*0x45*/,
	{&NOP, 4} /*0x46*/,
	{&NOP, 4} /*0x47*/,
	{&NOP, 4} /*0x48*/,
	{&NOP, 4} /*0x49*/,
	{&NOP, 4} /*0x4a*/,
	{&NOP, 4} /*0x4b*/,
	{&NOP, 4} /*0x4c*/,
	{&NOP, 4} /*0x4d*/,
	{&NOP, 4} /*0x4e*/,
	{&NOP, 4} /*0x4f*/,
	{&NOP, 4} /*0x50*/,
	{&NOP, 4} /*0x51*/,
	{&NOP, 4} /*0x52*/,
	{&NOP, 4} /*0x53*/,
	{&NOP, 4} /*0x54*/,
	{&NOP, 4} /*0x55*/,
	{&NOP, 4} /*0x56*/,
	{&NOP, 4} /*0x57*/,
	{&NOP, 4} /*0x58*/,
	{&NOP, 4} /*0x59*/,
	{&NOP, 4} /*0x5a*/,
	{&NOP, 4} /*0x5b*/,
	{&NOP, 4} /*0x5c*/,
	{&NOP, 4} /*0x5d*/,
	{&NOP, 4} /*0x5e*/,
	{&NOP, 4} /*0x5f*/,
	{&NOP, 4} /*0x60*/,
	{&NOP, 4} /*0x61*/,
	{&NOP, 4} /*0x62*/,
	{&NOP, 4} /*0x63*/,
	{&NOP, 4} /*0x64*/,
	{&NOP, 4} /*0x65*/,
	{&NOP, 4} /*0x66*/,
	{&NOP, 4} /*0x67*/,
	{&NOP, 4} /*0x68*/,
	{&NOP, 4} /*0x69*/,
	{&NOP, 4} /*0x6a*/,
	{&NOP, 4} /*0x6b*/,
	{&NOP, 4} /*0x6c*/,
	{&NOP, 4} /*0x6d*/,
	{&NOP, 4} /*0x6e*/,
	{&NOP, 4} /*0x6f*/,
	{&NOP, 4} /*0x70*/,
	{&NOP, 4} /*0x71*/,
	{&NOP, 4} /*0x72*/,
	{&NOP, 4} /*0x73*/,
	{&NOP, 4} /*0x74*/,
	{&NOP, 4} /*0x75*/,
	{&NOP, 4} /*0x76*/,
	{&NOP, 4} /*0x77*/,
	{&NOP, 4} /*0x78*/,
	{&NOP, 4} /*0x79*/,
	{&NOP, 4} /*0x7a*/,
	{&NOP, 4} /*0x7b*/,
	{&NOP, 4} /*0x7c*/,
	{&NOP, 4} /*0x7d*/,
	{&NOP, 4} /*0x7e*/,
	{&NOP, 4} /*0x7f*/,
	{&NOP, 4} /*0x80*/,
	{&NOP, 4} /*0x81*/,
	{&NOP, 4} /*0x82*/,
	{&NOP, 4} /*0x83*/,
	{&NOP, 4} /*0x84*/,
	{&NOP, 4} /*0x85*/,
	{&NOP, 4} /*0x86*/,
	{&NOP, 4} /*0x87*/,
	{&NOP, 4} /*0x88*/,
	{&NOP, 4} /*0x89*/,
	{&NOP, 4} /*0x8a*/,
	{&NOP, 4} /*0x8b*/,
	{&NOP, 4} /*0x8c*/,
	{&NOP, 4} /*0x8d*/,
	{&NOP, 4} /*0x8e*/,
	{&NOP, 4} /*0x8f*/,
	{&NOP, 4} /*0x90*/,
	{&NOP, 4} /*0x91*/,
	{&NOP, 4} /*0x92*/,
	{&NOP, 4} /*0x93*/,
	{&NOP, 4} /*0x94*/,
	{&NOP, 4} /*0x95*/,
	{&NOP, 4} /*0x96*/,
	{&NOP, 4} /*0x97*/,
	{&NOP, 4} /*0x98*/,
	{&NOP, 4} /*0x99*/,
	{&NOP, 4} /*0x9a*/,
	{&NOP, 4} /*0x9b*/,
	{&NOP, 4} /*0x9c*/,
	{&NOP, 4} /*0x9d*/,
	{&NOP, 4} /*0x9e*/,
	{&NOP, 4} /*0x9f*/,
	{&NOP, 4} /*0xa0*/,
	{&NOP, 4} /*0xa1*/,
	{&NOP, 4} /*0xa2*/,
	{&NOP, 4} /*0xa3*/,
	{&NOP, 4} /*0xa4*/,
	{&NOP, 4} /*0xa5*/,
	{&NOP, 4} /*0xa6*/,
	{&NOP, 4} /*0xa7*/,
	{&NOP, 4} /*0xa8*/,
	{&NOP, 4} /*0xa9*/,
	{&NOP, 4} /*0xaa*/,
	{&NOP, 4} /*0xab*/,
	{&NOP, 4} /*0xac*/,
	{&NOP, 4} /*0xad*/,
	{&NOP, 4} /*0xae*/,
	{&NOP, 4} /*0xaf*/,
	{&NOP, 4} /*0xb0*/,
	{&NOP, 4} /*0xb1*/,
	{&NOP, 4} /*0xb2*/,
	{&NOP, 4} /*0xb3*/,
	{&NOP, 4} /*0xb4*/,
	{&NOP, 4} /*0xb5*/,
	{&NOP, 4} /*0xb6*/,
	{&NOP, 4} /*0xb7*/,
	{&NOP, 4} /*0xb8*/,
	{&NOP, 4} /*0xb9*/,
	{&NOP, 4} /*0xba*/,
	{&NOP, 4} /*0xbb*/,
	{&NOP, 4} /*0xbc*/,
	{&NOP, 4} /*0xbd*/,
	{&NOP, 4} /*0xbe*/,
	{&NOP, 4} /*0xbf*/,
	{&NOP, 4} /*0xc0*/,
	{&NOP, 4} /*0xc1*/,
	{&NOP, 4} /*0xc2*/,
	{&NOP, 4} /*0xc3*/,
	{&NOP, 4} /*0xc4*/,
	{&NOP, 4} /*0xc5*/,
	{&NOP, 4} /*0xc6*/,
	{&NOP, 4} /*0xc7*/,
	{&NOP, 4} /*0xc8*/,
	{&NOP, 4} /*0xc9*/,
	{&NOP, 4} /*0xca*/,
	{&NOP, 4} /*0xcb*/,
	{&NOP, 4} /*0xcc*/,
	{&NOP, 4} /*0xcd*/,
	{&NOP, 4} /*0xce*/,
	{&NOP, 4} /*0xcf*/,
	{&NOP, 4} /*0xd0*/,
	{&NOP, 4} /*0xd1*/,
	{&NOP, 4} /*0xd2*/,
	{&NOP, 4} /*0xd3*/,
	{&NOP, 4} /*0xd4*/,
	{&NOP, 4} /*0xd5*/,
	{&NOP, 4} /*0xd6*/,
	{&NOP, 4} /*0xd7*/,
	{&NOP, 4} /*0xd8*/,
	{&NOP, 4} /*0xd9*/,
	{&NOP, 4} /*0xda*/,
	{&NOP, 4} /*0xdb*/,
	{&NOP, 4} /*0xdc*/,
	{&NOP, 4} /*0xdd*/,
	{&NOP, 4} /*0xde*/,
	{&NOP, 4} /*0xdf*/,
	{&NOP, 4} /*0xe0*/,
	{&NOP, 4} /*0xe1*/,
	{&NOP, 4} /*0xe2*/,
	{&NOP, 4} /*0xe3*/,
	{&NOP, 4} /*0xe4*/,
	{&NOP, 4} /*0xe5*/,
	{&NOP, 4} /*0xe6*/,
	{&NOP, 4} /*0xe7*/,
	{&NOP, 4} /*0xe8*/,
	{&NOP, 4} /*0xe9*/,
	{&NOP, 4} /*0xea*/,
	{&NOP, 4} /*0xeb*/,
	{&NOP, 4} /*0xec*/,
	{&NOP, 4} /*0xed*/,
	{&NOP, 4} /*0xee*/,
	{&NOP, 4} /*0xef*/,
	{&NOP, 4} /*0xf0*/,
	{&NOP, 4} /*0xf1*/,
	{&NOP, 4} /*0xf2*/,
	{&NOP, 4} /*0xf3*/,
	{&NOP, 4} /*0xf4*/,
	{&NOP, 4} /*0xf5*/,
	{&NOP, 4} /*0xf6*/,
	{&NOP, 4} /*0xf7*/,
	{&NOP, 4} /*0xf8*/,
	{&NOP, 4} /*0xf9*/,
	{&NOP, 4} /*0xfa*/,
	{&NOP, 4} /*0xfb*/,
	{&NOP, 4} /*0xfc*/,
	{&NOP, 4} /*0xfd*/,
	{&NOP, 4} /*0xfe*/,
	{&NOP, 4} /*0xff*/
};

//! Instructions on the extended page. After $CB redirection
struct Instruction instructionSet2[256] = {
	{&NOP, 4} /*0x0*/,
	{&NOP, 4} /*0x1*/,
	{&NOP, 4} /*0x2*/,
	{&NOP, 4} /*0x3*/,
	{&NOP, 4} /*0x4*/,
	{&NOP, 4} /*0x5*/,
	{&NOP, 4} /*0x6*/,
	{&NOP, 4} /*0x7*/,
	{&NOP, 4} /*0x8*/,
	{&NOP, 4} /*0x9*/,
	{&NOP, 4} /*0xa*/,
	{&NOP, 4} /*0xb*/,
	{&NOP, 4} /*0xc*/,
	{&NOP, 4} /*0xd*/,
	{&NOP, 4} /*0xe*/,
	{&NOP, 4} /*0xf*/,
	{&NOP, 4} /*0x10*/,
	{&NOP, 4} /*0x11*/,
	{&NOP, 4} /*0x12*/,
	{&NOP, 4} /*0x13*/,
	{&NOP, 4} /*0x14*/,
	{&NOP, 4} /*0x15*/,
	{&NOP, 4} /*0x16*/,
	{&NOP, 4} /*0x17*/,
	{&NOP, 4} /*0x18*/,
	{&NOP, 4} /*0x19*/,
	{&NOP, 4} /*0x1a*/,
	{&NOP, 4} /*0x1b*/,
	{&NOP, 4} /*0x1c*/,
	{&NOP, 4} /*0x1d*/,
	{&NOP, 4} /*0x1e*/,
	{&NOP, 4} /*0x1f*/,
	{&NOP, 4} /*0x20*/,
	{&NOP, 4} /*0x21*/,
	{&NOP, 4} /*0x22*/,
	{&NOP, 4} /*0x23*/,
	{&NOP, 4} /*0x24*/,
	{&NOP, 4} /*0x25*/,
	{&NOP, 4} /*0x26*/,
	{&NOP, 4} /*0x27*/,
	{&NOP, 4} /*0x28*/,
	{&NOP, 4} /*0x29*/,
	{&NOP, 4} /*0x2a*/,
	{&NOP, 4} /*0x2b*/,
	{&NOP, 4} /*0x2c*/,
	{&NOP, 4} /*0x2d*/,
	{&NOP, 4} /*0x2e*/,
	{&NOP, 4} /*0x2f*/,
	{&NOP, 4} /*0x30*/,
	{&NOP, 4} /*0x31*/,
	{&NOP, 4} /*0x32*/,
	{&NOP, 4} /*0x33*/,
	{&NOP, 4} /*0x34*/,
	{&NOP, 4} /*0x35*/,
	{&NOP, 4} /*0x36*/,
	{&NOP, 4} /*0x37*/,
	{&NOP, 4} /*0x38*/,
	{&NOP, 4} /*0x39*/,
	{&NOP, 4} /*0x3a*/,
	{&NOP, 4} /*0x3b*/,
	{&NOP, 4} /*0x3c*/,
	{&NOP, 4} /*0x3d*/,
	{&NOP, 4} /*0x3e*/,
	{&NOP, 4} /*0x3f*/,
	{&NOP, 4} /*0x40*/,
	{&NOP, 4} /*0x41*/,
	{&NOP, 4} /*0x42*/,
	{&NOP, 4} /*0x43*/,
	{&NOP, 4} /*0x44*/,
	{&NOP, 4} /*0x45*/,
	{&NOP, 4} /*0x46*/,
	{&NOP, 4} /*0x47*/,
	{&NOP, 4} /*0x48*/,
	{&NOP, 4} /*0x49*/,
	{&NOP, 4} /*0x4a*/,
	{&NOP, 4} /*0x4b*/,
	{&NOP, 4} /*0x4c*/,
	{&NOP, 4} /*0x4d*/,
	{&NOP, 4} /*0x4e*/,
	{&NOP, 4} /*0x4f*/,
	{&NOP, 4} /*0x50*/,
	{&NOP, 4} /*0x51*/,
	{&NOP, 4} /*0x52*/,
	{&NOP, 4} /*0x53*/,
	{&NOP, 4} /*0x54*/,
	{&NOP, 4} /*0x55*/,
	{&NOP, 4} /*0x56*/,
	{&NOP, 4} /*0x57*/,
	{&NOP, 4} /*0x58*/,
	{&NOP, 4} /*0x59*/,
	{&NOP, 4} /*0x5a*/,
	{&NOP, 4} /*0x5b*/,
	{&NOP, 4} /*0x5c*/,
	{&NOP, 4} /*0x5d*/,
	{&NOP, 4} /*0x5e*/,
	{&NOP, 4} /*0x5f*/,
	{&NOP, 4} /*0x60*/,
	{&NOP, 4} /*0x61*/,
	{&NOP, 4} /*0x62*/,
	{&NOP, 4} /*0x63*/,
	{&NOP, 4} /*0x64*/,
	{&NOP, 4} /*0x65*/,
	{&NOP, 4} /*0x66*/,
	{&NOP, 4} /*0x67*/,
	{&NOP, 4} /*0x68*/,
	{&NOP, 4} /*0x69*/,
	{&NOP, 4} /*0x6a*/,
	{&NOP, 4} /*0x6b*/,
	{&NOP, 4} /*0x6c*/,
	{&NOP, 4} /*0x6d*/,
	{&NOP, 4} /*0x6e*/,
	{&NOP, 4} /*0x6f*/,
	{&NOP, 4} /*0x70*/,
	{&NOP, 4} /*0x71*/,
	{&NOP, 4} /*0x72*/,
	{&NOP, 4} /*0x73*/,
	{&NOP, 4} /*0x74*/,
	{&NOP, 4} /*0x75*/,
	{&NOP, 4} /*0x76*/,
	{&NOP, 4} /*0x77*/,
	{&NOP, 4} /*0x78*/,
	{&NOP, 4} /*0x79*/,
	{&NOP, 4} /*0x7a*/,
	{&NOP, 4} /*0x7b*/,
	{&NOP, 4} /*0x7c*/,
	{&NOP, 4} /*0x7d*/,
	{&NOP, 4} /*0x7e*/,
	{&NOP, 4} /*0x7f*/,
	{&NOP, 4} /*0x80*/,
	{&NOP, 4} /*0x81*/,
	{&NOP, 4} /*0x82*/,
	{&NOP, 4} /*0x83*/,
	{&NOP, 4} /*0x84*/,
	{&NOP, 4} /*0x85*/,
	{&NOP, 4} /*0x86*/,
	{&NOP, 4} /*0x87*/,
	{&NOP, 4} /*0x88*/,
	{&NOP, 4} /*0x89*/,
	{&NOP, 4} /*0x8a*/,
	{&NOP, 4} /*0x8b*/,
	{&NOP, 4} /*0x8c*/,
	{&NOP, 4} /*0x8d*/,
	{&NOP, 4} /*0x8e*/,
	{&NOP, 4} /*0x8f*/,
	{&NOP, 4} /*0x90*/,
	{&NOP, 4} /*0x91*/,
	{&NOP, 4} /*0x92*/,
	{&NOP, 4} /*0x93*/,
	{&NOP, 4} /*0x94*/,
	{&NOP, 4} /*0x95*/,
	{&NOP, 4} /*0x96*/,
	{&NOP, 4} /*0x97*/,
	{&NOP, 4} /*0x98*/,
	{&NOP, 4} /*0x99*/,
	{&NOP, 4} /*0x9a*/,
	{&NOP, 4} /*0x9b*/,
	{&NOP, 4} /*0x9c*/,
	{&NOP, 4} /*0x9d*/,
	{&NOP, 4} /*0x9e*/,
	{&NOP, 4} /*0x9f*/,
	{&NOP, 4} /*0xa0*/,
	{&NOP, 4} /*0xa1*/,
	{&NOP, 4} /*0xa2*/,
	{&NOP, 4} /*0xa3*/,
	{&NOP, 4} /*0xa4*/,
	{&NOP, 4} /*0xa5*/,
	{&NOP, 4} /*0xa6*/,
	{&NOP, 4} /*0xa7*/,
	{&NOP, 4} /*0xa8*/,
	{&NOP, 4} /*0xa9*/,
	{&NOP, 4} /*0xaa*/,
	{&NOP, 4} /*0xab*/,
	{&NOP, 4} /*0xac*/,
	{&NOP, 4} /*0xad*/,
	{&NOP, 4} /*0xae*/,
	{&NOP, 4} /*0xaf*/,
	{&NOP, 4} /*0xb0*/,
	{&NOP, 4} /*0xb1*/,
	{&NOP, 4} /*0xb2*/,
	{&NOP, 4} /*0xb3*/,
	{&NOP, 4} /*0xb4*/,
	{&NOP, 4} /*0xb5*/,
	{&NOP, 4} /*0xb6*/,
	{&NOP, 4} /*0xb7*/,
	{&NOP, 4} /*0xb8*/,
	{&NOP, 4} /*0xb9*/,
	{&NOP, 4} /*0xba*/,
	{&NOP, 4} /*0xbb*/,
	{&NOP, 4} /*0xbc*/,
	{&NOP, 4} /*0xbd*/,
	{&NOP, 4} /*0xbe*/,
	{&NOP, 4} /*0xbf*/,
	{&NOP, 4} /*0xc0*/,
	{&NOP, 4} /*0xc1*/,
	{&NOP, 4} /*0xc2*/,
	{&NOP, 4} /*0xc3*/,
	{&NOP, 4} /*0xc4*/,
	{&NOP, 4} /*0xc5*/,
	{&NOP, 4} /*0xc6*/,
	{&NOP, 4} /*0xc7*/,
	{&NOP, 4} /*0xc8*/,
	{&NOP, 4} /*0xc9*/,
	{&NOP, 4} /*0xca*/,
	{&NOP, 4} /*0xcb*/,
	{&NOP, 4} /*0xcc*/,
	{&NOP, 4} /*0xcd*/,
	{&NOP, 4} /*0xce*/,
	{&NOP, 4} /*0xcf*/,
	{&NOP, 4} /*0xd0*/,
	{&NOP, 4} /*0xd1*/,
	{&NOP, 4} /*0xd2*/,
	{&NOP, 4} /*0xd3*/,
	{&NOP, 4} /*0xd4*/,
	{&NOP, 4} /*0xd5*/,
	{&NOP, 4} /*0xd6*/,
	{&NOP, 4} /*0xd7*/,
	{&NOP, 4} /*0xd8*/,
	{&NOP, 4} /*0xd9*/,
	{&NOP, 4} /*0xda*/,
	{&NOP, 4} /*0xdb*/,
	{&NOP, 4} /*0xdc*/,
	{&NOP, 4} /*0xdd*/,
	{&NOP, 4} /*0xde*/,
	{&NOP, 4} /*0xdf*/,
	{&NOP, 4} /*0xe0*/,
	{&NOP, 4} /*0xe1*/,
	{&NOP, 4} /*0xe2*/,
	{&NOP, 4} /*0xe3*/,
	{&NOP, 4} /*0xe4*/,
	{&NOP, 4} /*0xe5*/,
	{&NOP, 4} /*0xe6*/,
	{&NOP, 4} /*0xe7*/,
	{&NOP, 4} /*0xe8*/,
	{&NOP, 4} /*0xe9*/,
	{&NOP, 4} /*0xea*/,
	{&NOP, 4} /*0xeb*/,
	{&NOP, 4} /*0xec*/,
	{&NOP, 4} /*0xed*/,
	{&NOP, 4} /*0xee*/,
	{&NOP, 4} /*0xef*/,
	{&NOP, 4} /*0xf0*/,
	{&NOP, 4} /*0xf1*/,
	{&NOP, 4} /*0xf2*/,
	{&NOP, 4} /*0xf3*/,
	{&NOP, 4} /*0xf4*/,
	{&NOP, 4} /*0xf5*/,
	{&NOP, 4} /*0xf6*/,
	{&NOP, 4} /*0xf7*/,
	{&NOP, 4} /*0xf8*/,
	{&NOP, 4} /*0xf9*/,
	{&NOP, 4} /*0xfa*/,
	{&NOP, 4} /*0xfb*/,
	{&NOP, 4} /*0xfc*/,
	{&NOP, 4} /*0xfd*/,
	{&NOP, 4} /*0xfe*/,
	{&NOP, 4} /*0xff*/
};

#endif //  INSTRUCTION_SET

