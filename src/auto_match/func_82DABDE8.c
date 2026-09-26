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
extern int fn_82D8E878();
extern int fn_82DAC678();
extern int fn_82DBBA90();
extern int fn_82DC7748();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int uStack_50;


longlong fn_82DABDE8(int param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  char acStack_60 [16];
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  iVar6 = *(int *)(param_1 + 0x28);
  iVar8 = 0;
  uStack_50 = 0;
  bVar2 = *(byte *)((param_3 & 0xffff) + *(int *)(param_1 + 0xc));
  *(undefined1 *)((param_3 & 0xffff) + *(int *)(param_1 + 0xc)) = 0xff;
  acStack_60[0] = '\0';
  uVar4 = *(ushort *)(iVar6 + 4);
  bVar1 = uVar4 == 2;
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  if (bVar1) {
    iVar8 = 0x20;
  }
  iStack_48 = bVar1 + 1;
  iStack_4c = iVar8 + 0x30;
  if ((uVar4 & 1) == 0) {
    iStack_4c = iVar8 + 0x40;
  }
  iStack_44 = bVar1 + 1;
  fn_82DAC678(iVar6,bVar2);
  iVar6 = (uint)*(byte *)(iVar6 + 10) * (int)(short)(ushort)bVar2 +
          (uint)*(ushort *)(iVar6 + 6) * 0x20 + iVar6;
  *(byte *)(iVar6 + 0x3f) = *(byte *)(iVar6 + 0x3f) & 0xfd;
  iVar6 = fn_82DC7748(*(undefined4 *)(param_1 + 0x28),1,acStack_60);
  *(int *)(param_1 + 0x28) = iVar6;
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x10);
  lVar9 = uVar7 - 1;
  if (-1 < lVar9) {
    do {
      bVar3 = *(byte *)(*(int *)(param_1 + 0xc) + (int)lVar9);
      if ((bVar3 != 0xff) && (bVar2 < bVar3)) {
        *(byte *)(*(int *)(param_1 + 0xc) + (int)lVar9) = bVar3 - 1;
      }
      lVar9 = lVar9 + -1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  fn_82D8E878(param_2,*(undefined4 *)(param_1 + 0x24),&uStack_50);
  if (acStack_60[0] != '\0') {
    fn_82DBBA90(*(undefined4 *)(param_1 + 0x24),uVar5,*(int *)(param_1 + 0x28),
                 *(undefined2 *)(*(int *)(param_1 + 0x28) + 2));
    *(uint *)(param_1 + 0x2c) = (uint)*(ushort *)(*(int *)(param_1 + 0x28) + 2);
  }
  *(ushort *)(iVar6 + 0x10) = *(ushort *)(iVar6 + 0x10) | 5;
  return (ulonglong)uVar4 - 1;
}

