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
extern int fn_827C08B0();
extern int fn_827C0A70();


longlong fn_827C0B88(int *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar8;
  int iVar7;
  
  iVar1 = param_1[1];
  uVar6 = 0x3b9ac9f0 / (param_3 & 0xffffffff);
  iVar7 = (int)uVar6;
  trapWord(6,param_3,0);
  if (iVar7 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    (**(code **)*param_1)();
  }
  if ((int)param_4 <= iVar7) {
    uVar6 = param_4;
  }
  *(int *)(iVar1 + 0x50) = (int)uVar6;
  lVar2 = fn_827C08B0(param_1,param_2,(param_4 & 0x3fffffff) << 2);
  uVar5 = 0;
  if ((param_4 & 0xffffffff) != 0) {
    do {
      if ((param_4 - uVar5 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
        uVar6 = param_4 - uVar5;
      }
      lVar3 = fn_827C0A70(param_1,param_2,(longlong)(int)uVar6 * (longlong)(int)param_3);
      if ((uVar6 & 0xffffffff) != 0) {
        uVar8 = uVar5 & 0x3fffffff;
        uVar5 = uVar5 + uVar6;
        lVar4 = uVar8 * 4 + lVar2 + -4;
        uVar8 = uVar6;
        do {
          lVar4 = lVar4 + 4;
          *(undefined4 *)lVar4 = (int)lVar3;
          lVar3 = lVar3 + param_3;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    } while ((uVar5 & 0xffffffff) < (param_4 & 0xffffffff));
  }
  return lVar2;
}

