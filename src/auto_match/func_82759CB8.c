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
extern int fn_827591D8();


char * fn_82759CB8(undefined8 param_1,char *param_2,ushort *param_3,ushort *param_4,int param_5,
                    ulonglong param_6)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar1 = param_3[3];
  uVar5 = (param_6 & 0xffffff) << 8 | param_6;
  uVar6 = ((uint)param_4[3] - (uint)uVar1) * param_5;
  uVar7 = (longlong)(int)((uint)param_4[2] - (uint)param_3[2]) * (longlong)param_5;
  iVar8 = (int)param_6;
  trapWord(6,param_6,0);
  trapWord(6,uVar5,0);
  trapWord(5,uVar5 & ~((((ulonglong)uVar6 & 0x7fffffff) << 1 | (ulonglong)(uVar6 >> 0x1f)) - 1),
           0xffff);
  trapWord(5,param_6 & ~(((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1),0xffff);
  cVar2 = fn_827591D8((longlong)((int)uVar7 / iVar8) + (ulonglong)param_3[2] & 0xffff);
  trapWord(6,param_6,0);
  uVar7 = (longlong)(int)((uint)param_4[1] - (uint)param_3[1]) * (longlong)param_5;
  trapWord(5,param_6 & ~(((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1),0xffff);
  cVar3 = fn_827591D8(param_1,(longlong)((int)uVar7 / iVar8) + (ulonglong)param_3[1] & 0xffff);
  trapWord(6,param_6,0);
  uVar7 = (longlong)(int)((uint)*param_4 - (uint)*param_3) * (longlong)param_5;
  trapWord(5,param_6 & ~(((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1),0xffff);
  cVar4 = fn_827591D8(param_1,(longlong)((int)uVar7 / iVar8) + (ulonglong)*param_3 & 0xffff);
  param_2[1] = cVar4;
  param_2[2] = cVar3;
  param_2[3] = cVar2;
  *param_2 = (char)((int)uVar6 / (int)uVar5) + (char)uVar1;
  return param_2;
}

