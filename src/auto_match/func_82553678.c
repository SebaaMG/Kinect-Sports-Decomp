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
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825200A8();
extern int fn_8263CBB0();
extern int fn_82837D98();
extern unsigned int lbl_8320A898;


void fn_82553678(int param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  longlong lVar7;
  uint *apuStack_20 [2];
  
  if (*(int *)(param_1 + 0x4664) == 0) goto LAB_825537d0;
  fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x4664) + 0x14),0,apuStack_20);
  bVar1 = false;
  uVar2 = *apuStack_20[0] & 0xf;
  if (uVar2 - 1 < 9) {
    if (uVar2 == 2) {
      if (*(uint **)(lbl_8320A898 + 0x3144) == apuStack_20[0]) goto LAB_825537b0;
    }
    else {
      if (uVar2 == 3) {
        puVar5 = (undefined4 *)(lbl_8320A898 + 0x31b0);
        lVar7 = 0x1a;
        do {
          if ((uint *)*puVar5 == apuStack_20[0]) {
            bVar1 = true;
          }
          puVar5 = puVar5 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      else if (uVar2 == 4) {
        bVar1 = *(uint **)(lbl_8320A898 + 0x3148) == apuStack_20[0];
        if (*(uint **)(lbl_8320A898 + 0x3158) == apuStack_20[0]) {
          bVar1 = true;
        }
      }
      else {
        if (uVar2 == 5) {
          puVar6 = *(uint **)(lbl_8320A898 + 0x2ed8);
        }
        else if (uVar2 == 6) {
          puVar6 = *(uint **)(lbl_8320A898 + 0x3248);
        }
        else {
          if (uVar2 != 7) {
            if ((uVar2 == 8) || (uVar2 != 1)) {
              bVar1 = false;
            }
            else {
              puVar5 = (undefined4 *)(lbl_8320A898 + 0x315c);
              lVar7 = 0x10;
              do {
                if ((uint *)*puVar5 == apuStack_20[0]) {
                  bVar1 = true;
                }
                puVar5 = puVar5 + 1;
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
            }
            goto LAB_825537a8;
          }
          puVar6 = *(uint **)(lbl_8320A898 + 0x3244);
        }
        bVar1 = apuStack_20[0] == puVar6;
      }
LAB_825537a8:
      if (bVar1) {
LAB_825537b0:
                    /* WARNING: Subroutine does not return */
        fn_8263CBB0(lbl_8320A898,0xf,0,0x10000);
      }
    }
  }
  fn_8251FA58(*(undefined4 *)(param_1 + 0x4664));
  *(undefined4 *)(param_1 + 0x4664) = 0;
LAB_825537d0:
  iVar3 = fn_825200A8(param_2,0xffffffff82196288);
  if (iVar3 == 0) {
    uVar4 = fn_8251F720(param_2,0);
    *(undefined4 *)(param_1 + 0x4664) = uVar4;
  }
  return;
}

