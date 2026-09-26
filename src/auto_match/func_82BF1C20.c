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
extern unsigned int *auStack_80;
extern int fn_82A2AA90();
extern int fn_82A2AA98();
extern int fn_82A2AAA0();
extern unsigned int uRam8322b278;
extern unsigned int uRam8322b27c;
extern unsigned int uRam8322b280;
extern unsigned int uRam8322b284;
extern unsigned int uRam8322b288;
extern unsigned int uStack_88;


undefined8 fn_82BF1C20(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uStack_88;
  undefined1 auStack_80 [128];
  
  puVar1 = &uStack_88;
  lVar2 = 0xb;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  uRam8322b278 = 0;
  uRam8322b27c = 0;
  uRam8322b280 = 0;
  uRam8322b284 = 0;
  uRam8322b288 = 0;
  fn_82A2AA90(auStack_80);
  fn_82A2AA98(auStack_80,param_1,param_2);
  fn_82A2AAA0(auStack_80,0xffffffff8322b278);
  return 0xffffffff8322b278;
}

