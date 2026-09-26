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
extern int fn_82FAB9C0();
extern int fn_83013B98();
extern unsigned int lbl_832642E0;


undefined8 fn_8300BF30(int *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_2 & 0xffffffff) == 0) {
    uVar1 = 0xe;
  }
  else {
    piVar2 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,param_2);
    if (piVar2 == (int *)0x0) {
      uVar1 = 0xf;
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x140))(param_1,piVar2);
      if ((int)uVar1 == 1) {
        iVar3 = fn_83013B98(param_1 + 0x12,param_2,piVar2);
        if (iVar3 == 0) {
          uVar1 = 2;
        }
        else {
          (**(code **)(*piVar2 + 0x2c))(piVar2,param_1);
          (**(code **)(*param_1 + 4))(param_1);
        }
      }
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  return uVar1;
}

