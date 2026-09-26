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
extern int fn_82CFBBF0();
extern int fn_82E0E658();
extern int fn_82E14238();
extern unsigned int *lbl_8323FD9C;
extern unsigned int lbl_8323FDE4;


void fn_82E0A398(ulonglong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((param_1 & 0xffffffff) == 0) {
    return;
  }
  uVar1 = fn_82E0E658();
  iVar2 = fn_82CFBBF0(uVar1,param_1);
  if (iVar2 == 0) {
    (**(code **)(*lbl_8323FD9C + 0x10))();
    return;
  }
  fn_82E14238(lbl_8323FDE4,param_1);
  return;
}

