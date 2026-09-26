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
extern unsigned int *auStack_10;
extern int fn_82230218();
extern int fn_82230300();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int lbl_821961F0;


int fn_8284AD60(int param_1,int param_2)

{
  int iStack00000014;
  int iStack0000001c;
  undefined1 auStack_10 [4];
  undefined1 *puStack_c;
  
  puStack_c = auStack_10;
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  fn_82230300(param_1,0,0);
  fn_82230218(iStack00000014,iStack0000001c,0,lbl_821961F0);
  *(undefined4 *)(iStack00000014 + 0x1c) = *(undefined4 *)(iStack0000001c + 0x1c);
  return iStack00000014;
}

