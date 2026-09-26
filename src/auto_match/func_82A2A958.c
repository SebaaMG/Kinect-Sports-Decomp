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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82A2B760();
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_3c;


undefined8 fn_82A2A958(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  
  RtlInitAnsiString(auStack_38,param_1);
  puStack_24 = auStack_38;
  uStack_28 = 0xfffffffd;
  uStack_20 = 0x40;
  uVar1 = NtOpenFile(&uStack_3c,0x10000,&uStack_28,auStack_30,7,0x4040);
  if (-1 < (int)uVar1) {
    auStack_40[0] = 1;
    uVar1 = NtSetInformationFile(uStack_3c,auStack_30,auStack_40,1,0xd);
    NtClose(uStack_3c);
    if (-1 < (int)uVar1) {
      return 1;
    }
  }
  fn_82A2B760(uVar1);
  return 0;
}

