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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_82810240();
extern int fn_82810328();
extern int fn_82810360();
extern int fn_82810470();
extern int fn_82810530();
extern int fn_82810B78();
extern int fn_82862238();
extern unsigned int lbl_832116B8;
extern unsigned int lbl_832116BC;
extern unsigned int lbl_832116C0;
extern unsigned int lbl_832116C4;
extern unsigned int lbl_832116C8;


void fn_82864020(int param_1,char param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  float *pfVar3;
  ulonglong uVar4;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  fn_82862238((double)lbl_832116BC,*(undefined4 *)(param_1 + 4),*(undefined2 *)(param_1 + 8),
                    lbl_832116B8,param_4,0,auStack_70);
  uVar2 = (ulonglong)*(ushort *)(param_1 + 8);
  if (uVar2 != 0) {
    pfVar3 = (float *)(param_3 + -4);
    uVar4 = 1;
    do {
      fn_82862238((double)lbl_832116BC,*(undefined4 *)(param_1 + 4),uVar2,lbl_832116B8,param_4
                        ,-(ulonglong)(uVar2 != uVar4) & uVar4,auStack_60);
      fn_82810328(auStack_70,0xffffffff832116c0,auStack_40);
      fn_82810328(auStack_60,auStack_70,auStack_50);
      fn_82810240(auStack_40,auStack_50,&fStack_80);
      iVar1 = fn_82810470(&fStack_80);
      if (iVar1 == 0) {
        fn_82810B78(&fStack_80,&fStack_80);
      }
      if (param_2 != '\0') {
        fn_82810530(&fStack_80,&fStack_80);
      }
      pfVar3[1] = fStack_80;
      pfVar3[2] = fStack_7c;
      pfVar3[3] = fStack_78;
      pfVar3 = pfVar3 + 4;
      *pfVar3 = lbl_832116C0 * fStack_80 + lbl_832116C8 * fStack_78 + lbl_832116C4 * fStack_7c;
      fn_82810360(auStack_60,auStack_70);
      uVar2 = (ulonglong)*(ushort *)(param_1 + 8);
      iVar1 = (int)uVar4;
      uVar4 = uVar4 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 8));
  }
  return;
}

