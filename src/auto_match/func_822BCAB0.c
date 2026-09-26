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
extern int fn_82F68CC0();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CC160;


void fn_822BCAB0(int param_1,longlong param_2,float *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  fVar2 = lbl_821CC160;
  if ((ulonglong)*(uint *)(param_1 + 0x24) == 0) {
    puVar1 = (undefined4 *)(param_1 + 0x250U & 0xfffffff0);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    param_3[9] = lbl_821CC160;
    param_3[10] = fVar2;
    param_3[8] = fVar2;
    puVar1 = (undefined4 *)(in_r0 + (int)param_3 & 0xfffffff0);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((uint)(param_3 + 4) & 0xfffffff0);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
  }
  else {
    fn_82F68CC0(param_3,param_2 * 0x1c10 + (ulonglong)*(uint *)(param_1 + 0x24) + 0x440,0x30);
    fVar2 = lbl_82192734;
    *param_3 = *param_3 * lbl_82192734;
    param_3[2] = param_3[2] * fVar2;
    param_3[4] = param_3[4] * fVar2;
    param_3[6] = param_3[6] * fVar2;
  }
  return;
}

