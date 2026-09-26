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
extern int fn_82CE4040();
extern int fn_82CE4118();


void fn_82E05FE0(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  
  if (((ulonglong)*(uint *)(param_1 + 0x18) == (param_2 & 0xffffffff)) &&
     ((ulonglong)*(uint *)(param_1 + 0x18) != (param_3 & 0xffffffff))) {
    if ((param_3 & 0xffffffff) != 0) {
      fn_82CE4040(param_3);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      fn_82CE4118();
    }
    *(int *)(param_1 + 0x18) = (int)param_3;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar2 = 0;
    do {
      fn_82E05FE0(*(undefined4 *)(*(int *)(param_1 + 0x28) + iVar2),param_2,param_3);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x2c));
  }
  return;
}

