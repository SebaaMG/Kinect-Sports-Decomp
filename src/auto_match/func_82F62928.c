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
extern unsigned int *auStack_20;
extern int fn_82F62680();
extern int fn_82F626D0();
extern int fn_82F626F8();
extern unsigned int *lbl_832632CC;


void fn_82F62928(void)

{
  undefined4 *puVar1;
  undefined1 auStack_20 [16];
  
  fn_82F62680(auStack_20,0);
  while( true ) {
    puVar1 = lbl_832632CC;
    if (lbl_832632CC == (undefined4 *)0x0) break;
    lbl_832632CC = (undefined4 *)*lbl_832632CC;
    fn_82F626F8(puVar1,1);
  }
  fn_82F626D0(auStack_20);
  return;
}

