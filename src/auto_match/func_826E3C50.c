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
extern unsigned int *auStack_68;
extern int fn_8267BE38();
extern int fn_82687270();
extern int fn_8268B330();
extern int fn_8268BA10();
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826AA460();
extern int fn_826DDD10();
extern int fn_826DFB98();
extern int fn_826E2FF0();
extern int fn_826E3B90();
extern int fn_826E7800();
extern int fn_826E9530();
extern int fn_826F49B0();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern U64 storeWordConditionalIndexed();


void fn_826E3C50(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 *puVar9;
  longlong lVar8;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  char in_RESERVE;
  byte in_cr0;
  uint uStack_70;
  uint uStack_6c;
  uint auStack_68 [2];
  int iStack_60;
  int iStack_5c;
  
  iVar12 = *(int *)(param_1 + 0x314);
  if (iVar12 == 0) {
    iVar12 = param_1 + 0x28;
  }
  fn_8268B330(&uStack_6c);
  fn_826E9530(iVar12,&uStack_6c);
  *(undefined1 *)(iVar12 + 0x15) = 0;
  if (*(int *)(iVar12 + 0x30) - *(int *)(iVar12 + 0x2c) < 2) {
    fn_826E7800(iVar12,2);
  }
  puVar9 = (undefined1 *)(*(int *)(iVar12 + 0x3c) + *(int *)(iVar12 + 0x2c));
  uVar1 = puVar9[1];
  uVar2 = *puVar9;
  *(int *)(iVar12 + 0x2c) = *(int *)(iVar12 + 0x2c) + 2;
  uVar4 = CONCAT11(uVar1,uVar2);
  uVar11 = (ulonglong)uVar4;
  if (*param_2 == 0x47) {
    uVar6 = 0xffffffff8200d25c;
  }
  else {
    uVar6 = 0xffffffff8200d28c;
  }
  fn_826A9280(param_1 + 0x14,uVar6,((ulonglong)uStack_6c & 0xfffffffc) + 8,uVar11);
  if (*param_2 == 0x47) {
    fn_826A6A38(param_1);
  }
  iVar5 = fn_826E3B90(param_1);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x78);
  fn_8268BA10(iVar5 + 0xc,&uStack_6c);
  if (uVar4 != 0) {
    do {
      fn_8268B330(&uStack_70);
      *(undefined1 *)(iVar12 + 0x15) = 0;
      if (*(int *)(iVar12 + 0x30) - *(int *)(iVar12 + 0x2c) < 2) {
        fn_826E7800(iVar12,2);
      }
      puVar9 = (undefined1 *)(*(int *)(iVar12 + 0x3c) + *(int *)(iVar12 + 0x2c));
      uVar1 = puVar9[1];
      uVar2 = *puVar9;
      *(int *)(iVar12 + 0x2c) = *(int *)(iVar12 + 0x2c) + 2;
      uVar4 = CONCAT11(uVar1,uVar2);
      fn_826E9530(iVar12,&uStack_70);
      fn_826A9280(param_1 + 0x14,0xffffffff8200d23c,uVar4,
                        ((ulonglong)uStack_70 & 0xfffffffc) + 8);
      auStack_68[0] = (uint)uVar4;
      fn_826DDD10(&iStack_60,*(undefined4 *)(param_1 + 0x20),auStack_68);
      fn_826E2FF0(iVar5,((ulonglong)uStack_70 & 0xfffffffc) + 8,uVar4,iStack_5c);
      if ((iStack_60 == 0) && (iStack_5c != 0)) {
        fn_82687270();
      }
      lVar8 = ((ulonglong)uStack_70 & 0xfffffffc) + 4;
      do {
        puVar10 = (uint *)lVar8;
        uVar7 = (ulonglong)*puVar10;
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(uVar7 - 1,0,lVar8);
          *puVar10 = uVar3;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if (uVar7 == 1) {
        fn_8267BE38();
      }
      uVar11 = uVar11 - 1;
      in_cr0 = (uVar11 == 0) << 1;
    } while (uVar11 != 0);
  }
  fn_826F49B0(param_1,iVar5);
  auStack_68[0] = fn_826DFB98(param_1);
  *(undefined4 *)(auStack_68[0] + 4) = *(undefined4 *)(iVar5 + 0x14);
  fn_826AA460(param_1 + 0x308,auStack_68);
  lVar8 = ((ulonglong)uStack_6c & 0xfffffffc) + 4;
  do {
    puVar10 = (uint *)lVar8;
    uVar11 = (ulonglong)*puVar10;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(uVar11 - 1,0,lVar8);
      *puVar10 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar11 == 1) {
    fn_8267BE38();
  }
  return;
}

