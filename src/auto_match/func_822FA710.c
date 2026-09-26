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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831CCA10;
extern unsigned int lbl_831CCA14;
extern unsigned int lbl_83265A28;


double fn_822FA710(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  fVar1 = *(float *)(*(int *)(param_1 + 0x10) + 0x10);
  fVar3 = (*(float *)(iVar2 + 0x54) - *(float *)(iVar2 + 0x4c)) * fVar1 + *(float *)(iVar2 + 0x4c);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  return (double)(((((*(float *)(iVar2 + 0x58) - *(float *)(iVar2 + 0x50)) * fVar1 +
                    *(float *)(iVar2 + 0x50)) - fVar3) *
                   ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar3) *
                  (lbl_831CCA14 - lbl_831CCA10) + lbl_831CCA10);
}

