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
extern unsigned int *auStack_120;


void fn_82C05070(int *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_120 [264];
  
  sVar1 = *param_2;
  for (uVar4 = 0; (sVar1 != 0 && (uVar4 < 0x103)); uVar4 = uVar4 + 1) {
    sVar2 = *param_2;
    param_2 = param_2 + 1;
    sVar1 = *param_2;
    auStack_120[uVar4] = (char)sVar2;
  }
  iVar3 = *param_1;
  auStack_120[uVar4] = 0;
  (**(code **)(iVar3 + 0x6c))(param_1,auStack_120);
  return;
}

