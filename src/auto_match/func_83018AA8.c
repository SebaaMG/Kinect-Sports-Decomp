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
extern int fn_82FA5190();
extern int fn_82FF38E8();
extern int fn_83016D40();
extern int fn_83019FD0();
extern int fn_8301A058();
extern int fn_8301A1D0();
extern int fn_8301A2A8();
extern int fn_8301A378();
extern unsigned int lbl_831BC768;


undefined8 fn_83018AA8(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x6b0) != 0) {
    for (puVar1 = *(undefined4 **)(param_1 + 0x6a0); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      fn_83019FD0(puVar1 + 1);
    }
  }
  if (*(int *)(param_1 + 0x6f0) != 0) {
    for (puVar1 = *(undefined4 **)(param_1 + 0x6e0); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      fn_8301A058(puVar1 + 6);
      if (puVar1[3] != 0) {
        fn_82FA5190(lbl_831BC768);
        puVar1[3] = 0;
      }
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
  }
  if (*(int *)(param_1 + 0x310) != -1) {
    fn_83016D40((undefined4 *)(param_1 + 0x310));
    *(undefined4 *)(param_1 + 0x310) = 0xffffffff;
  }
  if (*(int *)(param_1 + 4) != -1) {
    fn_83016D40((undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x61c) != -1) {
    fn_82FF38E8((undefined4 *)(param_1 + 0x61c));
    *(undefined4 *)(param_1 + 0x61c) = 0xffffffff;
  }
  fn_8301A2A8(param_1 + 0x6a0);
  fn_8301A1D0(param_1 + 0x6c0);
  fn_8301A378(param_1 + 0x6e0);
  fn_8301A1D0(param_1 + 0x700);
  return 1;
}

