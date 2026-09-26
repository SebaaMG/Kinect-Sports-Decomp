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
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A99D88();
extern int fn_82A9A810();
extern int fn_82A9A860();
extern unsigned int lbl_8315FBB0;
extern unsigned int lbl_8315FBFC;


void fn_82A9BE60(undefined8 param_1,undefined8 param_2,int param_3,ushort *param_4,
                  ulonglong param_5)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820065b0);
  if ((param_5 & 0xffffffff) != 0) {
    fn_82A99D88(param_2,0xffffffff820d2ac0,param_5);
  }
  fn_82A99D88(param_2,0xffffffff8204f014,(&lbl_8315FBFC)[*param_4]);
  if (*param_4 != 5) {
    fn_82A99D88(param_2,0xffffffff820065b0,(&lbl_8315FBB0)[param_4[1]]);
    if (param_4[2] != 1) {
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2a94);
    }
    if (param_4[3] != 1) {
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2ab8);
    }
  }
  if (param_4[4] != 1) {
    fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff82038aa4);
  }
  if (*param_4 == 5) {
    uVar2 = (ulonglong)param_4[5];
    fn_82A9A860();
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(param_4 + 6) + param_3 + -8);
      do {
        piVar1 = piVar3 + 3;
        piVar3 = piVar3 + 2;
        fn_82A9BE60(param_1,param_2,param_3,*piVar1 + param_3,*piVar3 + param_3);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    fn_82A99C28(param_2,0xffffffff820065b0);
  }
  else {
    fn_82A9A810(param_2);
  }
  return;
}

