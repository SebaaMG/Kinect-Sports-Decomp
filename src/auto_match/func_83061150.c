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
extern int fn_83060438();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();


bool fn_83061150(int param_1,uint *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piStack_50;
  
  bVar4 = false;
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_830677A0(param_3,*(undefined4 *)(param_1 + 0x18),0xffffffff8217e6dc);
  }
  iVar8 = 0;
  iVar9 = *(int *)(param_1 + 0x2c);
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      iVar2 = *(int *)(iVar9 + 8) - *(int *)(iVar9 + 4) >> 3;
      fn_83060438(iVar9);
      iVar7 = 0;
      if (0 < iVar2) {
        do {
          iVar3 = iVar7 * 8;
          iVar7 = iVar7 + 1;
          iVar5 = 1;
          piStack_50 = (int *)((ulonglong)*(undefined8 *)(iVar3 + *(int *)(iVar9 + 4)) >> 0x20);
          iVar3 = *piStack_50;
          if (iVar7 < iVar2) {
            iVar6 = iVar7 * 8;
            do {
              piStack_50 = (int *)((ulonglong)*(undefined8 *)(iVar6 + *(int *)(iVar9 + 4)) >> 0x20);
              if (*piStack_50 != iVar3) break;
              iVar7 = iVar7 + 1;
              iVar5 = iVar5 + 1;
              iVar6 = iVar6 + 8;
            } while (iVar7 < iVar2);
            if (iVar5 != 2) goto LAB_83061230;
          }
          else {
LAB_83061230:
            bVar4 = true;
            if (param_2 == (uint *)0x0) {
              return false;
            }
            *param_2 = *param_2 + 1;
          }
        } while (iVar7 < iVar2);
      }
      if ((param_3 & 0xffffffff) != 0) {
        fn_830679A8(param_3);
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 0x18;
    } while (iVar8 < *(int *)(param_1 + 0x18));
  }
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *param_2 = ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_830678C8(param_3);
  }
  return !bVar4;
}

