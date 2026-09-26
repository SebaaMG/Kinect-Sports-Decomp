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
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_82536690();
extern int fn_8260D428();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8228F268(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *****pppppuVar3;
  int *piVar4;
  int **ppiVar5;
  bool bVar6;
  int *piStack_60;
  int *apiStack_5c [3];
  undefined4 ****appppuStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  
  fn_82230110(appppuStack_50);
  piStack_60 = *(int **)(param_1 + 0x28);
  piVar4 = (int *)(*(int **)(param_1 + 0x28))[1];
  while (*(char *)((int)piVar4 + 0x2d) == '\0') {
    pppppuVar3 = (undefined4 *****)appppuStack_50[0];
    if (uStack_3c < 0x10) {
      pppppuVar3 = appppuStack_50;
    }
    iVar1 = fn_8260D428(piVar4 + 3,0,piVar4[7],pppppuVar3,uStack_40);
    if (iVar1 < 0) {
      piVar4 = (int *)piVar4[2];
    }
    else {
      piStack_60 = piVar4;
      piVar4 = (int *)*piVar4;
    }
  }
  if (piStack_60 != *(int **)(param_1 + 0x28)) {
    piVar4 = piStack_60 + 3;
    if (0xf < (uint)piStack_60[8]) {
      piVar4 = (int *)*piVar4;
    }
    iVar1 = fn_8260D428(appppuStack_50,0,uStack_40,piVar4,piStack_60[7]);
    if (-1 < iVar1) {
      ppiVar5 = &piStack_60;
      goto LAB_8228f334;
    }
  }
  apiStack_5c[0] = *(int **)(param_1 + 0x28);
  ppiVar5 = apiStack_5c;
LAB_8228f334:
  if (*ppiVar5 != *(int **)(param_1 + 0x28)) {
    piVar4 = *ppiVar5 + 10;
    if (piVar4 == (int *)0x0) {
      bVar6 = false;
    }
    else {
      bVar6 = *piVar4 != 0;
    }
    if (bVar6) {
      apiStack_5c[0] = (int *)*piVar4;
      piStack_60 = (int *)fn_82535298(apiStack_5c,
                                            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x84c),
                                            0xffffffff83296bc0,0xffffffff83296bd0);
      if ((piStack_60 == (int *)0x0) || (cVar2 = (**(code **)(*piStack_60 + 8))(), cVar2 != '\0')) {
        fn_82536288(&piStack_60);
      }
      else {
        fn_82536690(param_1 + 0x38,&piStack_60);
      }
    }
  }
  fn_82230300(appppuStack_50,1,0);
  return;
}

