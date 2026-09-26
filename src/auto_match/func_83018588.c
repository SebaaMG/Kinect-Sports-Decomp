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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_83016CE8();
extern int fn_830197E8();
extern int fn_83019FD0();
extern unsigned int uStack_50;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_83018588(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  undefined8 uStack_50;
  int *piStack_48;
  int *piStack_44;
  
  RtlEnterCriticalSection(param_1 + 0x720);
  if (param_2 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x6a0);
    puVar2 = (undefined4 *)0x0;
    while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
      if (puVar1[3] == param_2) {
        fn_83019FD0(puVar1 + 1);
        puStack_60 = (undefined4 *)*puVar1;
        if (puVar1 == *(undefined4 **)(param_1 + 0x6a0)) {
          *(undefined4 **)(param_1 + 0x6a0) = puStack_60;
        }
        else {
          *puVar2 = puStack_60;
        }
        if (puVar1 == *(undefined4 **)(param_1 + 0x6a4)) {
          *(undefined4 **)(param_1 + 0x6a4) = puVar2;
        }
        uStack_50 = CONCAT44(puStack_60,puVar2);
        *puVar1 = *(undefined4 *)(param_1 + 0x6a8);
        *(undefined4 **)(param_1 + 0x6a8) = puVar1;
        *(int *)(param_1 + 0x6b4) = *(int *)(param_1 + 0x6b4) + -1;
        puVar3 = puStack_60;
        puStack_5c = puVar2;
      }
      else {
        puVar3 = (undefined4 *)*puVar1;
        puVar2 = puVar1;
      }
    }
    fn_83016CE8(&uStack_50,param_1 + 0x310);
    if (piStack_48 != (int *)0x0) {
      iVar5 = (((U64)(uStack_50) >> 0) & 0xFFFFFFFF);
      uVar6 = (((U64)(uStack_50) >> 32) & 0xFFFFFFFF);
      piVar7 = piStack_48;
      do {
        while (piStack_48 = piVar7, piStack_48[2] != param_2) {
          piVar7 = (int *)*piStack_48;
          piStack_44 = piStack_48;
          if (piVar7 == (int *)0x0) {
            do {
              uVar6 = uVar6 + 1;
              if (0xc0 < uVar6) {
                uStack_50 = CONCAT44((((U64)(uStack_50) >> 0) & 0xFFFFFFFF),uVar6);
                goto LAB_83018708;
              }
              piStack_44 = (int *)0x0;
              piVar7 = *(int **)(uVar6 * 4 + iVar5);
            } while (piVar7 == (int *)0x0);
            uStack_50 = CONCAT44((((U64)(uStack_50) >> 0) & 0xFFFFFFFF),uVar6);
          }
        }
        piVar4 = (int *)fn_830197E8(&puStack_60,param_1 + 0x310,&uStack_50);
        iVar5 = *piVar4;
        uVar6 = piVar4[1];
        uStack_50 = *(undefined8 *)piVar4;
        piVar7 = (int *)piVar4[2];
        piStack_44 = (int *)piVar4[3];
LAB_83018708:
        piStack_48 = piVar7;
      } while (piVar7 != (int *)0x0);
    }
    fn_83016CE8(&uStack_50,param_1 + 4);
    if (piStack_48 != (int *)0x0) {
      iVar5 = (((U64)(uStack_50) >> 0) & 0xFFFFFFFF);
      uVar6 = (((U64)(uStack_50) >> 32) & 0xFFFFFFFF);
      piVar7 = piStack_48;
      do {
        while (piStack_48 = piVar7, piStack_48[2] != param_2) {
          piVar7 = (int *)*piStack_48;
          piStack_44 = piStack_48;
          if (piVar7 == (int *)0x0) {
            do {
              uVar6 = uVar6 + 1;
              if (0xc0 < uVar6) {
                uStack_50 = CONCAT44((((U64)(uStack_50) >> 0) & 0xFFFFFFFF),uVar6);
                goto LAB_830187cc;
              }
              piStack_44 = (int *)0x0;
              piVar7 = *(int **)(uVar6 * 4 + iVar5);
            } while (piVar7 == (int *)0x0);
            uStack_50 = CONCAT44((((U64)(uStack_50) >> 0) & 0xFFFFFFFF),uVar6);
          }
        }
        piVar4 = (int *)fn_830197E8(&puStack_60,param_1 + 4,&uStack_50);
        iVar5 = *piVar4;
        uVar6 = piVar4[1];
        uStack_50 = *(undefined8 *)piVar4;
        piVar7 = (int *)piVar4[2];
        piStack_44 = (int *)piVar4[3];
LAB_830187cc:
        piStack_48 = piVar7;
      } while (piVar7 != (int *)0x0);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x720);
  return;
}

