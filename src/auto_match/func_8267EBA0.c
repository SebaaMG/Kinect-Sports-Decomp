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
extern int fn_8267EB30();


undefined8 fn_8267EBA0(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  
  if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
    uVar3 = 0;
  }
  else {
    lVar7 = (ulonglong)*(uint *)(param_1 + 8) + 0x10;
    uVar3 = 0;
    RtlEnterCriticalSection(lVar7);
    iVar1 = *(int *)(param_1 + 8);
    uVar4 = 0;
    if (*(uint *)(iVar1 + 8) != 0) {
      iVar5 = 0;
      do {
        piVar6 = (int *)(*(int *)(iVar1 + 4) + iVar5);
        if ((*piVar6 != param_2) || (bVar2 = true, piVar6[1] != param_3)) {
          bVar2 = false;
        }
        if (bVar2) {
          fn_8267EB30(iVar1 + 4);
          uVar3 = 1;
          break;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 8;
      } while (uVar4 < *(uint *)(iVar1 + 8));
    }
    RtlLeaveCriticalSection(lVar7);
  }
  return uVar3;
}

