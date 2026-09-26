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
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821C16E0;
extern unsigned int lbl_832967B8;
extern unsigned int uStack_3c;


undefined4 * fn_824E6908(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  param_1[1] = param_2;
  *param_1 = &lbl_821C16E0;
  puVar3 = param_1 + 2;
  lVar4 = 2;
  do {
    puVar3 = puVar3 + 0x5c;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  param_1[0xbe] = 0;
  iVar2 = fn_8265C9E0(0x94);
  if (iVar2 == 0) {
    uStack_3c = 0;
    ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_40);
  }
  param_1[0xbd] = iVar2;
  *(int *)iVar2 = iVar2;
  *(undefined4 *)(param_1[0xbd] + 4) = param_1[0xbd];
  *(undefined4 *)(param_1[0xbd] + 8) = param_1[0xbd];
  *(undefined1 *)(param_1[0xbd] + 0x90) = 1;
  *(undefined1 *)(param_1[0xbd] + 0x91) = 1;
  if (param_2 == (undefined4 *)0x0) {
    param_1[2] = 0;
  }
  else {
    param_1[2] = *param_2;
  }
  iVar2 = 0;
  do {
    param_1[iVar2 * 0x5c + 0x52] = 0;
    param_1[iVar2 * 0x5c + 0x58] = 0;
    piVar1 = (int *)param_1[iVar2 * 0x5c + 0x5e];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,param_1 + iVar2 * 0x5c + 0x5a != piVar1);
      param_1[iVar2 * 0x5c + 0x5e] = 0;
    }
    param_1[iVar2 * 0x5c + 0x5e] = 0;
    if ((-2 < iVar2) && (iVar2 < 2)) {
      puVar3 = &lbl_832967B8;
      if (iVar2 != -1) {
        puVar3 = &lbl_832967B8 + iVar2 * 0x1a;
      }
      fn_82F68CC0(param_1 + iVar2 * 0x5c + 4,puVar3,0x68);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 2);
  return param_1;
}

