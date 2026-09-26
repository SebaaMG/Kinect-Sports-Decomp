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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82630B08();
extern unsigned int lbl_8320A898;


void fn_82532F98(int *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar1 = *(ushort *)(param_1 + 2);
  uVar4 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    iVar5 = 0;
    do {
      if (*param_2 != 0xffff) {
        iVar7 = param_1[1] + iVar5;
        iVar6 = (uint)*param_2 * 0x40 + *param_1;
        puVar2 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)(in_r0 + iVar6 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        puVar2 = (undefined4 *)(iVar7 + 0x10U & 0xfffffff0);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)(iVar6 + 0x10U & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        puVar2 = (undefined4 *)(iVar7 + 0x20U & 0xfffffff0);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)(iVar6 + 0x20U & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        puVar2 = (undefined4 *)(iVar7 + 0x30U & 0xfffffff0);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)(iVar6 + 0x30U & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
      }
      iVar5 = iVar5 + 0x40;
      param_2 = param_2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  iVar5 = param_1[1];
  for (uVar4 = CONCAT44(iVar5,iVar5) & 0xffffffffffffff7f;
      (int)uVar4 < (int)((uint)uVar1 * 0x40 + iVar5); uVar4 = uVar4 + 0x80) {
    dataCacheBlockFlush(uVar4);
  }
  iVar6 = *param_1;
  for (uVar4 = CONCAT44(iVar6,iVar6) & 0xffffffffffffff7f;
      (int)uVar4 < (int)((uint)uVar1 * 0x40 + iVar6); uVar4 = uVar4 + 0x80) {
    dataCacheBlockFlush(uVar4);
  }
  fn_82630B08(lbl_8320A898,iVar5,(ulonglong)*(ushort *)(param_1 + 2) << 6,0);
  fn_82630B08(lbl_8320A898,*param_1,(ulonglong)*(ushort *)(param_1 + 2) << 6,0);
  return;
}

