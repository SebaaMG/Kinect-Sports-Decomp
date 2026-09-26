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
extern unsigned int *auStack_30;
extern int fn_828C92E8();
extern int fn_828C9BD0();
extern int fn_828C9C30();


undefined4 * fn_828C9CF0(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auStack_30 [48];
  
  *param_1 = *param_2;
  fn_828C92E8(param_1 + 2,auStack_30,auStack_30);
  fn_828C9C30(param_1 + 2,param_2 + 2);
  fn_828C9BD0(param_1 + 6,param_2 + 6);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  param_1[0xc] = param_2[0xc];
  return param_1;
}

