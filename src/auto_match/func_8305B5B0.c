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
extern unsigned int lbl_8217E298;
extern unsigned int lbl_8217E3C8;
extern unsigned int lbl_8217E4C8;


void fn_8305B5B0(int param_1,undefined4 *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = lbl_8217E4C8;
  fVar3 = lbl_8217E3C8;
  fVar2 = lbl_8217E298;
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    iVar1 = *(int *)(**(int **)(param_1 + 0x10) + 8);
    *param_2 = 6;
    param_2[1] = *(undefined4 *)(iVar1 + 0x4c);
    param_2[2] = *(float *)(iVar1 + 0x50) * fVar4;
    param_2[3] = *(float *)(iVar1 + 0x70) * fVar4;
    param_2[4] = *(float *)(iVar1 + 0x60) * fVar4;
    param_2[5] = *(float *)(iVar1 + 0x80) * fVar4;
    param_2[6] = *(float *)(iVar1 + 0x90) * fVar4;
    param_2[7] = *(float *)(iVar1 + 0xa0) * fVar4;
    param_2[8] = *(undefined4 *)(iVar1 + 0x5c);
    param_2[9] = *(undefined4 *)(iVar1 + 0x7c);
    param_2[10] = *(undefined4 *)(iVar1 + 0x6c);
    param_2[0xb] = *(undefined4 *)(iVar1 + 0x8c);
    param_2[0xc] = *(undefined4 *)(iVar1 + 0x9c);
    param_2[0xd] = *(undefined4 *)(iVar1 + 0xac);
    return;
  }
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    iVar1 = *(int *)(**(int **)(param_1 + 0xc) + 8);
    *param_2 = 2;
    param_2[1] = *(undefined4 *)(iVar1 + 0x3c);
    param_2[2] = *(float *)(iVar1 + 0x40) * fVar2;
    param_2[3] = *(float *)(iVar1 + 0x50) * fVar2;
    param_2[4] = *(undefined4 *)(iVar1 + 0x4c);
    param_2[5] = *(undefined4 *)(iVar1 + 0x5c);
    return;
  }
  iVar1 = *(int *)(**(int **)(param_1 + 8) + 8);
  *param_2 = 1;
  param_2[1] = *(undefined4 *)(iVar1 + 0x34);
  param_2[2] = *(float *)(iVar1 + 0x38) * fVar3;
  param_2[3] = *(undefined4 *)(iVar1 + 0x44);
  return;
}

