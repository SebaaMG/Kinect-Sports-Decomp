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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F00940();
extern int fn_82F00A10();
extern int fn_82F01538();
extern int fn_82F01850();
extern int fn_82F01C80();
extern int fn_82F0F9A0();
extern int fn_82F68CC0();
extern unsigned int lbl_83248E44;
extern unsigned int lbl_83248E48;


void fn_82F01F10(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar11;
  longlong lVar9;
  ulonglong uVar10;
  
  if ((lbl_83248E44 == 0) && (lbl_83248E48 == 0)) {
    iVar5 = (int)param_6;
    iVar6 = iVar5 >> 1;
    if ((*(int *)(param_1 + 0x31c) < 0x10) || (*(int *)(param_1 + 800) < 0x10)) {
      *(undefined4 *)(param_1 + 0x52a4) = 0;
      *(undefined4 *)(param_1 + 0x52a8) = 0;
    }
    if (*(int *)(param_1 + 0x52a4) == 0) {
      fn_82F01538(param_1,param_2,param_5,param_6);
    }
    else if (*(int *)(param_1 + 0x52a8) == 0) {
      if (param_7 == 0) {
        if ((*(int *)(param_1 + 4) == 7) || (*(int *)(param_1 + 0x1fa8) < 3)) {
          fn_82F01C80(param_1,param_2,param_5,param_6);
        }
        else {
          fn_82F01850(param_1,param_2,param_5,param_6);
        }
      }
      else {
        lVar9 = (longlong)iVar6 * (longlong)(int)param_5;
        uVar3 = fn_8265C940(lVar9,0x248c8000);
        if ((uVar3 & 0xffffffff) != 0) {
          uVar4 = fn_8265C940(lVar9,0x248c8000);
          if ((uVar4 & 0xffffffff) == 0) {
            fn_8265C990(uVar3,0x248c8000);
          }
          else {
            if (0 < iVar5) {
              lVar7 = ((param_6 - 1U & 0xffffffff) >> 1) + 1;
              lVar9 = param_2;
              uVar8 = uVar4;
              uVar10 = uVar3;
              do {
                fn_82F68CC0(uVar10,lVar9,param_5);
                uVar10 = uVar10 + param_5;
                fn_82F68CC0(uVar8,lVar9 + param_5,param_5);
                lVar7 = lVar7 + -1;
                uVar8 = uVar8 + param_5;
                lVar9 = lVar9 + param_5 + param_5;
              } while (lVar7 != 0);
            }
            if ((*(int *)(param_1 + 4) == 7) || (*(int *)(param_1 + 0x1fa8) < 3)) {
              fn_82F01C80(param_1,uVar3,param_5,iVar6);
              fn_82F01C80(param_1,uVar4,param_5,iVar6);
            }
            else {
              fn_82F01850(param_1,uVar3,param_5,iVar6);
              fn_82F01850(param_1,uVar4,param_5,iVar6);
            }
            if (0 < iVar5) {
              lVar9 = ((param_6 - 1U & 0xffffffff) >> 1) + 1;
              uVar8 = uVar4;
              uVar10 = uVar3;
              do {
                fn_82F68CC0(param_2,uVar10,param_5);
                uVar10 = uVar10 + param_5;
                fn_82F68CC0(param_2 + param_5,uVar8,param_5);
                lVar9 = lVar9 + -1;
                uVar8 = uVar8 + param_5;
                param_2 = param_2 + param_5 + param_5;
              } while (lVar9 != 0);
            }
            fn_8265C990(uVar3,0x248c8000);
            fn_8265C990(uVar4,0x248c8000);
          }
        }
      }
    }
    else if (*(int *)(param_1 + 0x6f4c) == 0) {
      fn_82F0F9A0(param_1,6);
      if (1 < *(longlong *)(param_1 + 0x2e0)) {
        fn_82F00940(param_1,*(int *)(param_1 + 0x2d0) << 1,*(int *)(param_1 + 0x2d4) << 1);
      }
      piVar11 = (int *)(param_1 + 0x52ac);
      fn_82F68CC0(*(undefined4 *)(param_1 + 0x52ac),param_2,*(int *)(param_1 + 0x324) * 3 >> 1);
      if (4 < *(longlong *)(param_1 + 0x2e0)) {
        fn_82F00A10(param_1,param_2,param_3,param_4,piVar11,param_1 + 0x52c0,param_1 + 0x52d4,
                          param_5);
      }
      iVar6 = *(int *)(param_1 + 0x52bc);
      *(undefined4 *)(param_1 + 0x52bc) = *(undefined4 *)(param_1 + 0x52b8);
      *(undefined4 *)(param_1 + 0x52e4) = *(undefined4 *)(param_1 + 0x52e0);
      *(undefined4 *)(param_1 + 0x52e0) = *(undefined4 *)(param_1 + 0x52dc);
      *(undefined4 *)(param_1 + 0x52d0) = *(undefined4 *)(param_1 + 0x52cc);
      *(undefined4 *)(param_1 + 0x52b8) = *(undefined4 *)(param_1 + 0x52b4);
      *(undefined4 *)(param_1 + 0x52cc) = *(undefined4 *)(param_1 + 0x52c8);
      *(undefined4 *)(param_1 + 0x52b4) = *(undefined4 *)(param_1 + 0x52b0);
      *(undefined4 *)(param_1 + 0x52c8) = *(undefined4 *)(param_1 + 0x52c4);
      *(undefined4 *)(param_1 + 0x52dc) = *(undefined4 *)(param_1 + 0x52d8);
      *(int *)(param_1 + 0x52b0) = *piVar11;
      *(undefined4 *)(param_1 + 0x52c4) = *(undefined4 *)(param_1 + 0x52c0);
      *(undefined4 *)(param_1 + 0x52d8) = *(undefined4 *)(param_1 + 0x52d4);
      *piVar11 = iVar6;
      iVar6 = *(int *)(param_1 + 0x324) + iVar6;
      *(int *)(param_1 + 0x52c0) = iVar6;
      uVar1 = *(undefined4 *)(param_1 + 0x52f8);
      *(int *)(param_1 + 0x52d4) = (*(int *)(param_1 + 0x324) >> 2) + iVar6;
      uVar2 = *(undefined4 *)(param_1 + 0x52f4);
      *(undefined4 *)(param_1 + 0x52f4) = *(undefined4 *)(param_1 + 0x52f0);
      *(undefined4 *)(param_1 + 0x52f8) = uVar2;
      *(undefined4 *)(param_1 + 0x52f0) = *(undefined4 *)(param_1 + 0x52ec);
      *(undefined4 *)(param_1 + 0x52ec) = *(undefined4 *)(param_1 + 0x52e8);
      *(undefined4 *)(param_1 + 0x52e8) = uVar1;
      fn_82F68CC0(*(undefined4 *)(param_1 + 0x5308),*(undefined4 *)(param_1 + 0x1a90),
                   *(int *)(param_1 + 0x2d8) << 4);
    }
  }
  return;
}

