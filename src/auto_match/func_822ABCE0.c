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
extern unsigned int *auStack_23e;
extern unsigned int *auStack_43e;
extern int fn_82297DB0();
extern int fn_822ABA88();
extern int fn_822AC2D0();
extern int fn_82F64988();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int uStack_240;
extern unsigned int uStack_440;
extern unsigned int uStack_44c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822ABCE0(int param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar3;
  int iVar4;
  longlong lVar2;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 **appuStack_460 [5];
  uint uStack_44c;
  undefined2 uStack_440;
  undefined1 auStack_43e [510];
  undefined2 uStack_240;
  undefined1 auStack_23e [574];
  
  fn_82297DB0(appuStack_460,0,0);
  uVar7 = (ulonglong)*(uint *)(param_1 + 8);
  uVar6 = 0;
  bVar1 = true;
  uVar5 = 0;
  if (uVar7 != 0) {
    do {
      iVar3 = fn_822ABA88(param_1);
      if (*(int *)(iVar3 + 0x74) != 0) {
        uVar6 = 1;
        bVar1 = (bool)(*(char *)(*(int *)(iVar3 + 0x74) + 0xd8) != '\0' & bVar1);
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
    if ((int)uVar6 != 0) {
      iVar3 = 0;
      uVar5 = 0;
      do {
        iVar4 = fn_822ABA88(param_1,uVar5);
        if ((*(int *)(iVar4 + 0x74) != 0) &&
           ((bVar1 || (*(char *)(*(int *)(iVar4 + 0x74) + 0xd8) == '\0')))) {
          if ((uVar5 & 0xffffffff) != 0) {
            fn_822AC2D0(appuStack_460,param_3);
          }
          fn_822AC2D0(appuStack_460,iVar4 + 0x30);
          iVar3 = iVar3 + 1;
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 8));
      if ((iVar3 == 1) && (1 < *(uint *)(param_1 + 8))) {
        uStack_440 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_43e,0,0x1fe);
      }
      goto LAB_822abee4;
    }
  }
  uVar5 = 0;
  if (2 < (uVar7 & 0xffffffff)) {
    uStack_240 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_23e,0,0x1fe);
  }
  if ((uVar7 & 0xffffffff) != 0) {
    do {
      lVar2 = fn_822ABA88(param_1);
      if ((uVar5 & 0xffffffff) != 0) {
        if ((uVar7 & 0xffffffff) == 2) {
          fn_822AC2D0(appuStack_460,param_3);
          fn_822AC2D0(appuStack_460,lVar2 + 0x30);
        }
        break;
      }
      fn_822AC2D0(appuStack_460,lVar2 + 0x30);
      uVar7 = (ulonglong)*(uint *)(param_1 + 8);
      uVar5 = 1;
    } while (1 < uVar7);
  }
LAB_822abee4:
  if (uStack_44c < 8) {
    appuStack_460[0] = appuStack_460;
  }
  fn_82F64988(param_1 + 0xa8,0x40,appuStack_460[0]);
  fn_82297DB0(appuStack_460,1,0);
  return;
}

