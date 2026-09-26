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
extern int fn_8265CAA0();
extern int fn_82E20270();
extern int fn_82E20380();
extern int fn_82F67988();
extern int fn_82F6A938();


void fn_82E208B0(int param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((*(char *)(param_1 + 2) == '\0') &&
     (lVar1 = fn_82E20270(0xffffffff8214bbcc,0xffffffff8214baac,1), lVar1 != 0)) {
    if (param_2 == 0) {
      uVar2 = fn_82E20380();
      fn_82F6A938(uVar2,lVar1);
      fn_82F6A938(0xffffffff8214bbb4,lVar1);
      fn_82F6A938(param_3,lVar1);
      fn_82F6A938(0xffffffff821cc86c,lVar1);
      if ((uVar2 & 0xffffffff) != 0) {
        fn_8265CAA0(uVar2);
      }
    }
    else {
      fn_82F6A938(*(undefined4 *)(param_2 + 0xc),lVar1);
      fn_82F6A938(0xffffffff8214bbb0,lVar1);
      fn_82F6A938(*(undefined4 *)(param_2 + 4),lVar1);
      fn_82F6A938(0xffffffff8214bbb0,lVar1);
      fn_82F6A938(param_3,lVar1);
      fn_82F6A938(0xffffffff821cc86c,lVar1);
    }
    fn_82F67988(lVar1);
  }
  return;
}

