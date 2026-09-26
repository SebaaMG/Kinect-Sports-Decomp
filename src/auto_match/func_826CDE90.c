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
extern unsigned int *auStack_70;
extern int fn_8268D008();
extern int fn_826CD200();
extern int fn_82F691F0();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;


void fn_826CDE90(int param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_70 [16];
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0xac);
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      piVar2 = *(int **)((int)((uVar7 & 0xffffffff) << 2) + *(int *)(param_1 + 0xa8));
      if (*(short *)(piVar2 + 0x19) != 0) {
        if (param_2[1] == 0) {
          fn_826CD200(param_2,uVar6);
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*param_2,1,uVar6);
        }
        iStack_60 = piVar2[0x11];
        iStack_5c = piVar2[0x12];
        iStack_58 = piVar2[0x13];
        iStack_54 = piVar2[0x14];
        iStack_50 = piVar2[0x15];
        iStack_4c = piVar2[0x16];
        fn_8268D008(&iStack_60,auStack_70,param_3);
        iVar1 = *param_2;
        uVar3 = (**(code **)(*piVar2 + 0x30))(piVar2,auStack_70,1);
        uVar5 = uVar7 + 1;
        *(undefined1 *)(iVar1 + (int)uVar7) = uVar3;
        if ((uVar5 & 0xffffffff) < uVar6) {
          lVar4 = (uVar5 & 0x3fffffff) << 2;
          do {
            iVar1 = *(int *)((int)lVar4 + *(int *)(param_1 + 0xa8));
            if ((iVar1 != 0) && ((int)(uint)*(ushort *)(piVar2 + 0x19) < *(int *)(iVar1 + 0x14)))
            break;
            lVar4 = lVar4 + 4;
            *(undefined1 *)(*param_2 + (int)uVar5) = *(undefined1 *)(*param_2 + (int)uVar7);
            uVar5 = uVar5 + 1;
          } while ((uVar5 & 0xffffffff) < uVar6);
        }
        uVar7 = uVar5 - 1;
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < uVar6);
  }
  return;
}

