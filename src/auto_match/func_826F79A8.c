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
extern int fn_8267C4F0();
extern int fn_8270EB60();
extern unsigned int lbl_821AAD20;


void fn_826F79A8(int param_1,char param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_2 == '\0') {
    fn_8270EB60(*(undefined4 *)(param_1 + 0x9e0));
    uVar2 = lbl_821AAD20;
    pbVar4 = (byte *)(param_1 + 0x940);
    lVar6 = 4;
    do {
      pbVar1 = pbVar4 + 0x24;
      *(undefined4 *)(pbVar4 + 0x1c) = uVar2;
      *(undefined4 *)(pbVar4 + 0x18) = uVar2;
      pbVar4[0x20] = 0;
      pbVar4[0x21] = 0;
      pbVar4[0x22] = 0;
      pbVar4[0x23] = 0;
      pbVar4[0x14] = 0;
      pbVar4[0x15] = 0;
      pbVar4[0x16] = 0;
      pbVar4[0x17] = 0;
      pbVar4[0x10] = 0;
      pbVar4[0x11] = 0;
      pbVar4[0x12] = 0;
      pbVar4[0x13] = 0;
      pbVar4 = pbVar4 + 0x24;
      *pbVar4 = *pbVar1 & 7;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (param_2 == '\0') {
    uVar5 = *(uint *)(param_1 + 0xb00) & 0xfffbffff;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0xb00) | 0x40000;
  }
  *(uint *)(param_1 + 0xb00) = uVar5;
  piVar3 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0xc))(param_1 + 8,0x1b);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x44))(piVar3,param_1);
    fn_8267C4F0(piVar3);
  }
  return;
}

