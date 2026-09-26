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
#define TBLr 0
extern unsigned int *auStack_250;
extern unsigned int *auStack_25f;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


char * fn_82D6FA10(char *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cStack_260;
  undefined1 auStack_25f [15];
  undefined1 auStack_250 [592];
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "TtrcConvxPiece";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  lVar8 = -1;
  lVar9 = 0;
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  if (0 < *(int *)(param_2 + 0x28)) {
    iVar3 = 0;
    do {
      if (*(int *)(param_3 + 0x24) == 0) {
LAB_82d6fad8:
        piVar5 = (int *)(**(code **)(*(int *)(*(int *)(param_2 + 0x20) + 0x10) + 0x14))
                                  (*(int *)(param_2 + 0x20) + 0x10,
                                   *(undefined4 *)(*(int *)(param_2 + 0x24) + iVar3),auStack_250);
        (**(code **)(*piVar5 + 0x20))(&cStack_260,piVar5,param_3,param_4);
        if (cStack_260 != '\0') {
          lVar8 = lVar9;
        }
      }
      else {
        uVar6 = (ulonglong)*(uint *)(param_2 + 0x20);
        lVar7 = uVar6 + 0x10;
        if (uVar6 == 0) {
          lVar7 = 0;
        }
        pcVar4 = (char *)(**(code **)**(undefined4 **)(param_3 + 0x24))
                                   (auStack_25f,*(undefined4 **)(param_3 + 0x24),param_3,uVar6,lVar7
                                    ,*(undefined4 *)(*(int *)(param_2 + 0x24) + iVar3));
        if (*pcVar4 != '\0') goto LAB_82d6fad8;
      }
      lVar9 = lVar9 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)lVar9 < *(int *)(param_2 + 0x28));
  }
  iVar3 = *(int *)(param_4 + 0x40);
  *(int *)(param_4 + 0x40) = iVar3 + -1;
  if ((int)lVar8 != -1) {
    *(int *)((iVar3 + 7) * 4 + param_4) = (int)lVar8;
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  *param_1 = (char)(lVar8 + 1) - ((char)lVar8 + (lVar8 + 1 == 0));
  return param_1;
}

