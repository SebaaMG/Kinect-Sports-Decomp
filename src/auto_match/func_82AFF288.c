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
extern int fn_82AF87E0();
extern int fn_82B894C8();


void fn_82AFF288(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  
  uVar1 = *(uint *)(param_2 + 0x1c);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3f80) == 0x3780) {
      piVar8 = (int *)(uVar1 + 0x2c);
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) & 0xffffc07f | 0x3700;
      for (uVar7 = 0; uVar7 < (*(uint *)(uVar1 + 8) >> 0x13 & 7); uVar7 = uVar7 + 1) {
        iVar6 = *piVar8;
        fn_82B894C8(param_1,param_2,uVar1 & 0xfffffffc,iVar6);
        puVar2 = *(uint **)(param_1 + 0x290);
        uVar3 = *(uint *)(iVar6 + 0xc);
        if ((puVar2[1] & 1) == 0) {
          uVar5 = *puVar2 & 0xfffffffe;
          iVar6 = uVar5 - 4;
          if ((iVar6 == 0) || (*(uint *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U)) goto LAB_82aff340;
        }
        else {
LAB_82aff340:
          iVar6 = fn_82AF87E0(puVar2,1);
        }
        iVar4 = *(int *)(iVar6 + 8);
        piVar8 = piVar8 + 1;
        *(int *)(iVar6 + 8) = iVar4 + 1;
        *(ulonglong *)((iVar4 + 2) * 8 + iVar6) = (ulonglong)uVar3 << 0x20;
      }
    }
    uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 0x28);
  } while( true );
}

