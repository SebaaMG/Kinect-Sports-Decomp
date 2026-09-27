extern unsigned int *puRam83264404;
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
extern int fn_82FECB70();
extern int fn_82FECBF0();
extern int fn_82FED298();
extern int fn_82FED848();
extern int fn_82FEF760();
extern int fn_8301D200();
extern int fn_83024E30();
extern int iRam83264408;
extern unsigned int lbl_832643D8;
extern unsigned int lbl_83264400;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82FEDB28(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;

  uVar1 = *param_1;
  uVar4 = fn_82FECB70(uVar1);
  if ((uVar4 & 0xffffffff) == 0) {
    piVar7 = param_1 + 4;
    uVar5 = fn_82FED298(uVar1,piVar7);
    iVar6 = (int)uVar5;
    if (iVar6 == 0x3f) {
      puVar2 = (undefined4 *)*piVar7;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar3 = puVar2;
        if (puRam83264404 != (undefined4 *)0x0) {
          *puRam83264404 = puVar2;
          puVar3 = lbl_83264400;
        }
        lbl_83264400 = puVar3;
        puRam83264404 = puVar2;
        iRam83264408 = iRam83264408 + 1;
        return 1;
      }
    }
    else if (((iVar6 == 1) || (iVar6 == 0x2e)) && (*piVar7 != 0)) {
      iVar6 = fn_82FED848(uVar1);
      param_1[3] = iVar6;
      if (iVar6 != 0) {
        *(int *)(*piVar7 + 4) = lbl_832643D8;
        lbl_832643D8 = lbl_832643D8 + 1;
        puVar2 = (undefined4 *)param_1[3];
        puVar3 = (undefined4 *)*piVar7;
        *puVar3 = 0;
        if ((undefined4 *)puVar2[1] == (undefined4 *)0x0) {
          *puVar2 = puVar3;
        }
        else {
          *(undefined4 *)puVar2[1] = puVar3;
        }
        puVar2[1] = puVar3;
        puVar2[2] = puVar2[2] + 1;
        fn_83024E30((ulonglong)(uint)param_1[3] + 0x10);
        return 1;
      }
      uVar5 = 2;
    }
    else if (iVar6 == 1) {
      return uVar5;
    }
    if (*piVar7 != 0) {
      fn_82FECBF0();
    }
  }
  else {
    fn_8301D200(uVar4 + 8,uVar1,0);
    fn_82FEF760(uVar1);
    uVar5 = 5;
  }
  return uVar5;
}
