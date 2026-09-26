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
extern unsigned int lbl_82017D28;


void fn_827CCF90(int param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  iVar2 = 0;
  uVar3 = (param_2 & 0x7fffff) * 0x200 - 0x200;
  do {
    iVar5 = 0;
    lVar7 = 0x10;
    do {
      trapWord(6,uVar3,0);
      uVar6 = (ulonglong)(byte)(&lbl_82017D28)[iVar2 + iVar5] * -0x1fe + 0xfe01;
      trapWord(5,uVar3 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f) - 1),0xffff);
      iVar4 = iVar2 + iVar5;
      iVar5 = iVar5 + 1;
      *(int *)(iVar4 * 4 + iVar1) = (int)uVar6 / (int)uVar3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    iVar2 = iVar2 + 0x10;
  } while (iVar2 < 0x100);
  return;
}

