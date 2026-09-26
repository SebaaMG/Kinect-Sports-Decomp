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
extern int fn_822974E8();
extern int fn_82663848();
extern int fn_82663B70();
extern int fn_82663F28();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


int fn_82663C28(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iStack00000014;
  uint uStack0000001c;
  uint uStack00000024;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  if (*(uint *)(param_1 + 0x10) < param_2) {
    fn_82663F28(param_1);
  }
  if (*(int *)(iStack00000014 + 0x10) - uStack0000001c < uStack00000024) {
    uStack00000024 = *(int *)(iStack00000014 + 0x10) - uStack0000001c;
  }
  if (uStack00000024 != 0) {
    uVar1 = *(uint *)(iStack00000014 + 0x10);
    uVar6 = (ulonglong)uStack0000001c;
    uVar7 = (ulonglong)uStack00000024;
    lVar4 = fn_82663B70(iStack00000014);
    uVar2 = (ulonglong)uStack0000001c;
    uVar3 = (ulonglong)uStack00000024;
    lVar5 = fn_82663B70(iStack00000014);
    fn_822974E8(lVar5 + ((ulonglong)uStack0000001c & 0x7fffffff) * 2,
                 lVar4 + (uVar2 & 0x7fffffff) * 2 + (uVar3 & 0x7fffffff) * 2,(uVar1 - uVar6) - uVar7
                );
    fn_82663848(iStack00000014,*(int *)(iStack00000014 + 0x10) - uStack00000024);
  }
  return iStack00000014;
}

