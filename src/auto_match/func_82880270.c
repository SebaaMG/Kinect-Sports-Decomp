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
extern unsigned int *auStack_70;
extern int fn_82A2AA90();
extern int fn_82A2AA98();
extern int fn_82A2AAA0();
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


uint fn_82880270(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [96];
  
  puVar1 = &uStack_78;
  lVar2 = 0xb;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  fn_82A2AA90(auStack_70);
  fn_82A2AA98(auStack_70,param_1,0x24);
  fn_82A2AAA0(auStack_70,&uStack_90);
  return uStack_90 ^ uStack_8c ^ uStack_88 ^ uStack_84 ^ uStack_80;
}

