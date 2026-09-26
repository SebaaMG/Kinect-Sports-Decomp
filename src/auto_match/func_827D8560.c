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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82517978();
extern int fn_82517A50();
extern int fn_827D83A0();
extern int fn_827D8DE0();
extern int fn_827D98C0();


/* WARNING: Removing unreachable block (ram,0x827d85e8) */
/* WARNING: Removing unreachable block (ram,0x827d864c) */

undefined8 fn_827D8560(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [88];
  
  iVar2 = param_1 + 0x6c;
  RtlEnterCriticalSection(iVar2);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xa4);
  if (uVar3 != *(uint *)(param_1 + 0xa8)) {
    do {
      fn_82517A50(auStack_58,uVar3);
      iVar1 = fn_827D98C0(0);
      if (iVar1 == param_2) {
        fn_827D8DE0(auStack_60,param_1 + 0xa4,uVar3);
        fn_82517978(auStack_60,0,0,0);
        fn_827D83A0(param_1,auStack_60);
        RtlLeaveCriticalSection(iVar2);
        return 0;
      }
      uVar3 = uVar3 + 8;
    } while ((uVar3 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0xa8));
  }
  RtlLeaveCriticalSection(iVar2);
  return 2;
}

