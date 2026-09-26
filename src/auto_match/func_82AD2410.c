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
extern int fn_82AD15F0();
extern int fn_82AD1750();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined8
fn_82AD2410(undefined8 param_1,uint param_2,int param_3,undefined4 param_4,int param_5,
             int *param_6)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar5;
  char cVar6;
  undefined8 uVar4;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uStack_70;
  uint uStack_6c;
  
  iVar9 = 0;
  bVar3 = false;
  bVar2 = param_5 == 0;
  uStack_70 = param_2;
  uStack_6c = param_2;
  uVar5 = fn_82AD1750(&uStack_70);
  do {
    if (uVar5 == 0) {
      if ((bVar3) || (iVar9 != 0)) {
        *param_6 = iVar9;
        if (param_5 != 0) {
          *(bool *)param_5 = bVar2;
        }
        *(bool *)param_4 = bVar3;
        uVar4 = 1;
      }
      else {
LAB_82ad2558:
        uVar4 = 0;
      }
      return uVar4;
    }
    if ((param_3 == 0) ||
       (uVar1 = (ulonglong)*(uint *)(param_3 + 0x30) & 0x7ffff,
       (*(uint *)(((int)(uVar1 >> 5) + 1) * 4 + *(int *)(uVar5 + 0x28)) & 1 << ((uint)uVar1 & 0x1f))
       == 0)) {
      piVar7 = *(int **)(uVar5 + 0xc);
      if ((piVar7 == (int *)0x0) || (*piVar7 == 0)) {
        bVar3 = true;
      }
      else {
        for (; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
          iVar11 = *piVar7;
          uVar1 = (ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff;
          iVar10 = iVar9;
          if (((((1 << ((uint)uVar1 & 0x1f) &
                 *(uint *)(((int)(uVar1 >> 5) + 1) * 4 + *(int *)(iVar11 + 0x28))) == 0) ||
               ((param_3 != 0 &&
                (uVar1 = (ulonglong)*(uint *)(param_3 + 0x30) & 0x7ffff,
                (1 << ((uint)uVar1 & 0x1f) &
                *(uint *)(((int)(uVar1 >> 5) + 1) * 4 + *(int *)(iVar11 + 0x28))) != 0)))) &&
              (iVar10 = iVar11, iVar9 != 0)) && (iVar10 = iVar9, iVar11 != iVar9))
          goto LAB_82ad2558;
          iVar9 = iVar10;
        }
      }
      if (!bVar2) {
        if ((*(uint *)(uVar5 + 0x14) & 1) == 0) {
          uVar8 = *(uint *)(uVar5 + 0x14);
          iVar11 = uVar5 + 0x10;
        }
        else if ((*(uint *)(uVar5 + 0x1c) & 1) == 0) {
          uVar8 = *(uint *)(uVar5 + 0x1c);
          iVar11 = uVar5 + 0x18;
        }
        else {
          uVar8 = *(uint *)(uVar5 + 0x24);
          iVar11 = uVar5 + 0x20;
        }
        uVar8 = -(uint)((uVar8 & 1) == 0) & uVar8;
        while (uVar8 != 0) {
          do {
            cVar6 = fn_82AD15F0(uVar8);
            if (cVar6 != '\0') {
              bVar2 = true;
              goto LAB_82ad263c;
            }
            uVar8 = *(uint *)((uVar8 & 0xfffffffe) + 0x28);
          } while (((uVar8 & 1) == 0) && (uVar8 != 0));
          iVar10 = uVar5 + 0x20;
          if (iVar11 == iVar10) break;
          if ((iVar11 == uVar5 + 0x18) || ((*(uint *)(uVar5 + 0x1c) & 1) != 0)) {
            uVar8 = *(uint *)(uVar5 + 0x24);
          }
          else {
            uVar8 = *(uint *)(uVar5 + 0x1c);
            iVar10 = uVar5 + 0x18;
          }
          iVar11 = iVar10;
          if ((uVar8 & 1) != 0) break;
        }
      }
    }
    else {
      for (; uVar5 != uStack_70; uVar5 = *(uint *)(uVar5 + 0x34)) {
        uStack_6c = *(uint *)(uVar5 + 0x3c);
        if (uStack_6c != 0) goto LAB_82ad263c;
      }
      uStack_6c = 0;
    }
LAB_82ad263c:
    uVar5 = fn_82AD1750(&uStack_70);
  } while( true );
}

