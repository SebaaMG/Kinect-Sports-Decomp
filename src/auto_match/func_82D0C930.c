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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D1D478();
extern int fn_82D1D8F0();
extern unsigned int iStack_50;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_82D0C930(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int in_r0;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iStack_50;
  uint uStack_4c;
  uint uStack_48;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 100) == 0) {
    iStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0x80000000;
    uVar2 = *(uint *)(iVar1 + 0x28);
    iVar7 = fn_82CE5410();
    uVar6 = uStack_4c;
    lVar8 = (ulonglong)uVar2 + (ulonglong)uStack_4c;
    iVar9 = (int)lVar8;
    if ((int)(uStack_48 & 0x3fffffff) < iVar9) {
      lVar10 = ((ulonglong)uStack_48 & 0x3fffffff) << 1;
      if ((int)lVar10 <= iVar9) {
        lVar10 = lVar8;
      }
      fn_82CE6310(*(undefined4 *)(iVar7 + 0x10),&iStack_50,lVar10,0x10);
    }
    uStack_4c = uVar2 + uStack_4c;
    iVar7 = uVar6 * 0x10 + iStack_50;
    for (puVar3 = *(undefined4 **)(iVar1 + 0x24); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      puVar4 = (undefined4 *)((uint)(puVar3 + 4) & 0xfffffff0);
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      puVar5 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar11;
      puVar5[2] = uVar12;
      puVar5[3] = uVar13;
      iVar7 = iVar7 + 0x10;
    }
    fn_82D1D8F0(&iStack_50,iVar1 + 0x60);
    iVar7 = fn_82CE5410();
    uStack_4c = 0;
    if ((uStack_48 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
                (*(int **)(iVar7 + 0x10),iStack_50,uStack_48 & 0x3fffffff,0x10);
    }
    iStack_50 = 0;
    uStack_48 = 0x80000000;
  }
  fn_82D1D478(iVar1 + 0x60,param_2,param_3);
  return;
}

