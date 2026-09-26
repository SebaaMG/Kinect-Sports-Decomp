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
extern unsigned int *auStack_5e;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


char * fn_82D3DCD8(char *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cStack_60;
  char cStack_5f;
  undefined1 auStack_5e [94];
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtrcList";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  uVar8 = 0;
  uVar7 = 0xffffffffffffffff;
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  if (*(int *)(param_3 + 0x24) == 0) {
    if (0 < *(int *)(param_2 + 0x1c)) {
      iVar4 = 0;
      do {
        if (((0xff < (uVar8 & 0xffffffff)) ||
            ((1 << ((uint)uVar8 & 0x1f) &
             *(uint *)(((int)((uVar8 & 0xffffffff) >> 5) + 0x14) * 4 + param_2)) != 0)) &&
           (piVar2 = *(int **)(*(int *)(param_2 + 0x18) + iVar4),
           (**(code **)(*piVar2 + 0x20))(&cStack_60,piVar2,param_3,param_4), cStack_60 != '\0')) {
          uVar7 = uVar8;
        }
        uVar8 = uVar8 + 1;
        iVar4 = iVar4 + 0x10;
      } while ((int)uVar8 < *(int *)(param_2 + 0x1c));
    }
  }
  else if (0 < *(int *)(param_2 + 0x1c)) {
    iVar4 = 0;
    do {
      if ((((0xff < (uVar8 & 0xffffffff)) ||
           ((1 << ((uint)uVar8 & 0x1f) &
            *(uint *)(((int)((uVar8 & 0xffffffff) >> 5) + 0x14) * 4 + param_2)) != 0)) &&
          (pcVar5 = (char *)(**(code **)**(undefined4 **)(param_3 + 0x24))
                                      (auStack_5e,*(undefined4 **)(param_3 + 0x24),param_3,param_2,
                                       param_2 + 0x10,uVar8), *pcVar5 != '\0')) &&
         (piVar2 = *(int **)(*(int *)(param_2 + 0x18) + iVar4),
         (**(code **)(*piVar2 + 0x20))(&cStack_5f,piVar2,param_3,param_4), cStack_5f != '\0')) {
        uVar7 = uVar8;
      }
      uVar8 = uVar8 + 1;
      iVar4 = iVar4 + 0x10;
    } while ((int)uVar8 < *(int *)(param_2 + 0x1c));
  }
  iVar4 = *(int *)(param_4 + 0x40);
  *(int *)(param_4 + 0x40) = iVar4 + -1;
  if ((int)uVar7 != -1) {
    *(int *)((iVar4 + 7) * 4 + param_4) = (int)uVar7;
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  lVar6 = -uVar7 + -1;
  *param_1 = (char)lVar6 + (-(lVar6 == 0) - ((char)-uVar7 + -2));
  return param_1;
}

