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


undefined8
fn_82368CD8(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((*(int *)(param_1 + 0x54) == 9) && (*(int *)(param_1 + 0xea4) == 2)) {
    puVar1 = (undefined4 *)(param_1 + 0xeb0U & 0xfffffff0);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar1 = (undefined4 *)(param_1 + 0xec0U & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    uVar7 = *(undefined4 *)(param_1 + 0xed0);
    *param_5 = *(undefined4 *)(param_1 + 0xed4);
    uVar8 = *(undefined4 *)(param_1 + 0xed8);
    *param_4 = uVar7;
    param_5[1] = uVar8;
    puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    param_5[2] = *(undefined4 *)(param_1 + 0xedc);
    return 1;
  }
  return 0;
}

