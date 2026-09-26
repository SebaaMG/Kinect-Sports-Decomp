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
extern unsigned int *auStack_54;
extern int fn_82E59440();
extern int fn_82E7C300();
extern int fn_82E7C6C0();
extern int fn_82E7C9B8();
extern int fn_82E7CB88();
extern int fn_82E7CDE8();
extern int fn_82E7D068();
extern int fn_82E7D348();
extern int fn_82E7D568();
extern int fn_82E7D7A0();
extern int fn_82E7D948();
extern int fn_82E7DA30();
extern int fn_82E7DBC0();
extern int fn_82E7DDC8();
extern unsigned int uStack_58;


/* WARNING: Type propagation algorithm not settling */

longlong fn_82E7E1D8(int *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int *piStack_60;
  int *piStack_5c;
  uint uStack_58;
  uint auStack_54 [21];
  
  uStack_58 = 0;
  auStack_54[1] = 0;
  piStack_5c = (int *)0x0;
  piStack_60 = (int *)0x0;
  auStack_54[0] = 0;
  if (param_2 == (int *)0x0) {
    return -0x7fffbffd;
  }
  if (*param_1 != 0) {
    if ((((param_1[1] != 0) ||
         ((lVar2 = fn_82E59440(*param_1,0xffffffff820ed018,0xffffffff82154c58,&piStack_5c),
          -1 < lVar2 &&
          (lVar2 = (**(code **)*piStack_5c)(piStack_5c,0xffffffff82154c18,param_1 + 1), -1 < lVar2))
         )) && ((lVar2 = fn_82E7C300(param_1,param_2), -1 < lVar2 &&
                (((lVar2 = fn_82E7DA30(param_1,param_2), -1 < lVar2 &&
                  (lVar2 = fn_82E7DDC8(param_1,param_2), -1 < lVar2)) &&
                 (lVar2 = fn_82E7C6C0(param_1,param_2), -1 < lVar2)))))) &&
       (((((lVar2 = fn_82E7D068(param_1,param_2), -1 < lVar2 &&
           (lVar2 = fn_82E7D348(param_1,param_2), -1 < lVar2)) &&
          ((lVar2 = fn_82E7DBC0(param_1,param_2), -1 < lVar2 &&
           ((lVar2 = fn_82E7C9B8(param_1,param_2), -1 < lVar2 &&
            (lVar2 = fn_82E7D568(param_1,param_2,param_3), -1 < lVar2)))))) &&
         (lVar2 = fn_82E7CB88(param_1,param_2), -1 < lVar2)) &&
        ((lVar2 = (**(code **)(*param_2 + 0x84))(param_2,&uStack_58), -1 < lVar2 &&
         (uVar3 = 0, uStack_58 != 0)))))) {
      while( true ) {
        if (piStack_60 != (int *)0x0) {
          (**(code **)(*piStack_60 + 8))();
          piStack_60 = (int *)0x0;
        }
        lVar2 = (**(code **)(*param_2 + 0x88))(param_2,uVar3,auStack_54 + 1,&piStack_60);
        if ((lVar2 < 0) ||
           (lVar2 = (**(code **)(*piStack_60 + 0x84))(piStack_60,auStack_54), lVar2 < 0)) break;
        uVar1 = auStack_54[0] & 0xffff;
        lVar2 = fn_82E7CDE8(param_1,uVar1,piStack_60);
        if ((lVar2 < 0) ||
           (((lVar2 = fn_82E7D7A0(param_1,uVar1,piStack_60), lVar2 < 0 ||
             (lVar2 = fn_82E7D948(param_1,uVar1,param_2,piStack_60,param_3), lVar2 < 0)) ||
            (uVar3 = uVar3 + 1, (ulonglong)uStack_58 <= (uVar3 & 0xffffffff))))) break;
      }
    }
    iVar4 = (int)lVar2;
    if ((((iVar4 != -0x3ff2c566) && (iVar4 != -0x3ff2c94f)) && (iVar4 != -0x7fff0001)) &&
       (iVar4 != -0x7ff8ffa9)) goto LAB_82e7e4b0;
  }
  lVar2 = -0x3ff2c174;
LAB_82e7e4b0:
  if (piStack_5c != (int *)0x0) {
    (**(code **)(*piStack_5c + 8))(piStack_5c);
    piStack_5c = (int *)0x0;
  }
  if (piStack_60 != (int *)0x0) {
    (**(code **)(*piStack_60 + 8))(piStack_60);
  }
  return lVar2;
}

