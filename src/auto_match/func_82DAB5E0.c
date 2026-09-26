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
extern int fn_82DAD448();
extern int fn_82DAF190();
extern unsigned int stack0x00000000;


void fn_82DAB5E0(int param_1,int param_2,int param_3,undefined8 param_4,int *param_5)

{
  short sVar1;
  ulonglong uVar2;
  longlong lVar3;
  ushort uVar5;
  longlong lVar4;
  
  uVar2 = ZEXT48(&stack0x00000000);
  sVar1 = *(short *)(param_1 + 0x18);
  *(short *)(param_1 + 0x18) = sVar1 + -1;
  if (sVar1 == 0) {
    param_2 = *(char *)(param_2 + 0x10) + param_2;
    param_3 = *(char *)(param_3 + 0x10) + param_3;
    uVar5 = *(ushort *)(param_2 + 0xaa);
    if (*(ushort *)(param_3 + 0xaa) <= *(ushort *)(param_2 + 0xaa)) {
      uVar5 = *(ushort *)(param_3 + 0xaa);
    }
    *(ushort *)(param_1 + 0x18) = uVar5;
    lVar3 = (longlong)(((*param_5 - (int)param_5) + -0x10) / 0x30);
    if (-1 < (longlong)(lVar3 - 1U)) {
      lVar4 = (lVar3 - 1U & 0x3fffffff) * 4 + (uVar2 - 0x41c);
      do {
        lVar4 = lVar4 + -4;
        *(undefined4 *)lVar4 = 0;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    fn_82DAF190(*(undefined4 *)(param_1 + 0xc),uVar2 - 0x430);
    if (*(short *)(param_2 + 0x204) != 0) {
      fn_82DAD448(param_2,uVar2 - 0x430);
    }
    if (*(short *)(param_3 + 0x204) != 0) {
      fn_82DAD448(param_3,uVar2 - 0x430);
    }
  }
  return;
}

