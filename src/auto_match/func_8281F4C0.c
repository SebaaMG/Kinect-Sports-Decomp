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
extern int fn_8281F720();
extern int fn_82A1E6A0();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8320A4D4;


void fn_8281F4C0(double param_1,int param_2,undefined8 param_3,char param_4,char param_5)

{
  float fVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  double dVar4;
  
  uVar3 = (ulonglong)lbl_8320A4D4;
  if (uVar3 == 0) {
    uVar3 = fn_82813498();
  }
  dVar4 = (double)fn_8281F720(uVar3,1);
  fVar1 = lbl_821AAD20;
  if (lbl_821AAD20 <= (float)(dVar4 + param_1)) {
    uVar3 = (ulonglong)lbl_8320A4D4;
    if (uVar3 == 0) {
      uVar3 = fn_82813498();
    }
    dVar4 = (double)fn_8281F720(uVar3,1);
    fVar1 = (float)(dVar4 + param_1);
  }
  *(float *)(param_2 + 0x10) = fVar1;
  if ((param_4 != '\0') && (param_5 == '\0')) {
    uVar2 = fn_82A1E6A0(0,0,0,0);
    *(undefined4 *)(param_2 + 8) = uVar2;
  }
  *(char *)(param_2 + 0x14) = param_5;
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  return;
}

