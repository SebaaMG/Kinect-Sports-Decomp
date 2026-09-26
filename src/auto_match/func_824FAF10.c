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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_824FB0B0();
extern int fn_82502538();
extern int fn_82520158();
extern int fn_82592238();


void fn_824FAF10(int param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [44];
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 != 0) {
    if (*param_2 == 0x42) {
      if (*(int *)(iVar1 + 0x1b8) == param_2[2]) {
        fn_82520158(0xffffffff821c2148,auStack_30,0);
        fn_82520158(0xffffffff821c2158,auStack_2c,0);
        fn_82502538(*(undefined4 *)(iVar1 + 0x1b8),auStack_2c,auStack_30);
      }
    }
    else if (*param_2 == 0x45) {
      fn_824FB0B0(iVar1,*(undefined4 *)(param_1 + 0x30));
    }
  }
  fn_82592238(param_1,param_2);
  return;
}

