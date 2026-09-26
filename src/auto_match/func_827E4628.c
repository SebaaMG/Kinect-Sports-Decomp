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
extern int fn_82517978();
extern int fn_827D50C0();
extern int fn_827D5108();
extern int fn_827D9E70();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_827E4628(int param_1)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    fn_827D50C0(*(undefined4 *)(param_1 + 0x14));
    if (*(int *)(param_1 + 0xc) != 0) {
      uStack_20 = 0;
      uStack_1c = 0;
      fn_82517978(&uStack_20,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),0
                       );
      (**(code **)(param_1 + 0xc))(&uStack_20,*(undefined4 *)(param_1 + 0x10));
    }
    if (*(int *)(param_1 + 8) != 0) {
      fn_827D9E70();
    }
    fn_827D5108(*(undefined4 *)(param_1 + 0x14),3);
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  return;
}

