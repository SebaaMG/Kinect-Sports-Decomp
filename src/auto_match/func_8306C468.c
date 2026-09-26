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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_82A2B760();
extern unsigned int uStack_10;
extern unsigned int uStack_18;


bool fn_8306C468(undefined8 param_1)

{
  int iVar1;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  
  RtlInitAnsiString(auStack_28,param_1);
  puStack_14 = auStack_28;
  uStack_18 = 0xfffffffd;
  uStack_10 = 0x40;
  iVar1 = NtCreateFile(auStack_30,0x100001,&uStack_18,auStack_20,0,0x80,3,2);
  if (iVar1 < 0) {
    fn_82A2B760();
  }
  else {
    NtClose(auStack_30[0]);
  }
  return iVar1 >= 0;
}

