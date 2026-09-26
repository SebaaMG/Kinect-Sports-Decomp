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


undefined8 fn_8300C1B8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x48);
  uVar1 = 1;
  if (iVar2 != *(int *)(param_1 + 0x4c)) {
    do {
      uVar1 = (**(code **)(**(int **)(iVar2 + 4) + 0x28))
                        (*(int **)(iVar2 + 4),param_2,param_3,param_4);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      iVar2 = iVar2 + 8;
    } while (iVar2 != *(int *)(param_1 + 0x4c));
  }
  return uVar1;
}

