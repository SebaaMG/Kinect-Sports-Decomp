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
extern unsigned int *auStack_e0;
extern unsigned int *auStack_e8;
extern unsigned int *auStack_f0;
extern int fn_82811898();
extern int fn_8285D080();
extern int fn_8285D200();
extern int fn_8285D258();
extern int fn_8285DF00();
extern int fn_82F68CC0();
extern unsigned int lbl_832115A4;
extern unsigned int lbl_832115A5;


void fn_8285E398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,float *param_7,undefined8 param_8)

{
  undefined4 in_stack_00000054;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [224];
  
  if (lbl_832115A5 == '\0') {
    fn_8285D200(param_1,param_2);
    fn_8285DF00(param_3,0,0,0,0);
  }
  else {
    if (lbl_832115A4 == '\0') {
      fn_8285D080(param_1,param_2,param_7,param_5,param_4,param_6,param_8,in_stack_00000054);
    }
    fn_82F68CC0(auStack_e0,0xffffffff83211408,0xa8);
    fn_8285D200(param_1,param_2);
    fn_82811898((double)*param_7,(double)param_7[1],auStack_f0);
    fn_82811898((double)(param_7[2] + *param_7),(double)(param_7[3] + param_7[1]),auStack_e8);
    fn_8285DF00(param_3,param_8,auStack_f0,auStack_e8,0);
    fn_82F68CC0(0xffffffff83211408,auStack_e0,0xa8);
    fn_8285D258(0xffffffff83211380,0xffffffff83211408);
  }
  return;
}

