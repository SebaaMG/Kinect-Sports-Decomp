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
extern int fn_82D92F30();
extern int fn_82DBBA90();
extern int fn_82DC7648();
extern int fn_82DC8200();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_821AAD20;


undefined2 fn_82DC7DD0(int param_1,undefined8 param_2,int *param_3,int *param_4)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  char acStack_60 [16];
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  iVar9 = *(int *)(param_1 + 0x28);
  uVar3 = *(ushort *)(iVar9 + 4);
  *(ushort *)(iVar9 + 0x10) = *(ushort *)(iVar9 + 0x10) | 4;
  acStack_60[0] = '\0';
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  iVar7 = fn_82DC7648(uVar4,acStack_60);
  *(int *)(param_1 + 0x28) = iVar7;
  uVar6 = lbl_821AAD20;
  bVar2 = *(byte *)(iVar7 + 10);
  iVar9 = (uint)*(ushort *)(iVar7 + 6) * 0x20 + (uint)bVar2 * (uint)uVar3 + iVar7;
  puVar5 = (undefined4 *)(iVar9 + 0x30);
  *puVar5 = lbl_821AAD20;
  *(undefined4 *)(iVar9 + 0x34) = uVar6;
  *(undefined1 *)(iVar9 + 0x3f) = 1;
  if (((uVar3 != 0) && ((*(byte *)((int)puVar5 + (0xf - (uint)bVar2)) & 2) == 0)) &&
     (*(char *)((int)puVar5 + (0xe - (uint)bVar2)) == '\0')) {
    *(undefined1 *)(iVar9 + 0x3f) = 3;
  }
  uVar10 = uVar3 + 1;
  *param_3 = (uint)uVar3 * 0x20 + iVar7 + 0x30;
  *param_4 = (int)puVar5;
  iVar9 = 0;
  iStack_50 = ((int)uVar10 >> 1) * 0x70 + ((uVar10 & 1) + (uVar10 * 2 & 2)) * 0x10 + 0xa0;
  bVar1 = uVar3 == 1;
  if (bVar1) {
    iVar9 = 0x20;
  }
  iStack_48 = bVar1 + 1;
  iStack_4c = iVar9 + 0x30;
  if ((uVar10 & 1) == 0) {
    iStack_4c = iVar9 + 0x40;
  }
  iStack_44 = bVar1 + 1;
  fn_82D92F30(param_2,*(undefined4 *)(param_1 + 0x24),&iStack_50);
  if (acStack_60[0] != '\0') {
    fn_82DBBA90(*(undefined4 *)(param_1 + 0x24),uVar4,*(undefined4 *)(param_1 + 0x28),
                  *(undefined2 *)(iVar7 + 2));
    *(uint *)(param_1 + 0x2c) = (uint)*(ushort *)(iVar7 + 2);
  }
  uVar8 = fn_82DC8200(param_1 + 0xc,(uint)uVar3);
  return uVar8;
}

