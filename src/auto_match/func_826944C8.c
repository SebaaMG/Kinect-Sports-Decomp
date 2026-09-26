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
extern unsigned int *auStack_20;
extern int fn_82693E90();
extern int fn_826941E8();


void fn_826944C8(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint auStack_20 [2];
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 != param_1) && (uVar1 != 0)) {
    lVar3 = (ulonglong)*(uint *)(uVar1 + 8) - 1;
    *(int *)(uVar1 + 8) = (int)lVar3;
    if (lVar3 == 0) {
      ((int (*)())fn_826944C8)();
    }
  }
  uVar2 = *(undefined4 *)(param_1 & 0xfffffc00);
  auStack_20[0] = param_1;
  fn_826941E8(uVar2,auStack_20);
  fn_82693E90(uVar2,param_1);
  return;
}

