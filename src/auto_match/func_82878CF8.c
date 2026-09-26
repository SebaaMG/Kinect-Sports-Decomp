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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_82864898();
extern int fn_828778E8();
extern int fn_828788D0();


undefined8 fn_82878CF8(int param_1)

{
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [44];
  
  fn_828778E8(auStack_40);
  fn_828788D0(param_1 + 0x68,auStack_40);
  *(undefined1 *)(param_1 + 100) = 1;
  fn_82864898(auStack_3c);
  return 0x20340000;
}

