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
extern unsigned int fStack_3c;
extern int fn_82AA66A8();
extern int fn_82B86888();
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000002c;


void fn_82B86A88(undefined8 param_1,ulonglong param_2,double *param_3,undefined4 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  float *pfVar3;
  uint uVar4;
  undefined4 uStack0000002c;
  float fStack_3c;
  float afStack_30 [6];
  
  uVar2 = 0;
  uStack0000002c = param_4;
  if ((param_2 & 0xffffffff) != 0) {
    uVar4 = 0;
    pfVar3 = afStack_30;
    do {
      uVar1 = ((2 << (uVar4 + 1 & 0x1f)) - 1U &
               *(uint *)((int)&stack0x0000002c + (uVar4 >> 3 & 0x1ffffffc)) & -1 << (uVar4 & 0x1f))
              >> (uVar4 & 0x1f);
      if (uVar1 == 0) {
        *pfVar3 = (float)*param_3;
      }
      else {
        if (uVar1 == 1) {
          fStack_3c = (float)(int)*param_3;
        }
        else {
          if (2 < uVar1) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          fStack_3c = (float)(longlong)*param_3;
        }
        *pfVar3 = fStack_3c;
      }
      uVar2 = uVar2 + 1;
      uVar4 = uVar4 + 2;
      param_3 = param_3 + 1;
      pfVar3 = pfVar3 + 1;
    } while ((uVar2 & 0xffffffff) < (param_2 & 0xffffffff));
  }
  fn_82B86888(param_1,param_2,afStack_30);
  return;
}

