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
extern int fn_82DDEF70();
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_c;


void fn_82DDF930(undefined4 *param_1,int param_2,float *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  *param_1 = param_4;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_c = 0;
  uStack_10 = 0x10;
  param_1[4] = (int)((*param_3 - *(float *)(param_2 + 0x10)) * *(float *)(param_2 + 0x1c)) + -1;
  iStack_30 = (int)*(short *)(param_1 + 4);
  param_1[5] = (int)((param_3[1] - *(float *)(param_2 + 0x14)) * *(float *)(param_2 + 0x1c)) + -1;
  iStack_2c = (int)*(short *)(param_1 + 5);
  param_1[6] = (int)((param_3[2] - *(float *)(param_2 + 0x18)) * *(float *)(param_2 + 0x1c)) + -1;
  iVar2 = (int)(param_3[3] * *(float *)(param_2 + 0x1c)) + 2;
  param_1[7] = iVar2;
  iStack_24 = (iVar2 >> 0x10) + 1;
  iStack_28 = (int)*(short *)(param_1 + 6);
  fn_82DDEF70(param_1,&iStack_30,uVar1);
  return;
}

