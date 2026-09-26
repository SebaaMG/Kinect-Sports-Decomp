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


void fn_826E7B08(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x34);
  *(undefined1 *)(param_1 + 0x15) = 0;
  iVar3 = iVar1 - *(int *)(param_1 + 0x30);
  iVar2 = (int)param_2;
  if ((iVar2 < iVar3) || (iVar1 <= iVar2)) {
    if (((*(char *)(param_1 + 0x38) != '\0') || (*(int *)(param_1 + 0x2c) + iVar3 != iVar2)) &&
       (iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x38))
                          (*(int **)(param_1 + 0x10),param_2,0), -1 < iVar1)) {
      *(int *)(param_1 + 0x34) = iVar2;
      *(undefined1 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x2c) = (*(int *)(param_1 + 0x30) - iVar1) + iVar2;
  }
  return;
}

