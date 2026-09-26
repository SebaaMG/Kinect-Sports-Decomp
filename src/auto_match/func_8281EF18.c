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
extern int fn_82810208();
extern int fn_82810328();
extern int fn_828105C8();
extern int fn_82812020();
extern int fn_82812030();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8281EF18(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [24];
  
  uVar2 = fn_82812030(param_2);
  puVar1 = (undefined4 *)fn_82812020(param_2);
  uStack_40 = *puVar1;
  uStack_3c = puVar1[1];
  uStack_38 = puVar1[2];
  fn_828105C8(uVar2,uVar2,uVar2,auStack_30);
  fn_82810208(&uStack_40,auStack_30,param_1 + 0xc);
  fn_82810328(&uStack_40,auStack_30,param_1);
  return;
}

