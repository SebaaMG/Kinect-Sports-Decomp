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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82517A50();
extern int fn_827D8DE0();
extern int fn_827D98C0();
extern int iRam00000000;


/* WARNING: Removing unreachable block (ram,0x827d7c5c) */
/* WARNING: Removing unreachable block (ram,0x827d7cac) */

undefined8 fn_827D7BD8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [72];
  
  iVar3 = param_1 + 0x6c;
  RtlEnterCriticalSection(iVar3);
  iVar1 = *(int *)(param_1 + 0xa4);
  iVar2 = *(int *)(param_1 + 0xa8);
  while( true ) {
    if (iVar1 == iVar2) {
      RtlLeaveCriticalSection(iVar3);
      return 2;
    }
    fn_82517A50(auStack_48,iVar1);
    iVar2 = fn_827D98C0(0);
    if (iVar2 == param_2) break;
    iVar2 = *(int *)(param_1 + 0xa8);
  }
  fn_827D8DE0(auStack_50,param_1 + 0xa4,iVar1);
  (**(code **)(iRam00000000 + 8))(0);
  RtlLeaveCriticalSection(iVar3);
  return 0;
}

