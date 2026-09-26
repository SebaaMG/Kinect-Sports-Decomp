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
extern int fn_826C1AD8();
extern int fn_826C26B0();
extern int fn_827A80F8();
extern unsigned int lbl_82015D88;
extern unsigned int lbl_82015D90;
extern unsigned int lbl_82015DE4;


void fn_827ABDC0(undefined4 *param_1)

{
  *param_1 = &lbl_82015DE4;
  param_1[4] = &lbl_82015D90;
  param_1[0x10] = &lbl_82015D88;
  fn_826C26B0(param_1 + 0x10);
  fn_827A80F8(param_1 + 0xc);
  fn_826C1AD8(param_1);
  return;
}

