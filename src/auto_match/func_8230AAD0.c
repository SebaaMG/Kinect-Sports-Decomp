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
extern unsigned int *auStack_60;
extern int fn_82263E68();
extern int fn_822ABBF0();
extern int fn_823695C0();
extern int fn_8236A880();
extern int fn_8236BCD8();
extern int fn_823CC298();
extern int fn_823D2898();
extern int fn_82508078();
extern unsigned int iStack_4c;
extern unsigned int iStack_6c;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82195530;
extern unsigned int lbl_821AC4A4;
extern unsigned int lbl_821AC4AC;
extern unsigned int lbl_831D1918;
extern unsigned int lbl_83276554;
extern unsigned int uStack_50;


void fn_8230AAD0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined **ppuStack_70;
  int iStack_6c;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  int iStack_4c;
  
  fn_8236BCD8(*(undefined4 *)(param_1 + 0x10));
  uStack_50 = lbl_82195530;
  iStack_6c = *(int *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)((*(int **)(iStack_6c + 0x1c))[4] * 4 + **(int **)(iStack_6c + 0x1c));
  ppuStack_70 = &lbl_821AC4AC;
  puVar3 = (undefined4 *)(iStack_6c + 0x80U & 0xfffffff0);
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  uVar9 = puVar3[3];
  puVar4 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  iStack_4c = 0;
  fn_822ABBF0(uVar2,&ppuStack_70);
  iVar1 = iStack_4c;
  ppuStack_70 = &lbl_821AC4A4;
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) != 0) {
    uVar6 = 5;
    if (param_2 == 0) {
      uVar6 = 6;
    }
    fn_8236A880(*(undefined4 *)(param_1 + 0x10),
                      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2c),uVar6);
    uVar5 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x10) + 0x990);
    if (uVar5 != 0xfffffffffffffec8) {
      fn_823D2898(uVar5,*(undefined4 *)(param_1 + 0xc));
    }
  }
  if (iVar1 != 0) {
    fn_823695C0((double)lbl_82192604,(double)lbl_821917B0,*(undefined4 *)(param_1 + 0x10),
                      iVar1,1);
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x4c0) == 0) {
    fn_82508078(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xa4),0xffffffff821af30c,0);
    fn_823CC298(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x4b8),0x16);
  }
  if (lbl_831D1918 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    fn_82263E68(lbl_83276554,*(int *)(iVar1 + 0x24) != 0,*(undefined4 *)(iVar1 + 0x2c),
                      *(undefined4 *)(iVar1 + 0x28));
  }
  return;
}

