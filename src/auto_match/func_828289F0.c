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
extern int fn_8223DB10();
extern int fn_8223DB60();
extern unsigned int lbl_8201ED18;
extern unsigned int lbl_820211D4;
extern unsigned int lbl_821AE3F0;


void fn_828289F0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0x48;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x58) + 4) + param_1 + -0x58) =
       &lbl_8201ED18;
  *(undefined ***)(param_1 + -0x48) = &lbl_820211D4;
  fn_8223DB60(iVar1);
  fn_8223DB10(iVar1);
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x58) + 4) + iVar1 + -0x10) =
       &lbl_821AE3F0;
  return;
}

