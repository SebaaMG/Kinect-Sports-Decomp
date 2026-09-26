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
extern unsigned int *auStack_40;
extern int fn_82FF9B18();
extern int fn_82FFDF28();
extern int fn_82FFF348();
extern int fn_8302B530();
extern int fn_8302B540();
extern unsigned int uStack_38;


void fn_82FFBA00(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_40 [8];
  uint uStack_38;
  undefined1 auStack_30 [48];
  
  fn_8302B530();
  RtlEnterCriticalSection(param_1 + 0x50);
  fn_82FFDF28(auStack_40,param_1 + 0x90,param_2);
  if (((ulonglong)uStack_38 != 0) &&
     (iVar1 = fn_82FF9B18((ulonglong)uStack_38 + 8), iVar1 == 0)) {
    fn_82FFF348(auStack_30,param_1 + 0x90,auStack_40);
  }
  RtlLeaveCriticalSection(param_1 + 0x50);
  fn_8302B540();
  return;
}

