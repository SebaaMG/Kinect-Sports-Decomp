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
extern int fn_8265C940();
extern int fn_82BDBB60();
extern int fn_82BDC680();
extern int fn_82F68CC0();


longlong fn_82BDC810(undefined4 param_1,undefined4 param_2,ulonglong param_3,undefined8 param_4,
                      uint param_5,undefined4 *param_6)

{
  undefined4 *puVar2;
  int iVar3;
  longlong lVar1;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  ulonglong uVar8;
  
  puVar2 = (undefined4 *)fn_8265C940(0xa0,0x618a800d);
  if (puVar2 == (undefined4 *)0x0) {
LAB_82bdc928:
    lVar1 = -0x7ff8fff2;
  }
  else {
    puVar2[3] = (int)param_3;
    puVar2[0x22] = param_5;
    *puVar2 = param_1;
    puVar2[1] = param_2;
    fn_82F68CC0(puVar2 + 0x14,param_4,param_5 & 0x3fffffff);
    if (param_5 != 0) {
      piVar6 = puVar2 + param_5 + 0x16;
      do {
        param_5 = param_5 - 1;
        piVar7 = piVar6 + -1;
        iVar3 = fn_8265C940(param_3 * 0x18,0x618a0009);
        piVar6[8] = iVar3;
        if (iVar3 == 0) goto LAB_82bdc928;
        iVar3 = fn_8265C940((param_3 & 0x1fffffff) << 3,0x618a0003);
        *piVar7 = iVar3;
        if (iVar3 == 0) goto LAB_82bdc928;
        if ((param_3 & 0xffffffff) != 0) {
          iVar3 = 0;
          iVar5 = 0;
          uVar8 = param_3;
          do {
            iVar4 = piVar6[8] + iVar5;
            iVar5 = iVar5 + 0x18;
            *(int *)(*piVar7 + iVar3) = iVar4;
            iVar3 = iVar3 + 8;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        piVar6 = piVar7;
      } while (param_5 != 0);
    }
    lVar1 = fn_82BDBB60(puVar2);
    if (-1 < lVar1) goto code_r0x82bdc918;
  }
  fn_82BDC680(puVar2);
  puVar2 = (undefined4 *)0x0;
code_r0x82bdc918:
  *param_6 = puVar2;
  return lVar1;
}

