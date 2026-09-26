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
extern unsigned int fStack_4c;
extern int fn_822315A0();
extern int fn_822CEC20();
extern int fn_8236FB68();
extern int fn_8236FDE0();
extern int fn_82370BB8();
extern int fn_823807F0();
extern int fn_824BD858();
extern int fn_824CD030();
extern int fn_82508078();
extern unsigned int lbl_831CD648;


void fn_822DFB90(int param_1,int *param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar5;
  longlong lVar4;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_50 [4];
  float fStack_4c;
  
  uVar6 = 0;
  if ((param_3 & 1) != 0) {
    uVar6 = 1;
    puVar2 = (undefined4 *)(*param_2 + 0x20U & 0xfffffff0);
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar3 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar8;
    puVar3[2] = uVar9;
    puVar3[3] = uVar10;
    if (fStack_4c < lbl_831CD648) {
      uVar6 = 0;
    }
  }
  fn_822CEC20(*(undefined4 *)(param_1 + 0x14),param_3,param_4,uVar6);
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x24);
  if (iVar7 != 0) {
    iVar5 = fn_824CD030(iVar7);
    if (iVar5 != 0) {
      fn_824BD858((double)*(float *)(*(int *)(param_1 + 0x10) + 0x6f4),
                        (double)*(float *)(*(int *)(param_1 + 0x10) + 0x6f8));
    }
  }
  uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x664);
  iVar5 = fn_8236FDE0(*(undefined4 *)(param_1 + 0x14));
  if ((byte)((iVar5 == 0) + 0x10U) < 0x1e) {
    fn_823807F0(uVar8);
  }
  iVar5 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x2c);
  uVar8 = *(undefined4 *)(iVar1 * 4 + **(int **)(iVar5 + 8));
  fn_82370BB8(iVar5,*(undefined4 *)
                           (((uint)((ulonglong)LZCOUNT(iVar1) >> 3) & 4) + **(int **)(iVar5 + 8)),
                    iVar5 + 0x948);
  fn_82370BB8(iVar5,uVar8,iVar5 + 0x974);
  if (iVar7 != 0) {
    iVar7 = *(int *)(param_1 + 0x10);
    lVar4 = fn_8236FB68(4);
    if (lVar4 != 0) {
      fn_82508078(*(undefined4 *)(iVar7 + 0xa4),lVar4,0);
    }
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

