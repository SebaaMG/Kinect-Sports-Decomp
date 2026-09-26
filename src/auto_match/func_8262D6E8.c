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
extern unsigned int *auStack_10;
extern unsigned int fStack_c;
extern unsigned int lbl_82191EAC;
extern unsigned int lbl_821CC160;


ulonglong fn_8262D6E8(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_10 [4];
  float fStack_c;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 == 5) {
    if (lbl_821CC160 < *(float *)(param_1 + 0x184)) {
      return 1;
    }
  }
  else if (uVar1 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x40U & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (undefined4 *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    if (lbl_821CC160 <= fStack_c) {
      return 1;
    }
  }
  else if (uVar1 == 1) {
    puVar2 = (undefined4 *)(param_1 + 0x40U & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (undefined4 *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    if (lbl_82191EAC <= fStack_c) {
      return 1;
    }
  }
  else {
    if (uVar1 < 3) {
      if ((((*(float *)(param_1 + 0xd0) == lbl_821CC160) &&
           (*(float *)(param_1 + 0xd4) == lbl_821CC160)) &&
          (*(float *)(param_1 + 0xd8) == lbl_821CC160)) &&
         ((*(float *)(param_1 + 0xdc) == lbl_821CC160 &&
          (*(float *)(param_1 + 0xe0) == lbl_821CC160)))) {
        return 0;
      }
      return 1;
    }
    if (uVar1 == 3) {
      return ((~(ulonglong)*(uint *)(param_1 + 0xa4) & 0xffffffff) >> 0x1f) +
             (ulonglong)(2 < (ulonglong)*(uint *)(param_1 + 0xa4)) & 1;
    }
    if (uVar1 < 5) {
      return (ulonglong)(*(int *)(param_1 + 0xa4) == 0);
    }
  }
  return 0;
}

