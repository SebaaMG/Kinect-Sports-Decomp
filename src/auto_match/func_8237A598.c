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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int fStack_7c;
extern int fn_822AA770();
extern int fn_822CF9D8();
extern int fn_82379818();
extern int fn_82379A60();
extern int fn_8237A9E0();
extern int fn_8237ABA8();
extern int fn_8237AD98();
extern int fn_8237AEA0();
extern int fn_82383F20();
extern int fn_823845A0();
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195A9C;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1C4C;
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000020;


void fn_8237A598(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  float in_stack_00000028;
  int iStack_a0;
  int iStack_9c;
  float afStack_98 [2];
  undefined4 auStack_90 [4];
  undefined1 auStack_80 [4];
  float fStack_7c;
  
  dVar6 = (double)lbl_82192734;
  *(undefined4 *)(param_1 + 0x124) = *param_2;
  iVar4 = param_2[1];
  puVar2 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
  uVar5 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  puVar2 = (undefined4 *)((uint)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  puVar2 = (undefined4 *)((int)auStack_90 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  dVar9 = (double)lbl_821CC160;
  dVar8 = (double)lbl_821CA460;
  puVar2 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar2 = uVar5;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  if ((iVar4 == 0) ||
     (dVar6 = (double)fn_8237A9E0((double)(float)param_2[2],param_1,auStack_80,auStack_90),
     dVar6 <= dVar9)) {
    if (param_2[4] != 0) {
      dVar6 = (double)fn_8237ABA8((double)(float)param_2[5],(double)(float)param_2[6],param_1)
      ;
    }
    if (dVar6 <= dVar9) {
      if (param_2[7] != 0) {
        dVar6 = dVar8;
        if (((*(int *)(param_1 + 0x20e4) != 0) &&
            (iVar4 = fn_822AA770(*(undefined4 *)(*(int *)(param_1 + 0x20e4) + 0x1c)),
            iVar4 != 0)) &&
           ((iVar4 = *(int *)(*(int *)(param_1 + 0x20d0) + 0x1f60), iVar4 == 0xb || (iVar4 == 10))))
        {
          dVar6 = (double)fn_822CF9D8(*(undefined4 *)(param_1 + 0x20e0),3);
          dVar6 = (double)(float)(dVar6 * (double)lbl_82195A9C + dVar8);
        }
        dVar6 = (double)fn_8237AD98((double)(float)((double)(float)param_2[8] * dVar6),param_1
                                         );
      }
      if (dVar6 <= dVar9) {
        if (param_2[9] == 0) {
          dVar6 = (double)(float)param_2[0xc];
        }
        else {
          dVar7 = (double)(float)((double)((float)param_2[10] + fStack_7c) -
                                 (double)(float)param_2[0xb]);
          dVar6 = (double)((float)param_2[10] + fStack_7c);
          if (*(float *)(&lbl_821954D8 +
                        ((uint)(byte)((dVar7 < dVar9) << 2) | (uint)(NAN(dVar7) || NAN(dVar9)) << 2)
                        ) < 0.0) {
            dVar6 = (double)(float)param_2[0xb];
          }
        }
        dVar6 = (double)fn_8237AEA0(dVar6,param_1);
      }
    }
  }
  iVar4 = param_1 + 0x30;
  puVar2 = (undefined4 *)((int)auStack_90 + in_r0 & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  puVar3 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  dVar7 = (double)fn_82379818(param_1,afStack_98,&iStack_9c,&iStack_a0);
  *(float *)(param_1 + 0xc4) = (float)dVar7;
  if ((dVar7 <= dVar9) || (param_3 != 0)) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
LAB_8237a8cc:
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  else {
    if (param_2[1] == 0) {
      if (((iStack_9c != 0) || (iStack_a0 != 0)) &&
         (dVar9 < (double)*(float *)(param_1 + 0x28) != dVar9 < (double)in_stack_00000028)) {
        dVar6 = (double)(float)param_2[2];
        if (dVar6 <= dVar9) {
          dVar6 = (double)lbl_831D1C4C;
        }
        dVar6 = (double)fn_8237A9E0(dVar6,param_1);
        if (dVar6 <= dVar9) {
          *(int *)(param_1 + 0xbc) = iStack_9c;
          *(int *)(param_1 + 0xc0) = iStack_a0;
          *(undefined4 *)(param_1 + 0xb4) = 0;
          *(undefined4 *)(param_1 + 0xb0) = 0;
          goto LAB_8237a8d8;
        }
        puVar2 = (undefined4 *)((int)auStack_90 + in_r0 & 0xfffffff0);
        uVar5 = puVar2[1];
        uVar10 = puVar2[2];
        uVar11 = puVar2[3];
        puVar3 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar3[2] = uVar10;
        puVar3[3] = uVar11;
        dVar8 = (double)fn_82379818(param_1,afStack_98,&iStack_9c,&iStack_a0);
        *(float *)(param_1 + 0xc4) = (float)dVar8;
        *(undefined4 *)(param_1 + 0xb4) = 1;
        goto LAB_8237a8cc;
      }
      if (afStack_98[0] == 0.0) {
LAB_8237a8ac:
        uVar5 = 0;
      }
      else {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        afStack_98[0] = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
        uVar5 = 1;
        if ((float)param_2[3] <= (float)((double)afStack_98[0] - dVar8)) goto LAB_8237a8ac;
      }
      *(undefined4 *)(param_1 + 0xb4) = uVar5;
      *(int *)(param_1 + 0xbc) = iStack_9c;
      *(int *)(param_1 + 0xc0) = iStack_a0;
      *(undefined4 *)(param_1 + 0xb0) = uVar5;
      goto LAB_8237a8d8;
    }
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined4 *)(param_1 + 0xb0) = 1;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
LAB_8237a8d8:
  uVar5 = lbl_821CA1A8;
  iVar1 = *(int *)(param_1 + 0x20a8);
  auStack_90[0] = param_2[0xd];
  *(undefined4 *)(param_1 + 0x80) = lbl_821CA1A4;
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x7c) = auStack_90[0];
  *(undefined4 *)(param_1 + 0x88) = param_2[0xe];
  *(undefined4 *)(param_1 + 0x90) = param_2[0xf];
  *(float *)(param_1 + 0x8c) = (float)dVar9;
  *(float *)(param_1 + 0x118) = (float)dVar6;
  *(float *)(param_1 + 0x11c) = (float)dVar6;
  puVar2 = (undefined4 *)(param_1 + 400U & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x20a4) == 0)) {
    iVar1 = *(int *)(param_1 + 0x20d0);
    *(undefined4 *)(param_1 + 0x209c) = 0;
    if (*(int *)(iVar1 + 0x1fa0) != 0) {
      fn_82383F20();
    }
    if (*(int *)(iVar1 + 0x1fa4) != 0) {
      fn_823845A0();
    }
    if (*(int *)(iVar1 + 0x1fa8) != 0) {
      fn_823845A0();
    }
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if ((*(int *)(param_1 + 0x20a0) != 0) && (*(int *)(param_1 + 0x20a4) == 0)) {
    *(undefined4 *)(param_1 + 0x20a0) = 0;
  }
  puVar2 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  dVar6 = (double)fn_82379A60(param_1);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(float *)(param_1 + 0x120) = (float)(-(double)fStack_7c / dVar6);
  return;
}

