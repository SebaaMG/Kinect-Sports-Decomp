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
extern int fn_83023110();
extern int fn_83025108();


void fn_83024B20(int param_1,int param_2)

{
  if (*(short *)(param_2 + 0xe) != 0) {
    *(undefined4 *)(param_1 + 0x108) = 0x2d;
    if (*(int *)(param_1 + 0x74) == 4) {
      *(undefined4 *)(param_1 + 0x74) = 1;
    }
    fn_83025108(param_2);
    *(undefined2 *)(param_2 + 0xe) = *(undefined2 *)(param_2 + 0xc);
    fn_83023110(param_1 + 0x80,param_2,param_1 + 0x100);
  }
  return;
}

