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
extern int fn_82809868();
extern float lbl_8201DD70;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_82196280;


double fn_827F4868(int param_1)

{
  float fVar1;
  short sVar2;
  
  if (*(float *)(param_1 + 0x30) < *(float *)(param_1 + 0x2c)) {
    sVar2 = *(short *)(param_1 + 0x22);
    fVar1 = *(float *)(param_1 + 0x30) / *(float *)(param_1 + 0x2c);
    if (sVar2 == 1) {
                    /* WARNING: Subroutine does not return */
      fn_82809868((double)(fVar1 * lbl_8201DD70));
    }
    if (sVar2 == 2) {
                    /* WARNING: Subroutine does not return */
      fn_82809868((double)((fVar1 - lbl_82196280) * lbl_8201DD70));
    }
    if (sVar2 == 3) {
                    /* WARNING: Subroutine does not return */
      fn_82809868((double)(fVar1 * lbl_8201DD74));
    }
    fVar1 = (fVar1 - lbl_82196280) * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x24);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x24);
  }
  return (double)fVar1;
}

