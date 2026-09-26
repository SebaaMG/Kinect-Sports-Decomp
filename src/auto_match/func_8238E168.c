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
extern unsigned int lbl_82192734;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_82195634;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CA1A4;


undefined8 fn_8238E168(int param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = lbl_831CA1A4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  fVar2 = lbl_82192734;
  *(undefined4 *)(iVar1 + 0x9b0) = 2;
  bVar3 = lbl_82195634 <= *(float *)(iVar1 + 0x9ac);
  *(undefined4 *)(iVar1 + 0x9a8) = lbl_821CC160;
  *(float *)(iVar1 + 0x9a4) = fVar2 / *(float *)(iVar1 + 0x9a0);
  if ((bVar3) && (*(float *)(iVar1 + 0x9ac) <= lbl_82193CC0)) {
    return 1;
  }
  return 0;
}

