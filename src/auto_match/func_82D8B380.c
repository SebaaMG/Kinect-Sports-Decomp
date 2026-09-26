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
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82186E6C;


void fn_82D8B380(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[1];
  if (*param_2 - param_2[1] < 0.0) {
    fVar1 = *param_2;
  }
  fVar2 = param_2[2];
  if (fVar1 - param_2[2] < 0.0) {
    fVar2 = fVar1;
  }
  if (fVar2 < lbl_82002C5C) {
    *(float *)(param_1 + 0x4c) = fVar2 * lbl_82002C2C;
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = lbl_82186E6C;
  return;
}

