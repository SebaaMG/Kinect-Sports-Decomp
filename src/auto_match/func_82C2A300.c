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
extern unsigned int *auStack_40;
extern int fn_82C10AD0();
extern int fn_82F691F0();


void fn_82C2A300(void)

{
  int iVar1;
  undefined8 in_r6;
  undefined4 auStack_40 [16];
  
  auStack_40[0] = 0;
  iVar1 = fn_82C10AD0(in_r6,0x1f,0x80,auStack_40);
  if (-1 < iVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_40[0],0,0x80);
  }
  return;
}

