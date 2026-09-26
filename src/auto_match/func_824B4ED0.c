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
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C47A0;
extern unsigned int lbl_831C47A4;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


/* WARNING: Removing unreachable block (ram,0x824b4fcc) */

double fn_824B4ED0(int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  int in_r0;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  float afStack_40 [16];
  
  iVar1 = *(int *)(param_1 + 0x3c);
  (**(code **)*param_2)(param_2,&uStack_50,&uStack_4c);
  uVar7 = ((ulonglong)uStack_4c - (ulonglong)lbl_831C47A0) + 1;
  uVar8 = (uint)uVar7;
  uVar6 = (ulonglong)uStack_50;
  if ((int)uStack_50 < (int)uVar8) {
    uVar6 = uVar7;
    uStack_50 = uVar8;
  }
  (**(code **)(*param_2 + 4))(param_2,uVar6,&iStack_48);
  iVar1 = ((-(uint)(iVar1 != 0) & 0xfffffffc) + 10) * 0x40;
  pcVar2 = *(code **)(*param_2 + 4);
  puVar3 = (undefined4 *)(*(int *)(iStack_48 + 0x40) + iVar1 & 0xfffffff0);
  uVar9 = puVar3[1];
  uVar10 = puVar3[2];
  uVar11 = puVar3[3];
  puVar4 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar9;
  puVar4[2] = uVar10;
  puVar4[3] = uVar11;
  (*pcVar2)(param_2,uStack_4c,&iStack_44);
  fVar5 = lbl_831C47A4;
  puVar3 = (undefined4 *)(*(int *)(iStack_44 + 0x40) + iVar1 & 0xfffffff0);
  uVar9 = puVar3[1];
  uVar10 = puVar3[2];
  uVar11 = puVar3[3];
  puVar4 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar9;
  puVar4[2] = uVar10;
  puVar4[3] = uVar11;
  if ((afStack_40[0] < afStack_40[0] - fVar5) || (fVar5 + afStack_40[0] < afStack_40[0])) {
    *(undefined4 *)(param_1 + 0x48) = lbl_82192734;
  }
  *(float *)(param_1 + 0x50) = afStack_40[0];
  return (double)lbl_821CC160;
}

