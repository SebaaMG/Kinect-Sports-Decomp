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
extern int fn_82FA5358();
extern int fn_830514A8();
extern int fn_83055E98();


undefined8 fn_83051B70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = param_1 + -0x40;
  RtlEnterCriticalSection(iVar4);
  if (*(char *)(param_1 + 0x30) == '\0') {
    RtlLeaveCriticalSection(iVar4);
    uVar3 = 2;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24);
    lVar5 = (ulonglong)*(uint *)(param_1 + -0x18) + 0x10;
    RtlEnterCriticalSection(lVar5);
    fn_82FA5358(*(undefined4 *)(*(int *)(param_1 + -0x18) + 0x8c),*(undefined4 *)(iVar1 + 8));
    fn_83055E98(*(undefined4 *)(param_1 + -0x18));
    iVar2 = *(int *)(param_1 + 0x24);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x10) == 0) {
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar2 + 0x10);
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    }
    iVar2 = *(int *)(param_1 + -0x18);
    if (*(int *)(iVar2 + 0x78) == 0) {
      *(int *)(iVar2 + 0x78) = iVar1;
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    else {
      *(int *)(iVar1 + 0x10) = *(int *)(iVar2 + 0x78);
      *(int *)(iVar2 + 0x78) = iVar1;
    }
    RtlLeaveCriticalSection(lVar5);
    *(char *)(param_1 + 0x30) = *(char *)(param_1 + 0x30) + -1;
    fn_830514A8(param_1 + -0x78);
    RtlLeaveCriticalSection(iVar4);
    uVar3 = 1;
  }
  return uVar3;
}

