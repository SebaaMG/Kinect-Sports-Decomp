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
extern unsigned int lbl_8317F3F8;


void fn_82CF0460(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  longlong lVar5;
  
  uVar2 = 0;
  puVar1 = (&lbl_8317F3F8)[param_1];
  do {
    puVar3 = (undefined4 *)(uVar2 + param_3);
    lVar5 = 7;
    piVar4 = (int *)(puVar1 + 0x18);
    do {
      if ((*piVar4 << (uVar2 & 0x3f) & 0xf0000000U) != 0) {
        *puVar3 = 0xff000000;
      }
      piVar4 = piVar4 + -1;
      puVar3 = puVar3 + param_2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    uVar2 = uVar2 + 4;
  } while ((int)uVar2 < 0x20);
  return;
}

