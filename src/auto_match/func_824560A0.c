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
extern int fn_822B98A8();
extern int fn_8252CAF8();
extern int fn_825327A8();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326B394;


void fn_824560A0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 8;
  if (0xf < (uint)param_1[0xd]) {
    piVar2 = (int *)*piVar2;
  }
  fn_825327A8(*param_1,piVar2);
  param_1[0x15] = 0;
  param_1[0xf] = 2;
  param_1[0x16] = lbl_821CC160;
  fn_8252CAF8(*param_1,1,(*(int *)(param_2 + 0x2c) != 0) + '\x01');
  iVar1 = fn_822B98A8(*(undefined4 *)(param_2 + 0x7c));
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(*param_1 + 0x8c0) + 0x19c) = lbl_8326B394;
  }
  else {
    *(int *)(*(int *)(*param_1 + 0x8c0) + 0x19c) = iVar1;
  }
  param_1[0x11] = param_3;
  param_1[0x10] = param_4;
  param_1[0x12] = param_5;
  param_1[0x13] = param_6;
  return;
}

