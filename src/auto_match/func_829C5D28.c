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
extern int fn_829C5C78();
extern unsigned int lbl_820570A8;
extern unsigned int lbl_821AAD20;


undefined8 fn_829C5D28(int param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs36 [16];
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float afStack_20 [8];
  
  if (*(float *)(param_1 + 0xc) != lbl_821AAD20) {
    fn_829C5C78(0xffffffff83214f20,param_1);
    fVar3 = lbl_820570A8;
    altv207_13(in_vs32,in_vs36);
    fVar1 = in_register_000103f0 * in_register_00010010 +
            in_register_000103f4 * in_register_00010014 +
            in_register_000103f8 * in_register_00010018;
    pfVar2 = (float *)((int)afStack_20 + in_r0 & 0xfffffff0);
    *pfVar2 = fVar1;
    pfVar2[1] = fVar1;
    pfVar2[2] = fVar1;
    pfVar2[3] = fVar1;
    if (fVar3 <= afStack_20[0]) {
      return 1;
    }
  }
  return 0;
}

