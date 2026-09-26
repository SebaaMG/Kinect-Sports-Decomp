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
extern int fn_82820290();
extern int fn_82F68CC0();


void fn_828148D8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  uint auStack_50 [20];
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar6 = 0;
  puVar8 = (uint *)0x0;
  do {
    iVar5 = uVar6 * 0x14 + *(int *)(param_1 + 0x1c);
    if (*(int *)(iVar5 + 0x60) != 0) {
      uVar7 = (ulonglong)*(uint *)(iVar5 + 0x5c);
      if (iVar1 != 0) {
        fn_82820290(iVar1,uVar6 + 1,auStack_50);
        uVar7 = auStack_50[0] + uVar7;
      }
      uVar4 = (ulonglong)*(uint *)(iVar5 + 0x58);
      if (*(uint *)(iVar5 + 0x68) < uVar4) {
        uVar7 = ((uVar4 - *(uint *)(iVar5 + 0x68)) + (ulonglong)*(uint *)(iVar5 + 0x60) + uVar7 +
                 0x43 & 0xfffffffc) - (ulonglong)*(uint *)(iVar5 + 0x60);
      }
      if (puVar8 == (uint *)0x0) {
        iVar9 = *(int *)(iVar2 + 0x1c) + iVar2;
      }
      else {
        iVar9 = puVar8[1] + *puVar8;
        if (iVar1 != 0) {
          fn_82820290(iVar1,uVar6,auStack_50);
          iVar9 = iVar9 + auStack_50[0];
        }
        uVar3 = puVar8[4];
        if (uVar3 < *puVar8) {
          iVar9 = (((puVar8[2] - uVar3) + iVar9 + 0x43 & 0xfffffffc) - puVar8[2]) + uVar3;
        }
      }
      fn_82F68CC0(uVar7,iVar9,*(undefined4 *)(iVar5 + 0x60));
    }
    uVar6 = uVar6 + 1 & 0xff;
    puVar8 = (uint *)(iVar5 + 0x58);
  } while (uVar6 < 2);
  return;
}

