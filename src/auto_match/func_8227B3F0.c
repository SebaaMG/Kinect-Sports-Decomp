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
extern int fn_82536590();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CC160;


void fn_8227B3F0(double param_1,int param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 auStack_60 [4];
  undefined1 auStack_50 [56];
  
  if (*(int *)(param_2 + 0xa34) == 0) {
LAB_8227b46c:
    if (*(int *)(param_2 + 0xa38) != 0) {
      fn_82864988(auStack_50,0xffffffff821a83f8);
      auStack_60[0] = fn_828647D8();
      fn_82864898(auStack_50);
      fn_82536590(auStack_60,0);
      *(undefined4 *)(param_2 + 0xa38) = 0;
    }
  }
  else if (*(int *)(param_2 + 0xa38) == 0) {
    fn_82864988(auStack_50,0xffffffff821a841c);
    auStack_60[0] = fn_828647D8();
    fn_82864898(auStack_50);
    fn_82536590(auStack_60,0);
    *(undefined4 *)(param_2 + 0xa38) = 1;
  }
  else if (*(int *)(param_2 + 0xa34) == 0) goto LAB_8227b46c;
  if ((double)lbl_821CC160 < (double)*(float *)(param_2 + 0xa30)) {
    fVar1 = (float)((double)*(float *)(param_2 + 0xa30) - param_1);
  }
  else {
    if (*(int *)(param_2 + 0xa3c) == 0) {
      if (*(int *)(param_2 + 0xa40) == 0) goto LAB_8227b524;
      uVar2 = 0xffffffff821a8464;
    }
    else {
      uVar2 = 0xffffffff821a8440;
    }
    fn_82864988(auStack_50,uVar2);
    auStack_60[0] = fn_828647D8();
    fn_82864898(auStack_50);
    fn_82536590(auStack_60,0);
    fVar1 = lbl_821917C0;
  }
  *(float *)(param_2 + 0xa30) = fVar1;
LAB_8227b524:
  *(undefined4 *)(param_2 + 0xa3c) = 0;
  *(undefined4 *)(param_2 + 0xa40) = 0;
  return;
}

