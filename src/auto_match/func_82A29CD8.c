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
extern int fn_82A2B760();
extern unsigned int uStack_18;
extern unsigned int uStack_20;
extern unsigned int uStack_30;


undefined8 fn_82A29CD8(undefined8 param_1)

{
  int iVar1;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  iVar1 = NtQueryInformationFile(param_1,auStack_28,&uStack_30,8,0xe);
  if (-1 < iVar1) {
    uStack_20 = uStack_30;
    iVar1 = NtSetInformationFile(param_1,auStack_28,&uStack_20,8,0x14);
    if (-1 < iVar1) {
      uStack_18 = uStack_30;
      iVar1 = NtSetInformationFile(param_1,auStack_28,&uStack_18,8,0x13);
      if (-1 < iVar1) {
        return 1;
      }
    }
  }
  fn_82A2B760();
  return 0;
}

