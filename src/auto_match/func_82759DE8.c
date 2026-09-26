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


char * fn_82759DE8(char *param_1,ushort *param_2,ushort *param_3,int param_4,ulonglong param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_5 = (param_5 & 0xffffff) << 8 | param_5;
  uVar4 = ((uint)*param_3 - (uint)*param_2) * param_4;
  uVar6 = (longlong)(int)((uint)param_3[2] - (uint)uVar1) * (longlong)param_4;
  uVar8 = (longlong)(int)((uint)param_3[1] - (uint)uVar2) * (longlong)param_4;
  uVar5 = (longlong)(int)((uint)param_3[3] - (uint)uVar3) * (longlong)param_4;
  iVar7 = (int)param_5;
  param_1[1] = (char)((int)uVar4 / iVar7) + (char)*param_2;
  param_1[2] = (char)((int)uVar8 / iVar7) + (char)uVar2;
  param_1[3] = (char)((int)uVar6 / iVar7) + (char)uVar1;
  *param_1 = (char)((int)uVar5 / iVar7) + (char)uVar3;
  trapWord(6,param_5,0);
  trapWord(6,param_5,0);
  trapWord(6,param_5,0);
  trapWord(6,param_5,0);
  trapWord(5,param_5 & ~((((ulonglong)uVar4 & 0x7fffffff) << 1 | (ulonglong)(uVar4 >> 0x1f)) - 1),
           0xffff);
  trapWord(5,param_5 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,param_5 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,param_5 & ~(((uVar5 & 0x7fffffff) << 1 | (uVar5 & 0xffffffff) >> 0x1f) - 1),0xffff);
  return param_1;
}

