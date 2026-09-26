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
extern int fn_828F0170();
extern unsigned int uStack_1c;


undefined8 fn_829A9A70(int param_1)

{
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  fn_828F0170(0xffffffff82012618,0,auStack_20);
  *(undefined4 *)(param_1 + 0x28) = 0x40;
  *(undefined4 *)(param_1 + 0x2c) = 0x40;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x2000;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x80200000;
  *(undefined4 *)(param_1 + 0x10c) = uStack_1c;
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xbfbfffff | 0x24200000;
  return 0;
}

