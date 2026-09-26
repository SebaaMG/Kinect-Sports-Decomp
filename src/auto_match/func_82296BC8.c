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
extern unsigned int *auStack_28;
extern unsigned int *auStack_5e;
extern unsigned int *auStack_60;
extern int fn_8223F0D8();
extern int fn_82296D40();
extern int fn_82F62DF8();
extern int fn_82F64258();
extern int fn_82F85C08();
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


void fn_82296BC8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_60 [2];
  undefined2 auStack_5e [3];
  ulonglong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 auStack_28 [5];
  
  puVar1 = (undefined4 *)fn_82F64258();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uStack_58 = fn_82F62DF8();
  uVar2 = fn_8223F0D8(0xffffffff82196582,0,&uStack_58);
  *(undefined4 *)(param_1 + 8) = uVar2;
  uStack_50 = fn_82F62DF8();
  uVar2 = fn_82296D40(0xffffffff82196f10,&uStack_50);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uStack_48 = fn_82F62DF8();
  uVar2 = fn_82296D40(0xffffffff82196f18,&uStack_48);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uStack_40 = fn_82F62DF8();
  auStack_5e[0] = 0;
  uStack_58 = uStack_58 & 0xffffffff;
  auStack_60[0] = *(undefined1 *)*puVar1;
  fn_82F85C08(auStack_5e,auStack_60,1,&uStack_58,&uStack_40);
  *(undefined2 *)(param_1 + 0xc) = auStack_5e[0];
  uStack_38 = fn_82F62DF8();
  auStack_5e[0] = 0;
  uStack_58 = uStack_58 & 0xffffffff;
  auStack_60[0] = *(undefined1 *)puVar1[1];
  fn_82F85C08(auStack_5e,auStack_60,1,&uStack_58,&uStack_38);
  *(undefined2 *)(param_1 + 0xe) = auStack_5e[0];
  uStack_30 = fn_82F62DF8();
  auStack_5e[0] = 0;
  auStack_60[0] = 0x2e;
  uStack_58 = uStack_58 & 0xffffffff;
  fn_82F85C08(auStack_5e,auStack_60,1,&uStack_58,&uStack_30);
  *(undefined2 *)(param_1 + 0xc) = auStack_5e[0];
  auStack_28[0] = fn_82F62DF8();
  auStack_60[0] = 0x2c;
  auStack_5e[0] = 0;
  uStack_58 = uStack_58 & 0xffffffff;
  fn_82F85C08(auStack_5e,auStack_60,1,&uStack_58,auStack_28);
  *(undefined2 *)(param_1 + 0xe) = auStack_5e[0];
  return;
}

