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
extern int fn_82631578();
extern int fn_82631920();
extern unsigned int lbl_8327F94C;
extern unsigned int uRam831c1d2c;
extern unsigned int uRam8327f91c;


void fn_8262B288(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)*param_2;
  *(undefined4 *)(iVar1 + 0x2ed8) = uRam831c1d2c;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x80000;
  fn_82631920(iVar1,uRam8327f91c);
                    /* WARNING: Subroutine does not return */
  fn_82631578(iVar1,lbl_8327F94C);
}

