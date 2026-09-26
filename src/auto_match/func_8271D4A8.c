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
extern unsigned int *auStack_80;
extern unsigned int *auStack_8f;
extern int fn_82696330();
extern int fn_826A79D8();
extern int fn_826C1FF8();
extern int fn_826C35B8();
extern int fn_82720700();
extern unsigned int lbl_8200FEC8;
extern unsigned int lbl_8200FF20;
extern unsigned int uStack_7c;
extern unsigned int uStack_90;


undefined4 * fn_8271D4A8(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 uStack_90;
  undefined1 auStack_8f [15];
  undefined1 auStack_80 [4];
  undefined1 uStack_7c;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  fn_826C35B8(param_1,param_2,0xffffffff827521e8);
  param_1[0xd] = param_3;
  *param_1 = &lbl_8200FF20;
  puVar1 = param_1 + 4;
  param_1[4] = &lbl_8200FEC8;
  fn_82720700(param_2,puVar1);
  uStack_90 = 0;
  auStack_70[0] = 10;
  fn_826C1FF8(puVar1,param_2,(ulonglong)*param_2 + 0x1e0,auStack_70,&uStack_90);
  fn_82696330(auStack_70);
  auStack_8f[0] = 0;
  auStack_60[0] = 10;
  fn_826C1FF8(puVar1,param_2,(ulonglong)*param_2 + 0x1e4,auStack_60,auStack_8f);
  fn_82696330(auStack_60);
  auStack_50[0] = 10;
  fn_826A79D8(puVar1,param_2,0xffffffff8200feb8,auStack_50);
  fn_82696330(auStack_50);
  auStack_40[0] = 10;
  fn_826A79D8(puVar1,param_2,0xffffffff8200feb0,auStack_40);
  fn_82696330(auStack_40);
  auStack_80[0] = 2;
  uStack_7c = 1;
  fn_826A79D8(puVar1,param_2,0xffffffff8200fea4,auStack_80);
  fn_82696330(auStack_80);
  return param_1;
}

