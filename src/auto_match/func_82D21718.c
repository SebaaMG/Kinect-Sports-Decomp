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
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82D21718(int param_1,int *param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 in_r0;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    uVar1 = param_2[1];
    uVar2 = *(uint *)(param_1 + 0x18);
    iVar10 = fn_82CE5410();
    uVar3 = param_2[1];
    lVar13 = (ulonglong)uVar3 + (ulonglong)uVar2;
    iVar11 = (int)lVar13;
    if ((int)(param_2[2] & 0x3fffffffU) < iVar11) {
      lVar9 = ((ulonglong)(uint)param_2[2] & 0x3fffffff) << 1;
      if (iVar11 < (int)lVar9) {
        lVar13 = lVar9;
      }
      fn_82CE6310(*(undefined4 *)(iVar10 + 0x10),param_2,lVar13,0x10);
    }
    iVar10 = *param_2;
    param_2[1] = uVar2 + param_2[1];
    uVar2 = *(uint *)(param_1 + 0x30);
    iVar11 = fn_82CE5410();
    uVar4 = param_2[4];
    lVar13 = (ulonglong)uVar4 + (ulonglong)uVar2;
    iVar14 = (int)lVar13;
    if ((int)(param_2[5] & 0x3fffffffU) < iVar14) {
      lVar9 = ((ulonglong)(uint)param_2[5] & 0x3fffffff) << 1;
      if (iVar14 < (int)lVar9) {
        lVar13 = lVar9;
      }
      fn_82CE6310(*(undefined4 *)(iVar11 + 0x10),param_2 + 3,lVar13,0x10);
    }
    uStack_60 = 0;
    uStack_5c = 0;
    param_2[4] = param_2[4] + uVar2;
    uStack_58 = 0xffffffff;
    puVar15 = (undefined4 *)(uVar4 * 0x10 + param_2[3]);
    iVar11 = fn_82CE5410();
    fn_82CEAB00(&uStack_60,*(undefined4 *)(iVar11 + 0x10),0);
    uVar2 = *(uint *)(param_1 + 0x18);
    iVar11 = fn_82CE5410();
    fn_82CEAB00(&uStack_60,*(undefined4 *)(iVar11 + 0x10),(ulonglong)uVar2 + 1);
    iVar10 = uVar3 * 0x10 + iVar10;
    for (puVar5 = *(undefined4 **)(param_1 + 0x14); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)*puVar5) {
      uVar8 = (ulonglong)uStack_5c;
      iVar11 = fn_82CE5410();
      fn_82CEA160(&uStack_60,*(undefined4 *)(iVar11 + 0x10),puVar5,
                        (uVar8 & 0x7fffffff) + (ulonglong)uVar1);
      puVar6 = (undefined4 *)((uint)(puVar5 + 4) & 0xfffffff0);
      uVar12 = puVar6[1];
      uVar16 = puVar6[2];
      uVar17 = puVar6[3];
      puVar7 = (undefined4 *)((int)in_r0 + iVar10 & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar12;
      puVar7[2] = uVar16;
      puVar7[3] = uVar17;
      iVar10 = iVar10 + 0x10;
    }
    for (puVar5 = *(undefined4 **)(param_1 + 0x2c); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)*puVar5) {
      uVar12 = fn_82CEA280(&uStack_60,puVar5[2],0xffffffffffffffff);
      *puVar15 = uVar12;
      uVar12 = fn_82CEA280(&uStack_60,puVar5[3],0xffffffffffffffff);
      puVar15[1] = uVar12;
      uVar12 = fn_82CEA280(&uStack_60,puVar5[4],0xffffffffffffffff);
      puVar15[2] = uVar12;
      puVar15[3] = puVar5[0xe];
      if (param_3 != '\0') {
        uVar16 = puVar15[1];
        puVar15[1] = uVar12;
        puVar15[2] = uVar16;
      }
      puVar15 = puVar15 + 4;
    }
    iVar10 = fn_82CE5410();
    fn_82CEA4B8(&uStack_60,*(undefined4 *)(iVar10 + 0x10));
    fn_82BA02A8(&uStack_60);
  }
  return;
}

