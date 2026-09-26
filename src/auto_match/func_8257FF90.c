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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8257F5C0();
extern int fn_825D5E68();
extern int fn_825D5F20();
extern unsigned int lbl_83297910;
extern unsigned int lbl_83297920;
extern V16 loadVectorLeftIndexed128();


void fn_8257FF90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 in_r0;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [176];
  
  if (*(int *)((int)param_1 + 4) != 0) {
    param_1 = param_1 + 8;
    lVar8 = 4;
    do {
      iVar3 = (int)param_1;
      if (*(int *)(iVar3 + -4) != 0) {
        piVar1 = *(int **)(*(int *)(iVar3 + -4) + 0x1a8);
        (**(code **)(*piVar1 + 0xc))(piVar1,param_3);
        if ((*(int *)(iVar3 + 0x28) != 0) && ((param_5 & 0xffffffff) != 0)) {
          fn_825D5E68(param_5,param_4,1);
        }
        if (*(int *)(iVar3 + 0x20) == 0) {
          loadVectorLeftIndexed128(in_r0,param_1);
        }
        else {
          loadVectorLeftIndexed128(in_r0,param_1);
          if ((lbl_83297920 & 1) == 0) {
            lbl_83297920 = lbl_83297920 | 1;
            puVar4 = (undefined4 *)((int)&lbl_83297910 + (int)in_r0 & 0xfffffff0);
            *puVar4 = in_register_000104d0;
            puVar4[1] = in_register_000104d4;
            puVar4[2] = in_register_000104d8;
            puVar4[3] = in_vr77;
          }
        }
        iVar7 = fn_8257F5C0(auStack_b0,*(undefined8 *)(iVar3 + 4),
                                  (ulonglong)*(uint *)(iVar3 + 0xc) << 0x20);
        iVar5 = (int)in_r0;
        puVar4 = (undefined4 *)(iVar5 + iVar7 & 0xfffffff0);
        uVar9 = puVar4[1];
        uVar10 = puVar4[2];
        uVar11 = puVar4[3];
        puVar6 = (undefined4 *)((uint)(auStack_f0 + iVar5) & 0xfffffff0);
        *puVar6 = *puVar4;
        puVar6[1] = uVar9;
        puVar6[2] = uVar10;
        puVar6[3] = uVar11;
        iVar2 = *(int *)(iVar3 + -4);
        puVar4 = (undefined4 *)(iVar7 + 0x10U & 0xfffffff0);
        uVar9 = puVar4[1];
        uVar10 = puVar4[2];
        uVar11 = puVar4[3];
        puVar6 = (undefined4 *)((uint)(auStack_e0 + iVar5) & 0xfffffff0);
        *puVar6 = *puVar4;
        puVar6[1] = uVar9;
        puVar6[2] = uVar10;
        puVar6[3] = uVar11;
        puVar4 = (undefined4 *)(iVar7 + 0x20U & 0xfffffff0);
        uVar9 = puVar4[1];
        uVar10 = puVar4[2];
        uVar11 = puVar4[3];
        puVar6 = (undefined4 *)((uint)(auStack_d0 + iVar5) & 0xfffffff0);
        *puVar6 = *puVar4;
        puVar6[1] = uVar9;
        puVar6[2] = uVar10;
        puVar6[3] = uVar11;
        puVar4 = (undefined4 *)(iVar7 + 0x30U & 0xfffffff0);
        uVar9 = puVar4[1];
        uVar10 = puVar4[2];
        uVar11 = puVar4[3];
        puVar6 = (undefined4 *)((uint)(auStack_c0 + iVar5) & 0xfffffff0);
        *puVar6 = *puVar4;
        puVar6[1] = uVar9;
        puVar6[2] = uVar10;
        puVar6[3] = uVar11;
        piVar1 = *(int **)(iVar2 + 0x1ac);
        (**(code **)(*piVar1 + 4))
                  (piVar1,param_2,auStack_f0,1,0xffffffff82196290,0,0xffffffffffffffff);
        if ((*(int *)(iVar3 + 0x28) != 0) && ((param_5 & 0xffffffff) != 0)) {
          fn_825D5F20(param_5,param_4,1);
        }
      }
      lVar8 = lVar8 + -1;
      param_1 = param_1 + 0x30;
    } while (lVar8 != 0);
  }
  return;
}

