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
extern unsigned int *auStack_6c;
extern unsigned int uStack_70;


longlong fn_82A37FF0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uStack_70;
  undefined4 auStack_6c [27];
  
  lVar3 = NtCreateEvent(&uStack_70,0,0,1);
  if (-1 < (int)lVar3) {
    lVar3 = NtCreateEvent(auStack_6c,0,1,0);
    if (lVar3 < 0) {
      NtClose(uStack_70);
    }
    else {
      RtlEnterCriticalSection(param_1 + 0x14);
      uVar1 = *(uint *)(param_1 + 8);
      uVar5 = (ulonglong)uVar1;
      if (*(uint *)(param_1 + 0xc) == uVar5) {
        NtClose(uStack_70);
        NtClose(auStack_6c[0]);
        iVar7 = 0;
        lVar3 = -0x3ffffee1;
      }
      else {
        iVar2 = *(int *)(param_1 + 4);
        iVar6 = 0;
        trapWord(6,uVar5,0);
        uVar4 = ((ulonglong)uStack_70 & 0x7ffffff) / 0xc;
        lVar3 = uVar4 - (longlong)(int)(uVar4 / uVar5) * (longlong)(int)uVar1;
        lVar8 = lVar3 * 0x58;
        iVar7 = *(int *)(iVar2 + (int)lVar8);
        while (iVar7 != -1) {
          iVar6 = iVar6 + 1;
          trapWord(6,uVar5,0);
          lVar3 = (lVar3 + 1U) -
                  (longlong)(int)((lVar3 + 1U & 0xffffffff) / (ulonglong)uVar1) *
                  (longlong)(int)uVar1;
          lVar8 = lVar3 * 0x58;
          iVar7 = *(int *)(iVar2 + (int)lVar8);
        }
        iVar7 = (int)lVar8;
        *(uint *)(iVar2 + iVar7) = uStack_70;
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 + 4) = param_3;
        *(int *)(*(int *)(param_1 + 4) + iVar7 + 8) = iVar6;
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 + 0x10) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 + 0x14) = auStack_6c[0];
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 + 0x18) = param_4;
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 + 0x1c) = param_5;
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 + 0x20) = param_6;
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 + 0x24) = param_7;
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 + 0x28) = param_8;
        *(undefined8 *)(*(int *)(param_1 + 4) + iVar7 + 0x30) = 0;
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 + 0x54) = 1;
        RtlInitializeCriticalSection((ulonglong)*(uint *)(param_1 + 4) + lVar8 + 0x38);
        lVar3 = (ulonglong)*(uint *)(param_1 + 0x10) + 1;
        *(int *)(param_1 + 0x10) = (int)lVar3;
        if (lVar3 == 0) {
          *(undefined4 *)(param_1 + 0x10) = 1;
        }
        lVar3 = 0;
        iVar7 = *(int *)(param_1 + 4) + iVar7;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      *param_2 = iVar7;
      RtlLeaveCriticalSection(param_1 + 0x14);
    }
  }
  return lVar3;
}

