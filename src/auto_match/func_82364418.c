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
extern unsigned int *auStack_50;
extern int fn_82321D30();
extern int fn_82364DF0();
extern int fn_824556F0();
extern int fn_82455B60();
extern int fn_82456BC0();
extern int fn_824BD858();
extern int fn_824C97F0();
extern int fn_82508078();
extern int fn_8254EDB0();
extern int fn_8288B760();
extern unsigned int lbl_821BA6F4;
extern unsigned int lbl_821CA460;
extern V16 vectorConditionalSelect();


void fn_82364418(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar6;
  int iVar7;
  undefined8 uVar5;
  uint uVar8;
  int *piVar9;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_50 [80];
  
  uVar5 = param_2;
  iVar6 = fn_82364DF0();
  vectorConditionalSelect(in_vs32,in_vs45,in_vs44);
  iVar6 = *(int *)(iVar6 * 0x44 + param_1 + 0x18c);
  iVar7 = fn_82321D30(auStack_50,*(undefined4 *)((int)uVar5 + 0x5b0),param_2);
  puVar3 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
  uVar10 = puVar3[1];
  uVar11 = puVar3[2];
  uVar12 = puVar3[3];
  iVar7 = (int)param_2;
  uVar1 = *(undefined4 *)(iVar7 + 0x2c);
  puVar4 = (undefined4 *)(iVar7 + 0x730U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar10;
  puVar4[2] = uVar11;
  puVar4[3] = uVar12;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x3ec) + 0xc))();
  fn_82455B60(uVar5,param_2);
  if (*(int *)(iVar6 + 0x24) != 0) {
    if (*(int *)(iVar6 + 0x168) == 0) {
      uVar8 = *(uint *)(iVar6 + 0x16c);
    }
    else {
      uVar8 = fn_8288B760();
      uVar8 = uVar8 & 0xff;
    }
    if (uVar8 != 0) {
      fn_824BD858((double)*(float *)(param_1 + 0x2b0),(double)*(float *)(param_1 + 0x2b4));
      fn_824556F0(param_1 + 0x45c,param_1 + 0x470);
      uVar10 = *(undefined4 *)(param_1 + 0x494);
      goto LAB_82364510;
    }
  }
  fn_824556F0(param_1 + 0x45c,param_1 + 0x470);
  uVar10 = *(undefined4 *)(param_1 + 0x498);
LAB_82364510:
  fn_8254EDB0((double)*(float *)(param_1 + 0x4bc),(double)*(float *)(param_1 + 0x4c0),
                    *(undefined4 *)(param_1 + 0x4d8),uVar10);
  iVar6 = *(int *)(param_1 + 0x4d8);
  uVar10 = *(undefined4 *)(param_1 + 0x4b4);
  uVar12 = *(undefined4 *)(param_1 + 0x4b0);
  uVar11 = *(undefined4 *)(param_1 + 0x4b8);
  if (*(int *)(iVar6 + 4) != 0) {
    *(undefined4 *)(iVar6 + 0x1dc) = *(undefined4 *)(param_1 + 0x4c8);
    *(undefined4 *)(iVar6 + 0x1e0) = lbl_821CA460;
    *(undefined4 *)(iVar6 + 0x1d4) = 1;
    *(undefined4 *)(iVar6 + 0x1cc) = uVar12;
    *(undefined4 *)(iVar6 + 0x1d8) = uVar11;
    *(undefined4 *)(iVar6 + 0x1d0) = uVar10;
  }
  if (*(int *)(iVar7 + 0x2c) == 0) {
    uVar5 = 0xffffffff821b2a78;
  }
  else {
    uVar5 = 0xffffffff821b2a88;
  }
  piVar2 = (int *)(*(undefined4 **)(param_1 + 0xa8))[1];
  for (piVar9 = (int *)**(undefined4 **)(param_1 + 0xa8); piVar9 != piVar2; piVar9 = piVar9 + 2) {
    fn_824C97F0(*(undefined4 *)(*piVar9 + 0x28),uVar5);
  }
  fn_82508078(*(undefined4 *)(param_1 + 0x3f4),lbl_821BA6F4,0);
  (**(code **)(**(int **)(param_1 + 0x3ec) + 0x14))(*(int **)(param_1 + 0x3ec),param_2);
  fn_82456BC0(param_1 + 0x718,1,uVar1);
  return;
}

