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
extern int fn_82966400();


undefined8 fn_8296BCB0(int param_1,uint *param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar10 = 0;
  uVar4 = (ulonglong)*param_2 & 0xfffff;
  uVar9 = param_2[1] / uVar4;
  trapWord(6,uVar4,0);
  if ((int)uVar9 != 0) {
    uVar1 = param_2[2];
    lVar5 = ((ulonglong)*param_2 & 0xfffff) * 4;
    iVar2 = *(int *)(param_1 + 0x14);
    lVar7 = (param_4 & 0x3fffffff) << 2;
    iVar3 = *(int *)(param_1 + 0x10);
    lVar8 = (param_3 & 0x3fffffff) << 2;
    do {
      if ((((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)((int)lVar8 + uVar1) * 4 + iVar2) + 4) * 4
                               + iVar3) + 4) & 0x40) != 0) &&
          ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)((int)lVar7 + uVar1) * 4 + iVar2) + 4) * 4
                              + iVar3) + 4) & 0x40) != 0)) &&
         (iVar6 = fn_82966400(param_1), iVar6 == 0)) {
        return 1;
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar5 + lVar8;
      lVar7 = lVar5 + lVar7;
    } while ((uVar10 & 0xffffffff) < uVar9);
  }
  return 0;
}

