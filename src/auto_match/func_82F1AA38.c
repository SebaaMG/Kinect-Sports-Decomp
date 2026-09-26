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
extern int fn_82F68CC0();


ulonglong fn_82F1AA38(undefined8 param_1,int param_2,short *param_3,int *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  short asStack_110 [128];
  
  asStack_110[1] = 0;
  sVar3 = 0;
  asStack_110[0] = *(short *)(*param_4 * 2 + param_2);
  lVar4 = 0x15;
  *param_3 = 2;
  do {
    sVar2 = *(short *)(param_4[1] * 2 + param_2);
    if (sVar2 == 0) {
      sVar3 = sVar3 + 1;
    }
    else {
      sVar1 = *param_3;
      *param_3 = sVar1 + 2;
      asStack_110[sVar1] = sVar2;
      asStack_110[sVar1 + 1] = sVar3;
      sVar3 = 0;
    }
    sVar2 = *(short *)(param_4[2] * 2 + param_2);
    if (sVar2 == 0) {
      sVar3 = sVar3 + 1;
    }
    else {
      sVar1 = *param_3;
      *param_3 = sVar1 + 2;
      asStack_110[sVar1] = sVar2;
      asStack_110[sVar1 + 1] = sVar3;
      sVar3 = 0;
    }
    sVar2 = *(short *)(param_4[3] * 2 + param_2);
    if (sVar2 == 0) {
      sVar3 = sVar3 + 1;
    }
    else {
      sVar1 = *param_3;
      *param_3 = sVar1 + 2;
      asStack_110[sVar1] = sVar2;
      asStack_110[sVar1 + 1] = sVar3;
      sVar3 = 0;
    }
    lVar4 = lVar4 + -1;
    param_4 = param_4 + 3;
  } while (lVar4 != 0);
  fn_82F68CC0(param_2,asStack_110,((longlong)*param_3 & 0x7fffffffU) << 1);
  return ((~(longlong)*param_3 & 0xffffffffU) >> 0x1f) +
         (ulonglong)((ulonglong)(longlong)*param_3 < 3) & 1;
}

