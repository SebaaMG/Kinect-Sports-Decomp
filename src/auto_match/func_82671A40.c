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
extern int fn_82671620();


undefined8 fn_82671A40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [48];
  
  iVar2 = param_1 + 0x124;
  if (iVar2 != 0) {
    RtlEnterCriticalSection(iVar2);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  while( true ) {
    if (iVar1 == *(int *)(param_1 + 0x18)) {
      if (iVar2 != 0) {
        RtlLeaveCriticalSection(iVar2);
      }
      return 0;
    }
    if (*(int *)(iVar1 + 4) == param_2) break;
    iVar1 = iVar1 + 8;
  }
  fn_82671620(auStack_30,param_1 + 0x14);
  if (iVar2 != 0) {
    RtlLeaveCriticalSection(iVar2);
  }
  return 1;
}

