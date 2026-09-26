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
extern int fn_82964628();
extern int fn_82975B00();
extern int fn_82996970();
extern unsigned int lbl_82005710;


undefined8
fn_8299A410(int param_1,int *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
             int *param_7)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  
  uVar8 = 0;
  uVar12 = lbl_82005710;
  if (param_3 != 0) {
    do {
      puVar1 = (uint *)*param_2;
      if ((puVar1 != (uint *)0x0) && (*puVar1 != 0)) {
        uVar6 = (ulonglong)*puVar1 & 0xfff00000;
        iVar4 = fn_82996970(uVar6);
        if ((uVar6 & 0xffffffff) == 0x11000000) {
          iVar4 = 1;
        }
        uVar9 = 0;
        if (puVar1[1] != 0) {
          iVar10 = 0;
          do {
            iVar2 = *(int *)(*(int *)(iVar10 + puVar1[2]) * 4 + *(int *)(param_1 + 0x14));
            if ((((*(int *)(iVar2 + 4) == *(int *)(param_1 + 0x80)) &&
                 (*(byte *)(iVar2 + 0x6f) == param_4)) && (param_5 == *(byte *)(iVar2 + 0x6e))) &&
               ((iVar4 == 0 || (*(int *)(iVar2 + 0x3c) != 0)))) {
              uVar11 = 0;
              if (param_6 != 0) {
                piVar7 = param_7;
                do {
                  if (*(int *)(iVar2 + 0x10) ==
                      *(int *)(*(int *)(*piVar7 * 4 + *(int *)(param_1 + 0x14)) + 0x10)) {
                    iVar5 = fn_82964628(uVar12,param_1,*(undefined4 *)(param_1 + 0x88),0);
                    if (iVar5 == -1) {
                      return 0xffffffff8007000e;
                    }
                    iVar3 = *(int *)(iVar5 * 4 + *(int *)(param_1 + 0x14));
                    *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(iVar2 + 0x3c);
                    *(int *)(iVar3 + 0x38) = param_7[uVar11];
                    *(int *)(iVar10 + puVar1[2]) = iVar5;
                    break;
                  }
                  uVar11 = uVar11 + 1;
                  piVar7 = piVar7 + 1;
                } while (uVar11 < param_6);
              }
              if (uVar11 == param_6) {
                fn_82975B00(param_1,0,0x12c1,0xffffffff82050f18);
                return 0xffffffff80004005;
              }
            }
            uVar9 = uVar9 + 1;
            iVar10 = iVar10 + 4;
          } while (uVar9 < puVar1[1]);
        }
      }
      uVar8 = uVar8 + 1;
      param_2 = param_2 + 1;
    } while (uVar8 < param_3);
  }
  return 0;
}

