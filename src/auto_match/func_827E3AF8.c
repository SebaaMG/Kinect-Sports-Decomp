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
extern int fn_827DC8B8();
extern int fn_827E8240();
extern int fn_827E8698();
extern int fn_82F6D570();


void fn_827E3AF8(int *param_1)

{
  int iVar1;
  int *piStack00000014;
  
  iVar1 = *param_1;
  piStack00000014 = param_1;
  if (iVar1 != 0) {
    fn_82F6D570(iVar1,0x40,*(undefined4 *)(iVar1 + -4),0xffffffff827e82f0);
    fn_827E8240(iVar1 + -4);
  }
  fn_827DC8B8(param_1 + 0x19);
  fn_827E8698(param_1 + 1);
  return;
}

