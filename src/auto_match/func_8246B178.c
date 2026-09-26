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
extern int fn_824656C8();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


int * fn_8246B178(int *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = 0;
  piVar2 = param_1;
  for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      uVar1 = uVar1 + 1;
    }
    piVar2 = piVar2 + 1;
  }
  if (((int)*param_3 < 0) || (uVar1 < 2)) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar1 = (uint)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                  (float)(longlong)(int)uVar1);
  }
  else {
    uVar1 = fn_824656C8(0);
  }
  uVar3 = 0;
  piVar2 = param_1;
  if (param_2 != 0) {
    do {
      if (((piVar2 != (int *)0x0) && (*piVar2 != 0)) && (uVar3 == uVar1)) {
        *param_3 = uVar1;
        return param_1 + uVar3;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < param_2);
  }
  return (int *)0x0;
}

