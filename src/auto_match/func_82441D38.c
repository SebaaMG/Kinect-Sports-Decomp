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
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_82528FA8();
extern int fn_8252A1B0();
extern unsigned int lbl_821CA460;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82441D38(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int in_r0;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010430;
  undefined4 in_register_00010434;
  undefined4 in_register_00010438;
  undefined4 in_vr67;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  
  piVar1 = *(int **)(param_1 + 4);
  puVar3 = (undefined4 *)((uint)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  if (piVar1[1] != 0) {
    iVar2 = *piVar1;
    uStack00000030 = param_3;
    uStack00000038 = param_4;
    if (iVar2 == 0) {
      puVar3 = *(undefined4 **)(param_1 + 4);
      uVar5 = fn_82528FA8((double)lbl_821CA460,param_2,puVar3 + 1,&stack0x00000020,
                                &stack0x00000030,param_5,0);
      *puVar3 = uVar5;
      lVar8 = 2;
      puVar7 = (uint *)(**(int **)(param_1 + 4) + 0x1dc);
      do {
        puVar4 = puVar7 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar4 | 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    else {
      iVar6 = fn_825279F8(iVar2);
      if ((iVar6 == 0) || (iVar6 == 3)) {
        puVar3 = (undefined4 *)(in_r0 + iVar2 + 0x70 & 0xfffffff0);
        *puVar3 = in_register_00010010;
        puVar3[1] = in_register_00010014;
        puVar3[2] = in_register_00010018;
        puVar3[3] = in_vr1;
      }
      else {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs38,in_vs45); memcpy(auVar9, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs42,auVar9); memcpy(auVar9, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs40,in_vs41,auVar9); memcpy(auVar9, &_vt2, 16); }
        vectorConditionalSelect(auVar9,in_vs32,in_vs44);
        puVar3 = (undefined4 *)(in_r0 + iVar2 + 0x70 & 0xfffffff0);
        *puVar3 = in_register_00010430;
        puVar3[1] = in_register_00010434;
        puVar3[2] = in_register_00010438;
        puVar3[3] = in_vr67;
      }
      puVar3 = (undefined4 *)(in_r0 + iVar2 + 0x70 & 0xfffffff0);
      uVar5 = *puVar3;
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      *(undefined4 *)(iVar2 + 0x170) = 0;
      puVar3 = (undefined4 *)(iVar2 + 0x60U & 0xfffffff0);
      *puVar3 = uVar5;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      fn_82528948(iVar2);
      fn_8252A1B0(**(undefined4 **)(param_1 + 4),&stack0x00000030,0);
    }
    piVar1 = *(int **)(param_1 + 4);
    iVar2 = piVar1[0xb];
    if (*piVar1 != 0) {
      iVar6 = *(int *)(*piVar1 + 0x1d0);
      if (iVar6 == iVar2) {
        if (iVar2 == 0) {
          iVar6 = iVar6 + 1;
        }
        else {
          iVar6 = iVar6 + -1;
        }
        *(int *)(*piVar1 + 0x1d0) = iVar6;
      }
    }
    *(int *)(*(int *)(param_1 + 4) + 0x2c) = iVar2;
  }
  return;
}

