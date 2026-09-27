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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_38;
extern unsigned int fStack_48;
extern unsigned int fStack_58;
extern int fn_824AE6C0();
extern int fn_82F4EBC0();
extern int fn_82F4ED08();
extern unsigned int iStack_28;
extern unsigned int iStack_70;
extern float lbl_8218E8E8;
extern unsigned int uStack_6c;


void fn_824AE188(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  struct { int first; undefined4 second; } stack_pair_70;

  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  float fStack_58;
  undefined1 auStack_50 [8];
  float fStack_48;
  undefined1 auStack_40 [8];
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  
  if (*(char *)(*(int *)(param_1 + 0x3c) + 0x1d) != '\0') {
    (**(code **)*param_2)(param_2,auStack_68,&stack_pair_70.second);
    (**(code **)(*param_2 + 4))(param_2,stack_pair_70.second,&stack_pair_70.first);
    iVar1 = *(int *)(stack_pair_70.first + 0x40);
    puVar2 = (undefined4 *)(in_r0 + iVar1 & 0xfffffff0);
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    puVar3 = (undefined4 *)(iVar1 + 0x100U & 0xfffffff0);
    uVar13 = *puVar3;
    uVar14 = puVar3[1];
    uVar15 = puVar3[2];
    uVar16 = puVar3[3];
    puVar3 = (undefined4 *)(iVar1 + 0x200U & 0xfffffff0);
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    uVar11 = puVar3[2];
    uVar12 = puVar3[3];
    puVar3 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    puVar2 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar2 = uVar13;
    puVar2[1] = uVar14;
    puVar2[2] = uVar15;
    puVar2[3] = uVar16;
    puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar2 = uVar9;
    puVar2[1] = uVar10;
    puVar2[2] = uVar11;
    puVar2[3] = uVar12;
    fn_82F4EBC0(0);
    dVar5 = (double)fn_82F4ED08();
    fStack_30 = (float)dVar5;
    iVar1 = *(int *)(param_1 + 0x3c);
    iStack_28 = *(int *)(stack_pair_70.first + 0x48);
    fStack_2c = -(((fStack_38 - fStack_48) * lbl_8218E8E8 + fStack_48) - fStack_58);
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar4 = *(int *)(iVar1 + 0x14) + -1;
      if (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc) >> 6 <= iVar4) {
        iVar4 = iVar4 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 6);
      }
      if (*(int *)(iVar4 * 0x40 + *(int *)(iVar1 + 0xc) + 0x38) == iStack_28) {
        return;
      }
    }
    fn_824AE6C0(iVar1 + 4,auStack_60);
  }
  return;
}

