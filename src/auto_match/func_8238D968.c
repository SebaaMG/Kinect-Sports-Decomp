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
extern int fn_82359698();
extern int fn_82372A58();
extern int fn_8238DA08();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8238D968(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_2 + 8);
  fn_8238DA08();
  if (*(float *)(param_2 + 0xc) <= *(float *)(iVar2 + 0x9a0)) {
    fVar1 = lbl_821CA460 / *(float *)(iVar2 + 0x9a0);
    *(float *)(iVar2 + 0x9a8) = lbl_821CA460;
    *(float *)(iVar2 + 0x9a4) = fVar1;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0xc) - param_1);
  *(float *)(param_2 + 0xc) = fVar1;
  if (fVar1 <= lbl_821CC160) {
    uVar3 = fn_82372A58(*(undefined4 *)(param_2 + 8));
    fn_82359698(iVar2,uVar3);
  }
  return;
}

