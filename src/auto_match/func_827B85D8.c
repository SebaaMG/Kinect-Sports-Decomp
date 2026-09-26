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
extern int fn_82670230();
extern int fn_827B7F00();


void fn_827B85D8(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  fn_827B7F00(param_1 + 0x710);
  uVar11 = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    do {
      uVar5 = (uint)((uVar9 & 0xffffffff) >> 4) & 0xffffffc;
      iVar12 = ((uint)uVar9 & 0x3f) * 0x1c;
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x28) + uVar5) + iVar12 + 0x18) != param_2) {
        uVar6 = uVar11 >> 4;
        uVar8 = uVar11 & 0x3f;
        uVar11 = uVar11 + 1;
        iVar10 = uVar8 * 0x1c;
        iVar4 = *(int *)((uVar6 & 0xffffffc) + *(int *)(param_1 + 0x28));
        puVar7 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + uVar5) + iVar12);
        iVar12 = iVar4 + iVar10;
        uVar1 = *puVar7;
        *(undefined4 *)(iVar12 + 4) = puVar7[1];
        *(undefined4 *)(iVar4 + iVar10) = uVar1;
        uVar1 = puVar7[5];
        uVar2 = puVar7[4];
        uVar3 = puVar7[3];
        *(undefined4 *)(iVar12 + 8) = puVar7[2];
        *(undefined4 *)(iVar12 + 0xc) = uVar3;
        *(undefined4 *)(iVar12 + 0x10) = uVar2;
        *(undefined4 *)(iVar12 + 0x14) = uVar1;
        *(undefined4 *)(iVar12 + 0x18) = puVar7[6];
      }
      uVar9 = uVar9 + 1;
    } while ((uVar9 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1c));
  }
  if (uVar11 < *(uint *)(param_1 + 0x1c)) {
    *(uint *)(param_1 + 0x1c) = uVar11;
  }
  iVar12 = param_2 * 0x14 + param_1;
  *(undefined4 *)(iVar12 + 0x48) = 0;
  if (param_3 != '\0') {
    (**(code **)(**(int **)(iVar12 + 0x38) + 0x30))
              (*(int **)(iVar12 + 0x38),(param_2 + 3) * 0x14 + param_1);
    fn_82670230(*(undefined4 *)(iVar12 + 0x38));
    *(undefined4 *)(iVar12 + 0x38) = 0;
  }
  return;
}

