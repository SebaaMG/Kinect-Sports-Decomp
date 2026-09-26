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
extern unsigned int *auStack_90;
extern unsigned int *auStack_9a;
extern int fn_82696330();
extern int fn_826A1CC8();
extern int fn_826BF638();
extern int fn_826C1FF8();
extern int fn_82716738();
extern unsigned int lbl_8200F6C8;
extern unsigned int lbl_8200F6CC;
extern unsigned int lbl_8200F7A0;
extern unsigned int uStack_8c;
extern unsigned int uStack_9b;
extern unsigned int uStack_9c;
extern unsigned int uStack_9d;
extern unsigned int uStack_9e;
extern unsigned int uStack_9f;
extern unsigned int uStack_a0;


undefined4 * fn_82716DB8(undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 auStack_9a [10];
  undefined1 auStack_90 [4];
  undefined1 uStack_8c;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  fn_82716738();
  *param_1 = &lbl_8200F6CC;
  param_1[4] = &lbl_8200F7A0;
  param_1[0xd] = &lbl_8200F6C8;
  uStack_a0 = 1;
  puVar1 = param_1 + 4;
  fn_826BF638(param_1 + 0xd,param_1,param_2,0xffffffff8200f5dc,&uStack_a0);
  uStack_8c = 1;
  uStack_9f = 2;
  auStack_90[0] = 2;
  fn_826C1FF8(puVar1,param_2,(ulonglong)*param_2 + 0x1e8,auStack_90,&uStack_9f);
  fn_82696330(auStack_90);
  uStack_9e = 2;
  auStack_80[0] = 10;
  fn_826A1CC8(puVar1,param_2,0xffffffff82006750,auStack_80,&uStack_9e);
  fn_82696330(auStack_80);
  uStack_9d = 2;
  auStack_70[0] = 10;
  fn_826A1CC8(puVar1,param_2,0xffffffff82006730,auStack_70,&uStack_9d);
  fn_82696330(auStack_70);
  uStack_9c = 2;
  auStack_60[0] = 10;
  fn_826A1CC8(puVar1,param_2,0xffffffff820066b4,auStack_60,&uStack_9c);
  fn_82696330(auStack_60);
  uStack_9b = 2;
  auStack_50[0] = 10;
  fn_826A1CC8(puVar1,param_2,0xffffffff82006700,auStack_50,&uStack_9b);
  fn_82696330(auStack_50);
  auStack_9a[0] = 2;
  auStack_40[0] = 10;
  fn_826A1CC8(puVar1,param_2,0xffffffff82006724,auStack_40,auStack_9a);
  fn_82696330(auStack_40);
  return param_1;
}

