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
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  fn_82359DB8(&iStack_20,param_1 + 0x40,*(undefined4 *)(param_1 + 0x54));
  if ((iStack_20 != 0) && (*(int *)(iStack_20 + 4) == 5)) {
    fn_82522588(&iStack_18,&iStack_20);
    if (*(int *)(iStack_18 + 0x20) == 2) {
      if (iStack_14 != 0) {
        fn_822315A0();
      }
      if (iStack_1c != 0) {
        fn_822315A0();
      }
      return 1;
    }
    if (iStack_14 != 0) {
      fn_822315A0();
    }
  }
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  return 0;
}

