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
extern int fn_829080F8();
extern int fn_82964628();


undefined8 fn_82908248(int param_1,ulonglong param_2,int *param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar6;
  undefined8 uVar5;
  int *piVar7;
  ulonglong uVar8;
  
  bVar3 = true;
  uVar8 = param_4;
  piVar7 = param_3;
  uVar4 = param_4 & 0xffffffff;
  while (uVar4 != 0) {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + *piVar7 * 4);
    iVar6 = *(int *)(iVar1 + 0x34);
    while ((iVar6 != -1 && (*(int *)(iVar1 + 8) == -1))) {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x34) * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
      if (*(int *)(iVar2 + 0x60) == 0) {
        *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
        *(undefined4 *)(iVar2 + 100) = *(undefined4 *)(iVar1 + 100);
      }
      *piVar7 = *(int *)(iVar1 + 0x34);
      iVar6 = *(int *)(iVar2 + 0x34);
      iVar1 = iVar2;
    }
    if (((*(uint *)(*(int *)(*(int *)(iVar1 + 4) * 4 + *(int *)(*(int *)(param_1 + 8) + 0x10)) + 4)
         & 0x100) == 0) || (*(int *)(iVar1 + 8) != -1)) {
      bVar3 = false;
    }
    piVar7 = piVar7 + 1;
    uVar8 = uVar8 - 1;
    uVar4 = uVar8;
  }
  if (((param_2 & 0xffffffff) != 0) && (bVar3)) {
    uVar8 = 0;
    piVar7 = param_3;
    if ((param_4 & 0xffffffff) != 0) {
      do {
        iVar6 = *(int *)(param_1 + 8);
        iVar1 = *(int *)(*piVar7 * 4 + *(int *)(iVar6 + 0x14));
        iVar6 = fn_82964628(*(undefined8 *)(iVar1 + 0x20),iVar6,*(undefined4 *)(iVar6 + 0x78),
                                  0,0);
        *piVar7 = iVar6;
        if (iVar6 == -1) {
          return 0xffffffff8007000e;
        }
        uVar8 = uVar8 + 1;
        iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iVar6 * 4);
        *(undefined4 *)(iVar6 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
        *(undefined4 *)(iVar6 + 100) = *(undefined4 *)(iVar1 + 100);
        piVar7 = piVar7 + 1;
      } while ((uVar8 & 0xffffffff) < (param_4 & 0xffffffff));
    }
    uVar5 = fn_829080F8(param_1,param_2,param_3,*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),1,1,
                          0,0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
  }
  return 0;
}

