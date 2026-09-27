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
extern int fn_82681898();
extern int fn_826959C8();
extern int fn_8269A1F0();
extern int fn_826A7380();
extern int fn_826D6630();
extern int fn_82713EE8();
extern float lbl_82005328;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_821AAD20;


undefined8 fn_82750370(int param_1,undefined8 param_2,undefined4 *param_3,undefined1 *param_4)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  double dVar9;
  
  pcVar5 = "alpha";
  pcVar7 = *(char **)*param_3;
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    cVar2 = *pcVar5;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    if (*(byte *)(param_1 + 0x28) == 0) {
      dVar9 = (double)lbl_821AAD20;
    }
    else {
      dVar9 = (double)((float)*(byte *)(param_1 + 0x28) * lbl_82005328);
    }
  }
  else {
    pcVar5 = "blurX";
    pcVar6 = pcVar7;
    do {
      cVar1 = *pcVar6;
      cVar2 = *pcVar5;
      if (cVar1 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      bVar8 = *(byte *)(param_1 + 0x21);
    }
    else {
      pcVar5 = "blurY";
      pcVar6 = pcVar7;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        bVar8 = *(byte *)(param_1 + 0x22);
      }
      else {
        pcVar5 = "color";
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          fn_8269A1F0(param_4,*(uint *)(param_1 + 0x28) & 0xffffff);
          return 1;
        }
        pcVar5 = "inner";
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          uVar3 = fn_826A7380(param_2);
          if ((uVar3 & 0xffffffff) == 0) {
            return 1;
          }
          uVar4 = 0xffffffff82013ac8;
LAB_82750554:
          fn_826D6630(uVar3 + 0xc,uVar4);
          return 1;
        }
        pcVar5 = "knockout";
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          bVar8 = *(byte *)(param_1 + 0x20);
          fn_826959C8(param_4);
          param_4[4] = bVar8 >> 5 & 1;
          *param_4 = 2;
          return 1;
        }
        pcVar5 = "quality";
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          uVar3 = fn_826A7380(param_2);
          if ((uVar3 & 0xffffffff) == 0) {
            return 1;
          }
          uVar4 = 0xffffffff82013a90;
          goto LAB_82750554;
        }
        pcVar6 = "strength";
        do {
          cVar1 = *pcVar7;
          cVar2 = *pcVar6;
          if (cVar1 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 != cVar2) {
          uVar4 = fn_82713EE8(param_1,param_2,param_3,param_4);
          return uVar4;
        }
        bVar8 = *(byte *)(param_1 + 0x23);
      }
    }
    dVar9 = (double)((float)bVar8 * lbl_8200D8DC);
  }
  fn_82681898(dVar9,param_4);
  return 1;
}

