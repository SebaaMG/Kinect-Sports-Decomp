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
extern int fn_8268F7C0();
extern int fn_82722C50();
extern int fn_82729B90();
extern int fn_827912D8();
extern int fn_8279A130();
extern int fn_827A3A50();


void fn_82729CA8(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (*(int *)(*(int *)(param_1 + 0xa0) + 0x114) != 0) {
    fn_8279A130();
    if (*(int *)(*(int *)(param_1 + 0xa0) + 0x114) != 0) {
      uVar1 = fn_827912D8(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 8));
      uVar2 = fn_8268F7C0(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x114));
      if ((uVar1 & 0xffffffff) < (uVar2 & 0xffffffff)) {
        fn_827A3A50(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x114),uVar1,0);
      }
    }
    fn_82722C50(param_1);
    fn_82729B90(param_1);
  }
  return;
}

