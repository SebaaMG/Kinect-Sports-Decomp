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
extern int fn_822315A0();
extern int fn_82517A50();
extern int fn_827D9350();
extern int fn_827D98D0();


/* WARNING: Removing unreachable block (ram,0x827d8450) */
/* WARNING: Removing unreachable block (ram,0x827d849c) */

void fn_827D83A0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puStack0000001c;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [88];
  
  iVar4 = param_1 + 0x6c;
  puStack0000001c = param_2;
  RtlEnterCriticalSection(iVar4);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x44);
  if (uVar5 != *(uint *)(param_1 + 0x48)) {
    do {
      fn_82517A50(auStack_58,uVar5);
      uVar1 = *param_2;
      iVar2 = fn_827D98D0(0);
      iVar3 = fn_827D98D0(uVar1);
      if (iVar3 < iVar2) {
        fn_827D9350(auStack_60,param_1 + 0x44,uVar5,param_2);
        RtlLeaveCriticalSection(iVar4);
        goto LAB_827d8458;
      }
      uVar5 = uVar5 + 8;
    } while ((uVar5 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x48));
  }
  fn_827D9350(auStack_60,param_1 + 0x44,uVar5,param_2);
  RtlLeaveCriticalSection(iVar4);
LAB_827d8458:
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

