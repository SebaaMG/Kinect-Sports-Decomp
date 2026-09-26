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
extern int fn_82A2C770();
extern int fn_82A2FCF8();
extern int fn_82A2FDE0();
extern int fn_82F691F0();
extern int iRam83219d10;


void fn_82A2FF30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar3 = *(int *)(param_2 + 0x50);
  iVar1 = *(int *)(iVar3 + 0x18);
  uVar7 = (ulonglong)*(uint *)(iVar3 + 4);
  iRam83219d10 = iRam83219d10 + 1;
  iVar2 = *(int *)(iVar1 + 8);
  RtlEnterCriticalSection();
  iVar4 = *(int *)(param_1 + 0x88);
  if (iVar4 == 0) {
    if ((*(byte *)(iVar1 + 2) & 0x10) == 0) {
      if ((*(byte *)(iVar2 + 0x35) & 2) == 0) {
        if (uVar7 == 0) {
          iVar4 = 0;
          *(undefined4 *)(param_2 + 0x14) = 0;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(iVar3 + 0x10);
          if ((*(int *)(iVar3 + 0xc) == 0) && (uVar6 < *(uint *)(iVar2 + 0x18))) {
            uVar5 = *(uint *)(iVar2 + 0x18) - uVar6;
            if ((uVar5 & 0xffffffff) <= uVar7) {
              uVar7 = uVar5;
            }
            if (((ulonglong)*(uint *)(iVar2 + 0x1c) < (uVar6 + uVar7 & 0xffffffff)) ||
               (iVar3 = fn_82A2C770(*(undefined4 *)(iVar3 + 0x14),
                                          *(undefined4 *)(param_2 + 0x1c),uVar7,uVar6), iVar3 != 0))
            {
              iVar4 = fn_82A2FCF8(param_1,iVar2,*(undefined4 *)(param_2 + 0x1c),uVar7,uVar6);
            }
            else {
              iVar4 = fn_82A2FDE0(param_1,iVar2,*(undefined4 *)(param_2 + 0x1c),uVar7,uVar6);
            }
            if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(*(undefined4 *)(param_2 + 0x1c),0,uVar7);
            }
            if ((*(byte *)(iVar1 + 2) & 1) != 0) {
              *(int *)(iVar1 + 0x18) = (int)(uVar6 + uVar7);
              *(undefined4 *)(iVar1 + 0x14) = 0;
            }
            *(int *)(param_2 + 0x14) = (int)uVar7;
          }
          else {
            iVar4 = -0x3fffffef;
          }
        }
      }
      else {
        iVar4 = -0x3ffffff0;
      }
    }
    else {
      iVar4 = -0x3ffffed8;
    }
  }
  RtlLeaveCriticalSection(param_1);
  *(int *)(param_2 + 0x10) = iVar4;
  IoCompleteRequest(param_2,1);
  return;
}

