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
extern int fn_82522DF8();
extern int fn_82549798();
extern int fn_825B47E8();
extern unsigned int lbl_82195598;
extern unsigned int lbl_82195668;


int * fn_825B4898(int *param_1,ulonglong param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  double dVar7;
  double dVar8;
  
  param_1[2] = (int)param_4;
  *param_1 = (int)param_2;
  lVar1 = (longlong)(0x1000 << ((int)param_2 - 1U & 0x3f)) * (longlong)param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = (int)lVar1;
  param_1[6] = 0;
  iVar2 = fn_82549798(lVar1,0x1000,param_4,0);
  param_1[3] = iVar2;
  lVar1 = param_2 * 0xc;
  iVar2 = fn_82522DF8(lVar1);
  param_1[7] = iVar2;
  uVar4 = (ulonglong)((uint)param_1[1] >> 0xc);
  if ((param_2 & 0xffffffff) != 0) {
    iVar2 = 0;
    dVar8 = (double)lbl_82195668;
    dVar7 = lbl_82195598;
    do {
      puVar6 = (undefined4 *)(param_1[7] + iVar2);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar3 = fn_82522DF8((longlong)
                                  (float)(longlong)((double)(float)((double)uVar4 * dVar8) + dVar7)
                                  & 0xffffffff);
        puVar6[2] = uVar3;
      }
      param_2 = param_2 - 1;
      iVar2 = iVar2 + 0xc;
      uVar4 = uVar4 >> 1;
    } while (param_2 != 0);
  }
  uVar4 = (ulonglong)(uint)param_1[3];
  uVar5 = (ulonglong)(uint)(0x1000 << (*param_1 - 1U & 0x3f));
  if (uVar4 < (uVar4 + (uint)param_1[1] & 0xffffffff)) {
    do {
      fn_825B47E8((ulonglong)(uint)param_1[7] + lVar1 + -0xc);
      uVar4 = uVar4 + uVar5;
    } while ((uVar4 & 0xffffffff) <
             ((ulonglong)(uint)param_1[3] + (ulonglong)(uint)param_1[1] & 0xffffffff));
  }
  return param_1;
}

