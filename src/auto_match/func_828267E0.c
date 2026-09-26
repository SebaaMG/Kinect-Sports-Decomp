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
extern int fn_82822E38();
extern int fn_828233A8();
extern int fn_828283F0();


void fn_828267E0(int param_1,int param_2)

{
  int aiStack_30 [12];
  
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0xc);
  while( true ) {
    fn_828233A8(param_1 + 0x318,aiStack_30,0xffffffff8282b9f8,param_2);
    if (aiStack_30[0] == 0) break;
    fn_82822E38();
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  while( true ) {
    fn_828233A8(param_1 + 0x344,aiStack_30,0xffffffff8282afc0,param_2);
    if (aiStack_30[0] == 0) break;
    fn_82822E38();
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  }
  while( true ) {
    fn_828233A8(param_1 + 0x36c,aiStack_30,0xffffffff82829f80,param_2);
    if (aiStack_30[0] == 0) break;
    fn_82822E38();
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
  }
  fn_828283F0(param_1,0);
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  return;
}

