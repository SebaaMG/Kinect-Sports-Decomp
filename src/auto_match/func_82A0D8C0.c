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
extern unsigned int lbl_82015BD0;
extern unsigned int lbl_82015BD8;
extern unsigned int lbl_8207F6F4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82A0D8C0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = lbl_8207F6F4;
  fVar5 = lbl_82015BD8;
  fVar4 = lbl_82015BD0;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  param_1[2] = fVar3;
  param_1[1] = (fVar5 - (float)(longlong)(int)fVar2) * fVar3 * fVar6;
  *param_1 = ((float)(longlong)(int)fVar1 - fVar4) * fVar3 * fVar6;
  param_1[3] = param_2[3];
  return;
}

