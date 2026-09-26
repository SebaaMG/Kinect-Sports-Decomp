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
extern int fn_82CE4118();
extern int fn_82CFC058();
extern int fn_82D8E878();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82DBBDA8(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  iVar2 = *(int *)(param_1 + 8);
  piVar9 = *(int **)(param_1 + 0x30);
  *(byte *)(iVar2 + 0x25) = *(byte *)(iVar2 + 0x25) & 0x3f | 0x40;
  uStack_40 = (uint)*(ushort *)(piVar9 + 5);
  uStack_38 = (uint)*(ushort *)((int)piVar9 + 0x16);
  uStack_34 = (uint)*(ushort *)(piVar9 + 6);
  uStack_3c = uStack_40;
  fn_82D8E878(*(undefined4 *)(param_1 + 8),param_1,&uStack_40);
  iVar10 = 0;
  *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + -1;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = *(ushort *)((int)piVar9 + 0x22);
  iVar3 = piVar9[2 - (uint)*(byte *)((int)piVar9 + 0x1a)];
  iVar2 = *(int *)(*(int *)(iVar3 + 0xb8) * 4 + *(int *)(iVar3 + 0xb4) + -4);
  *(int *)((uint)uVar1 * 4 + *(int *)(iVar3 + 0xb4)) = iVar2;
  *(int *)(iVar3 + 0xb8) = *(int *)(iVar3 + 0xb8) + -1;
  *(ushort *)(*(int *)(iVar2 + 0x30) + 0x22) = uVar1;
  uVar4 = (ulonglong)(uint)piVar9[7];
  iVar2 = piVar9[*(byte *)((int)piVar9 + 0x1a) + 1];
  if (uVar4 != 0) {
    lVar5 = *(ushort *)(piVar9 + 8) + uVar4;
    iVar10 = -(uint)*(ushort *)(piVar9 + 8);
    fn_82CFC058(uVar4,lVar5,
                    ((ulonglong)*(uint *)(iVar2 + 0xc4) - lVar5) +
                    (ulonglong)*(uint *)(iVar2 + 0xc0));
    *(uint *)(iVar2 + 0xc4) = *(int *)(iVar2 + 0xc4) - (uint)*(ushort *)(piVar9 + 8);
    piVar9[7] = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  piVar7 = (int *)((uint)*(ushort *)(iVar2 + 0xb0) * 0x30 + *(int *)(iVar2 + 0xac) + -0x30);
  if (piVar9 < piVar7) {
    lVar5 = (ulonglong)(uint)((int)piVar7 + (-1 - (int)piVar9)) / 0x30 + 1;
    do {
      piVar6 = piVar9 + -2;
      piVar7 = piVar9 + 10;
      lVar11 = 6;
      do {
        piVar7 = piVar7 + 2;
        piVar6 = piVar6 + 2;
        *(undefined8 *)piVar6 = *(undefined8 *)piVar7;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      *(int **)(*piVar9 + 0x30) = piVar9;
      iVar3 = piVar9[7];
      iVar8 = iVar3 + iVar10;
      if (iVar3 == 0) {
        iVar8 = 0;
      }
      lVar5 = lVar5 + -1;
      piVar9[7] = iVar8;
      piVar9 = piVar9 + 0xc;
    } while (lVar5 != 0);
  }
  *(short *)(iVar2 + 0xb0) = *(short *)(iVar2 + 0xb0) + -1;
  fn_82CE4118(param_1);
  return;
}

