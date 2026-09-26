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
extern unsigned int *auStack_50;
extern int fn_82517A50();
extern int fn_8256DE08();
extern int fn_827D98C0();
extern int iRam00000000;


/* WARNING: Removing unreachable block (ram,0x827d6a24) */
/* WARNING: Removing unreachable block (ram,0x827d6a48) */

undefined8 fn_827D6968(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_50 [80];
  
  fn_8256DE08(auStack_50,0);
  iVar3 = param_1 + 0x6c;
  RtlEnterCriticalSection(iVar3);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x44);
  if (uVar4 != *(uint *)(param_1 + 0x48)) {
    do {
      fn_82517A50(auStack_50,uVar4);
      if (((param_3 == -1) || (iVar1 = fn_827D98C0(0), param_3 == iVar1)) &&
         (cVar2 = (**(code **)(iRam00000000 + 0x20))(0,param_2), cVar2 != '\0')) {
        RtlLeaveCriticalSection(iVar3);
        return 1;
      }
      uVar4 = uVar4 + 8;
    } while ((uVar4 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x48));
  }
  RtlLeaveCriticalSection(iVar3);
  return 0;
}

