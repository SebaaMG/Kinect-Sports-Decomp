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
extern int fn_8265CA20();
extern int fn_82815130();
extern int fn_828260B8();
extern int fn_828294C8();


void fn_828282D8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    *(int *)(*(int *)(param_1 + 8) + 0xac) =
         *(int *)(*(int *)(param_1 + 8) + 0xac) - (piVar1[1] - *piVar1) / 0x14;
    iVar2 = *(int *)(param_1 + 0x48);
    if (iVar2 != 0) {
      fn_82815130(iVar2);
      fn_8265CA20(iVar2);
    }
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    fn_828260B8(*(int *)(param_1 + 0x4c),1);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    fn_828294C8(*(int *)(param_1 + 0x50),1);
  }
  return;
}

