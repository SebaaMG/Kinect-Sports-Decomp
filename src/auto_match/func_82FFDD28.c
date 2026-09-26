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
extern int fn_82FF8530();
extern int fn_82FFDC78();
extern int fn_82FFDE60();
extern int fn_8302B558();
extern int iRam83264324;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832645A4;


void fn_82FFDD28(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  lbl_832645A4 = iRam83264324;
  if (iRam83264324 == -1) {
    lbl_832645A4 = lbl_831BC768;
  }
  fn_8302B558(param_1 + 0x39c);
  iVar1 = fn_82FF8530(param_1 + 4);
  iVar2 = lbl_831BC768;
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x398) = 0;
    *(int *)(param_1 + 0x90) = iVar2;
    puVar3 = (undefined4 *)(param_1 + 0x90);
    lVar4 = 0xc1;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      iVar2 = lbl_831BC768;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(undefined4 *)(param_1 + 0x49c) = 0;
    puVar3 = (undefined4 *)(param_1 + 0x41c);
    *(int *)(param_1 + 0x41c) = iVar2;
    lVar4 = 0x1f;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    iVar2 = fn_82FFDE60(param_1 + 0x6c,10,0xffffffffffffffff,lbl_831BC768);
    if (iVar2 == 1) {
      fn_82FFDC78(param_1);
    }
  }
  return;
}

