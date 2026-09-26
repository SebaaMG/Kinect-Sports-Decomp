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
extern int fn_82FA52E8();
extern int fn_83050858();
extern int fn_830514A8();
extern int fn_83054338();
extern int fn_83055EC8();


ulonglong fn_83055A48(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  
  iVar6 = param_1 + 0x38;
  RtlEnterCriticalSection(iVar6);
  if (*(int *)(param_1 + 0xa4) == 0) {
    RtlLeaveCriticalSection(iVar6);
    uVar4 = 0;
  }
  else {
    RtlEnterCriticalSection((ulonglong)*(uint *)(param_1 + 0x60) + 0x10);
    uVar4 = fn_82FA52E8(*(undefined4 *)(*(int *)(param_1 + 0x60) + 0x8c));
    if ((uVar4 & 0xffffffff) == 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0xa0) + 0xc);
      if (((ulonglong)*(uint *)(param_1 + 0x98) < (ulonglong)uVar1) ||
         (cVar5 = fn_83050858(param_1,(ulonglong)*(uint *)(param_1 + 0x98) - (ulonglong)uVar1),
         cVar5 != '\0')) {
        fn_83055EC8(*(undefined4 *)(param_1 + 0x60));
      }
      else {
        iVar2 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) - uVar1;
        uVar4 = (ulonglong)*(uint *)(iVar2 + 8);
        fn_83054338(param_1 + 0x9c,iVar2);
        iVar3 = *(int *)(param_1 + 0x60);
        if (*(int *)(iVar3 + 0x78) == 0) {
          *(int *)(iVar3 + 0x78) = iVar2;
          *(undefined4 *)(iVar2 + 0x10) = 0;
          fn_830514A8(param_1);
        }
        else {
          *(int *)(iVar2 + 0x10) = *(int *)(iVar3 + 0x78);
          *(int *)(iVar3 + 0x78) = iVar2;
          fn_830514A8(param_1);
        }
      }
    }
    RtlLeaveCriticalSection((ulonglong)*(uint *)(param_1 + 0x60) + 0x10);
    RtlLeaveCriticalSection(iVar6);
  }
  return uVar4;
}

