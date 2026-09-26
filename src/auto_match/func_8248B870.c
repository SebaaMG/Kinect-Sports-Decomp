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
extern unsigned int *auStack_2c;
extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int iStack_24;
extern unsigned int uStack_30;


undefined8 fn_8248B870(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  int *piStack_28;
  int iStack_24;
  
  uStack_30 = 0;
  fn_82365BD8(&piStack_28,param_1 + 0x10);
  bVar2 = piStack_28 == (int *)0x0;
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  if (bVar2) {
    uVar1 = 0;
  }
  else {
    fn_82365BD8(&piStack_28,param_1 + 0x10);
    uVar1 = (**(code **)(*piStack_28 + 0x14))(piStack_28,&uStack_30,auStack_2c);
    if (iStack_24 != 0) {
      fn_822315A0(iStack_24);
    }
  }
  return uVar1;
}

