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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_8302A5B8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;


void fn_83016920(undefined8 param_1,double param_2,double param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 in_r7;
  uint uVar4;
  double dVar5;
  double extraout_f1;
  double dVar6;
  double dVar7;
  
  uVar4 = (uint)in_r7;
  uVar3 = (undefined4)((ulonglong)in_r7 >> 0x20);
  iVar2 = fn_82F6A548();
  dVar5 = (double)lbl_821AAD20;
  if (uVar4 < 9) {
    lVar1 = CONCAT44(uVar3,uVar4);
    if (uVar4 == 0) {
      dVar6 = (double)lbl_82002AE0;
      dVar5 = (double)fn_8302A5B8((double)(float)(dVar6 - extraout_f1),
                                   *(undefined4 *)(iVar2 + 0x10));
      dVar5 = (double)(float)(dVar6 - dVar5);
    }
    else if (lVar1 == 1) {
      dVar6 = (double)lbl_82002AE0;
      dVar5 = (double)fn_8302A5B8((double)(float)(dVar6 - extraout_f1),*(undefined4 *)(iVar2 + 0xc)
                                  );
      dVar5 = (double)(float)(dVar6 - dVar5);
    }
    else if (lVar1 == 2) {
      dVar6 = (double)lbl_82002AE0;
      dVar5 = (double)fn_8302A5B8((double)(float)(dVar6 - extraout_f1),*(undefined4 *)(iVar2 + 8));
      dVar5 = (double)(float)(dVar6 - dVar5);
    }
    else if (lVar1 == 3) {
      dVar5 = (double)lbl_82002C5C;
      if (dVar5 <= extraout_f1) {
        dVar6 = (double)fn_8302A5B8((double)(float)((double)(float)(extraout_f1 - dVar5) *
                                                    (double)lbl_82005344),
                                     *(undefined4 *)(iVar2 + 0xc));
        dVar5 = (double)(float)(dVar6 * dVar5 + dVar5);
      }
      else {
        dVar7 = (double)lbl_82002AE0;
        dVar6 = (double)fn_8302A5B8(-(double)(float)(extraout_f1 * (double)lbl_82005344 - dVar7),
                                     *(undefined4 *)(iVar2 + 0xc));
        dVar5 = (double)(float)((double)(float)(dVar7 - dVar6) * dVar5);
      }
    }
    else {
      dVar5 = extraout_f1;
      if (lVar1 != 4) {
        if (lVar1 == 5) {
          dVar5 = (double)lbl_82002C5C;
          if (dVar5 <= extraout_f1) {
            dVar7 = (double)lbl_82002AE0;
            dVar6 = (double)fn_8302A5B8(-(double)(float)((double)(float)(extraout_f1 - dVar5) *
                                                          (double)lbl_82005344 - dVar7),
                                         *(undefined4 *)(iVar2 + 0xc));
            dVar5 = (double)(float)((double)(float)(dVar7 - dVar6) * dVar5 + dVar5);
          }
          else {
            dVar6 = (double)fn_8302A5B8((double)(float)(extraout_f1 * (double)lbl_82005344),
                                         *(undefined4 *)(iVar2 + 0xc));
            dVar5 = (double)(float)(dVar6 * dVar5);
          }
        }
        else if (lVar1 == 6) {
          dVar5 = (double)fn_8302A5B8(*(undefined4 *)(iVar2 + 8));
        }
        else if (lVar1 == 7) {
          dVar5 = (double)fn_8302A5B8(*(undefined4 *)(iVar2 + 0xc));
        }
        else {
          dVar5 = (double)fn_8302A5B8(*(undefined4 *)(iVar2 + 0x10));
        }
      }
    }
  }
  fn_82F6A594((double)(float)((double)(float)(param_3 - param_2) * dVar5 + param_2));
  return;
}

