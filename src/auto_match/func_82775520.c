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
extern unsigned int *auStack_60;
extern int fn_827A98B0();
extern int fn_827AF4F8();


int * fn_82775520(int *param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                   undefined8 param_6)

{
  int *piVar1;
  undefined1 auStack_60 [96];
  
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[6] = -1;
  param_1[8] = -1;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  piVar1 = (int *)fn_827AF4F8(auStack_60,param_5,param_6);
  param_1[3] = *piVar1;
  param_1[4] = piVar1[1];
  param_1[5] = piVar1[2];
  param_1[6] = piVar1[3];
  param_1[7] = piVar1[4];
  param_1[8] = piVar1[5];
  param_1[9] = piVar1[6];
  param_1[10] = piVar1[7];
  param_1[0xb] = piVar1[8];
  param_1[0xc] = piVar1[9];
  param_1[0xd] = piVar1[10];
  param_1[0xe] = piVar1[0xb];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(piVar1 + 0xc);
  *param_1 = param_2;
  param_1[2] = param_4;
  param_1[1] = param_3 * 8 + param_2;
  fn_827A98B0(param_1);
  return param_1;
}

