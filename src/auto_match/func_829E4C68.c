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
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_829DAFC8();
extern int fn_829E37D0();
extern int fn_829E37E0();
extern int fn_829E37F0();
extern int fn_829E3800();
extern int fn_829E3810();
extern int fn_829E3820();
extern int fn_829E3830();
extern int fn_829E3840();
extern unsigned int lbl_820577E8;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83217B3C;
extern unsigned int lbl_83217B50;
extern unsigned int uStack_34;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_829E4C68(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  double dVar2;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  
  uVar1 = fn_829E37E0(param_3,&fStack_4c);
  if ((((-1 < (int)uVar1) && (uVar1 = fn_829E3800(param_3,&fStack_48), -1 < (int)uVar1)) &&
      (uVar1 = fn_829E37F0(param_3,&fStack_40), -1 < (int)uVar1)) &&
     (uVar1 = fn_829DAFC8((double)fStack_4c,(double)fStack_48,(double)fStack_40,param_2 != 0),
     -1 < (int)uVar1)) {
    dVar2 = (double)lbl_821AAD20;
    if ((int)param_2 == 1) {
      fStack_4c = fStack_44;
      fStack_48 = fStack_50;
      fStack_40 = fStack_38;
      if (((double)fStack_44 != dVar2) && ((double)fStack_50 != dVar2)) {
        fn_829E3810((double)(lbl_820577E8 / (float)((double)fStack_44 * (double)fStack_50)),
                      param_3);
      }
    }
    if (dVar2 < (double)fStack_50) {
      fStack_3c = (float)dVar2;
      uVar1 = fn_829E37D0(param_3,&fStack_3c);
      if (-1 < (int)uVar1) {
        fn_829E3810((double)((fStack_48 * fStack_4c * fStack_3c) / (fStack_44 * fStack_50)),
                      0xffffffff83217b50);
        fn_829E3820((double)fStack_44,0xffffffff83217b50);
        fn_829E3830((double)fStack_38,0xffffffff83217b50);
        fn_829E3840((double)fStack_50,0xffffffff83217b50);
        uVar1 = 0;
        lbl_83217B3C = &lbl_83217B50;
        *param_4 = uStack_34;
      }
    }
    else {
      uVar1 = 0xffffffff8000ffff;
    }
  }
  return uVar1;
}

