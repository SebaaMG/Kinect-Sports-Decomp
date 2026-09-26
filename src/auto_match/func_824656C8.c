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
extern unsigned int lbl_83265A28;


ulonglong fn_824656C8(ulonglong param_1,uint param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  if (((param_1 & 0xffffffff) <= (param_3 & 0xffffffff)) && ((uint)param_3 < param_2)) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar2 = ((param_2 - param_1 & 0xffffffff) >> 0x1f) - 1 & param_2 - param_1;
    iVar1 = (int)uVar2;
    param_3 = ((uint)(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                           (float)(longlong)(iVar1 + -1) + lbl_821CA460) - param_1) + param_3;
    return (param_3 -
           (longlong)(int)((param_3 & 0xffffffff) / (uVar2 & 0xffffffff)) * (longlong)iVar1) +
           param_1;
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  return (ulonglong)
         (uint)(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                     (float)(longlong)(int)(param_2 - (int)param_1) + (float)(longlong)(int)param_1)
  ;
}

