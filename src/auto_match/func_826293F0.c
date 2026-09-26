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
extern int fn_82526AF8();
extern unsigned int lbl_83265988;
extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A3C;


undefined8 fn_826293F0(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 4) == 0x68) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else {
    if (*(int *)(iVar1 + 4) != 0x80) {
      return 4;
    }
    lVar3 = fn_82526AF8((ulonglong)lbl_83265A38 - 1,(ulonglong)lbl_83265A3C + 4,iVar1 + 8);
    uVar4 = -(ulonglong)(lVar3 != -1) & lVar3 + 1U;
    if ((uVar4 != 0) &&
       (uVar2 = (uint)uVar4,
       *(uint *)(iVar1 + 0x48) !=
       (uint)(((uint)*(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + (uVar2 >> 3)) &
              1 << (uVar2 & 7)) != 0))) {
      return 0;
    }
  }
  return 3;
}

