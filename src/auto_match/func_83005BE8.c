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
extern int fn_830177C8();
extern float lbl_82186E6C;
extern unsigned int lbl_832642FC;
extern unsigned int uStack_10;


void fn_83005BE8(int param_1,undefined8 param_2)

{
  undefined4 uStack_10;
  
  if (*(short **)(param_1 + 0x44) == (short *)0x0) {
  }
  else {
    uStack_10 = (float)(longlong)**(short **)(param_1 + 0x44) * lbl_82186E6C;
  }
  if ((*(uint *)(param_1 + 0x40) >> 0x1d & 1) != 0) {
    fn_830177C8((double)uStack_10,lbl_832642FC,param_1,0x1d,param_2);
  }
  return;
}

