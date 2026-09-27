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
extern int fn_8267C4C8();
extern int fn_827594F8();
extern float lbl_8200571C;


void fn_827599C0(byte *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  float fVar1;
  int iVar2;
  
  iVar2 = (int)param_3;
  if (((*param_1 & 0x10) == 0) || (iVar2 != *(int *)(param_1 + 4))) {
    fn_827594F8(param_1);
    *(int *)(param_1 + 4) = iVar2;
    if (iVar2 != 0) {
      fn_8267C4C8(param_3);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)(param_1 + 0x14) = param_4[1];
  *(undefined4 *)(param_1 + 0x18) = param_4[2];
  *(undefined4 *)(param_1 + 0x1c) = param_4[3];
  *(undefined4 *)(param_1 + 0x20) = param_4[4];
  fVar1 = (float)param_4[5];
  *(float *)(param_1 + 0x24) = fVar1;
  fVar1 = fVar1 * lbl_8200571C;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) * lbl_8200571C;
  *(float *)(param_1 + 0x24) = fVar1;
  return;
}

