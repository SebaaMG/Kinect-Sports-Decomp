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
extern int fn_822C18B8();
extern int fn_822CD140();
extern int fn_82552788();
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_82552720(void)

{
  undefined8 uVar1;
  struct { undefined4 first; undefined4 second; } stack_pair_30;

  undefined4 uStack_28;
  struct { undefined4 first; undefined4 second; } stack_pair_20;

  undefined4 uStack_18;

  stack_pair_20.first = 0;
  stack_pair_20.second = 0;
  uStack_18 = 0;
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  uStack_28 = 0;
  uVar1 = fn_82552788();
  fn_822CD140(&stack_pair_30.first);
  fn_822C18B8(&stack_pair_20.first);
  return uVar1;
}
