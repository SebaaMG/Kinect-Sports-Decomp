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
extern int fn_83089730();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82141100;
extern unsigned int lbl_8214116C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82D81DE8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  undefined **appuStack_70 [12];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "TtworldCastRay";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    cVar4 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x10))();
    if (cVar4 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x5c) + 0x1c))
                (*(int **)(param_1 + 0x5c),param_2,*(undefined4 *)(param_1 + 0x7c),param_3);
      goto LAB_82d81ec8;
    }
  }
  uStack_40 = 0;
  appuStack_70[0] = &lbl_8214116C;
  uStack_3c = 0;
  fn_83089730(appuStack_70,*(undefined4 *)(param_1 + 0x58),param_2,
                  *(undefined4 *)(param_1 + 0x7c),0,param_3);
  appuStack_70[0] = &lbl_82141100;
LAB_82d81ec8:
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

