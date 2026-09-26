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
extern int fn_82813498();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8320A4D4;
extern unsigned int lbl_8320A63C;


void fn_8281FB48(void)

{
  float fVar1;
  int iVar2;
  double dVar3;
  
  fVar1 = lbl_82002AE0;
  for (iVar2 = lbl_8320A63C; dVar3 = (double)fVar1, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    fVar1 = (float)((double)*(float *)(iVar2 + 4) * dVar3);
  }
  iVar2 = lbl_8320A4D4;
  if (lbl_8320A4D4 == 0) {
    iVar2 = fn_82813498();
  }
  *(float *)(iVar2 + 0x88) = (float)dVar3;
  return;
}

