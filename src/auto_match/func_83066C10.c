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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82810280();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_82810530();
extern int fn_82810558();
extern int fn_83066788();
extern unsigned int lbl_8200133C;


undefined8
fn_83066C10(double param_1,longlong param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  fn_82810328(param_4,param_3,auStack_60);
  dVar3 = (double)fn_82810308(auStack_60);
  if ((double)(float)(param_1 * param_1) < dVar3) {
    iVar1 = fn_83066788(param_1,param_2,param_3);
    iVar2 = fn_83066788(param_1,param_2,param_4);
    if (((iVar1 != iVar2) && (iVar1 != 2)) && (iVar2 != 2)) {
      fn_82810280(auStack_60,param_2);
      if (param_5 != 0) {
        if (iVar1 != 1) {
          fn_82810530(auStack_60,auStack_60);
          param_3 = param_4;
        }
        dVar3 = (double)fn_82810280(auStack_60,param_2);
        fn_82810328(param_3,param_2 + 0xc,auStack_50);
        dVar4 = (double)fn_82810280(param_2,auStack_50);
        fn_82810558((double)(float)(dVar4 * (double)(float)((double)lbl_8200133C / dVar3)),
                     auStack_60,param_3);
      }
      return 1;
    }
  }
  return 0;
}

