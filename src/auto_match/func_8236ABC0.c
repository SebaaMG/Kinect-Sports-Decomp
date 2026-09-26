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
extern int fn_8225F160();


undefined4 fn_8236ABC0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x20) + param_2 * 4);
  if (piVar1[1] - *piVar1 >> 2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = fn_8225F160();
    if (*(int *)(iVar2 + 8) == 0) {
      iVar2 = 1 - *(int *)(param_1 + 0x9ac);
    }
    else {
      iVar2 = 0;
    }
    uVar3 = *(undefined4 *)(iVar2 * 4 + *piVar1);
  }
  return uVar3;
}

