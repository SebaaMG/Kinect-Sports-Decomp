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
extern int fn_82AD1B28();
extern int fn_82B81338();
extern int fn_82B894C8();


uint fn_82ADD880(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = *(uint **)(param_2 + 0x2c);
  fn_82B894C8(param_1,*(undefined4 *)(param_2 + 0x1c),param_2 & 0xfffffffc,puVar1);
  uVar2 = puVar1[3];
  fn_82B81338(uVar2,*puVar1 >> 0x19 & 7,*puVar1 >> 5 & 0xff);
  *puVar1 = *puVar1 & 0xffffe01f | 0x1c80;
  *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) & 0xfffe3fe1 | 0x1001e;
  fn_82AD1B28(uVar2);
  return uVar2;
}

