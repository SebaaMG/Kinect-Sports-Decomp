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
extern int fn_82FEFF00();
extern int fn_82FF0A80();
extern unsigned int lbl_83264574;
extern unsigned int lbl_83264578;
extern unsigned int lbl_8326457C;


void fn_82FF2B48(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  RtlEnterCriticalSection(0xffffffff83264580);
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar1 = param_1;
  if (lbl_83264578 != 0) {
    *(int *)(lbl_83264578 + 0x10) = param_1;
    iVar1 = lbl_83264574;
  }
  lbl_83264574 = iVar1;
  lbl_8326457C = lbl_8326457C + 1;
  lbl_83264578 = param_1;
  RtlLeaveCriticalSection(0xffffffff83264580);
  fn_82FEFF00(param_1);
  fn_82FF0A80(param_1,param_2,param_3 == 1,0);
  return;
}

