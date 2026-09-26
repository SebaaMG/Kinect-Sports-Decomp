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
extern unsigned int *auStack_40;
extern int fn_82F8EE48();
extern int fn_82F8F2E0();
extern int fn_82F8F580();
extern int fn_82F8F648();
extern int fn_82F8F670();
extern int fn_82F8FB10();
extern int fn_82F8FBA8();
extern int fn_82F8FF08();
extern int fn_82F8FF48();
extern int fn_82F8FFA8();
extern int fn_82F92810();
extern unsigned int iStack00000014;
extern unsigned int uStack00000018;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_2c;
extern unsigned int uStack_3c;


void fn_82F8F6B0(int param_1,ulonglong param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  longlong lVar2;
  undefined4 uVar5;
  int iStack00000014;
  ulonglong uStack00000018;
  uint uStack00000024;
  undefined4 uStack0000002c;
  undefined1 auStack_40 [4];
  uint uStack_3c;
  uint uStack_2c;
  
  iStack00000014 = param_1;
  uStack00000018 = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack_2c = fn_82F8F2E0(param_1);
  if (uStack00000024 != 0) {
    iVar3 = fn_82F8EE48(iStack00000014);
    iVar4 = fn_82F8F648(iStack00000014);
    if ((uint)(iVar4 - iVar3) < uStack00000024) {
      fn_82F8FB10();
    }
    else {
      iVar4 = fn_82F8EE48(iStack00000014);
      iVar3 = iStack00000014;
      if (uStack_2c < iVar4 + uStack00000024) {
        lVar2 = fn_82F8F648(iStack00000014);
        if ((lVar2 - (ulonglong)uStack_2c / 2 & 0xffffffff) < (ulonglong)uStack_2c) {
          uStack_2c = 0;
        }
        else {
          uStack_2c = uStack_2c + uStack_2c / 2;
        }
        uStack_3c = uStack_2c;
        iVar3 = fn_82F8EE48(iStack00000014);
        if (uStack_2c < iVar3 + uStack00000024) {
          iVar3 = fn_82F8EE48(iStack00000014);
          uStack_3c = iVar3 + uStack00000024;
        }
        iVar3 = fn_82F8FBA8(iStack00000014,uStack_3c,0);
        uVar5 = fn_82F8FF08(iStack00000014,*(undefined4 *)(iStack00000014 + 4),
                                  uStack00000018 & 0xffffffff,iVar3);
        uVar5 = fn_82F8F580(iStack00000014,uVar5,uStack00000024,auStack_40);
        fn_82F8FF08(iStack00000014,uStack00000018 & 0xffffffff,
                          *(undefined4 *)(iStack00000014 + 8),uVar5);
        iVar4 = fn_82F8EE48(iStack00000014);
        uStack00000024 = uStack00000024 + iVar4;
        if (*(int *)(iStack00000014 + 4) != 0) {
          fn_82F8F670(iStack00000014,*(undefined4 *)(iStack00000014 + 4),
                            *(undefined4 *)(iStack00000014 + 8));
          fn_82F92810(iStack00000014,*(undefined4 *)(iStack00000014 + 4),
                            *(int *)(iStack00000014 + 0xc) - *(int *)(iStack00000014 + 4) >> 2);
        }
        *(uint *)(iStack00000014 + 0xc) = iVar3 + uStack_3c * 4;
        *(uint *)(iStack00000014 + 8) = iVar3 + uStack00000024 * 4;
        *(int *)(iStack00000014 + 4) = iVar3;
      }
      else if ((uint)(*(int *)(iStack00000014 + 8) - (((U64)(uStack00000018) >> 32) & 0xFFFFFFFF) >> 2) < uStack00000024) {
        fn_82F8FF08(iStack00000014,uStack00000018 & 0xffffffff,
                          *(undefined4 *)(iStack00000014 + 8),
                          (uStack00000018 & 0xffffffff) +
                          ((ulonglong)uStack00000024 & 0x3fffffff) * 4);
        fn_82F8F580(iStack00000014,*(undefined4 *)(iStack00000014 + 8),
                          (ulonglong)uStack00000024 -
                          (longlong)(*(int *)(iStack00000014 + 8) - (((U64)(uStack00000018) >> 32) & 0xFFFFFFFF) >> 2),
                          auStack_40);
        *(uint *)(iStack00000014 + 8) = *(int *)(iStack00000014 + 8) + uStack00000024 * 4;
        fn_82F8FF48(uStack00000018 & 0xffffffff,
                          (ulonglong)*(uint *)(iStack00000014 + 8) +
                          ((ulonglong)uStack00000024 & 0x3fffffff) * -4,auStack_40);
      }
      else {
        uVar1 = *(uint *)(iStack00000014 + 8);
        uVar5 = fn_82F8FF08(iStack00000014,
                                  (ulonglong)uVar1 + ((ulonglong)uStack00000024 & 0x3fffffff) * -4,
                                  uVar1,*(undefined4 *)(iStack00000014 + 8));
        *(undefined4 *)(iVar3 + 8) = uVar5;
        fn_82F8FFA8(uStack00000018 & 0xffffffff,
                          (ulonglong)uVar1 + ((ulonglong)uStack00000024 & 0x3fffffff) * -4,uVar1);
        fn_82F8FF48(uStack00000018 & 0xffffffff,
                          (uStack00000018 & 0xffffffff) +
                          ((ulonglong)uStack00000024 & 0x3fffffff) * 4,auStack_40);
      }
    }
  }
  return;
}

