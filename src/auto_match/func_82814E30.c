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
extern unsigned int *auStack_50;
extern int fn_82814D28();
extern int fn_82820228();
extern int (*lbl_8320A4F4)();


undefined8 fn_82814E30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint auStack_50 [20];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x79) = 0;
  if ((*(byte *)(iVar1 + 0x50) & 1) != 1) {
    fn_82814D28();
  }
  uVar5 = 0;
  lVar6 = (((ulonglong)*(uint *)(param_1 + 4) + (ulonglong)*(uint *)(iVar1 + 0x1c)) - 1 &
          ~((ulonglong)*(uint *)(param_1 + 4) - 1)) - (ulonglong)*(uint *)(iVar1 + 0x1c);
  do {
    iVar7 = uVar5 * 0x14 + iVar1;
    if (*(int *)(iVar7 + 0x58) == 0) {
      return 0;
    }
    *(char *)(param_1 + 0x79) = (char)uVar5;
    *(int *)(iVar7 + 0x60) = (int)lVar6;
    uVar4 = (((ulonglong)*(uint *)(iVar7 + 0x68) - lVar6) + (ulonglong)*(uint *)(param_1 + 4)) - 1 &
            ~((ulonglong)*(uint *)(param_1 + 4) - 1);
    *(int *)(iVar7 + 100) = (int)uVar4;
    lVar6 = (uVar4 - *(uint *)(iVar7 + 0x68)) + lVar6;
    if (iVar2 == 0) {
      auStack_50[0] = *(uint *)(iVar7 + 0x58);
    }
    else {
      fn_82820228(iVar2,uVar5 + 1,auStack_50);
    }
    if (lbl_8320A4F4 == (code *)0x0) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x1000;
      return 1;
    }
    iVar3 = (*lbl_8320A4F4)(*(undefined4 *)(param_1 + 0x18),lVar6 + 0x44 + (ulonglong)auStack_50[0],
                            4);
    *(int *)(iVar7 + 0x5c) = iVar3;
    if (iVar3 == 0) {
      return 1;
    }
    uVar5 = uVar5 + 1 & 0xff;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  } while (uVar5 < 2);
  return 0;
}

