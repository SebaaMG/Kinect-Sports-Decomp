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
extern int fn_825202C8();
extern unsigned int lbl_832767B8;


undefined8 fn_82520158(char *param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  
  piVar4 = lbl_832767B8;
  fn_825202C8(lbl_832767B8);
  iVar3 = *piVar4;
  do {
    if (iVar3 == 0) {
      uVar10 = 0;
      uVar5 = 0;
LAB_825201fc:
      *param_2 = uVar10;
      return uVar5;
    }
    iVar6 = 0;
    if (0 < *(int *)(iVar3 + 8)) {
      pcVar9 = *(char **)(iVar3 + 0xc);
      iVar7 = (int)param_1 - (int)pcVar9;
      do {
        cVar1 = *pcVar9;
        pcVar8 = pcVar9;
        cVar2 = *param_1;
        while( true ) {
          if (cVar1 != cVar2) break;
          pcVar8 = pcVar8 + 1;
          if (cVar1 == '\0') goto LAB_82520208;
          cVar1 = *pcVar8;
          cVar2 = pcVar8[iVar7];
        }
        if (cVar1 == cVar2) {
LAB_82520208:
          uVar10 = *(undefined4 *)(pcVar9 + 0x40);
          uVar5 = 1;
          goto LAB_825201fc;
        }
        iVar6 = iVar6 + 1;
        pcVar9 = pcVar9 + 0x44;
        iVar7 = iVar7 + -0x44;
      } while (iVar6 < *(int *)(iVar3 + 8));
    }
    iVar3 = *(int *)(iVar3 + 4);
  } while( true );
}

