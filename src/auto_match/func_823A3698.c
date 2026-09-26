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
extern int fn_822A0E10();
extern int fn_82399BA0();
extern int fn_8239D1D0();
extern int fn_82490FC8();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_823A3698(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  fn_8229EEA0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0xd4) + 0x10));
  iVar4 = fn_82399BA0(*(undefined4 *)(param_1 + 8));
  if (iVar4 == 0) {
    fn_822A0E10(*(undefined4 *)(*(int *)(param_1 + 8) + 0xd4),1);
  }
  fn_8239D1D0(*(undefined4 *)(param_1 + 8));
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x2dc);
  fVar1 = *(float *)(iVar4 + 0x138);
  if (lbl_821CC160 < fVar1) {
    iVar2 = *(int *)(iVar4 + 0x40);
    if (*(int *)(iVar2 + 4) != 0) {
      *(undefined4 *)(iVar2 + 0x1cc) = *(undefined4 *)(iVar4 + 0x13c);
      *(float *)(iVar2 + 0x1d0) = fVar1;
      *(undefined4 *)(iVar2 + 0x1d4) = 1;
      uVar3 = lbl_821CA460;
      *(undefined4 *)(iVar2 + 0x1d8) = lbl_821917B0;
      *(undefined4 *)(iVar2 + 0x1dc) = uVar3;
      *(undefined4 *)(iVar2 + 0x1e0) = uVar3;
    }
  }
  fn_82490FC8(*(undefined4 *)(*(int *)(param_1 + 8) + 0x94));
  return;
}

