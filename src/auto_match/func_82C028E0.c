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
extern unsigned int *auStack_d0;
extern unsigned int *auStack_d8;
extern unsigned int *auStack_dc;
extern int fn_82C0ABD0();
extern int fn_82C0AC90();
extern int fn_82C0ACB8();
extern int fn_82F64CE0();
extern int fn_82F69FF0();
extern int iRam00000004;
extern unsigned int uRam00000000;
extern unsigned int uRam00000002;
extern unsigned int uRam0000000c;
extern unsigned int uRam00000010;
extern unsigned int uStack_c4;


ulonglong fn_82C028E0(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  ushort uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [12];
  undefined4 uStack_c4;
  
  piVar9 = (int *)(param_1 + 0xd0);
  (**(code **)(*(int *)(param_1 + 0xd0) + 0x24))(piVar9);
  lVar4 = fn_82C0AC90(*(undefined4 *)(param_1 + 0x2a0),auStack_dc);
  uVar8 = -(ulonglong)(lVar4 != 0) & 0xffffffff80004005;
  if ((int)uVar8 < 0) {
    if (-1 < (int)uVar8) {
      (**(code **)(*piVar9 + 0x28))(piVar9,uRam0000000c,uRam00000000 >> 1);
      (**(code **)(*piVar9 + 0x34))(piVar9,uRam00000010,uRam00000002 >> 1);
    }
  }
  else {
    uVar8 = 0xffffffff80004003;
  }
  if (-1 < (int)uVar8) {
    lVar4 = fn_82C0ACB8(*(undefined4 *)(param_1 + 0x2a0),auStack_d8);
    uVar8 = -(ulonglong)(lVar4 != 0) & 0xffffffff80004005;
    if (-1 < (int)uVar8) {
      return 0xffffffff80004003;
    }
  }
  if (-1 < (int)uVar8) {
    for (uVar7 = 0; uVar7 < uRam00000000; uVar7 = uVar7 + 1 & 0xffff) {
      iVar10 = uVar7 * 0x10 + iRam00000004;
      uVar3 = *(ushort *)(uVar7 * 0x10 + iRam00000004) >> 1;
      uVar1 = *(undefined4 *)(iVar10 + 4);
      if (*(short *)(iVar10 + 8) == 0) {
        iVar5 = fn_82F69FF0(0xffffffff820ec59c,uVar1,uVar3);
        if (iVar5 == 0) {
          (**(code **)(*(int *)(param_1 + 0xd0) + 0x38))
                    (param_1 + 0xd0,*(undefined4 *)(iVar10 + 0xc),*(ushort *)(iVar10 + 10) >> 1);
        }
        else {
          iVar5 = fn_82F69FF0(0xffffffff820ec5bc,uVar1,uVar3);
          if (iVar5 == 0) {
            (**(code **)(*(int *)(param_1 + 0xd0) + 0x3c))
                      (param_1 + 0xd0,*(undefined4 *)(iVar10 + 0xc),*(ushort *)(iVar10 + 10) >> 1);
          }
          else {
            iVar5 = fn_82F69FF0(0xffffffff820ec5d8,uVar1,uVar3);
            if (iVar5 == 0) {
              (**(code **)(*(int *)(param_1 + 0xd0) + 0x40))
                        (param_1 + 0xd0,*(undefined4 *)(iVar10 + 0xc),*(ushort *)(iVar10 + 10) >> 1)
              ;
            }
            else {
              iVar5 = fn_82F69FF0(0xffffffff820ec5ec,uVar1,uVar3);
              if (iVar5 == 0) {
                piVar9 = (int *)(param_1 + 0xd0);
                (**(code **)(*(int *)(param_1 + 0xd0) + 0x58))(piVar9);
                iVar5 = fn_82F64CE0();
                if (iVar5 == 0) {
                  (**(code **)(*piVar9 + 0x40))
                            (piVar9,*(undefined4 *)(iVar10 + 0xc),*(ushort *)(iVar10 + 10) >> 1);
                }
              }
            }
          }
        }
      }
      else if (*(short *)(iVar10 + 8) == 3) {
        iVar5 = fn_82F69FF0(0xffffffff820ec604,uVar1,uVar3);
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*(int *)(param_1 + 0xd0) + 0x48);
          uVar6 = (ulonglong)**(uint **)(iVar10 + 0xc);
LAB_82c02c20:
          (*pcVar2)(param_1 + 0xd0,uVar6);
        }
        else {
          iVar5 = fn_82F69FF0(0xffffffff820ec624,uVar1,uVar3);
          if (iVar5 == 0) {
            iVar5 = (**(code **)(*(int *)(param_1 + 0xd0) + 0x60))((int *)(param_1 + 0xd0));
            if (iVar5 == 0) {
              pcVar2 = *(code **)(*(int *)(param_1 + 0xd0) + 0x48);
              uVar6 = (ulonglong)**(uint **)(iVar10 + 0xc) + 1;
              goto LAB_82c02c20;
            }
          }
        }
      }
    }
    if (-1 < (int)uVar8) {
      lVar4 = fn_82C0ABD0(*(undefined4 *)(param_1 + 0x2a0),auStack_d0);
      uVar8 = -(ulonglong)(lVar4 != 0) & 0xffffffff80004005;
      if (-1 < (int)uVar8) {
        (**(code **)(*(int *)(param_1 + 0xd0) + 0x44))(param_1 + 0xd0,uStack_c4);
      }
    }
  }
  return uVar8;
}

