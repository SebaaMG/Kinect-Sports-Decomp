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
extern unsigned int lbl_83177358;


void fn_82CBBB90(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  *param_2 = (int)(*(int *)(&lbl_83177358 + (*param_2 & 3) * 4) + *param_2) >> 1;
  *param_3 = (int)(*(int *)(&lbl_83177358 + (*param_3 & 3) * 4) + *param_3) >> 1;
  if (*(int *)(param_1 + 0x704) == 0) {
    return;
  }
  uVar1 = *param_2;
  if ((uVar1 & 1) != 0) {
    if ((int)uVar1 < 1) {
      uVar1 = uVar1 + 1;
    }
    else {
      uVar1 = uVar1 - 1;
    }
    *param_2 = uVar1;
  }
  uVar1 = *param_3;
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (0 < (int)uVar1) {
    *param_3 = uVar1 - 1;
    return;
  }
  *param_3 = uVar1 + 1;
  return;
}

