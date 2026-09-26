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
extern int fn_83023170();
extern int fn_83023178();
extern unsigned int lbl_82002AE0;


void fn_830242F0(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  undefined8 in_r0;
  int iVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined4 in_register_000103d0;
  undefined4 in_register_000103f0;
  float afStack_30 [12];
  
  iVar6 = (int)in_r0;
  if (*(int *)(param_1 + 0x70) == 1) {
    pbVar8 = (byte *)(param_1 + 0x2c);
    lVar7 = 4;
    do {
      piVar1 = *(int **)(pbVar8 + -8);
      if (piVar1 != (int *)0x0) {
        bVar2 = *(byte *)(param_1 + 0x6c) | *pbVar8;
        if ((bVar2 & 0x80) == 0) {
          (**(code **)(*piVar1 + 0x10))(piVar1,param_1 + 0x100);
        }
        else if ((bVar2 & 0x40) == 0) {
          (**(code **)(*piVar1 + 8))();
        }
        *pbVar8 = *pbVar8 >> 1 & 0x40 | *pbVar8 & 0xbf;
      }
      iVar6 = (int)in_r0;
      lVar7 = lVar7 + -1;
      pbVar8 = pbVar8 + 0x14;
    } while (lVar7 != 0);
    *(byte *)(param_1 + 0x6c) =
         *(byte *)(param_1 + 0x6c) >> 1 & 0x40 | *(byte *)(param_1 + 0x6c) & 0xbf;
    *(undefined2 *)(param_2 + 0xe) = *(undefined2 *)(param_1 + 0x10c);
  }
  fVar5 = lbl_82002AE0;
  altv300_21(in_vs32,in_vs40);
  puVar3 = (undefined4 *)(param_1 + 0x120U & 0xfffffff0);
  *puVar3 = in_register_000103f0;
  puVar3[1] = in_register_000103f0;
  puVar3[2] = in_register_000103f0;
  puVar3[3] = in_register_000103f0;
  puVar3 = (undefined4 *)(iVar6 + param_1 + 0x110 & 0xfffffff0);
  *puVar3 = in_register_000103f0;
  puVar3[1] = in_register_000103f0;
  puVar3[2] = in_register_000103f0;
  puVar3[3] = in_register_000103f0;
  afStack_30[0] = fVar5;
  if (*(float *)(param_1 + 8) - fVar5 < 0.0) {
    afStack_30[0] = *(float *)(param_1 + 8);
  }
  altv300_21(in_vs32,in_vs39);
  puVar3 = (undefined4 *)(param_1 + 0x140U & 0xfffffff0);
  *puVar3 = in_register_000103d0;
  puVar3[1] = in_register_000103d0;
  puVar3[2] = in_register_000103d0;
  puVar3[3] = in_register_000103d0;
  puVar3 = (undefined4 *)(iVar6 + param_1 + 0x130 & 0xfffffff0);
  *puVar3 = in_register_000103d0;
  puVar3[1] = in_register_000103d0;
  puVar3[2] = in_register_000103d0;
  puVar3[3] = in_register_000103d0;
  fVar4 = fVar5;
  if (*(float *)(param_1 + 0x10) - fVar5 < 0.0) {
    fVar4 = *(float *)(param_1 + 0x10);
  }
  *(float *)(param_1 + 0x124) = fVar4;
  if (*(float *)(param_1 + 0xc) - fVar5 < 0.0) {
    fVar5 = *(float *)(param_1 + 0xc);
  }
  *(float *)(param_1 + 0x144) = fVar5;
  if (*(int *)(param_1 + 0x104) == 3) {
    fn_83023170(param_1 + 0x80,param_1 + 0x100,param_2,param_4,afStack_30,afStack_30);
  }
  else if (*(int *)(param_1 + 0x104) == 0x3f) {
    fn_83023178(param_1 + 0x80,param_1 + 0x100,param_2);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  return;
}

