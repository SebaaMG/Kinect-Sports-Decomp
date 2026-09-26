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
extern int fn_82F61808();
extern int fn_82F61908();


undefined8 fn_82F608F0(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  uVar4 = 0;
  RtlEnterCriticalSection(param_1 + 0xd4);
  if (*(char *)(param_1 + 4) == '\0') {
    uVar4 = 0xffffffff82240404;
  }
  else {
    bVar1 = *(int *)(param_1 + 0xc) != 0;
    if ((*(uint *)(param_1 + 0x18) & 2) == 0) {
      uVar5 = 0;
      if (bVar1) {
        iVar7 = 0;
        do {
          if (*(int *)(iVar7 + *(int *)(param_1 + 0x1c)) != 0) {
            piVar3 = *(int **)(iVar7 + *(int *)(param_1 + 0x1c));
            (**(code **)(*piVar3 + 0x10))(piVar3);
          }
          uVar5 = uVar5 + 1;
          iVar7 = iVar7 + 4;
        } while (uVar5 < *(uint *)(param_1 + 0xc));
      }
    }
    else {
      lVar6 = 0;
      uVar5 = 0;
      if (bVar1) {
        iVar7 = 0;
        lVar8 = 0;
        do {
          iVar2 = *(int *)(iVar7 + *(int *)(param_1 + 0x1c));
          if (iVar2 != 0) {
            fn_82F61808(param_1 + 0x90,0xffffffff82f60698,iVar2,0,
                          (ulonglong)*(uint *)(param_1 + 0x20) + lVar8);
            lVar6 = lVar6 + 1;
            lVar8 = lVar8 + 4;
          }
          uVar5 = uVar5 + 1;
          iVar7 = iVar7 + 4;
        } while (uVar5 < *(uint *)(param_1 + 0xc));
      }
      fn_82F61908(param_1 + 0x90,lVar6,*(undefined4 *)(param_1 + 0x20),0,0xffffffffffffffff);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0xd4);
  return uVar4;
}

