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
extern int fn_82DCA2F0();
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82DCB000(undefined4 *param_1,int param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  byte *pbVar3;
  int iVar5;
  ulonglong uVar4;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  *param_1 = param_4;
  param_1[0xc] = param_2;
  fVar1 = *(float *)(param_2 + 0x1c);
  fVar2 = *(float *)(param_2 + 0x10);
  param_1[8] = (int)((*param_3 - fVar2) * fVar1) + -1;
  param_1[4] = (int)((param_3[4] - fVar2) * fVar1) + 1;
  fVar2 = *(float *)(param_2 + 0x14);
  param_1[9] = (int)((param_3[1] - fVar2) * fVar1) + -1;
  iStack_60 = *(short *)(param_1 + 4) + 1;
  param_1[5] = (int)((param_3[5] - fVar2) * fVar1) + 1;
  fVar2 = *(float *)(param_2 + 0x18);
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  iStack_50 = (int)*(short *)(param_1 + 8);
  iStack_4c = (int)*(short *)(param_1 + 9);
  param_1[10] = (int)((param_3[2] - fVar2) * fVar1) + -1;
  iStack_5c = *(short *)(param_1 + 5) + 1;
  iStack_48 = (int)*(short *)(param_1 + 10);
  iVar5 = (int)((param_3[6] - fVar2) * fVar1) + 1;
  param_1[6] = iVar5;
  iStack_58 = (iVar5 >> 0x10) + 1;
  pbVar3 = *(byte **)(param_2 + 0x20);
  uVar4 = (ulonglong)*pbVar3;
  param_1[0xd] = -(uint)(uVar4 == 0xd);
  fn_82DCA2F0(param_1,&iStack_60,pbVar3,0,uVar4 - 0xe);
  return;
}

