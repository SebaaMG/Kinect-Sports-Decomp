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
extern unsigned int *auStack_240;
extern unsigned int *auStack_270;
extern unsigned int iStack_244;
extern unsigned int iStack_254;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_248;
extern unsigned int uStack_24c;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;


void fn_82D49350(int param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar4;
  undefined8 uVar3;
  char *pcVar5;
  int *piVar6;
  undefined1 auStack_270 [16];
  int *piStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  int iStack_254;
  int *piStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  int iStack_244;
  undefined1 auStack_240 [576];
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtrcShpCollect";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  piVar6 = (int *)(param_1 + 0x10);
  pcVar2 = *(code **)(*(int *)(param_1 + 0x10) + 8);
  if (*(int *)(param_2 + 0x24) == 0) {
    uVar3 = (*pcVar2)(piVar6);
    iVar4 = (int)uVar3;
    while (iVar4 != -1) {
      piStack_260 = (int *)(**(code **)(*piVar6 + 0x14))(piVar6,uVar3,auStack_240);
      uStack_258 = *(undefined4 *)(param_3 + 8);
      uStack_25c = (undefined4)uVar3;
      iStack_254 = param_3;
      (**(code **)(*piStack_260 + 0x24))(piStack_260,param_2,&piStack_260,param_4);
      uVar3 = (**(code **)(*piVar6 + 0xc))(piVar6,uVar3);
      iVar4 = (int)uVar3;
    }
  }
  else {
    uVar3 = (*pcVar2)(piVar6);
    iVar4 = (int)uVar3;
    while (iVar4 != -1) {
      pcVar5 = (char *)(**(code **)**(undefined4 **)(param_2 + 0x24))
                                 (auStack_270,*(undefined4 **)(param_2 + 0x24),param_2,param_1,
                                  piVar6,uVar3);
      if (*pcVar5 != '\0') {
        piStack_250 = (int *)(**(code **)(*piVar6 + 0x14))(piVar6,uVar3,auStack_240);
        uStack_24c = (undefined4)uVar3;
        uStack_248 = *(undefined4 *)(param_3 + 8);
        iStack_244 = param_3;
        (**(code **)(*piStack_250 + 0x24))(piStack_250,param_2,&piStack_250,param_4);
      }
      uVar3 = (**(code **)(*piVar6 + 0xc))(piVar6,uVar3);
      iVar4 = (int)uVar3;
    }
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  return;
}

