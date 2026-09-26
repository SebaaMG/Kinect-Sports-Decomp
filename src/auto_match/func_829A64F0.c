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


ulonglong fn_829A64F0(int *param_1)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int aiStack_80 [32];
  
  if (param_1[0x57] == 0) {
    bVar3 = false;
    bVar4 = false;
    bVar2 = 0;
    aiStack_80[2] = 0;
    aiStack_80[3] = 0;
    uVar9 = 0;
    uVar11 = 0;
    if (param_1[2] != 0) {
      iVar10 = 0;
      do {
        iVar1 = *(int *)(iVar10 + param_1[5]);
        if ((*(uint *)(*(int *)(*(int *)(iVar1 + 4) * 4 + param_1[4]) + 4) & 0x20) != 0) {
          iVar6 = (**(code **)(*param_1 + 0x70))(param_1,*(undefined4 *)(iVar1 + 0x6c));
          iVar7 = (**(code **)(*param_1 + 0x74))(param_1,*(undefined4 *)(iVar1 + 0x6c));
          if (iVar6 == 1) {
            if (iVar7 == 0) {
              uVar9 = *(undefined4 *)(iVar1 + 0x60);
              aiStack_80[*(int *)(iVar1 + 0x10)] = 1;
            }
          }
          else if (iVar6 == 5) {
            if (((iVar7 == 0) && (*(int *)(iVar1 + 0x10) != 0)) && (!bVar4)) {
              fn_82975B00(param_1,*(undefined4 *)(iVar1 + 0x60),0x11bc,0xffffffff820386f4);
              bVar4 = true;
              goto LAB_829a6634;
            }
          }
          else if (((iVar6 == 0xc) && (iVar7 == 0)) && ((*(int *)(iVar1 + 0x10) != 0 && (!bVar3))))
          {
            fn_82975B00(param_1,*(undefined4 *)(iVar1 + 0x60),0x11bc,0xffffffff82051e64);
            bVar3 = true;
LAB_829a6634:
            bVar2 = 1;
          }
        }
        uVar11 = uVar11 + 1;
        iVar10 = iVar10 + 4;
      } while (uVar11 < (uint)param_1[2]);
    }
    iVar10 = 0;
    piVar8 = aiStack_80;
    lVar12 = 4;
    do {
      if (*piVar8 != 0) {
        iVar10 = iVar10 + 1;
      }
      piVar8 = piVar8 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    if (iVar10 != 4) {
      fn_82975B00(param_1,uVar9,0x11bd,0xffffffff820386b0);
      bVar2 = 1;
    }
    uVar5 = -(ulonglong)bVar2 & 0xffffffff80004005;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

