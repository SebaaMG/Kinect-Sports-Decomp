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
extern int fn_82810830();
extern int fn_828108B8();
extern int fn_82810A28();
extern int fn_82810B78();
extern int fn_82810BE8();
extern int fn_82835208();
extern int fn_8287AB90();
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


undefined8 fn_828732B0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  puVar1 = (undefined4 *)fn_8287AB90();
  uStack_90 = *puVar1;
  uStack_8c = puVar1[1];
  uStack_88 = puVar1[2];
  puVar1 = (undefined4 *)fn_828108B8(&uStack_70,param_2,&uStack_90);
  dVar3 = (double)*(float *)(param_1 + 0xf4);
  uStack_a0 = *puVar1;
  uStack_9c = puVar1[1];
  uStack_98 = puVar1[2];
  dVar2 = (double)fn_82810BE8(&uStack_a0);
  if (dVar2 < dVar3) {
    dVar3 = (double)fn_82810BE8(&uStack_a0);
  }
  fn_82810B78(&uStack_a0,auStack_60);
  puVar1 = (undefined4 *)fn_82810A28(dVar3,auStack_50,auStack_60);
  uStack_80 = *puVar1;
  uStack_7c = puVar1[1];
  uStack_78 = puVar1[2];
  puVar1 = (undefined4 *)fn_82810830(auStack_40,&uStack_90,&uStack_80);
  uStack_70 = *puVar1;
  uStack_6c = puVar1[1];
  uStack_68 = puVar1[2];
  fn_82835208(param_3,&uStack_70);
  return 0x20190000;
}

