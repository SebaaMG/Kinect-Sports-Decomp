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
extern unsigned int fStack_48;
extern int fn_82359C18();
extern int fn_823693A0();
extern int fn_8236A360();
extern int fn_8236A6E8();
extern int fn_8236BCD8();
extern int fn_823CC298();
extern int fn_823E69D0();
extern int fn_824C97F0();
extern int fn_824FE498();
extern int fn_82508078();
extern int fn_82F63108();
extern unsigned int iStack_3c;
extern unsigned int lbl_821B6284;
extern unsigned int lbl_821CC160;


void fn_823D0DD8(int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_50 [8];
  float fStack_48;
  undefined **ppuStack_40;
  int iStack_3c;
  undefined ***pppuStack_30;
  
  if (*(int *)(param_2 + 0x80) != -1) {
    iVar5 = *(int *)(param_2 + 0x80) * 0x84 + *(int *)(param_1 + 0x4bc);
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
  }
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_824FE498(*(undefined4 *)(param_1 + 0xe10));
    iVar5 = *(int *)(param_1 + 0xe10);
    puVar3 = (undefined4 *)(param_2 + 0x70U & 0xfffffff0);
    uVar8 = puVar3[1];
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];
    puVar4 = (undefined4 *)(iVar5 + 0xbd0U & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar8;
    puVar4[2] = uVar9;
    puVar4[3] = uVar10;
    puVar3 = (undefined4 *)(iVar5 + 0xc30U & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
  }
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_823E69D0(param_1,param_2);
    fn_823693A0(param_1,0);
  }
  fn_8236A6E8(param_1,5);
  fn_8236A360(param_1,5);
  fVar1 = *(float *)(param_2 + 0x58);
  puVar3 = (undefined4 *)(in_r0 + *(int *)(*(int *)(param_1 + 0x1c) + 4) & 0xfffffff0);
  uVar8 = puVar3[1];
  uVar9 = puVar3[2];
  uVar10 = puVar3[3];
  puVar4 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar8;
  puVar4[2] = uVar9;
  puVar4[3] = uVar10;
  if (fVar1 <= fStack_48) {
    uVar6 = 0xffffffff821b61b4;
  }
  else {
    uVar6 = 0xffffffff821b61a4;
  }
  pppuStack_30 = &ppuStack_40;
  ppuStack_40 = &lbl_821B6284;
  piVar2 = (int *)(*(undefined4 **)(param_1 + 0xa8))[1];
  piVar7 = (int *)**(undefined4 **)(param_1 + 0xa8);
  iStack_3c = param_1;
  do {
    if (piVar7 == piVar2) {
      fn_82359C18(&ppuStack_40);
      iVar5 = *(int *)(param_1 + 0x41c);
      if (((((iVar5 == 2) || (iVar5 == 8)) || (iVar5 == 9)) || ((iVar5 == 6 || (iVar5 == 7)))) &&
         (*(int *)(param_1 + 0x4c0) == 0)) {
        fn_82508078(*(undefined4 *)(param_1 + 0xa4),0xffffffff821b61c4,0);
        fn_823CC298(*(undefined4 *)(param_1 + 0x4b8),0x15);
      }
      if (*(int *)(param_1 + 0x4c0) == 0) {
        if ((*(int *)(param_1 + 0x41c) != 4) ||
           (*(int *)(param_1 + 0x424) != *(int *)(param_1 + 0x420))) {
          *(undefined4 *)(param_1 + 0x41c) = 4;
          *(undefined4 *)(param_1 + 0x428) = lbl_821CC160;
        }
      }
      fn_8236BCD8(param_1);
      return;
    }
    iVar5 = fn_824C97F0(*(undefined4 *)(*piVar7 + 0x28),uVar6);
    if (iVar5 != 0) {
      if (pppuStack_30 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (*(code *)(*pppuStack_30)[1])(pppuStack_30,piVar7);
    }
    piVar7 = piVar7 + 2;
  } while( true );
}

