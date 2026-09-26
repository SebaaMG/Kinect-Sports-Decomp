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
extern int fn_82876B90();
extern int fn_82F68CC0();
extern int fn_82F6E8D4();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


undefined8 fn_82869890(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char *pcVar5;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar6;
  
  puVar1 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x80);
  *puVar1 = register0x0000000c;
  lVar3 = param_1 + 0x318;
  do {
    pcVar5 = (char *)lVar3;
    lVar3 = lVar3 + 1;
  } while (*pcVar5 != '\0');
  uVar4 = (lVar3 - (param_1 + 0x318)) - 1;
  uVar6 = uVar4 & 0xffffffff;
  if (uVar6 == 0) {
    lVar3 = 0;
  }
  else {
    uVar6 = -uVar6 & 0xfffffff0;
    fn_82F6E8D4();
    lVar3 = (ZEXT48(&stack0x00000000) - 0x80) + uVar6;
    *(undefined4 *)lVar3 = *puVar1;
    lVar3 = lVar3 + 0x50;
    if (lVar3 == 0) {
      return 2;
    }
    fn_82F68CC0(lVar3);
    *(undefined1 *)((int)lVar3 + (int)uVar4 + -1) = 0;
  }
  uVar2 = fn_82876B90(param_2 + 8,lVar3);
  return uVar2;
}

