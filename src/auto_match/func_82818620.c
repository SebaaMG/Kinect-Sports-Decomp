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
extern int fn_8281B938();
extern int fn_828223C8();
extern int fn_82822798();


void fn_82818620(undefined8 param_1,undefined8 param_2)

{
  uint auStack_20 [4];
  
  auStack_20[0] = fn_82822798();
  while( true ) {
    fn_828223C8(auStack_20[0],auStack_20);
    if (auStack_20[0] == 0) break;
    fn_8281B938(param_2,0,*(undefined4 *)(auStack_20[0] + 0x2c),
                      *(undefined4 *)(auStack_20[0] + 0x30),auStack_20[0],0);
  }
  return;
}

