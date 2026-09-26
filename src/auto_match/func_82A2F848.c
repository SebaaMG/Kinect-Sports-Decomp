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
extern unsigned int *auStack_90;
extern int fn_82A2C868();
extern int fn_82A2D490();
extern int fn_82A2E458();
extern int fn_82A2E9B0();
extern int fn_82F68CC0();
extern unsigned int iStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


void fn_82A2F848(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  int *apiStack_a0 [4];
  undefined1 auStack_90 [40];
  byte bStack_68;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  
  iVar1 = *(int *)(param_2 + 0x50);
  iVar2 = *(int *)(iVar1 + 0x18);
  iVar3 = *(int *)(iVar2 + 8);
  RtlEnterCriticalSection();
  if ((*(byte *)(iVar3 + 0x35) & 2) == 0) {
    uVar9 = 0xffffffffc000000d;
  }
  else {
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x88);
    if (*(uint *)(param_1 + 0x88) == 0) {
      if ((*(byte *)(iVar2 + 2) & 0x10) == 0) {
        apiStack_a0[0] = *(int **)(iVar2 + 0xc);
        if (apiStack_a0[0] == (int *)0x0) {
          uVar9 = fn_82A2D490(iVar2,*(undefined4 *)(iVar1 + 8),0,apiStack_a0);
          if ((longlong)uVar9 < 0) goto LAB_82a2fa0c;
          *(int **)(iVar2 + 0xc) = apiStack_a0[0];
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        piVar6 = apiStack_a0[0];
        if ((*(byte *)(iVar1 + 2) & 1) != 0) {
          *apiStack_a0[0] = 0;
        }
        uVar9 = fn_82A2E9B0(param_1,iVar3,0,apiStack_a0[0],auStack_90);
        if ((longlong)uVar9 < 0) {
          if ((int)uVar9 == -0x3fffffcc) {
            if (bVar4) {
              uVar9 = 0xffffffffc000000f;
            }
            else {
              uVar9 = 0xffffffff80000006;
            }
          }
        }
        else {
          fn_82A2E458(iVar3,auStack_90);
          iVar2 = *(int *)(param_2 + 0x1c);
          uVar7 = fn_82A2C868(uStack_58);
          *(undefined8 *)(iVar2 + 8) = uVar7;
          uVar7 = fn_82A2C868(uStack_54);
          *(undefined8 *)(iVar2 + 0x18) = uVar7;
          *(undefined8 *)(iVar2 + 0x10) = uVar7;
          *(undefined8 *)(iVar2 + 0x20) = uVar7;
          if ((bStack_68 & 0x80) == 0) {
            *(undefined4 *)(iVar2 + 0x38) = 0x80;
            *(ulonglong *)(iVar2 + 0x28) = (ulonglong)uStack_5c;
            *(ulonglong *)(iVar2 + 0x30) = (ulonglong)uStack_5c;
          }
          else {
            *(undefined8 *)(iVar2 + 0x28) = 0;
            *(undefined8 *)(iVar2 + 0x30) = 0;
            *(undefined4 *)(iVar2 + 0x38) = 0x10;
          }
          uVar5 = bStack_68 & 0x3f;
          uVar8 = *(int *)(iVar1 + 4) - 0x40U & 0xfffffffc;
          if (uVar8 < uVar5) {
            uVar9 = 0xffffffff80000005;
          }
          else {
            uVar9 = 0;
            uVar8 = uVar5;
          }
          fn_82F68CC0(iVar2 + 0x40,auStack_90,uVar8);
          *(uint *)(iVar2 + 0x3c) = uVar5;
          *(uint *)(param_2 + 0x14) = uVar8 + 0x40;
          *piVar6 = iStack_50 + 0x40;
        }
      }
      else {
        uVar9 = 0xffffffffc0000128;
      }
    }
  }
LAB_82a2fa0c:
  RtlLeaveCriticalSection(param_1);
  *(int *)(param_2 + 0x10) = (int)uVar9;
  IoCompleteRequest(param_2,1);
  return;
}

