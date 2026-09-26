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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A49DF8();
extern unsigned int lbl_82089D08;


undefined8 fn_82A4B800(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  ulonglong uVar4;
  short *psVar5;
  undefined8 uVar6;
  
  *param_3 = 2;
  param_3[1] = 0xf;
  fn_82A49DF8(param_3 + 4,0x28,3,6,48000,0,0,0xffffffffffffffff);
  psVar2 = (short *)fn_8265C940(0xc,0x20970000);
  if (psVar2 == (short *)0x0) {
    uVar6 = 0xffffffff8007000e;
  }
  else {
    psVar3 = (short *)fn_8265C940(0x2c,0x20970000);
    if (psVar3 == (short *)0x0) {
      uVar6 = 0xffffffff8007000e;
      fn_8265C990(psVar2,0x20970000);
    }
    else {
      uVar6 = 0;
      uVar4 = 0xc;
      psVar5 = psVar2;
      do {
        if (*(short *)(&lbl_82089D08 + ((int)psVar5 - (int)psVar2)) == 0) break;
        *psVar5 = *(short *)(&lbl_82089D08 + ((int)psVar5 - (int)psVar2));
        uVar4 = uVar4 - 1;
        psVar5 = psVar5 + 1;
      } while (uVar4 != 0);
      if ((uVar4 & 0xffffffff) == 0) {
        psVar5 = psVar5 + -1;
      }
      *psVar5 = 0;
      uVar4 = 0x2c;
      psVar5 = psVar3;
      do {
        sVar1 = *(short *)((int)L"Xbox 360 audio device" + ((int)psVar5 - (int)psVar3));
        if (sVar1 == 0) break;
        *psVar5 = sVar1;
        uVar4 = uVar4 - 1;
        psVar5 = psVar5 + 1;
      } while (uVar4 != 0);
      if ((uVar4 & 0xffffffff) == 0) {
        psVar5 = psVar5 + -1;
      }
      *psVar5 = 0;
      param_3[2] = psVar2;
      param_3[3] = psVar3;
    }
  }
  return uVar6;
}

