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
extern int fn_82359698();
extern int fn_8236B008();
extern int fn_8236B4F0();
extern int fn_823D6088();
extern unsigned int lbl_821CA460;


void fn_823D1610(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = fn_8236B008();
  fn_82359698(uVar1,9);
  if (*(int *)(*(int *)(param_1 + 0x4b0) + 0xd4) == 0) {
    fn_8236B4F0((double)lbl_821CA460,param_1);
  }
  fn_823D6088(param_1 + 0x9f8);
  return;
}

