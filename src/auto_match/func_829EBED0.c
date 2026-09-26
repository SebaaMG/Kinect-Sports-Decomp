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
extern unsigned int *auStack_168;
extern unsigned int *auStack_1ec;
extern unsigned int *auStack_220;
extern int fn_829E9CB0();
extern int fn_829EA810();
extern int fn_829EABB8();
extern int fn_829EB688();
extern int fn_829EB780();
extern int fn_829EBB98();
extern int fn_829EE540();
extern unsigned int uStack_1fc;
extern unsigned int uStack_22c;
extern unsigned int uStack_230;
extern unsigned int uStack_234;
extern unsigned int uStack_238;
extern unsigned int uStack_23c;
extern unsigned int uStack_240;
extern unsigned int uStack_244;
extern unsigned int uStack_248;
extern unsigned int uStack_24c;
extern unsigned int uStack_250;
extern unsigned int uStack_25c;
extern unsigned int uStack_260;
extern unsigned int uStack_264;
extern unsigned int uStack_268;
extern unsigned int uStack_26c;
extern unsigned int uStack_270;
extern unsigned int uStack_274;
extern unsigned int uStack_278;
extern unsigned int uStack_27c;
extern unsigned int uStack_280;


longlong fn_829EBED0(int param_1,int param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 auStack_220 [36];
  undefined4 uStack_1fc;
  undefined1 auStack_1ec [132];
  undefined1 auStack_168 [360];
  
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_26c = 1;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  uStack_248 = 0;
  uStack_244 = 0;
  uStack_240 = 0;
  uStack_23c = 1;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  fn_829EB688(auStack_220);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x10);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x14);
  if (param_3 != (uint *)0x0) {
    uVar2 = (ulonglong)param_3[2] - (ulonglong)*param_3;
    uVar3 = (ulonglong)param_3[3] - (ulonglong)param_3[1];
  }
  lVar1 = fn_829EA810(&uStack_280,uVar2,*(undefined4 *)(param_2 + 0x10));
  if (-1 < lVar1) {
    lVar1 = fn_829EA810(&uStack_250,uVar3,*(undefined4 *)(param_2 + 0x14));
    if (-1 < lVar1) {
      uStack_1fc = 1;
      lVar1 = fn_829EE540(auStack_1ec,&uStack_280);
      if (-1 < lVar1) {
        uStack_1fc = 1;
        lVar1 = fn_829EE540(auStack_168,&uStack_250);
        if (-1 < lVar1) {
          lVar1 = fn_829EBB98(auStack_220,param_1,param_2,param_3,2,2,0,0);
        }
      }
    }
  }
  fn_829EB780(auStack_220);
  fn_829E9CB0(&uStack_238);
  fn_829EABB8(&uStack_24c);
  fn_829E9CB0(&uStack_268);
  fn_829EABB8(&uStack_27c);
  return lVar1;
}

