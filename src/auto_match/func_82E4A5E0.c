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
extern int fn_82E49568();
extern int fn_82E4A178();
extern int fn_82E4A558();
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();


longlong fn_82E4A5E0(int param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
                      undefined8 param_5)

{
  ulonglong uVar1;
  int *piVar2;
  longlong lVar3;
  
  piVar2 = (int *)0x0;
  fn_82E50CB8(param_1 + 0x58);
  if (((param_2 & 0xffffffff) == 0) || ((param_4 & 0xffffffff) == 0)) {
    lVar3 = -0x7ff8ffa9;
LAB_82e4a6ec:
    if (-1 < (int)lVar3) goto LAB_82e4a710;
  }
  else {
    if (*(int *)(param_1 + 0x9c) == -1) {
      lVar3 = -0x3ff2c94e;
      goto LAB_82e4a710;
    }
    uVar1 = fn_82E50BE8(100,0,0,0,0);
    if ((uVar1 & 0xffffffff) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)fn_82E49568(uVar1,1,0,param_4,param_5);
    }
    if (piVar2 == (int *)0x0) {
      lVar3 = -0x7ff8fff2;
      goto LAB_82e4a710;
    }
    (**(code **)(*piVar2 + 4))(piVar2);
    lVar3 = fn_82E4A178(param_1,param_2,param_3,0,piVar2);
    if ((-1 < lVar3) && (lVar3 = fn_82E4A558(piVar2), -1 < lVar3)) {
      *(ulonglong *)(param_1 + 200) = (ulonglong)(uint)piVar2[0x10] + *(longlong *)(param_1 + 200);
      goto LAB_82e4a6ec;
    }
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
LAB_82e4a710:
  fn_82E50F10(param_1 + 0x58);
  return lVar3;
}

