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
extern int fn_82529320();
extern int fn_82545810();
extern int fn_825D50C0();
extern unsigned int lbl_821CB8A4;


void fn_8262ACD0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &lbl_821CB8A4;
  if (param_1[0x14] != 0) {
    fn_82545810(param_1 + 0x14);
  }
  iVar1 = param_1[0x3832];
  if ((iVar1 != 0) && (param_1[0x3833] != 0)) {
    fn_82529320(iVar1,0);
    param_1[0x3832] = 0;
  }
  fn_825D50C0(param_1);
  return;
}

