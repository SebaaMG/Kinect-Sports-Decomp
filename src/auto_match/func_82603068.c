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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_40;
extern int fn_82601590();
extern int fn_82602F00();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82603068(int param_1,float *param_2,int param_3,undefined8 param_4,int *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_r0;
  int iVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_40 [64];
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    fVar3 = lbl_821CA460;
  }
  else {
    iVar6 = fn_82602F00(param_1,param_4,*param_5);
    if (iVar6 != 0) {
      *param_5 = iVar6;
      if ((*(int *)(param_1 + 0x4c) == 0) || (*(int *)(param_1 + 0x8c0) == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)
                 ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_1 + 0x8c0)
                 );
      }
      dVar7 = (double)fn_82601590(iVar6,param_1 + 0xf0,uVar8,auStack_40);
      puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      *param_2 = (float)dVar7;
      return;
    }
    puVar1 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    fVar4 = *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0x8bc);
    fVar3 = *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0x8bc);
    fVar5 = fVar3 - fVar4;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar5 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar5) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar3 = fVar4;
    }
    fVar3 = fVar3 * *(float *)(param_1 + 0x280);
  }
  *param_2 = fVar3;
  return;
}

