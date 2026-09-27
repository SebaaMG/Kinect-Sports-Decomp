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
extern float lbl_82005718;


void fn_826F9D88(int param_1,uint param_2,float *param_3,float *param_4,undefined4 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if (*(uint *)(param_1 + 0x9d4) <= param_2) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0xbc);
  fVar2 = *(float *)(param_1 + 0xb4);
  iVar4 = param_2 * 0x24 + param_1;
  fVar3 = *(float *)(iVar4 + 0x95c) * lbl_82005718;
  if (param_3 != (float *)0x0) {
    *param_3 = (*(float *)(iVar4 + 0x958) * lbl_82005718 - *(float *)(param_1 + 0xb8)) /
               *(float *)(param_1 + 0xb0);
  }
  if (param_4 != (float *)0x0) {
    *param_4 = (fVar3 - fVar1) / fVar2;
  }
  if (param_5 == (undefined4 *)0x0) {
    return;
  }
  *param_5 = *(undefined4 *)(iVar4 + 0x950);
  return;
}

