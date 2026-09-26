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
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_8265C940();
extern int fn_829D26C0();
extern int fn_829DAB78();
extern int fn_829DAB88();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005718;
extern unsigned int lbl_8205743C;
extern unsigned int lbl_83214FFC;
extern unsigned int lbl_832178F0;
extern unsigned int uStack_40;
extern unsigned int uStack_44;


undefined8 fn_829D2750(int param_1,float *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int *piVar3;
  ulonglong uVar4;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  if (lbl_83214FFC == 0) {
    uVar1 = 0xffffffff8000ffff;
  }
  else {
    fStack_50 = lbl_82002C5C;
    fStack_4c = lbl_82002C5C;
    fStack_48 = lbl_82002C5C;
    uStack_44 = lbl_82005718;
    uStack_40 = lbl_8205743C;
    if (param_2 == (float *)0x0) {
      param_2 = &fStack_50;
    }
    uVar2 = (ulonglong)lbl_832178F0;
    if (uVar2 == 0) {
      lbl_832178F0 = fn_8265C940(0x1e00,0x209c0000);
      if (lbl_832178F0 == 0) {
        return 0xffffffff8007000e;
      }
      fn_829D26C0();
      uVar2 = (ulonglong)lbl_832178F0;
    }
    uVar4 = 0;
    piVar3 = (int *)(param_1 + 0x30);
    while( true ) {
      if (*piVar3 == 2) {
        fn_829DAB88((double)*param_2,(double)param_2[1],(double)param_2[2],(double)param_2[3],
                          (double)param_2[4]);
      }
      else {
        fn_829DAB78(uVar4 + uVar2);
      }
      uVar4 = uVar4 + 0x500;
      piVar3 = piVar3 + 0x70;
      if (0x1dff < (uVar4 & 0xffffffff)) break;
      uVar2 = (ulonglong)lbl_832178F0;
    }
    uVar1 = 0;
  }
  return uVar1;
}

