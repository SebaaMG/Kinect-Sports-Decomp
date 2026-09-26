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
extern int fn_8250E678();
extern int fn_827F2038();
extern int fn_827F2D60();
extern int fn_827F2F90();
extern unsigned int lbl_821CC160;


undefined4 fn_8250E5E0(int param_1,undefined8 param_2)

{
  float fVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  double dVar4;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  fVar1 = lbl_821CC160;
  dVar4 = (double)lbl_821CC160;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(float *)(param_1 + 0x2c) = fVar1;
  uVar2 = fn_827F2038(0x110);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_827F2F90(uVar2,param_2,0,0,0,0);
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  fn_8250E678(param_1);
  fn_827F2D60(dVar4,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  return *(undefined4 *)(param_1 + 0x10);
}

