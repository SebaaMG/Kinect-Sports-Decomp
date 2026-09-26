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
extern int fn_822315A0();
extern int fn_8228E658();
extern int fn_8236FB68();
extern int fn_8236FD90();
extern int fn_82508078();
extern int fn_82520780();
extern unsigned int lbl_82191FC8;


void fn_82374E58(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar5;
  longlong lVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float afStack_40 [16];
  
  fn_8228E658(param_1 + 0x1b0);
  *(undefined4 *)(*param_2 + 0xa4) = 0;
  *(undefined4 *)(*param_2 + 0xa0) = 0;
  if (param_4 == 0) {
    lVar4 = fn_8236FB68(0x20);
    if (lVar4 != 0) {
      fn_82508078(*(undefined4 *)(param_1 + 0xa4),lVar4,0);
    }
  }
  else if (param_4 == 1) {
    iVar5 = fn_82520780((double)lbl_82191FC8,0xffffffff83265a28);
    fn_8236FD90(param_1,(iVar5 == 0) + '\x1e');
  }
  if (*(int *)(param_1 + 0x204) == 0) {
    iVar5 = (*(int *)(param_3 + 0x2c) * 2 + *(int *)(param_3 + 0x28)) * 0x88 + param_1 + 0xa14;
    *(int *)(iVar5 + 0x54) = *(int *)(iVar5 + 0x54) + 1;
    if (*(int *)(param_3 + 0x24) != 0) {
      iVar5 = *(int *)(param_1 + 0x284);
      iVar1 = *(int *)(*param_2 + 0x20d0);
      puVar2 = (undefined4 *)(*param_2 + 400U & 0xfffffff0);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      puVar2 = (undefined4 *)(iVar1 + 0x1f80U & 0xfffffff0);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      *(float *)((iVar5 + 0x9c) * 4 + param_1) = afStack_40[0] - afStack_40[0];
      iVar5 = *(int *)(param_1 + 0x284) + 1;
      *(int *)(param_1 + 0x284) = iVar5;
      if (4 < iVar5) {
        *(undefined4 *)(param_1 + 0x284) = 0;
      }
    }
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

