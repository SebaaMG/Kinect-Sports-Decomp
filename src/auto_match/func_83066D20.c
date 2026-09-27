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
extern int fn_82809CB0();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810558();
extern int fn_82810B78();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_8201DCB8;


undefined8 fn_83066D20(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_50 [1];
  undefined1 auStack_40 [64];
  
  dVar2 = (double)fn_82810280(param_3,param_1);
  fn_82810B78(param_3,auStack_50);
  fn_82810280(auStack_50,param_1);
  dVar3 = (double)fn_82809CB0();
  if ((double)lbl_8201DCB8 < dVar3) {
    if (param_4 != 0) {
      fn_82810328(param_2,param_1 + 0xc,auStack_40);
      dVar3 = (double)fn_82810280(param_1,auStack_40);
      fn_82810558((double)(float)(dVar3 * (double)(float)((double)lbl_8200133C / dVar2)),param_3,
                   param_2);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

