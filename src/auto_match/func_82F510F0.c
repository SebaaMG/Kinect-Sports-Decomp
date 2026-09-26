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
extern int fn_82F4DB48();


void fn_82F510F0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(*(int *)(param_1 + 4) + 0x7d8) = (int)param_2;
  if ((int)param_2 < 6) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
    iVar2 = fn_82F4DB48(param_2);
    if ((*(int *)(iVar1 + 0x28) != iVar2) && (iVar1 != iVar2)) {
      *(int *)(iVar1 + 0x28) = iVar2;
      *(undefined1 *)(iVar1 + 0x34) = 1;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
    if (*(int *)(iVar1 + 0x28) != 0) {
      *(undefined4 *)(iVar1 + 0x28) = 0;
      *(undefined1 *)(iVar1 + 0x34) = 1;
    }
  }
  return;
}

