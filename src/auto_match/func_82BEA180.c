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
extern int fn_82BE51E8();
extern unsigned int lbl_820EBE90;
extern unsigned int lbl_83175378;


undefined4 * fn_82BEA180(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  fn_82BE51E8(param_1,0xffffffff820e9bac);
  *param_1 = &lbl_820EBE90;
  RtlInitializeCriticalSection(param_1 + 5);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = lbl_83175378;
  }
  param_1[0xd] = param_2;
  param_1[0xc] = param_3;
  return param_1;
}

