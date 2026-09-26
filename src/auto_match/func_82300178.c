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
extern int fn_82250A18();
extern unsigned int lbl_82192568;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_832975B0;


void fn_82300178(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  fVar1 = lbl_821CA460;
  if (*(char *)(iVar2 + 4) != '\0') {
    fVar1 = lbl_82192568;
  }
  *(float *)(param_1 + 0x540) = *(float *)(*(int *)(param_1 + 0x52c) + 0x48) * fVar1;
  iVar2 = *(int *)(*(int *)(param_1 + 0x528) + 0x14);
  *(float *)(param_1 + 0x544) =
       *(float *)(iVar2 + 0x8bc) * *(float *)(iVar2 + 0x274) * *(float *)(iVar2 + 0xa4);
  return;
}

