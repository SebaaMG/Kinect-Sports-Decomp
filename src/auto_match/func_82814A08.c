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
extern unsigned int *auStack_60;
extern int fn_82820290();
extern int fn_82F68CC0();


void fn_82814A08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint auStack_60 [24];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(char *)(iVar1 + 0x51) != '\0') {
    uVar7 = 0;
    iVar6 = 0;
    do {
      iVar9 = uVar7 * 0x21 + *(int *)(param_1 + 0x30);
      if (*(int *)(iVar9 + 0x15) != 0) {
        lVar8 = (ulonglong)*(uint *)(iVar9 + 0x11) + (ulonglong)*(uint *)(iVar9 + 0xd);
        if (iVar2 != 0) {
          fn_82820290(iVar2,uVar7 + 3,auStack_60);
          lVar8 = (ulonglong)auStack_60[0] + lVar8;
        }
        if ((ulonglong)*(uint *)(iVar9 + 0x1d) < (ulonglong)*(uint *)(iVar9 + 9)) {
          lVar8 = (((ulonglong)*(uint *)(iVar9 + 9) - (ulonglong)*(uint *)(iVar9 + 0x1d)) +
                   (ulonglong)*(uint *)(iVar9 + 0x15) + lVar8 + 0x43 & 0xfffffffc) -
                  (ulonglong)*(uint *)(iVar9 + 0x15);
        }
        if (iVar6 == 0) {
          iVar6 = (uint)*(byte *)(param_1 + 0x79) * 0x14 + *(int *)(param_1 + 0x1c);
          uVar5 = (ulonglong)*(uint *)(iVar6 + 0x58);
          uVar3 = *(uint *)(iVar6 + 0x68);
          uVar4 = *(uint *)(iVar6 + 0x60);
          lVar11 = *(uint *)(iVar6 + 0x5c) + uVar5;
        }
        else {
          uVar5 = (ulonglong)*(uint *)(iVar6 + 9);
          uVar3 = *(uint *)(iVar6 + 0x1d);
          uVar4 = *(uint *)(iVar6 + 0x15);
          lVar11 = (ulonglong)*(uint *)(iVar6 + 0x11) + (ulonglong)*(uint *)(iVar6 + 0xd) + uVar5;
        }
        uVar10 = (ulonglong)uVar3;
        if (iVar2 != 0) {
          fn_82820290(iVar2,uVar7 + 2,auStack_60);
          lVar11 = lVar11 + (ulonglong)auStack_60[0];
        }
        if (uVar10 < uVar5) {
          lVar11 = (((uVar4 - uVar10) + lVar11 + 0x43 & 0xfffffffc) - (ulonglong)uVar4) + uVar10;
        }
        fn_82F68CC0(lVar8,lVar11,*(undefined4 *)(iVar9 + 0x15));
      }
      uVar7 = uVar7 + 1 & 0xff;
      iVar6 = iVar9;
    } while (uVar7 < *(byte *)(iVar1 + 0x51));
  }
  return;
}

