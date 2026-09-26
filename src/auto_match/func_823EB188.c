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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_38;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b8;
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823831D8();
extern int fn_823CF178();
extern int fn_823D2008();
extern int fn_82F68CC0();
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_9c;


void fn_823EB188(uint *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int in_r0;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined1 auStack_b8 [24];
  code *pcStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [56];
  
  uStack_68 = param_1[1];
  uVar3 = (ulonglong)uStack_68;
  pcStack_a0 = fn_823CF178;
  uStack_9c = 0;
  uStack_70 = 0x823cf17800000000;
  puVar1 = (undefined4 *)((int)&uStack_50 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_60 = param_2;
  fn_82F68CC0(&uStack_40,param_3,0x18);
  fn_82F68CC0(auStack_b8,auStack_38,0x18);
  uVar2 = fn_823D2008(auStack_90,uStack_70,CONCAT44(uStack_68,uStack_64),
                            CONCAT44(uStack_60,uStack_5c),uStack_58,uStack_50,uStack_48,uStack_40);
  fn_8227CB30(uVar3 + 0xb30,uVar2);
  fn_82359C18(uVar2);
  fn_823831D8((ulonglong)*param_1 + 0x710);
  return;
}

