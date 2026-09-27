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
extern float lbl_821955F0;
extern unsigned int lbl_821CA460;


void fn_82388840(int param_1,int *param_2,uint *param_3,undefined4 *param_4)

{
  float fVar1;
  uint uVar2;
  
  fVar1 = lbl_821CA460;
  uVar2 = *(int *)(param_1 + 0x44) * 0x19660d + 0x3c6ef35f;
  *(uint *)(param_1 + 0x44) = uVar2;
  uVar2 = (uint)(((float)(uVar2 & 0x7fffff | 0x3f800000) - fVar1) * lbl_821955F0 <
                *(float *)(*(int *)(*(int *)(param_1 + 8) + 0x260) + 0x1a8));
  *param_3 = uVar2;
  *param_2 = ((uint)LZCOUNT(uVar2) >> 5 ^ 1) + 0x13;
  *param_4 = 0;
  return;
}

