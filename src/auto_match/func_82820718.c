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
extern int fn_82814D10();
extern int fn_82814D28();
extern int fn_82820EF8();


void fn_82820718(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar4 = 0;
  if (*(char *)(iVar2 + 0x51) != '\0') {
    iVar5 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x30) + iVar5;
      *(undefined4 *)(iVar6 + 0x15) = 0;
      *(undefined4 *)(iVar6 + 0x19) = 0;
      *(undefined4 *)(iVar6 + 0xd) = 0;
      iVar1 = fn_82814D10(param_1);
      if (iVar1 != 0) {
        fn_82820EF8(iVar6 + 0xd,4);
        fn_82820EF8(iVar6,4);
        fn_82820EF8(iVar6 + 5,4);
        fn_82820EF8(iVar6 + 9,4);
        fn_82820EF8(iVar6 + 0x1d,4);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x21;
    } while (uVar4 < *(byte *)(iVar2 + 0x51));
  }
  puVar3 = (undefined4 *)(iVar2 + 0x50);
  lVar7 = 2;
  do {
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3 = puVar3 + 5;
    *puVar3 = 0;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar2 = fn_82814D10(param_1);
  if (iVar2 != 0) {
    fn_82814D28(param_1);
  }
  return;
}

