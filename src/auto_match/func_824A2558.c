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
extern int fn_82F513C0();
extern int fn_82F52428();
extern unsigned int lbl_821CC160;


undefined8 fn_824A2558(int param_1)

{
  int iVar1;
  int aiStack_50 [4];
  undefined1 auStack_40 [48];
  
  iVar1 = fn_82F513C0();
  if (iVar1 != 0) {
    aiStack_50[0] = 1;
    fn_82F52428(param_1,0,auStack_40,aiStack_50,0);
    if ((aiStack_50[0] != 1) && (*(float *)(param_1 + 0xc) == lbl_821CC160)) {
      return 1;
    }
  }
  return 0;
}

