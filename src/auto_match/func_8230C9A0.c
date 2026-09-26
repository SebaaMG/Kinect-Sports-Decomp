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
extern int fn_822C4DB0();
extern int fn_8230CA60();
extern int fn_8288B760();
extern unsigned int lbl_821CC160;


void fn_8230C9A0(double param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  fVar1 = (float)((double)*(float *)(param_2 + 0x38) - param_1);
  *(float *)(param_2 + 0x38) = fVar1;
  bVar4 = fVar1 < lbl_821CC160;
  if (*(int *)(*(int *)(param_2 + 0xc) + 0x168) == 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0xc) + 0x16c);
  }
  else {
    uVar2 = fn_8288B760();
    uVar2 = uVar2 & 0xff;
  }
  if (uVar2 == 0) {
    fn_822C4DB0();
  }
  else {
    iVar3 = fn_8230CA60(param_2,bVar4,*(undefined4 *)(param_2 + 0x40));
    if (iVar3 != 0) {
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(*(int *)(param_2 + 0x34) + 4);
    }
  }
  return;
}

