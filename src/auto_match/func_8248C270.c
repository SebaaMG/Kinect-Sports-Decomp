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
extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int iStack_2c;


undefined8 fn_8248C270(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piStack_30;
  int iStack_2c;
  
  iVar2 = *(int *)(param_1 + 0x30);
  while( true ) {
    if (iVar2 == *(int *)(param_1 + 0x34)) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x18) == param_2) break;
    iVar2 = iVar2 + 0x20;
  }
  fn_82365BD8(&piStack_30,iVar2 + 0x10);
  bVar3 = piStack_30 != (int *)0x0;
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  if (bVar3) {
    fn_82365BD8(&piStack_30,iVar2 + 0x10);
    iVar1 = (**(code **)(*piStack_30 + 8))();
    if (iStack_2c != 0) {
      fn_822315A0(iStack_2c);
    }
    if (iVar1 != 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 1;
    }
  }
  return 1;
}

