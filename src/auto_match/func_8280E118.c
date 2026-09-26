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
extern unsigned int lbl_8200D8C0;
extern unsigned int lbl_8201E03C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8280E118(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = lbl_8200D8C0;
  fVar1 = param_1[3];
  fVar2 = param_1[1] * lbl_8200D8C0;
  fVar3 = param_1[2] * lbl_8200D8C0;
  fVar4 = *param_1 * lbl_8200D8C0;
  param_2[2] = fVar1 * lbl_8201E03C - fVar2;
  *param_2 = fVar1 * fVar5 - fVar2;
  param_2[1] = fVar4 + fVar3;
  param_2[3] = fVar3 - fVar4;
  return;
}

