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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E59440();
extern int fn_82E5C7D8();
extern int fn_82EE1A60();
extern int fn_82EE1B38();
extern int fn_82F6ADA8();
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_7e;
extern unsigned int uStack_80;


/* WARNING: Removing unreachable block (ram,0x82e51798) */
/* WARNING: Removing unreachable block (ram,0x82e517c8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong fn_82E51510(undefined8 param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  ushort uVar4;
  undefined2 uStack_80;
  ushort uStack_7e;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  int aiStack_6c [3];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (((param_2 == (int *)0x0) || (param_3 == (undefined4 *)0x0)) || (param_4 == (undefined4 *)0x0))
  {
    lVar2 = -0x7fffbffd;
  }
  else {
    piStack_78 = (int *)0x0;
    *param_3 = 1;
    uStack_58 = 0;
    uStack_50 = 0;
    piStack_74 = (int *)0x0;
    piStack_7c = (int *)0x0;
    *param_4 = 1;
    piStack_70 = (int *)0x0;
    uStack_80 = 0;
    uStack_7e = 0;
    lVar2 = fn_82E5C7D8(param_2,&uStack_80);
    if (((-1 < lVar2) && (lVar2 = (**(code **)(*param_2 + 0x10))(param_2,&piStack_78), -1 < lVar2))
       && ((lVar2 = fn_82E59440(piStack_78,0xffffffff820ed018,0xffffffff82154c58,&piStack_74),
           -1 < lVar2 &&
           (lVar2 = (**(code **)*piStack_74)(piStack_74,0xffffffff82154c18,&piStack_7c), -1 < lVar2)
           ))) {
      aiStack_6c[0] = 0;
      lVar2 = (**(code **)(*piStack_7c + 0xc))(piStack_7c,0xffffffff820ed0b8,aiStack_6c);
      if (((-1 < lVar2) && (aiStack_6c[0] != 0)) &&
         ((lVar2 = (**(code **)(*piStack_7c + 0x10))(piStack_7c,0xffffffff820ed0b8,0,&piStack_70),
          piVar1 = piStack_70, -1 < lVar2 &&
          (((piStack_70 != (int *)0x0 &&
            (lVar2 = fn_82EE1A60(piStack_70,&uStack_80,0,&uStack_7e), -1 < lVar2)) &&
           (uVar4 = 0, uStack_7e != 0)))))) {
        do {
          if ((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) != 0) {
            fn_82E4FE40();
          }
          uStack_58 = uStack_58 & 0xffffffff00000000;
          if ((((U64)(uStack_50) >> 32) & 0xFFFFFFFF) != 0) {
            fn_82E4FE40();
          }
          uStack_58 = 0;
          uStack_50 = 0;
          lVar2 = fn_82EE1B38(piVar1,&uStack_80,0,uVar4,auStack_60);
          if (lVar2 < 0) break;
          lVar2 = (uStack_58 >> 0x31) << 1;
          if (0x7fffffff < uStack_58 >> 0x31) {
            lVar2 = -1;
          }
          iVar3 = fn_82E50BE8(lVar2,0,0,0,0);
          uStack_58 = CONCAT44((((U64)(uStack_58) >> 0) & 0xFFFFFFFF),iVar3);
          if (iVar3 == 0) {
LAB_82e517f0:
            lVar2 = -0x7ff8fff2;
            break;
          }
          iVar3 = fn_82E50BE8((((U64)(uStack_50) >> 0) & 0xFFFFFFFF),0,0,0,0);
          uStack_50 = CONCAT44((((U64)(uStack_50) >> 0) & 0xFFFFFFFF),iVar3);
          if (iVar3 == 0) goto LAB_82e517f0;
          lVar2 = fn_82EE1B38(piVar1,&uStack_80,0,uVar4,auStack_60);
          if (lVar2 < 0) break;
          fn_82F6ADA8(0xffffffff821546dc,(((U64)(uStack_58) >> 32) & 0xFFFFFFFF));
          fn_82F6ADA8(0xffffffff821546f8,(((U64)(uStack_58) >> 32) & 0xFFFFFFFF));
          uVar4 = uVar4 + 1;
        } while (uVar4 < uStack_7e);
      }
    }
    if (piStack_78 != (int *)0x0) {
      (**(code **)(*piStack_78 + 8))();
      piStack_78 = (int *)0x0;
    }
    if (piStack_74 != (int *)0x0) {
      (**(code **)(*piStack_74 + 8))();
      piStack_74 = (int *)0x0;
    }
    if (piStack_7c != (int *)0x0) {
      (**(code **)(*piStack_7c + 8))();
      piStack_7c = (int *)0x0;
    }
    if (piStack_70 != (int *)0x0) {
      (**(code **)(*piStack_70 + 8))();
      piStack_70 = (int *)0x0;
    }
    if ((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) != 0) {
      fn_82E4FE40();
    }
    uStack_58 = uStack_58 & 0xffffffff00000000;
    if ((((U64)(uStack_50) >> 32) & 0xFFFFFFFF) != 0) {
      fn_82E4FE40();
    }
  }
  return lVar2;
}

