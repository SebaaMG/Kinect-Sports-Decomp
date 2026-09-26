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
extern int fn_82FACCE8();
extern int fn_82FADD68();
extern unsigned int lbl_832642E0;


ulonglong fn_82FAAA00(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar2;
  ulonglong uVar1;
  undefined4 uVar3;
  
  piVar2 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4);
  uVar1 = 0;
  if (piVar2 == (int *)0x0) {
    *param_3 = 0;
  }
  else {
    uVar1 = fn_82FADD68(piVar2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),
                              param_1 + 0x10);
    if ((uVar1 & 0xffffffff) != 0) {
      uVar3 = fn_82FACCE8(uVar1,0,1);
      *param_3 = uVar3;
    }
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return uVar1;
}

