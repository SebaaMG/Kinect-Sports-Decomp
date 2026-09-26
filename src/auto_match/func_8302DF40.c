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
extern int fn_8302D408();


undefined8 fn_8302DF40(int param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar2;
  undefined8 uVar1;
  
  if ((param_3 & 0xff) != 0x32) {
    *(byte *)(param_1 + 0x11f) = *(byte *)(param_1 + 0x11f) | 0x10;
  }
  if (((*(byte *)(param_1 + 0x11f) & 0xe0) == 0x20) ||
     (cVar2 = (**(code **)(**(int **)(param_1 + 0x88) + 0x20))(*(int **)(param_1 + 0x88),param_2),
     cVar2 == '\0')) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x88) + 0x14))
                      (*(int **)(param_1 + 0x88),param_2,param_3);
    if ((int)uVar1 == 1) {
      fn_8302D408(param_1);
    }
  }
  else {
    uVar1 = 0x23;
  }
  return uVar1;
}

