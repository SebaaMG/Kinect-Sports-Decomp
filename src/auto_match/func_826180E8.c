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
extern unsigned int *auStack_80;
extern int fn_8251FBA8();
extern int fn_825200F0();
extern int fn_82522D98();
extern int fn_82575FA8();
extern int fn_827D6968();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CACDC;
extern unsigned int lbl_83265A24;


/* WARNING: Removing unreachable block (ram,0x826181e8) */

undefined4 *
fn_826180E8(double param_1,undefined4 *param_2,int param_3,int param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  ulonglong uVar1;
  char cVar3;
  longlong lVar2;
  int *piVar4;
  double dVar5;
  undefined1 auStack_80 [128];
  
  param_2[4] = (float)param_1;
  param_2[3] = (float)param_1;
  param_2[2] = (int)param_7;
  param_2[6] = 0;
  *param_2 = &lbl_821CACDC;
  param_2[1] = param_3;
  uVar1 = fn_8251FBA8(param_4);
  uVar1 = (uVar1 & 0xffffffff) >> 3;
  if (uVar1 != 0) {
    piVar4 = (int *)(param_4 + 4);
    dVar5 = (double)lbl_82192734;
    do {
      if (*piVar4 != 0) {
        fn_825200F0(auStack_80,piVar4);
        cVar3 = fn_827D6968(lbl_83265A24,auStack_80,0xffffffffffffffff);
        if (cVar3 != '\0') {
          lVar2 = fn_82575FA8(param_1,dVar5,param_7,piVar4,(ulonglong)(uint)param_2[1] + 0x10,
                                    1,0);
          if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82522D98(0xc);
          }
        }
      }
      uVar1 = uVar1 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar1 != 0);
  }
  param_2[5] = *(undefined4 *)(param_3 + 400);
  return param_2;
}

