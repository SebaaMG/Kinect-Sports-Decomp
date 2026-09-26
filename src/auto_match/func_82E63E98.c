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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82E49100();
extern int fn_82E50330();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern unsigned int uStack_58;


longlong fn_82E63E98(int param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint auStack_70 [4];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  fn_82E50CB8(param_1 + 8);
  if (param_2 == (int *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    uVar1 = 0;
    uStack_58 = 0;
    lVar2 = (**(code **)(*param_2 + 0xc))(param_2,auStack_70,4,0);
    if ((-1 < lVar2) && (auStack_70[0] != 0)) {
      do {
        lVar2 = (**(code **)(*param_2 + 0xc))(param_2,auStack_50,0x10,0);
        if (lVar2 < 0) break;
        lVar2 = (**(code **)(*param_2 + 0xc))(param_2,auStack_40,4,0);
        if (lVar2 < 0) break;
        lVar2 = fn_82E49100(param_2,auStack_60);
        if (lVar2 < 0) break;
        lVar2 = (**(code **)(*(int *)(param_1 + -4) + 0x18))(param_1 + -4,auStack_50,auStack_60);
        fn_82E50330(auStack_60);
        uVar1 = uVar1 + 1;
      } while (uVar1 < auStack_70[0]);
    }
  }
  fn_82E50F10(param_1 + 8);
  return lVar2;
}

