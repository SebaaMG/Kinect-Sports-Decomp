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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82810280();
extern int fn_82810830();
extern int fn_828108B8();
extern int fn_82810A28();
extern int fn_82835208();
extern int fn_8287AB90();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


undefined8 fn_82873040(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  puVar1 = (undefined4 *)fn_8287AB90();
  uStack_80 = *puVar1;
  uStack_7c = puVar1[1];
  uStack_78 = puVar1[2];
  puVar1 = (undefined4 *)fn_828108B8(&uStack_50,param_2,&uStack_80);
  uStack_70 = *puVar1;
  uStack_6c = puVar1[1];
  uStack_68 = puVar1[2];
  fn_82810280(&uStack_70,param_1 + 0xf4);
  puVar1 = (undefined4 *)fn_82810A28(auStack_40,param_1 + 0xf4);
  uStack_60 = *puVar1;
  uStack_5c = puVar1[1];
  uStack_58 = puVar1[2];
  puVar1 = (undefined4 *)fn_82810830(auStack_30,&uStack_80,&uStack_60);
  uStack_50 = *puVar1;
  uStack_4c = puVar1[1];
  uStack_48 = puVar1[2];
  fn_82835208(param_3,&uStack_50);
  return 0x20160000;
}

