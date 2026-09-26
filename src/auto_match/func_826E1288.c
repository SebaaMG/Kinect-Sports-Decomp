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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern int fn_8267BE38();
extern int fn_82687270();
extern int fn_8268B330();
extern int fn_826C8C70();
extern int fn_826E0920();
extern int fn_826E7800();
extern int fn_826E8660();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern U64 storeWordConditionalIndexed();


void fn_826E1288(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 *puVar6;
  ulonglong uVar5;
  int iVar8;
  longlong lVar7;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  char in_RESERVE;
  byte in_cr0;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  
  iVar11 = *(int *)(param_1 + 0x314);
  if (iVar11 == 0) {
    iVar11 = param_1 + 0x28;
  }
  *(undefined1 *)(iVar11 + 0x15) = 0;
  if (*(int *)(iVar11 + 0x30) - *(int *)(iVar11 + 0x2c) < 2) {
    fn_826E7800(iVar11,2);
  }
  iVar8 = *(int *)(iVar11 + 0x2c) + 2;
  puVar6 = (undefined1 *)(*(int *)(iVar11 + 0x3c) + *(int *)(iVar11 + 0x2c));
  uVar1 = puVar6[1];
  uVar2 = *puVar6;
  *(int *)(iVar11 + 0x2c) = iVar8;
  *(undefined1 *)(iVar11 + 0x15) = 0;
  uVar10 = CONCAT11(uVar1,uVar2) | 0x50000;
  if (*(int *)(iVar11 + 0x30) - iVar8 < 2) {
    fn_826E7800(iVar11,2);
  }
  iVar8 = *(int *)(iVar11 + 0x2c) + 2;
  puVar6 = (undefined1 *)(*(int *)(iVar11 + 0x3c) + *(int *)(iVar11 + 0x2c));
  uVar1 = puVar6[1];
  uVar2 = *puVar6;
  *(int *)(iVar11 + 0x2c) = iVar8;
  *(undefined1 *)(iVar11 + 0x15) = 0;
  uVar3 = CONCAT11(uVar1,uVar2);
  if (*(int *)(iVar11 + 0x30) - iVar8 < 2) {
    fn_826E7800(iVar11,2);
  }
  puVar6 = (undefined1 *)(*(int *)(iVar11 + 0x3c) + *(int *)(iVar11 + 0x2c));
  uVar1 = puVar6[1];
  uVar2 = *puVar6;
  *(int *)(iVar11 + 0x2c) = *(int *)(iVar11 + 0x2c) + 2;
  uVar4 = CONCAT11(uVar1,uVar2);
  fn_8268B330(&uStack_50);
  fn_826E8660(iVar11,&uStack_50);
  fn_826C8C70(iVar11,0xffffffff8200ce80,*param_2,uVar10,uVar3,
                    ((ulonglong)uStack_50 & 0xfffffffc) + 8,uVar4);
  uStack_4c = uVar10;
  fn_826E0920(&iStack_48,param_1,&uStack_4c,((ulonglong)uStack_50 & 0xfffffffc) + 8,
                0xffffffff82196582,uVar3,uVar4,uVar4);
  if ((iStack_48 == 0) && (iStack_44 != 0)) {
    fn_82687270();
  }
  lVar7 = ((ulonglong)uStack_50 & 0xfffffffc) + 4;
  do {
    puVar9 = (uint *)lVar7;
    uVar5 = (ulonglong)*puVar9;
    if (in_RESERVE != '\0') {
      uVar10 = storeWordConditionalIndexed(uVar5 - 1,0,lVar7);
      *puVar9 = uVar10;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  return;
}

