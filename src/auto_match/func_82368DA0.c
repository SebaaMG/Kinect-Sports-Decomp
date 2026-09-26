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
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_82368DA0(int param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_r0;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xe10) + 0x50U & 0xfffffff0);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar3 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
  }
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xe10) + 0xbc0U & 0xfffffff0);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar3 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
  }
  if (param_4 == (float *)0x0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xe10);
  fVar4 = *(float *)(iVar1 + 0xa8) * *(float *)(iVar1 + 0x8bc);
  fVar5 = *(float *)(iVar1 + 0xa0) * *(float *)(iVar1 + 0x8bc);
  fVar6 = fVar5 - fVar4;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar6 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar6) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar5 = fVar4;
  }
  *param_4 = fVar5 * *(float *)(iVar1 + 0x280);
  return;
}

