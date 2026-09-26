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
extern int fn_82A6D200();
extern int fn_82A75DF8();
extern int fn_82C30370();
extern int fn_82C3B5D0();
extern int fn_82C3B788();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


void fn_82C3B8A8(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  uint *puVar7;
  int iStack_50;
  undefined4 uStack_4c;
  int aiStack_48 [18];
  
  iVar2 = *param_1;
  piVar6 = param_1 + 0x38;
  puVar7 = (uint *)(param_1 + 0x81);
  while( true ) {
    do {
      uVar5 = (ulonglong)*puVar7 - 0xf;
    } while (3 < (uVar5 & 0xffffffff));
    bVar1 = (int)uVar5 != 0;
    if ((ulonglong)*puVar7 == 0x10 && bVar1) break;
    if (uVar5 == 2 && bVar1) {
      iVar4 = fn_82C3B5D0(&iStack_50,0,piVar6,param_1,puVar7);
      if (iVar4 < 0) {
        return;
      }
      *(int *)(iVar2 + 0x14) = iStack_50;
      *puVar7 = 0x10;
      break;
    }
    if (bVar1) goto LAB_82c3ba4c;
    iVar4 = fn_82A75DF8(*(undefined4 *)(param_2 + 0x18),piVar6,&uStack_4c,&iStack_50,
                              aiStack_48);
    if (iVar4 < 0) {
      return;
    }
    iVar4 = fn_82A6D200(piVar6,uStack_4c);
    if (iVar4 < 0) {
      return;
    }
    if (iStack_50 != 0) {
      if (iStack_50 == 1) {
        *(undefined4 *)(iVar2 + 0x14) = 0;
        uVar3 = *(undefined4 *)(param_2 + 0x24);
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(int *)(iVar2 + 0x10) = (int)(short)(((short)uVar3 - *(short *)(iVar2 + 0xca)) + -1);
      }
      else {
        iVar4 = fn_82A6D200(piVar6,1);
        if (-1 < iVar4) {
          *(int *)(iVar2 + 0x10) =
               (int)(short)(*(short *)((iStack_50 + -2) * 2 + *(int *)(param_2 + 0x1c)) +
                           (short)param_1[0x84]);
          param_1[0x84] = 0;
          *(uint *)(iVar2 + 0x14) =
               (uint)*(ushort *)((iStack_50 + -2) * 2 + *(int *)(param_2 + 0x20));
          *(int *)(iVar2 + 0x18) = -1 - (aiStack_48[0] >> 0x1f);
        }
      }
      return;
    }
    *puVar7 = 0x11;
    *(undefined4 *)(iVar2 + 0x18) = 0;
  }
  iVar4 = fn_82C3B788(&iStack_50,*(undefined2 *)(param_1 + 0x4e),piVar6);
  if (iVar4 < 0) {
    return;
  }
  *(int *)(iVar2 + 0x10) = (int)(short)((short)param_1[0x84] + (short)iStack_50);
  param_1[0x84] = 0;
  *puVar7 = 0x12;
LAB_82c3ba4c:
  iVar4 = fn_82C30370(piVar6,1,&iStack_50);
  if (iVar4 < 0) {
    return;
  }
  *(int *)(iVar2 + 0x18) = iStack_50 + -1;
  *puVar7 = 0xf;
  return;
}

