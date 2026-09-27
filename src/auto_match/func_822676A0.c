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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82267EB0();
extern int fn_8227E330();
extern unsigned int iStack0000001c;
extern float lbl_821917B0;
extern unsigned int lbl_82192734;
extern float lbl_82193B00;
extern unsigned int lbl_821CC160;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_822676A0(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iStack0000001c;
  struct { undefined4 first; undefined4 second; } stack_pair_80;

  undefined8 uStack_78;
  undefined8 uStack_70;
  
  fVar3 = lbl_821917B0;
  fVar1 = *(float *)(param_2 + 0xf8) * lbl_82193B00;
  fVar2 = *(float *)(param_2 + 0xf8) * lbl_821917B0;
  *(float *)(param_2 + 0xe8) = lbl_82193B00;
  *(float *)(param_2 + 0xec) = fVar3;
  *(float *)(param_2 + 0xf0) = fVar1;
  *(float *)(param_2 + 0xf4) = fVar2;
  iStack0000001c = param_2;
  fn_82267EB0(param_1,&stack0x0000001c);
  uStack_78 = CONCAT44(lbl_82192734,lbl_82192734);
  stack_pair_80.first = *(undefined4 *)(param_3 + 0x40);
  stack_pair_80.second = *(undefined4 *)(param_3 + 0x44);
  uStack_70 = CONCAT44(lbl_821CC160,lbl_821CC160);
  fn_8227E330(*(undefined4 *)(param_1 + 0x18),&stack_pair_80.first,param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x54) = 1;
  return;
}

