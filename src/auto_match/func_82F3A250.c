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
extern int fn_82E4FE40();
extern int fn_82F39D20();
extern unsigned int iStack_30;


undefined8 fn_82F3A250(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iStack_30;
  int aiStack_2c [11];
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    if (*(int *)(param_2 + 0xd8) != 0) {
      fn_82E4FE40();
    }
    *(undefined4 *)(param_2 + 0xd8) = 0;
    if (*(int *)(param_2 + 0xd0) != 0) {
      uVar2 = 0;
      do {
        fn_82F39D20(param_2 + 0x14,uVar2,&iStack_30);
        if (*(int *)(iStack_30 + 4) != 0) {
          fn_82E4FE40();
        }
        fn_82F39D20(param_2 + 0x14,uVar2,aiStack_2c);
        uVar2 = uVar2 + 1 & 0xffff;
        *(undefined4 *)(aiStack_2c[0] + 4) = 0;
      } while (uVar2 < *(uint *)(param_2 + 0xd0));
    }
    uVar1 = 0;
  }
  return uVar1;
}

