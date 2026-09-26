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
extern unsigned int *auStack_1c;
extern int fn_82A1E810();
extern int fn_82E65FD0();
extern int fn_82E66BC0();
extern unsigned int uStack_20;


void fn_82E661E8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 auStack_1c [3];
  
  piVar1 = *(int **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  if (piVar1 == (int *)0x0) {
    iVar2 = fn_82E65FD0(param_1);
    if (-1 < iVar2) {
      fn_82A1E810(*(undefined4 *)(param_1 + 0x24));
    }
  }
  else {
    auStack_1c[0] = 0;
    uStack_20 = 0;
    iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,auStack_1c,&uStack_20);
    if (iVar2 < 0) {
      uStack_20 = 1;
    }
    fn_82E66BC0(uStack_20,param_1);
  }
  return;
}

