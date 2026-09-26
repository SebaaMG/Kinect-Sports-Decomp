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
extern int fn_82230040();
extern int fn_8223B688();
extern int fn_824CABA8();
extern int fn_824CACF8();
extern int fn_8265C9E0();
extern int fn_82F565A0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


int fn_824CAEF0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar4;
  undefined4 uVar3;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  fn_8223B688();
  fn_8223B688(param_1 + 0x1c,param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar2 = fn_8265C9E0(0x54);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x3c) = iVar2;
    *(int *)iVar2 = iVar2;
    *(int *)(*(int *)(param_1 + 0x3c) + 4) = *(int *)(param_1 + 0x3c);
    *(int *)(*(int *)(param_1 + 0x3c) + 8) = *(int *)(param_1 + 0x3c);
    *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x50) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x51) = 1;
    fn_824CACF8(param_1 + 0x38,param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    cVar4 = fn_824CABA8((int *)(param_1 + 0x48),
                          (*(int *)(param_2 + 0x4c) - *(int *)(param_2 + 0x48)) / 0x30);
    if (cVar4 != '\0') {
      puVar1 = *(undefined4 **)(param_2 + 0x4c);
      iVar2 = *(int *)(param_1 + 0x48);
      if (*(undefined4 **)(param_2 + 0x48) != puVar1) {
        puVar6 = *(undefined4 **)(param_2 + 0x48) + 8;
        do {
          if (iVar2 != 0) {
            fn_8223B688(iVar2,puVar6 + -8);
            *(undefined4 *)(iVar2 + 0x1c) = puVar6[-1];
            *(undefined4 *)(iVar2 + 0x20) = *puVar6;
            *(undefined4 *)(iVar2 + 0x24) = puVar6[1];
            *(undefined4 *)(iVar2 + 0x28) = puVar6[2];
            *(undefined4 *)(iVar2 + 0x2c) = puVar6[3];
          }
          iVar2 = iVar2 + 0x30;
          puVar5 = puVar6 + 4;
          puVar6 = puVar6 + 0xc;
        } while (puVar5 != puVar1);
      }
      *(int *)(param_1 + 0x4c) = iVar2;
    }
    iVar2 = param_1 + 0x58;
    if (*(int *)(param_2 + 0x68) == 0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    else {
      if (*(int *)(param_2 + 0x68) != param_2 + 0x58) {
        iVar2 = 0;
      }
      uVar3 = (**(code **)**(undefined4 **)(param_2 + 0x68))(*(undefined4 **)(param_2 + 0x68),iVar2)
      ;
      *(undefined4 *)(param_1 + 0x68) = uVar3;
    }
    fn_82F565A0(param_1 + 0x70,param_2 + 0x70);
    return param_1;
  }
  uStack_4c = 0;
  ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_50);
}

