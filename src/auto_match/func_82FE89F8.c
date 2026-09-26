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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82F664B0();
extern int fn_82F6E8D4();
extern int fn_82FE6540();
extern int fn_82FE88A0();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


void fn_82FE89F8(ulonglong param_1)

{
  undefined4 *puVar1;
  char *pcVar3;
  ulonglong uVar2;
  longlong lVar4;
  
  puVar1 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x70);
  *puVar1 = register0x0000000c;
  uVar2 = param_1;
  if ((param_1 & 0xffffffff) != 0) {
    do {
      pcVar3 = (char *)uVar2;
      uVar2 = uVar2 + 1;
    } while (*pcVar3 != '\0');
    uVar2 = -(((uVar2 - param_1) - 1 & 0xffffffff) + 1) & 0xfffffff0;
    fn_82F6E8D4();
    lVar4 = (ZEXT48(&stack0x00000000) - 0x70) + uVar2;
    *(undefined4 *)lVar4 = *puVar1;
    lVar4 = lVar4 + 0x50;
    fn_82F664B0(lVar4);
    fn_82FE6540(lVar4);
    fn_82FE88A0();
  }
  return;
}

