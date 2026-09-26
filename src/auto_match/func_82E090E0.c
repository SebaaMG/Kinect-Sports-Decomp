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
extern int fn_82CEAC20();
extern int fn_82CEACC8();
extern unsigned int *lbl_832654E4;
extern unsigned int *lbl_832654E8;
extern unsigned int *lbl_832654EC;


void fn_82E090E0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  
  piVar1 = lbl_832654E4;
  iVar3 = *lbl_832654E4;
  uVar2 = fn_82CEAC20(param_3);
  (**(code **)(iVar3 + 0x1c))(piVar1,param_3,uVar2);
  (**(code **)(*lbl_832654E8 + 0xc))(lbl_832654E8,param_2);
  iVar3 = fn_82CEACC8(param_3);
  if (0 < iVar3) {
    (**(code **)(*lbl_832654EC + 0xc))(lbl_832654EC,*(undefined4 *)(param_2 + 0xc),param_3);
  }
  return;
}

