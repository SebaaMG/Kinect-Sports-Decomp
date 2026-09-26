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
extern int fn_82FFCAC8();
extern unsigned int lbl_832642E0;


undefined8 fn_82FFD2A8(undefined8 param_1)

{
  int *piVar2;
  undefined8 uVar1;
  
  piVar2 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 0x674);
  if (piVar2 == (int *)0x0) {
    uVar1 = 0xf;
  }
  else {
    fn_82FFCAC8(param_1,piVar2,0);
    (**(code **)(*piVar2 + 8))(piVar2);
    uVar1 = 1;
  }
  return uVar1;
}

