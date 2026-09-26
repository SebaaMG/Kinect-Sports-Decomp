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
extern int fn_825BBDF8();


ulonglong fn_825BBD78(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = fn_825BBDF8();
  if ((*(uint *)(param_1 + 4) & 0x80) != 0) {
    return uVar4;
  }
  fVar1 = *(float *)(param_1 + 0x48);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = fVar2;
  if (fVar2 <= fVar1) {
    fVar3 = fVar1;
    fVar1 = fVar2;
  }
  if ((*(float *)(param_2 + 4) < fVar1) || (uVar5 = 1, fVar3 <= *(float *)(param_2 + 4))) {
    uVar5 = 0;
  }
  return uVar5 & uVar4;
}

