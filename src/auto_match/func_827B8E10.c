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
extern int fn_827B6F80();
extern int fn_827B8C60();


undefined8 fn_827B8E10(int param_1,ulonglong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar5;
  undefined8 uVar4;
  ulonglong uVar6;
  short *psVar7;
  int iVar9;
  short sVar10;
  ulonglong uVar8;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (((uVar1 == 0) ||
      ((ulonglong)*(ushort *)(uVar1 * 0x30 + *(int *)(param_1 + 0x78) + -0x2a) <
       (param_2 & 0xffffffff))) && (uVar1 < *(uint *)(param_1 + 0x7c))) {
    uVar2 = *(uint *)(param_1 + 0x18);
    psVar7 = (short *)(uVar1 * 0x30 + *(int *)(param_1 + 0x78));
    *psVar7 = (short)(uVar1 / uVar2) + (short)*(undefined4 *)(param_1 + 4);
    iVar9 = uVar1 - (uVar1 / uVar2) * uVar2;
    trapWord(6,(ulonglong)uVar2,0);
    sVar10 = (short)*(undefined4 *)(param_1 + 0x14) * (short)iVar9;
    psVar7[1] = sVar10;
    trapWord(6,(ulonglong)uVar2,0);
    if (iVar9 + 1 == *(int *)(param_1 + 0x18)) {
      sVar10 = (short)*(undefined4 *)(param_1 + 0x10) - sVar10;
    }
    else {
      sVar10 = (short)*(undefined4 *)(param_1 + 0x14);
    }
    psVar7[2] = sVar10;
    psVar7[3] = (short)*(undefined4 *)(param_1 + 0xc);
    *(short **)(psVar7 + 10) = psVar7 + 4;
    *(short **)(psVar7 + 0xc) = psVar7 + 4;
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  }
  iVar9 = *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x88) * 0x30;
  uVar8 = (ulonglong)*(ushort *)(iVar9 + -0x2a);
  if (uVar8 < (param_2 & 0xffffffff)) {
    uVar4 = 0;
  }
  else {
    uVar6 = uVar8;
    if ((param_2 & 0xffffffff) <= (uVar8 - param_2 & 0xffffffff)) {
      uVar6 = param_2;
    }
    puVar5 = (undefined4 *)
             fn_827B6F80(param_1,iVar9 + -0x30,*(uint *)(param_1 + 0xc) - uVar8,uVar6);
    *(short *)(iVar9 + -0x2a) = *(short *)(iVar9 + -0x2a) - *(short *)(puVar5 + 9);
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    puVar5[1] = param_1 + 0x30;
    *puVar5 = uVar3;
    *(undefined4 **)(*(int *)(param_1 + 0x30) + 4) = puVar5;
    *(undefined4 **)(param_1 + 0x30) = puVar5;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    puVar5[3] = *(undefined4 *)(iVar9 + -0x1c);
    puVar5[4] = iVar9 + -0x28;
    *(undefined4 **)(*(int *)(iVar9 + -0x1c) + 0x10) = puVar5;
    *(undefined4 **)(iVar9 + -0x1c) = puVar5;
    puVar5[6] = *(undefined4 *)(param_1 + 0x54);
    puVar5[5] = param_1 + 0x3c;
    *(undefined4 **)(*(int *)(param_1 + 0x54) + 0x14) = puVar5;
    *(undefined4 **)(param_1 + 0x54) = puVar5;
    uVar4 = fn_827B8C60(param_1,param_2,param_3,puVar5);
  }
  return uVar4;
}

