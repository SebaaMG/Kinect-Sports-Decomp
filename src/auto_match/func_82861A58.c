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
extern int fn_82809400();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern float lbl_8201F94C;


void fn_82861A58(int param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)param_2[10];
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfc;
  dVar4 = (double)lbl_82002AE0;
  dVar2 = (double)fn_82809400((double)(float)(dVar4 / (double)param_2[5]));
  *(float *)(param_1 + 0x114) = (float)(dVar2 * (double)lbl_82005344) * lbl_8201F94C;
  *(float *)(param_1 + 0x118) = param_2[5] / *param_2;
  fVar1 = param_2[0xe];
  *(float *)(param_1 + 0x11c) = (float)((double)fVar1 / dVar3);
  *(float *)(param_1 + 0x120) =
       (float)((double)(float)((double)fVar1 / dVar3) * dVar3) / (float)(dVar3 + dVar4);
  return;
}

