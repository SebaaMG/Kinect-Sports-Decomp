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
extern unsigned int fStack_8;
extern unsigned int lbl_821CC160;


undefined8 fn_8239AA78(int param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float afStack_10 [2];
  float fStack_8;
  
  if (((*(int *)(param_2 + 0xa8) != 0) && (*(int *)(param_2 + 0x154) != 0)) &&
     (*(int *)(param_2 + 0x114) != 0)) {
    fVar1 = *(float *)(param_2 + 0x40);
    puVar2 = (undefined4 *)(param_2 + 0x30U & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (undefined4 *)((int)afStack_10 + in_r0 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    if (((fVar1 <= afStack_10[0]) && (afStack_10[0] < *(float *)(param_2 + 0x50))) &&
       ((*(float *)(param_2 + 0x48) <= fStack_8 && (fStack_8 < *(float *)(param_2 + 0x58))))) {
      if (*(int *)(param_1 + 0x178) != 2) {
        return 1;
      }
      puVar2 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)((int)afStack_10 + in_r0 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
      if (fStack_8 < lbl_821CC160) {
        return 1;
      }
    }
  }
  return 0;
}

