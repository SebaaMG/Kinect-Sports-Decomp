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
extern int fn_829B5A80();
extern int fn_829B5C58();


longlong fn_829B5E58(int *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar8;
  ulonglong uVar7;
  ulonglong uVar9;
  
  iVar1 = param_1[1];
  uVar5 = (param_3 & 0x1ffffff) * 0x80;
  iVar8 = (int)(0x3b9ac9f0 / uVar5);
  trapWord(6,uVar5,0);
  if (iVar8 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    (**(code **)*param_1)();
  }
  uVar7 = 0x3b9ac9f0 / uVar5;
  if ((int)param_4 <= iVar8) {
    uVar7 = param_4;
  }
  *(int *)(iVar1 + 0x50) = (int)uVar7;
  lVar2 = fn_829B5A80(param_1,param_2,(param_4 & 0x3fffffff) << 2);
  uVar6 = 0;
  if ((param_4 & 0xffffffff) != 0) {
    do {
      if ((param_4 - uVar6 & 0xffffffff) <= (uVar7 & 0xffffffff)) {
        uVar7 = param_4 - uVar6;
      }
      lVar3 = fn_829B5C58(param_1,param_2,
                            ((longlong)(int)uVar7 * (longlong)(int)param_3 & 0x1ffffffU) << 7);
      if ((uVar7 & 0xffffffff) != 0) {
        uVar9 = uVar6 & 0x3fffffff;
        uVar6 = uVar6 + uVar7;
        lVar4 = uVar9 * 4 + lVar2 + -4;
        uVar9 = uVar7;
        do {
          lVar4 = lVar4 + 4;
          *(undefined4 *)lVar4 = (int)lVar3;
          lVar3 = uVar5 + lVar3;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    } while ((uVar6 & 0xffffffff) < (param_4 & 0xffffffff));
  }
  return lVar2;
}

