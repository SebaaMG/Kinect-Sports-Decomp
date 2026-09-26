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
#define CONCAT62(h,l) ((U64)((((U64)(h)) << 16) | ((U16)(l))))
#define _iStack_58 ((*(U64*)&iStack_58))
extern unsigned int *auStack_60;
extern int fn_82E24AA8();
extern int fn_82E24DB8();
extern int fn_82E25818();
extern int fn_82E25B20();
extern int fn_82E49060();
extern int fn_82F63CA0();
extern unsigned int iStack_58;
extern unsigned int iStack_78;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_70;


longlong fn_82E25318(int *param_1,undefined8 param_2)

{
  int iVar1;
  int in_r8;
  undefined8 in_r10;
  int *piVar2;
  longlong lVar3;
  int *piStack_7c;
  int iStack_78;
  int *piStack_74;
  undefined4 uStack_70;
  int aiStack_6c [3];
  undefined1 auStack_60 [8];
  int iStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  piStack_7c = (int *)0x0;
  piStack_74 = (int *)0x0;
  piVar2 = (int *)0x0;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x476f6f64)) {
    lVar3 = -0x7fff0001;
  }
  else {
    iStack_78 = 0;
    lVar3 = 0;
    _iStack_58 = CONCAT44(-in_r8,0x10000);
    _iStack_58 = CONCAT62(_iStack_58,0x20);
    uStack_50 = 0x3259555900000000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar1 = fn_82E25818(param_1[1],auStack_60,param_2,param_1[4],&iStack_78,0,0,0);
    if (iVar1 == 0) {
      if (((1 < iStack_78) && (lVar3 = fn_82E49060(&piStack_7c), -1 < lVar3)) &&
         (lVar3 = fn_82E24DB8(iStack_78,&piStack_74), piVar2 = piStack_74, -1 < lVar3)) {
        uStack_70 = 0;
        lVar3 = (**(code **)(*piStack_74 + 0xc))(piStack_74,&uStack_70,0,0);
        if (-1 < lVar3) {
          fn_82F63CA0(uStack_70,param_1[4],iStack_78);
          lVar3 = (**(code **)(*piVar2 + 0x10))(piVar2);
          if (((-1 < lVar3) && (lVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,iStack_78), -1 < lVar3)
              ) && ((lVar3 = (**(code **)(*piStack_7c + 0xa8))(piStack_7c,piVar2), -1 < lVar3 &&
                    (lVar3 = (**(code **)(*piStack_7c + 0x90))(piStack_7c,in_r10), -1 < lVar3)))) {
            fn_82E25B20(param_1[1],aiStack_6c);
            lVar3 = (**(code **)(*piStack_7c + 0x54))
                              (piStack_7c,0xffffffff82153458,aiStack_6c[0] == 0);
            if (-1 < lVar3) {
              lVar3 = fn_82E24AA8(param_1,piStack_7c,2);
              if (-1 < lVar3) {
                param_1[0x12] = param_1[0x12] + 1;
              }
              *(undefined8 *)(param_1 + 0x14) = in_r10;
            }
          }
        }
      }
    }
    else {
      lVar3 = -0x7fffbffb;
    }
    if (piStack_7c != (int *)0x0) {
      (**(code **)(*piStack_7c + 8))();
      piStack_7c = (int *)0x0;
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  return lVar3;
}

