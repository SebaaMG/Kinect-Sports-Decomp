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
extern int fn_82CE5410();
extern int fn_82CFC050();


void fn_82DEF8C8(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar5;
  longlong lVar4;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((int)param_1[1] < (int)param_2) {
    uVar6 = ((ulonglong)param_1[1] & 0x7fffffff) << 1;
    if ((int)param_2 <= (int)uVar6) {
      param_2 = uVar6;
    }
    iVar5 = fn_82CE5410();
    lVar4 = (**(code **)(**(int **)(iVar5 + 0x10) + 4))
                      (*(int **)(iVar5 + 0x10),(param_2 & 0x3fffffff) << 2);
    uVar6 = (ulonglong)*param_1;
    if (uVar6 != 0) {
      uVar1 = param_1[4];
      if (uVar1 != 0) {
        uVar2 = param_1[3];
        uVar3 = param_1[2];
        if ((int)uVar3 < (int)uVar2) {
          uVar6 = ((ulonglong)uVar3 & 0x3fffffff) * 4 + uVar6;
          lVar7 = lVar4;
        }
        else {
          lVar7 = ((ulonglong)param_1[1] - (ulonglong)uVar3 & 0x3fffffff) * 4;
          fn_82CFC050(lVar4,((ulonglong)uVar3 & 0x3fffffff) * 4 + uVar6,lVar7);
          uVar6 = (ulonglong)*param_1;
          lVar7 = lVar7 + lVar4;
          uVar1 = uVar2;
        }
        fn_82CFC050(lVar7,uVar6,uVar1 << 2);
      }
      param_1[2] = 0;
      param_1[3] = param_1[4];
    }
    uVar1 = param_1[1];
    if (uVar1 != 0) {
      uVar2 = *param_1;
      iVar5 = fn_82CE5410();
      (**(code **)(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10),uVar2,uVar1 << 2);
    }
    *param_1 = (uint)lVar4;
    param_1[1] = (uint)param_2;
  }
  return;
}

