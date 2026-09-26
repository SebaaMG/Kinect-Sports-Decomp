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
extern int fn_82975B00();


undefined8 fn_82961428(int param_1,int *param_2,ulonglong param_3,uint *param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = 0;
  if (param_5 == 0) {
    if ((*(uint *)(*(int *)(*param_2 * 4 + *(int *)(param_1 + 0x14)) + 0x3c) & 0x200) != 0) {
      uVar8 = 0x100000;
    }
    uVar5 = param_3;
    piVar6 = param_2;
    uVar3 = param_3 & 0xffffffff;
    while (uVar3 != 0) {
      uVar9 = 0;
      uVar1 = *(uint *)(*(int *)(*piVar6 * 4 + *(int *)(param_1 + 0x14)) + 0x10);
      if (uVar1 == 0) {
        uVar9 = 0x10000;
      }
      else if (uVar1 == 1) {
        uVar9 = 0x20000;
      }
      else if (uVar1 < 3) {
        uVar9 = 0x40000;
      }
      else if (uVar1 == 3) {
        uVar9 = 0x80000;
      }
      if ((uVar9 & uVar8) != 0) {
        fn_82975B00(param_1,*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x3c),0x12d5,
                          0xffffffff820343d8);
      }
      uVar8 = uVar9 | uVar8;
      piVar6 = piVar6 + 1;
      uVar5 = uVar5 - 1;
      uVar3 = uVar5;
    }
  }
  else {
    uVar8 = 0xf0000;
  }
  if ((*(uint *)(param_1 + 0x70) & 0x1000000) == 0) {
    if ((*(uint *)(param_1 + 0xcc) & 0x20) == 0) {
      uVar5 = 0;
      if ((param_3 & 0xffffffff) != 0) {
        piVar6 = param_2;
        do {
          puVar2 = *(uint **)(*piVar6 * 4 + *(int *)(param_1 + 0x14));
          if (((*puVar2 & 0x2000000) == 0) &&
             ((((*(uint *)(*(int *)(puVar2[1] * 4 + *(int *)(param_1 + 0x10)) + 4) & 1) == 0 ||
               (puVar2[0x12] == 0xffffffff)) || (puVar2[0x15] != 0xffffffff)))) break;
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 1;
        } while ((uVar5 & 0xffffffff) < (param_3 & 0xffffffff));
      }
      if ((uVar5 & 0xffffffff) != (param_3 & 0xffffffff)) goto LAB_829615a0;
    }
    uVar8 = uVar8 | 0x200000;
  }
LAB_829615a0:
  if ((((*(uint *)(param_1 + 0xcc) & 1) != 0) && (*(int *)(param_1 + 0x128) != 0)) &&
     (iVar7 = 0, (param_3 & 0xffffffff) != 0)) {
    param_2 = param_2 + -1;
    do {
      param_2 = param_2 + 1;
      iVar4 = *(int *)(param_1 + 300) * 6 + iVar7;
      iVar7 = iVar7 + 1;
      *(int *)((iVar4 + -4) * 4 + *(int *)(param_1 + 0x128)) = *param_2;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  *param_4 = uVar8;
  return 0;
}

