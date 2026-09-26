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
extern int fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BEB8C0();
extern int fn_82BF1138();


undefined8 fn_82BEA858(int param_1)

{
  undefined8 uVar1;
  int *piVar2;
  
  fn_82BEB8C0();
  if (*(int *)(param_1 + 0x40) == 0) {
    fn_82BE5240(param_1,0x130,0xffffffff82196582);
    uVar1 = 0x130;
  }
  else {
    fn_82BE5340();
    while (*(int *)(*(int *)(param_1 + 0x40) + 8) != 0) {
      piVar2 = (int *)fn_82BE5378();
      (**(code **)(*piVar2 + 0x14))();
      fn_82BE5350(*(undefined4 *)(param_1 + 0x40));
    }
    if (*(int *)(param_1 + 0x44) == 0) {
      fn_82BE5240(param_1,0x131,0xffffffff82196582);
      uVar1 = 0x131;
    }
    else {
      fn_82BE5340();
      while (*(int *)(*(int *)(param_1 + 0x44) + 8) != 0) {
        fn_82BE5378();
        fn_82BF1138();
        fn_82BE5350(*(undefined4 *)(param_1 + 0x44));
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}

