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
extern int fn_83083970();


void fn_83083B48(int param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  puVar3 = (undefined4 *)((int)param_2 + in_r0 + 0x10 & 0xfffffff0);
  uVar11 = puVar3[1];
  uVar12 = puVar3[2];
  uVar13 = puVar3[3];
  puVar4 = (undefined4 *)(in_r0 + param_1 + 0x30 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar11;
  puVar4[2] = uVar12;
  puVar4[3] = uVar13;
  puVar3 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
  uVar11 = puVar3[1];
  uVar12 = puVar3[2];
  uVar13 = puVar3[3];
  puVar4 = (undefined4 *)(param_1 + 0x40U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar11;
  puVar4[2] = uVar12;
  puVar4[3] = uVar13;
  uVar7 = (ulonglong)*(byte *)((int)param_2 + 5);
  uVar9 = (ulonglong)*param_2;
  if (uVar7 != 0) {
    uVar9 = uVar9 + 4;
  }
  lVar8 = (uVar9 & 0x7fffffff) * 2;
  *(int *)(param_1 + 0x14) = (int)lVar8;
  bVar1 = *(byte *)(param_2 + 1);
  if (bVar1 == 0) {
    lVar10 = 0;
  }
  else {
    uVar2 = *param_2;
    trapWord(6,(ulonglong)bVar1,0);
    lVar10 = (longlong)((int)uVar2 / (int)(uint)bVar1);
    uVar7 = (ulonglong)bVar1 &
            ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) - 1);
    trapWord(5,uVar7,0xffff);
  }
  *(int *)(param_1 + 0x18) = (int)lVar10;
  fn_83083970(param_1,lVar8 + lVar10,param_3,param_4,uVar7);
  uVar2 = *param_2;
  *(uint *)(param_1 + 0x10) = uVar2;
  iVar5 = fn_82CE5410();
  if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < (int)uVar2) {
    uVar6 = (*(uint *)(param_1 + 0x24) & 0x3fffffff) << 1;
    if ((int)uVar6 <= (int)uVar2) {
      uVar6 = uVar2;
    }
    fn_82CE6310(*(undefined4 *)(iVar5 + 0x10),param_1 + 0x1c,uVar6,0x10);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  return;
}

