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
extern int fn_8263B758();
extern int fn_82A93C18();
extern int fn_82A93F08();
extern unsigned int lbl_8326AFE0;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


undefined8 fn_82544870(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  fn_8263B758(0xffffffff8326afc0,0,auStack_40);
  uVar1 = lbl_8326AFE0 & 0xfffff000;
  fn_82A93C18(uStack_28,uStack_24,1,0,0x18280186,0,0,0);
  fn_82A93F08(param_1,uVar1,0);
  return param_1;
}

