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
extern int fn_82F68CC0();


void fn_82E6A5F8(int *param_1)

{
  int iVar1;
  uint uVar3;
  longlong lVar2;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_1;
  iVar4 = 0;
  if ((ulonglong)*(ushort *)(param_1 + 0x4234) != 0xffffffffffffffff) {
    uVar3 = (uint)*(ushort *)(iVar1 + 0x22);
    do {
      iVar5 = 0;
      if (uVar3 != 0) {
        do {
          uVar3 = param_1[0x1df7];
          lVar2 = (longlong)(int)((uint)*(ushort *)(iVar1 + 0x22) * iVar4 + iVar5) *
                  (longlong)*(int *)(iVar1 + 0xe4) * 0x70;
          fn_82F68CC0(lVar2 + (ulonglong)(uint)param_1[0x1df6],param_1 + 0x1e3b,0x70);
          fn_82F68CC0(lVar2 + (ulonglong)uVar3,param_1 + 0x1e3b,0x70);
          uVar3 = (uint)*(ushort *)(iVar1 + 0x22);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(*(ushort *)(param_1 + 0x4234) + 1));
  }
  return;
}

