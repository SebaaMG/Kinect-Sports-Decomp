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
extern int fn_8265C940();


int fn_829301D0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = ((param_3 + param_1[2]) - 1U & ~(param_3 - 1U)) + param_2;
  if ((uint)param_1[4] < uVar4) {
    uVar4 = (param_3 + 3U & ~(param_3 - 1U)) + param_2;
    for (uVar3 = param_1[5]; uVar3 < uVar4; uVar3 = uVar3 << 1) {
    }
    piVar2 = (int *)fn_8265C940(uVar3,0x24810000);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar1 = param_1[1];
    param_1[4] = uVar3;
    *piVar2 = *param_1;
    *param_1 = (int)piVar2;
  }
  else {
    if (uVar4 <= (uint)param_1[3]) goto LAB_8293027c;
    iVar1 = param_1[1];
  }
  param_1[3] = (iVar1 + uVar4) - 1 & ~(iVar1 - 1U);
LAB_8293027c:
  param_1[2] = uVar4;
  return (*param_1 - param_2) + uVar4;
}

