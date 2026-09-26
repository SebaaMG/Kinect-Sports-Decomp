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
extern unsigned int lbl_821917D4;
extern unsigned int lbl_821955F4;
extern unsigned int uRam831c6e4c;


void fn_824602A0(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar3 = uRam831c6e4c;
  if (*(int *)(*(int *)(param_1 + 0x50) + 0x34) == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x50) + 0x74) == 0) {
    return;
  }
  fVar1 = *(float *)(*(int *)(param_1 + 0x3c) + 0x120);
  fVar2 = *(float *)(*(int *)(param_1 + 0x3c) + 4);
  if ((fVar2 < fVar1 - lbl_821917D4) || (fVar1 + lbl_821917D4 < fVar2)) {
    if (fVar2 <= fVar1) {
      *(undefined4 *)(param_1 + 0x8c) = 1;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x7c) = 1;
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    *(undefined4 *)(param_1 + 0x8c) = 1;
    uVar3 = uRam831c6e4c;
  }
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  uVar3 = lbl_821955F4;
  *(undefined4 *)(param_1 + 0x88) = lbl_821955F4;
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  return;
}

