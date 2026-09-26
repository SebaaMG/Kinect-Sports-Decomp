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
extern int fn_826824B0();
extern int fn_826A1D48();
extern int fn_826AB6F8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_826C3490(int param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iStack_30;
  int iStack_2c;
  byte bStack_28;
  
  (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(param_1 + 0x10);
  fn_826AB6F8(&iStack_30,param_3 + 0x10,param_2);
  iVar1 = 0;
  if (iStack_30 != 0) {
    fn_826A1D48(param_1 + 0x10,param_2,&iStack_30);
    iVar1 = iStack_30;
  }
  if (((bStack_28 & 2) == 0) && (iVar1 != 0)) {
    fn_826824B0();
  }
  iStack_30 = 0;
  if (((bStack_28 & 1) == 0) && (iStack_2c != 0)) {
    fn_826824B0();
  }
  return;
}

