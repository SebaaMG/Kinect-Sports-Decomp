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
extern unsigned int lbl_82161168;
extern unsigned int lbl_821611A8;


void fn_82F076C8(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x6d54) != 0) && (*(int *)(param_1 + 0x7b38) == 0)) {
    uVar2 = *(undefined4 *)(&lbl_821611A8 + *(int *)(param_2 + 100) * 4);
    *(undefined4 *)(param_2 + 0x6c) = uVar2;
    *(undefined4 *)(param_2 + 0x70) = uVar2;
    return;
  }
  uVar1 = *(ushort *)(&lbl_82161168 + *(int *)(param_2 + 100) * 2);
  *(uint *)(param_2 + 0x6c) = (uint)uVar1;
  *(uint *)(param_2 + 0x70) = (uint)uVar1;
  return;
}

