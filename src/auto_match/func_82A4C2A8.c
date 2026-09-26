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
extern unsigned int lbl_820143E0;
extern unsigned int lbl_82014C4C;


undefined8 fn_82A4C2A8(int param_1,float *param_2,int param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 8) {
    return 0xffffffff80070057;
  }
  fVar1 = *param_2;
  uVar3 = 0xffffffff80070057;
  uVar2 = 0;
  if (fVar1 < lbl_820143E0) {
    uVar2 = uVar3;
  }
  if (lbl_82014C4C < param_2[1]) {
    uVar2 = uVar3;
  }
  if (param_2[1] < fVar1) {
    uVar2 = uVar3;
  }
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  *(float *)(param_1 + 0x5c) = fVar1;
  *(float *)(param_1 + 0x60) = param_2[1];
  if (*(float *)(param_1 + 100) < fVar1) {
    *(float *)(param_1 + 100) = fVar1;
  }
  if (*(float *)(param_1 + 100) <= *(float *)(param_1 + 0x60)) {
    return uVar2;
  }
  *(float *)(param_1 + 100) = *(float *)(param_1 + 0x60);
  return uVar2;
}

