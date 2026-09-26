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
extern int fn_82E20270();
extern int fn_82F67988();
extern int fn_82F6CE40();


void fn_82E20A98(int param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 2) == '\0') &&
     (lVar2 = fn_82E20270(0xffffffff8214bbec,0xffffffff821ce364,1), lVar2 != 0)) {
    fn_82F6CE40(lVar2,0xffffffff8214bbe8,*(undefined4 *)(param_1 + 4));
    for (puVar1 = *(undefined4 **)(param_1 + 0xc); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      fn_82F6CE40(lVar2,0xffffffff821cc884,puVar1[1]);
      fn_82F6CE40(lVar2,0xffffffff821cc884,puVar1[2]);
      fn_82F6CE40(lVar2,0xffffffff821cc884,puVar1[3]);
    }
    fn_82F67988(lVar2);
  }
  return;
}

