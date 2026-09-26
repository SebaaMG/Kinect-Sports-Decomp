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
extern int fn_82AC64B8();
extern int fn_82AD20C0();
extern int fn_82B41D68();
extern int fn_82B44B88();
extern int fn_82B8F208();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;


void fn_82B18218(undefined8 param_1,int param_2,char *param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  int aiStack_70 [2];
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  
  piVar1 = *(int **)(param_2 + 0x14);
  do {
    if ((((uint)piVar1 & 1) != 0) || (piVar1 == (int *)0x0)) {
      return;
    }
    if ((piVar1[2] & 0x3f80U) == 0x3800) {
      if ((*piVar1 == 0) || (bVar3 = true, *(int *)(*piVar1 + 4) == 0)) {
        bVar3 = false;
      }
      if (bVar3) {
        piVar6 = piVar1;
        if (*param_3 != '\0') {
          fn_82B44B88(param_1);
          *param_3 = '\0';
        }
        while (iVar2 = *piVar6, iVar2 != 0) {
          uStack_68 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          uStack_58 = 0;
          aiStack_70[0] = param_2;
          fn_82B8F208(aiStack_70,*(undefined4 *)(param_2 + 8));
          uVar4 = fn_82AC64B8(aiStack_70);
          if (uVar4 == 0) {
LAB_82b18314:
            fn_82AD20C0(piVar1,iVar2,param_1);
          }
          else {
            do {
              iVar5 = fn_82B41D68(param_1,piVar1,uVar4,0,1);
              if (iVar5 == iVar2) break;
              uVar4 = fn_82AC64B8(aiStack_70);
            } while (uVar4 != 0);
            if ((uVar4 & 0xffffffff) == 0) goto LAB_82b18314;
          }
          if (*piVar6 == iVar2) {
            piVar6 = (int *)(iVar2 + 4);
          }
        }
      }
    }
    piVar1 = *(int **)(((uint)piVar1 & 0xfffffffe) + 0x28);
  } while( true );
}

