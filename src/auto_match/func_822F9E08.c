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
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CCADC;
extern unsigned int lbl_83265A28;


longlong fn_822F9E08(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  lVar5 = 6;
  iVar3 = *(int *)(*param_1 + 0x844) * 6;
  fVar2 = lbl_821CC160;
  do {
    fVar2 = *(float *)(&lbl_831CCADC + (iVar3 + iVar4) * 0xc) + fVar2;
    iVar4 = iVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  lVar5 = 0;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  fVar1 = lbl_821CC160;
  do {
    fVar1 = *(float *)(&lbl_831CCADC + (iVar3 + (int)lVar5) * 0xc) * (lbl_821CA460 / fVar2) + fVar1;
    if ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460 < fVar1) {
      return lVar5;
    }
    lVar5 = lVar5 + 1;
  } while ((int)lVar5 < 6);
  return 2;
}

