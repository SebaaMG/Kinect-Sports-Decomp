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
extern unsigned int stack0x00000000;
extern unsigned int stack0x00000010;
extern unsigned int stack0x00000040;
extern unsigned int stack0x00000050;
extern unsigned int stack0x00000060;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


void fn_8253B818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_r0;
  float *pfVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack00000010;
  undefined8 uStack00000018;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  int in_stack_00000074;
  int in_stack_0000007c;
  
  uStack00000010 = param_1;
  uStack00000020 = param_3;
  uStack00000030 = param_5;
  uStack00000040 = param_7;
  uStack00000028 = param_4;
  uStack00000038 = param_6;
  uStack00000048 = param_8;
  iVar6 = 0;
  uStack00000018 = param_2;
  puVar1 = (undefined4 *)((uint)((int)&stack0x00000040 + in_r0) & 0xfffffff0);
  uVar9 = *puVar1;
  uVar10 = puVar1[1];
  uVar11 = puVar1[2];
  uVar12 = puVar1[3];
  puVar1 = (undefined4 *)(in_r0 + in_stack_00000074 & 0xfffffff0);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  puVar1 = (undefined4 *)(in_r0 + in_stack_0000007c & 0xfffffff0);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  do {
    iVar7 = 0;
    pfVar5 = (float *)(&stack0x00000000 + iVar6);
    lVar8 = 3;
    do {
      pfVar5 = pfVar5 + 4;
      fVar2 = *(float *)(&stack0x00000050 + iVar7) * *pfVar5;
      fVar3 = *(float *)(&stack0x00000060 + iVar7) * *pfVar5;
      iVar7 = iVar7 + 4;
      fVar4 = fVar2;
      if (fVar2 - fVar3 < 0.0) {
        fVar4 = fVar3;
        fVar3 = fVar2;
      }
      *(float *)(iVar6 + in_stack_00000074) = fVar3 + *(float *)(iVar6 + in_stack_00000074);
      *(float *)((int)&stack0x00000010 +
                (in_stack_0000007c - (int)&stack0x00000010) + iVar6 + 0x10 + -0x10) =
           fVar4 + *(float *)((int)&stack0x00000010 +
                             (in_stack_0000007c - (int)&stack0x00000010) + iVar6 + 0x10 + -0x10);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0xc);
  return;
}

