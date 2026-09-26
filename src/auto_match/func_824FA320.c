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
extern int fn_824FA308();
extern int fn_824FA3B0();
extern int fn_824FA450();
extern int fn_824FA4F8();
extern int fn_824FA548();
extern int fn_824FA5E0();
extern int fn_82591810();
extern unsigned int lbl_8329E5B0;


void fn_824FA320(void)

{
  undefined4 *puVar1;
  
  if (lbl_8329E5B0 == '\0') {
    puVar1 = (undefined4 *)fn_82591810(0xffffffff8329e584);
    *puVar1 = fn_824FA308;
    puVar1[1] = fn_824FA3B0;
    puVar1[2] = fn_824FA450;
    puVar1[3] = fn_824FA4F8;
    puVar1[5] = fn_824FA548;
    puVar1[9] = fn_824FA5E0;
    lbl_8329E5B0 = '\x01';
  }
  return;
}

