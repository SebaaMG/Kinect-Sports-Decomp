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
extern int fn_826828D8();
extern int fn_82696330();
extern unsigned int lbl_8200579C;
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


void fn_82720000(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined1 auStack_40 [16];
  undefined **ppuStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = *(undefined4 *)(param_1 + 8);
  uStack_14 = *(undefined4 *)(param_1 + 4);
  puStack_2c = auStack_40;
  auStack_40[0] = 0;
  uStack_1c = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  ppuStack_30 = &lbl_8200579C;
  uStack_28 = param_3;
  uStack_18 = param_2;
  (**(code **)(*(int *)*param_4 + 0x28))((int *)*param_4,&ppuStack_30,param_4[1],0);
  fn_826828D8(&ppuStack_30);
  fn_82696330(auStack_40);
  return;
}

