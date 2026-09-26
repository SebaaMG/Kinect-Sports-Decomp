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
extern unsigned int *auStack_160;
extern unsigned int *auStack_168;
extern unsigned int *auStack_180;
extern int fn_82A2B760();
extern int fn_82A33500();
extern int fn_82A35FB8();
extern unsigned int uStack_170;
extern unsigned int uStack_178;


ulonglong fn_82A2A438(undefined8 param_1,undefined8 param_2)

{
  int iVar2;
  ulonglong uVar1;
  uint auStack_180 [2];
  undefined4 uStack_178;
  undefined1 *puStack_174;
  undefined4 uStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [336];
  
  auStack_180[0] = 0;
  RtlInitAnsiString(auStack_168,param_1);
  puStack_174 = auStack_168;
  uStack_178 = 0xfffffffd;
  uStack_170 = 0x40;
  iVar2 = fn_82A33500(&uStack_178,auStack_160,0x148,auStack_180);
  if (iVar2 < 0) {
    fn_82A2B760();
    uVar1 = 0xffffffffffffffff;
  }
  else {
    fn_82A35FB8(auStack_160,param_2);
    uVar1 = (ulonglong)auStack_180[0];
  }
  return uVar1;
}

