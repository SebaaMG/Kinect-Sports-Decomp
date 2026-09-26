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
extern int fn_8267B890();


void fn_82693D18(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  iVar1 = fn_8267B890(*(undefined4 *)(param_1 + 4),0x7f0,0);
  puVar2 = (undefined4 *)(iVar1 + 7U & 0xfffffff8);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[0x1f9] = iVar1;
    puVar2[0x1f8] = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 **)(param_1 + 0x14) = puVar2;
    lVar3 = 0xa8;
    do {
      *puVar2 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 **)(param_1 + 0x10) = puVar2;
      puVar2 = puVar2 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

