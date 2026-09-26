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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_6f;
extern int fn_82696330();
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_70;


void fn_82743888(int param_1,int param_2,undefined8 *param_3)

{
  undefined1 uStack_70;
  undefined1 auStack_6f [15];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  uStack_58 = *param_3;
  auStack_60[0] = 3;
  uStack_70 = 0;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x28))
            (param_1 + 0x10,param_2 + 0x78,(ulonglong)*(uint *)(param_2 + 0x78) + 0x1ec,auStack_60,
             &uStack_70);
  fn_82696330(auStack_60);
  uStack_48 = param_3[1];
  auStack_50[0] = 3;
  auStack_6f[0] = 0;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x28))
            (param_1 + 0x10,param_2 + 0x78,(ulonglong)*(uint *)(param_2 + 0x78) + 0x1f0,auStack_50,
             auStack_6f);
  fn_82696330(auStack_50);
  return;
}

