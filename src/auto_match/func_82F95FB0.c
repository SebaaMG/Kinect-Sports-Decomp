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
extern int fn_82668E70();
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;


int * fn_82F95FB0(int *param_1,int param_2,int param_3)

{
  undefined8 in_r0;
  int *piStack00000014;
  int iStack0000001c;
  int iStack00000024;
  
  piStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000024 = param_3;
  fn_82668E70(param_1);
  piStack00000014[1] = iStack0000001c;
  if (iStack00000024 == 0) {
    trapWord(0x1f,in_r0,0x16);
  }
  *piStack00000014 = iStack00000024;
  return piStack00000014;
}

