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
extern int fn_822AC918();
extern unsigned int lbl_82196750;


undefined8 fn_823691B0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  uVar5 = 0;
  if (param_3 != 0) {
    puVar3 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
  }
  if (param_4 != 0) {
    puVar3 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
  }
  iVar1 = *(int *)(param_2 + 0x2c);
  if ((iVar1 < 2) && (*(int *)(param_2 + 0x28) < 7)) {
    iVar6 = (iVar1 * 7 + *(int *)(param_2 + 0x28)) * 0x30 + param_1;
    if (*(int *)(iVar6 + 0x10b0) != -1) {
      piVar2 = *(int **)(**(int **)(param_1 + 8) + iVar1 * 4);
      uVar5 = fn_822AC918(*(undefined4 *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x48),
                            *(int *)(iVar6 + 0x10b0),param_3,param_4);
      if ((*(char *)(iVar6 + 0x10b4) != '\0') && (uVar5 = 1, param_3 != 0)) {
        puVar3 = (undefined4 *)(in_r0 + iVar6 + 0x1090 & 0xfffffff0);
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        puVar4 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
        *puVar4 = *puVar3;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
      }
      if ((*(char *)(iVar6 + 0x10b5) != '\0') && (param_4 != 0)) {
        puVar3 = (undefined4 *)(iVar6 + 0x10a0U & 0xfffffff0);
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        puVar4 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
        *puVar4 = *puVar3;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
      }
    }
  }
  return uVar5;
}

