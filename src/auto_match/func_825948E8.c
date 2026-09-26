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
extern unsigned int *auStack_65;
extern unsigned int *auStack_b0;
extern int fn_82529A38();
extern int fn_82558150();
extern int fn_82587AC0();


undefined8 fn_825948E8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_b0 [75];
  undefined1 auStack_65 [85];
  
  fn_82558150(auStack_b0);
  uVar1 = fn_82587AC0(auStack_65);
  fn_82529A38(uVar1,auStack_b0,param_1);
  return 1;
}

