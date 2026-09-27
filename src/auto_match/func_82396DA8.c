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
extern int fn_822315A0();
extern int fn_82359DB8();
extern int fn_82522588();
extern unsigned int iStack_14;
extern unsigned int iStack_18;
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


undefined8 fn_82396DA8(int param_1)

{
  struct { int first; int second; } stack_pair_20;

  struct { int first; int second; } stack_pair_18;


  fn_82359DB8(&stack_pair_20.first,param_1 + 0x40,*(undefined4 *)(param_1 + 0x54));
  if ((stack_pair_20.first != 0) && (*(int *)(stack_pair_20.first + 4) == 5)) {
    fn_82522588(&stack_pair_18.first,&stack_pair_20.first);
    if (*(int *)(stack_pair_18.first + 0x20) == 2) {
      if (stack_pair_18.second != 0) {
        fn_822315A0();
      }
      if (stack_pair_20.second != 0) {
        fn_822315A0();
      }
      return 1;
    }
    if (stack_pair_18.second != 0) {
      fn_822315A0();
    }
  }
  if (stack_pair_20.second != 0) {
    fn_822315A0();
  }
  return 0;
}
