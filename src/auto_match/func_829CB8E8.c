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
extern int fn_829C5A18();
extern int fn_829CB870();
extern unsigned int lbl_832177B0;


void fn_829CB8E8(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = lbl_832177B0 & 0x80000000;
  if ((((*param_1 & 0x20) == 0x20) || (iVar2 = fn_829C5A18(), iVar2 != 0)) || (uVar1 != 0)) {
    fn_829CB870();
  }
  return;
}

