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
extern int fn_82CE5410();


void fn_82DC5A18(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,int *param_5,
                  int *param_6,int *param_7,int *param_8)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint *in_stack_00000054;
  int *in_stack_0000005c;
  int *in_stack_00000064;
  int in_stack_0000006c;
  int *in_stack_00000074;
  char in_stack_0000007f;
  char in_stack_00000087;
  int *in_stack_0000008c;
  
  iVar3 = *param_8;
  uVar4 = *in_stack_00000054;
  iVar9 = fn_82CE5410();
  puVar10 = (undefined4 *)
            (**(code **)(**(int **)(iVar9 + 0x10) + 4))(*(int **)(iVar9 + 0x10),0x1000);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10[5] = 0;
    puVar10[4] = 0;
    *puVar10 = 0;
  }
  if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
    if (in_stack_0000007f == '\0') {
      *param_2 = puVar10;
      param_2[1] = 0;
    }
  }
  else {
    *(undefined4 *)*param_4 = puVar10;
    *(int *)(*param_4 + 0x10) = *param_8;
  }
  param_2[1] = param_2[1] + 1;
  puVar10[1] = param_1;
  puVar10[5] = in_stack_0000005c[1];
  puVar10[2] = *(undefined4 *)(param_1 + 0x30);
  puVar10[3] = iVar3;
  uVar14 = (ulonglong)(uint)in_stack_0000005c[1];
  if (0 < in_stack_0000005c[1]) {
    iVar9 = 0;
    puVar6 = puVar10;
    do {
      puVar13 = (undefined8 *)(*in_stack_0000005c + iVar9);
      puVar8 = *(undefined4 **)(*in_stack_0000005c + iVar9);
      if ((*(byte *)((int)puVar8 + 0x12) & 0xb) != 0) {
        iVar5 = in_stack_0000008c[1];
        in_stack_0000008c[1] = iVar5 + 1;
        puVar12 = (undefined8 *)(iVar5 * 0x10 + *in_stack_0000008c);
        uVar11 = *puVar13;
        *(undefined4 **)(puVar12 + 1) = puVar6 + 6;
        *puVar12 = uVar11;
      }
      iVar9 = iVar9 + 8;
      puVar6[6] = puVar8[3];
      *(undefined2 *)(puVar6 + 0xb) = *(undefined2 *)(puVar8 + 4);
      puVar6[7] = *puVar8;
      puVar6[8] = puVar8[7];
      *(undefined2 *)((int)puVar6 + 0x2e) = *(undefined2 *)(puVar8 + 8);
      sVar1 = *(short *)((int)puVar13 + 4);
      *(short *)((int)puVar6 + 0x32) = *(short *)((int)puVar13 + 6) + 1;
      *(short *)(puVar6 + 0xc) = sVar1 + 1;
      puVar6[9] = puVar8[1] + 0xf0;
      puVar6[10] = puVar8[2] + 0xf0;
      *param_8 = (uint)*(ushort *)(puVar8 + 5) + *param_8;
      *in_stack_00000054 = (uint)*(ushort *)(puVar8 + 6) * 4 + *in_stack_00000054;
      uVar14 = uVar14 - 1;
      puVar6 = puVar6 + 7;
    } while (uVar14 != 0);
  }
  in_stack_0000005c[1] = 0;
  iVar9 = *param_8;
  *param_8 = iVar9 + 0x10;
  puVar10[4] = iVar9 + 0x10;
  *in_stack_00000054 = *in_stack_00000054 + 0xf & 0xfffffff0;
  *param_4 = (int)puVar10;
  if (in_stack_00000087 != '\0') {
    iVar9 = fn_82CE5410();
    puVar10 = (undefined4 *)
              (**(code **)(**(int **)(iVar9 + 0x10) + 4))(*(int **)(iVar9 + 0x10),0x30);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      *puVar10 = 0;
      *(undefined1 *)(puVar10 + 7) = 0;
      *(undefined2 *)((int)puVar10 + 0x1e) = 0;
      puVar10[8] = 0;
    }
    if ((undefined4 *)*param_5 != (undefined4 *)0x0) {
      *(undefined4 *)*param_5 = puVar10;
    }
    if (in_stack_0000006c != *in_stack_00000064) {
      if (in_stack_0000006c == 0) {
        *param_3 = puVar10;
      }
      *in_stack_00000064 = in_stack_0000006c;
      if (*param_5 != 0) {
        uVar2 = *(undefined2 *)*in_stack_00000074;
        for (puVar6 = (undefined4 *)*param_6;
            (puVar6 != (undefined4 *)0x0 && (puVar6 != (undefined4 *)*param_7));
            puVar6 = (undefined4 *)*puVar6) {
          *(undefined2 *)((int)puVar6 + 0x1e) = uVar2;
          puVar6[8] = *param_7;
        }
        *(undefined1 *)(*param_5 + 0x1c) = 1;
        *in_stack_00000074 = *param_5 + 0x1e;
      }
      *param_6 = *param_7;
      *param_7 = (int)puVar10;
    }
    *(short *)*in_stack_00000074 = *(short *)*in_stack_00000074 + 1;
    puVar10[1] = param_1;
    uVar7 = *(undefined4 *)(param_1 + 0x30);
    puVar10[4] = uVar4;
    puVar10[3] = iVar3;
    puVar10[2] = uVar7;
    puVar10[5] = *param_8 - iVar3;
    puVar10[6] = *in_stack_00000054 - uVar4;
    *param_5 = (int)puVar10;
  }
  return;
}

