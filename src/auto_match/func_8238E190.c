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
extern int fn_8229EEA0();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8238E190(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  fn_8229EEA0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0xd4) + 0x10));
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x664);
  fVar1 = *(float *)(iVar2 + 0x200);
  if (lbl_821CC160 < fVar1) {
    iVar3 = *(int *)(iVar2 + 0x1ec);
    if (*(int *)(iVar3 + 4) != 0) {
      *(undefined4 *)(iVar3 + 0x1cc) = *(undefined4 *)(iVar2 + 0x210);
      *(float *)(iVar3 + 0x1d0) = fVar1;
      *(undefined4 *)(iVar3 + 0x1d4) = 1;
      uVar4 = lbl_821CA460;
      *(undefined4 *)(iVar3 + 0x1d8) = lbl_821917B0;
      *(undefined4 *)(iVar3 + 0x1dc) = uVar4;
      *(undefined4 *)(iVar3 + 0x1e0) = uVar4;
    }
  }
  return;
}

