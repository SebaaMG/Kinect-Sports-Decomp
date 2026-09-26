typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82F655D8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_8200BF40;
extern unsigned int lbl_82015618;


undefined8 fn_82FE30C0(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    *(undefined4 *)(param_1 + 4) = *param_2;
    *(undefined4 *)(param_1 + 8) = param_2[1];
    *(undefined4 *)(param_1 + 0xc) = param_2[2];
    *(undefined4 *)(param_1 + 0x10) = param_2[3];
    *(undefined4 *)(param_1 + 0x14) = param_2[4];
    *(undefined4 *)(param_1 + 0x18) = param_2[5];
    *(undefined4 *)(param_1 + 0x1c) = param_2[6];
    *(undefined4 *)(param_1 + 0x20) = param_2[7];
    *(undefined4 *)(param_1 + 0x24) = param_2[8];
    *(undefined4 *)(param_1 + 0x28) = param_2[9];
    *(undefined4 *)(param_1 + 0x2c) = param_2[10];
    *(undefined4 *)(param_1 + 0x30) = param_2[0xb];
    *(undefined4 *)(param_1 + 0x34) = param_2[0xc];
    dVar3 = (double)lbl_82005718;
    uVar1 = lbl_82015618;
    dVar2 = (double)fn_82F655D8(lbl_82015618,
                                      (double)(float)((double)(float)param_2[0xd] * dVar3));
    *(float *)(param_1 + 0x38) = (float)dVar2;
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)(float)param_2[0xe] * dVar3));
    *(float *)(param_1 + 0x3c) = (float)dVar2;
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)(float)param_2[0xf] * dVar3));
    *(float *)(param_1 + 0x40) = (float)dVar2;
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)(float)param_2[0x10] * dVar3));
    *(float *)(param_1 + 0x44) = (float)dVar2;
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)(float)param_2[0x11] * dVar3));
    *(float *)(param_1 + 0x48) = (float)dVar2;
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)(float)param_2[0x12] * dVar3));
    *(float *)(param_1 + 0x4c) = (float)dVar2;
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)((float)param_2[0x13] -
                                                                    lbl_8200BF40) * dVar3));
    *(float *)(param_1 + 0x50) = (float)dVar2;
    *(char *)(param_1 + 0x91) = '\x01' - (*(char *)(param_2 + 0x14) == '\0');
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)((int)param_2 + 0x51);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)((int)param_2 + 0x55);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((int)param_2 + 0x59);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)((int)param_2 + 0x5d);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)((int)param_2 + 0x61);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)((int)param_2 + 0x65);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((int)param_2 + 0x69);
    *(char *)(param_1 + 0x90) = '\x01' - (*(char *)((int)param_2 + 0x6d) == '\0');
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)((int)param_2 + 0x6e);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)((int)param_2 + 0x72);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)((int)param_2 + 0x76);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((int)param_2 + 0x7a);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((int)param_2 + 0x7e);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((int)param_2 + 0x82);
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)*(float *)((int)param_2 + 0x86)
                                                           * dVar3));
    *(float *)(param_1 + 0x70) = (float)dVar2;
    dVar2 = (double)fn_82F655D8(uVar1,(double)(float)((double)*(float *)((int)param_2 + 0x8a)
                                                           * dVar3));
    *(float *)(param_1 + 0x74) = (float)dVar2;
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)((int)param_2 + 0x8e);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)((int)param_2 + 0x92);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)((int)param_2 + 0x96);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)((int)param_2 + 0x9a);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)((int)param_2 + 0x9e);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)((int)param_2 + 0xa2);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)((int)param_2 + 0xa6);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)((int)param_2 + 0xaa);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)((int)param_2 + 0xae);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)((int)param_2 + 0xb2);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)((int)param_2 + 0xb6);
  }
  return uVar1;
}

