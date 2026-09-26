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
extern int fn_82F66368();
extern int fn_82F6E8D4();
extern int fn_82FE89F8();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


undefined8 fn_82876968(int param_1,longlong param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  char *pcVar5;
  longlong lVar4;
  ulonglong uVar6;
  longlong lVar7;
  
  puVar2 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x70);
  *puVar2 = register0x0000000c;
  lVar4 = param_2;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    do {
      pcVar5 = (char *)lVar4;
      lVar4 = lVar4 + 1;
    } while (*pcVar5 != '\0');
    lVar4 = ((lVar4 - param_2) - 1U & 0xffffffff) + 1;
    uVar6 = -lVar4 & 0xfffffff0;
    fn_82F6E8D4();
    lVar7 = (ZEXT48(&stack0x00000000) - 0x70) + uVar6;
    *(undefined4 *)lVar7 = *puVar2;
    lVar7 = lVar7 + 0x50;
    fn_82F66368(lVar7,lVar4);
    cVar1 = *(char *)lVar7;
    lVar4 = lVar7;
    while (cVar1 != '\0') {
      if (*(char *)lVar4 == '.') {
        *(char *)lVar4 = '\0';
        break;
      }
      lVar4 = lVar4 + 1;
      cVar1 = *(char *)lVar4;
    }
    uVar3 = fn_82FE89F8(lVar7);
  }
  return uVar3;
}

