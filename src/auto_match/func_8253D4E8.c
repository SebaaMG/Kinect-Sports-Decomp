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
extern unsigned int *auStack_18;
extern int fn_8251E530();
extern int fn_82A1EFC0();
extern int fn_82D81078();


void fn_8253D4E8(int param_1,int param_2,ulonglong param_3,int param_4)

{
  uint *puVar1;
  undefined1 auStack_18 [8];
  
  puVar1 = *(uint **)(param_1 + 100);
  while( true ) {
    if (*(uint **)(param_1 + 0x68) <= puVar1) {
      fn_82D81078(*(undefined4 *)(param_2 + 0x1f8),param_3,param_4 == 0);
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(auStack_18,0,4);
    }
    if ((ulonglong)*puVar1 == (param_3 & 0xffffffff)) break;
    puVar1 = puVar1 + 1;
  }
  fn_8251E530(param_1 + 100,puVar1);
  return;
}

