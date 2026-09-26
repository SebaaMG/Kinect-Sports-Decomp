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
extern int fn_824FB8D0();
extern int fn_824FB970();
extern int fn_824FBA38();
extern int fn_824FBBD0();
extern int fn_82592340();
extern int fn_82BA02A8();
extern unsigned int lbl_8329E81C;


void fn_824FB8E8(void)

{
  undefined4 *puVar1;
  
  if (lbl_8329E81C == '\0') {
    puVar1 = (undefined4 *)fn_82592340(0xffffffff8329e7e8);
    *puVar1 = fn_824FB8D0;
    puVar1[1] = fn_824FB970;
    puVar1[2] = fn_82BA02A8;
    puVar1[3] = fn_824FBBD0;
    puVar1[5] = fn_824FBA38;
    lbl_8329E81C = '\x01';
  }
  return;
}

