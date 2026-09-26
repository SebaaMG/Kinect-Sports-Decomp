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
extern int fn_82930318();
extern int fn_82935088();


int fn_82935158(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_82930318(0x2c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_82935088();
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 4))();
      *(int *)(iVar1 + 0x28) = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  return iVar1;
}

