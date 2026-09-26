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
extern unsigned int *auStack_20;
extern int fn_82A1F2F8();
extern int fn_82A29A40();
extern unsigned int uStack_12;
extern unsigned int uStack_14;
extern unsigned int uStack_16;
extern unsigned int uStack_18;


ulonglong fn_82E229F0(void)

{
  ulonglong uVar1;
  undefined1 auStack_20 [8];
  ushort uStack_18;
  ushort uStack_16;
  ushort uStack_14;
  ushort uStack_12;
  
  uVar1 = fn_82A1F2F8();
  fn_82A29A40(auStack_20);
  return ((((ulonglong)uStack_18 << 8 ^ (ulonglong)uStack_16) << 8 ^ (ulonglong)uStack_14) &
         0xffffff) << 8 ^ (ulonglong)uStack_12 ^ uVar1 ^ 0x45732698;
}

