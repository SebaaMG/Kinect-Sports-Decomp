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
extern int fn_82CE5410();
extern int fn_82DEDE28();


/* WARNING: Removing unreachable block (ram,0x82deedd4) */
/* WARNING: Removing unreachable block (ram,0x82deedd8) */
/* WARNING: Removing unreachable block (ram,0x82deeda0) */
/* WARNING: Removing unreachable block (ram,0x82deee18) */

void fn_82DEED58(void)

{
  fn_82DEDE28();
  fn_82CE5410();
  return;
}

