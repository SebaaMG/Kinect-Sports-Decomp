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
extern int fn_82359C18();
extern int fn_82455100();
extern int fn_824C8258();
extern unsigned int lbl_821B2630;


void fn_82455050(undefined4 *param_1)

{
  undefined **ppuStack_20;
  code *pcStack_1c;
  undefined ***pppuStack_10;
  
  pcStack_1c = fn_82455100;
  pppuStack_10 = &ppuStack_20;
  ppuStack_20 = &lbl_821B2630;
  fn_824C8258(*param_1,&ppuStack_20);
  fn_82359C18(&ppuStack_20);
  return;
}

