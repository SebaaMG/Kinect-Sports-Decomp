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
extern unsigned int *auStack_30;
extern unsigned int fStack_2c;
extern int fn_825200A8();
extern int fn_8253C548();
extern int fn_82560100();
extern int fn_82563B08();
extern int fn_82D8B6C8();
extern unsigned int lbl_821CA460;


void fn_82420AF0(double param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_30 [4];
  float fStack_2c;
  
  if (param_4 != 0) {
    iVar5 = *(int *)(param_2 + 0x10);
    uVar4 = (ulonglong)**(uint **)(param_2 + 0xc);
    puVar1 = (undefined4 *)(iVar5 + 0x50U & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    iVar3 = fn_825200A8(uVar4 + 0xd4c,0xffffffff82196288);
    if (iVar3 == 0) {
      fn_82560100((double)lbl_821CA460,*(undefined4 *)(iVar5 + 0x4c),uVar4 + 0xd54,auStack_30);
    }
  }
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  puVar1 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  fStack_2c = (float)((double)fStack_2c + param_1);
  fn_8253C548(uVar6,auStack_30,0xffffffff821ca1a0);
  iVar5 = *(int *)(*(int *)(param_2 + 0x10) + 0x7c0);
  if (*(char *)(iVar5 + 0xe8) != '\x04') {
    fn_82D8B6C8(iVar5,4,1,0);
    fn_82563B08(*(undefined4 *)(*(int *)(param_2 + 0x10) + 0x7c0));
  }
  *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x1d0) = 1;
  *(undefined4 *)(param_2 + 0x30) = 2;
  return;
}

