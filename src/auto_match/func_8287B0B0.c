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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_82834EA0();
extern int fn_82868758();
extern int fn_82874AE0();
extern int fn_8287AE08();


undefined8 fn_8287B0B0(int *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [16];
  
  (**(code **)(param_1[1] + 0x40))(param_1 + 1);
  uVar1 = fn_82868758();
  fn_82874AE0(auStack_28,uVar1,param_1 + 0x24);
  piVar2 = param_1 + 0x2a;
  fn_82834EA0(auStack_30,piVar2,param_1[0x2a],param_1[0x2b]);
  (**(code **)(*param_1 + 0x8c))(param_1,auStack_28,piVar2);
  fn_8287AE08(param_1,piVar2,0xffffffff821ca1a0);
  return 0x20130000;
}

