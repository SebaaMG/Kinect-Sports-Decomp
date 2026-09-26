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
extern int fn_82EE1260();
extern int fn_82EE1A60();
extern int fn_82EE1B38();
extern int fn_82EE1C28();
extern int fn_82EEBD40();
extern int fn_82EEBD90();
extern int fn_82EECBE8();
extern int fn_82EECCB0();
extern int fn_82F418F0();
extern int fn_82F41BD0();
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_70;


/* WARNING: Removing unreachable block (ram,0x82eed5dc) */
/* WARNING: Removing unreachable block (ram,0x82eed584) */
/* WARNING: Removing unreachable block (ram,0x82eed588) */
/* WARNING: Removing unreachable block (ram,0x82eed5d4) */
/* WARNING: Removing unreachable block (ram,0x82eed5a8) */
/* WARNING: Removing unreachable block (ram,0x82eed59c) */
/* WARNING: Removing unreachable block (ram,0x82eed5a0) */
/* WARNING: Removing unreachable block (ram,0x82eed5b4) */
/* WARNING: Removing unreachable block (ram,0x82eed5bc) */
/* WARNING: Removing unreachable block (ram,0x82eed590) */
/* WARNING: Removing unreachable block (ram,0x82eed594) */
/* WARNING: Removing unreachable block (ram,0x82eed5c4) */
/* WARNING: Removing unreachable block (ram,0x82eed5cc) */
/* WARNING: Removing unreachable block (ram,0x82eed628) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong fn_82EED478(int param_1,ulonglong param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  longlong lVar4;
  ushort uStack_70;
  short asStack_6e [7];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  asStack_6e[1] = 0;
  asStack_6e[2] = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  lVar4 = 0;
  piVar1 = (int *)0x0;
  uStack_50 = 0;
  if ((param_2 & 0x100) != 0) goto LAB_82eed7ac;
  if ((param_2 & 0xa00) == 0) {
LAB_82eed56c:
    if ((param_2 & 0x200) != 0) {
      if (-1 < (int)lVar4) {
        *(undefined4 *)(param_3 + 0x3c) = 1;
        *(undefined2 *)(param_3 + 0x14) = 0;
        lVar4 = fn_82F41BD0(param_3,(((U64)(uStack_58) >> 32) & 0xFFFFFFFF));
        if (-1 < lVar4) {
          *(undefined2 *)(param_3 + 0x40) = 0;
          *(undefined4 *)(param_3 + 0x48) = (((U64)(uStack_50) >> 32) & 0xFFFFFFFF);
          *(undefined4 *)(param_3 + 0x44) = (((U64)(uStack_50) >> 0) & 0xFFFFFFFF);
          iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + param_1;
          lVar4 = (**(code **)(*(int *)(iVar2 + 4) + 0x18))(iVar2 + 4,param_2,param_3);
          if (-1 < lVar4) {
            *(undefined4 *)(param_3 + 8) = 1;
          }
        }
      }
      goto LAB_82eed7ac;
    }
    if ((param_2 & 0x400) == 0) {
      if (((param_2 & 0x800) != 0) &&
         (lVar4 = fn_82EE1C28(piVar1,0,0,*(undefined2 *)(param_3 + 4)), -1 < lVar4)) {
        *(undefined4 *)(param_3 + 0x58) = 1;
      }
      goto LAB_82eed7ac;
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = (int *)fn_82EEBD90(param_1 + -4);
    if (piVar1 != (int *)0x0) {
      asStack_6e[0] = 1;
      lVar4 = fn_82F418F0(param_3,asStack_6e);
      if (-1 < lVar4) {
        uStack_50 = CONCAT44(*(undefined4 *)(param_3 + 0x44),(((U64)(uStack_50) >> 32) & 0xFFFFFFFF));
        if (asStack_6e[0] == 2) {
          uStack_50 = CONCAT44(2,(((U64)(uStack_50) >> 32) & 0xFFFFFFFF));
        }
        lVar4 = fn_82EECCB0(param_1 + -4,auStack_60,*(undefined4 *)(param_3 + 0x18),
                                *(undefined4 *)(param_3 + 0x48));
        if ((-1 < lVar4) && (lVar4 = fn_82EE1260(piVar1,auStack_60), -1 < lVar4)) {
          *(undefined4 *)(param_3 + 8) = 1;
          psVar3 = (short *)(param_3 + 4);
          lVar4 = fn_82EE1A60(piVar1,0,0,psVar3);
          if (-1 < lVar4) {
            *psVar3 = *psVar3 + -1;
          }
        }
      }
      goto LAB_82eed7ac;
    }
  }
  else {
    piVar1 = (int *)fn_82EEBD40(param_1 + -4);
    if (piVar1 != (int *)0x0) {
      lVar4 = fn_82EE1A60(piVar1,0,0,&uStack_70);
      if (lVar4 < 0) goto LAB_82eed7ac;
      if (*(ushort *)(param_3 + 4) < uStack_70) {
        lVar4 = fn_82EE1B38(piVar1,0,0,*(ushort *)(param_3 + 4),auStack_60);
        if (((lVar4 < 0) || (lVar4 = fn_82EECCB0(param_1 + -4,auStack_60,0,0), lVar4 < 0)) ||
           (lVar4 = fn_82EE1B38(piVar1,0,0,*(undefined2 *)(param_3 + 4),auStack_60), lVar4 < 0))
        goto LAB_82eed7ac;
        goto LAB_82eed56c;
      }
    }
  }
  lVar4 = 1;
LAB_82eed7ac:
  fn_82EECBE8(param_1 + -4,auStack_60);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return lVar4;
}

