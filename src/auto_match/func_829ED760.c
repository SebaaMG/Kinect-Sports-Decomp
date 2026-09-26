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
extern int fn_829ECDB8();
extern int fn_829ECEE8();
extern unsigned int lbl_821AAD20;


int * fn_829ED760(undefined8 param_1,int *param_2,longlong param_3,ushort param_4,uint *param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  
  iVar3 = (int)param_3;
  if (iVar3 == 1) {
    *param_5 = (uint)(lbl_821AAD20 < (float)(longlong)*param_2);
    fn_829ECEE8(param_1,param_2,1);
    iVar3 = (*param_2 * 10000) / 0xffff;
    param_2[1] = iVar3;
    *param_2 = 10000 - iVar3;
  }
  else {
    if (param_4 == 0) {
      param_4 = 1;
    }
    iVar8 = 0;
    iVar1 = *param_2 / (int)(uint)param_4;
    lVar5 = (longlong)iVar1;
    *param_2 = iVar1;
    if (param_5 != (uint *)0x0) {
      *param_5 = 0;
    }
    uVar4 = 1;
    if (1 < iVar3) {
      lVar6 = param_3 + -1;
      piVar7 = param_2;
      do {
        piVar7 = piVar7 + 1;
        iVar1 = *piVar7 / (int)(uint)param_4;
        *piVar7 = iVar1;
        if (((int)lVar5 < iVar1) && (lVar5 = (longlong)iVar1, param_5 != (uint *)0x0)) {
          *param_5 = uVar4;
        }
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (0 < iVar3) {
      piVar7 = param_2 + -1;
      lVar6 = param_3;
      do {
        iVar3 = fn_829ECDB8(param_1,(ulonglong)(uint)piVar7[1] - lVar5);
        lVar6 = lVar6 + -1;
        piVar7 = piVar7 + 1;
        *piVar7 = iVar3;
        iVar8 = iVar3 + iVar8;
      } while (lVar6 != 0);
      if (0 < iVar8) {
        piVar7 = param_2 + -1;
        do {
          piVar2 = piVar7 + 1;
          piVar7 = piVar7 + 1;
          *piVar7 = (*piVar2 * 10000) / iVar8;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        return param_2;
      }
    }
    param_2 = (int *)0x0;
  }
  return param_2;
}

