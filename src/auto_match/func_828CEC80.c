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
extern unsigned int *auStack_34;
extern unsigned int *auStack_58;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_823AA970();
extern int fn_8265CA20();
extern int fn_828A6130();
extern int fn_828CCC38();
extern int fn_828CCD48();
extern int fn_828CE118();
extern int fn_828CE6D8();
extern int fn_828CE968();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_828CEC80(longlong param_1,undefined8 param_2)

{
  undefined4 uVar2;
  longlong lVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [4];
  undefined4 *puStack_54;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined4 *puStack_30;
  
  uVar2 = fn_823AA970(param_2);
  uStack_60 = 0;
  uStack_5c = 0;
  fn_828CCD48(auStack_58,auStack_70,auStack_70);
  uStack_3c = uStack_60;
  uStack_38 = uStack_5c;
  uStack_40 = uVar2;
  fn_828CCD48(auStack_34,auStack_70,auStack_70);
  fn_828CE118(auStack_34,auStack_58);
  lVar1 = fn_828CCC38(param_1);
  fn_828CE6D8(param_1 + 0xd,lVar1 + 0xc,&uStack_40);
  fn_828CE968(auStack_68,param_1,lVar1,0);
  fn_828A6130(auStack_68,auStack_34,*puStack_30);
  fn_8265CA20(puStack_30);
  fn_828A6130(auStack_68,auStack_58,*puStack_54);
  fn_8265CA20(puStack_54);
  return;
}

