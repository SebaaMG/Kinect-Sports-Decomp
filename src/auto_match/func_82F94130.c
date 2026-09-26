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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82CE06D8();
extern int fn_82F8E108();
extern int fn_82F8E248();
extern int fn_82F8F000();
extern unsigned int lbl_8216C0F0;
extern unsigned int lbl_8216C0FC;


void fn_82F94130(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puStack00000014;
  
  *param_1 = &lbl_8216C0FC;
  param_1[1] = &lbl_8216C0F0;
  puStack00000014 = param_1;
  if (*(char *)(param_1 + 5) != '\0') {
    iVar1 = fn_82CE06D8(param_1[4]);
    if (iVar1 == 0) {
      fn_82F8E108(puStack00000014,0,0xffffffff8216c12c);
    }
    else {
      fn_82F8E248(puStack00000014,iVar1,0xffffffff8216c14c);
    }
  }
  fn_82F8F000(ZEXT48(puStack00000014) + 0x18);
  return;
}

