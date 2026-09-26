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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82EE0B00();
extern int fn_82EE1260();
extern int fn_82EE17C8();
extern int fn_82EE1848();
extern int fn_82EE1998();
extern int fn_82EEBB80();
extern int fn_82EEBBD0();
extern int fn_82EECBE8();
extern int fn_82EECCB0();
extern int fn_82F41870();
extern int fn_82F41BD0();
extern unsigned int uStack_50;
extern unsigned int uStack_58;


/* WARNING: Removing unreachable block (ram,0x82eeceb4) */
/* WARNING: Removing unreachable block (ram,0x82eecee0) */
/* WARNING: Removing unreachable block (ram,0x82eeceb8) */
/* WARNING: Removing unreachable block (ram,0x82eeced8) */
/* WARNING: Removing unreachable block (ram,0x82eeced0) */
/* WARNING: Removing unreachable block (ram,0x82eecec0) */
/* WARNING: Removing unreachable block (ram,0x82eecec4) */
/* WARNING: Removing unreachable block (ram,0x82eecea8) */
/* WARNING: Removing unreachable block (ram,0x82eeceac) */
/* WARNING: Removing unreachable block (ram,0x82eecee8) */
/* WARNING: Removing unreachable block (ram,0x82eecef0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong fn_82EECDA8(int param_1,ulonglong param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ushort auStack_70 [8];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  auStack_70[0] = 0;
  uStack_58 = 0;
  lVar3 = 0;
  piVar1 = (int *)0x0;
  uStack_50 = 0;
  if ((param_2 & 0x100) != 0) goto LAB_82eed0a0;
  if (*(short *)(param_3 + 0x14) == 0) {
    if ((param_2 & 0xa00) == 0) {
LAB_82eece94:
      if ((param_2 & 0x200) != 0) {
        if (-1 < (int)lVar3) {
          *(undefined4 *)(param_3 + 0x3c) = 1;
          lVar3 = fn_82F41BD0(param_3,(((U64)(uStack_58) >> 32) & 0xFFFFFFFF));
          if (-1 < lVar3) {
            *(undefined2 *)(param_3 + 0x40) = 0;
            *(undefined4 *)(param_3 + 0x48) = (((U64)(uStack_50) >> 32) & 0xFFFFFFFF);
            *(undefined4 *)(param_3 + 0x44) = (((U64)(uStack_50) >> 0) & 0xFFFFFFFF);
            iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + param_1;
            lVar3 = (**(code **)(*(int *)(iVar2 + 4) + 0x18))(iVar2 + 4,param_2,param_3);
          }
        }
        goto LAB_82eed0a0;
      }
      if ((param_2 & 0x400) == 0) {
        if (((param_2 & 0x800) != 0) &&
           (lVar3 = fn_82EE1848(piVar1,*(undefined2 *)(param_3 + 4)), -1 < lVar3)) {
          *(undefined4 *)(param_3 + 0x58) = 1;
        }
        goto LAB_82eed0a0;
      }
      if (((*(short *)(param_3 + 0x40) == 0) && (*(uint *)(param_3 + 0x44) < 0x10000)) &&
         ((*(int *)(param_3 + 0x3c) != 6 && (*(int *)(param_3 + 0x54) == 0)))) {
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        piVar1 = (int *)fn_82EEBBD0(param_1 + -4);
        if (piVar1 != (int *)0x0) {
          lVar3 = fn_82EE1998(piVar1,*(undefined2 *)(param_3 + 0x14),
                                    *(undefined4 *)(param_3 + 0x18));
          if (-1 < lVar3) {
            if ((int)lVar3 == 0) {
              lVar3 = 1;
              *(undefined4 *)(param_3 + 0x54) = 1;
            }
            else {
              auStack_70[1] = 1;
              lVar3 = fn_82F41870(param_3,auStack_70 + 1);
              if (-1 < lVar3) {
                uStack_50 = CONCAT44(*(undefined4 *)(param_3 + 0x44),(((U64)(uStack_50) >> 32) & 0xFFFFFFFF));
                lVar3 = fn_82EECCB0(param_1 + -4,auStack_60,*(undefined4 *)(param_3 + 0x18),
                                        *(undefined4 *)(param_3 + 0x48));
                if ((-1 < lVar3) && (lVar3 = fn_82EE1260(piVar1,auStack_60), -1 < lVar3)) {
                  fn_82EE0B00(piVar1,auStack_70);
                  *(ushort *)(param_3 + 4) = auStack_70[0] - 1;
                }
              }
            }
          }
          goto LAB_82eed0a0;
        }
      }
    }
    else {
      piVar1 = (int *)fn_82EEBB80(param_1 + -4);
      if (piVar1 != (int *)0x0) {
        fn_82EE0B00(piVar1,auStack_70);
        if (*(ushort *)(param_3 + 4) < auStack_70[0]) {
          uStack_58 = 0;
          uStack_50 = 0;
          lVar3 = fn_82EE17C8(piVar1,*(ushort *)(param_3 + 4),auStack_60);
          if (((lVar3 < 0) || (lVar3 = fn_82EECCB0(param_1 + -4,auStack_60,0,0), lVar3 < 0)) ||
             (lVar3 = fn_82EE17C8(piVar1,*(undefined2 *)(param_3 + 4),auStack_60), lVar3 < 0))
          goto LAB_82eed0a0;
          goto LAB_82eece94;
        }
      }
    }
  }
  lVar3 = 1;
LAB_82eed0a0:
  fn_82EECBE8(param_1 + -4,auStack_60);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return lVar3;
}

