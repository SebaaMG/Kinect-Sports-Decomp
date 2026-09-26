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
extern int fn_8251FA58();
extern int fn_825B8B40();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern unsigned int lbl_82002B04;
extern unsigned int *lbl_83297038;
extern unsigned int uStack_24;


undefined8 fn_825B8478(uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  undefined **appuStack_30 [2];
  undefined **ppuStack_28;
  undefined4 uStack_24;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      appuStack_30[0] = lbl_83297038;
      ppuVar3 = (undefined **)lbl_83297038[1];
      while (*(char *)((int)ppuVar3 + 0x11) == '\0') {
        if (ppuVar3[3] < param_1) {
          ppuVar3 = (undefined **)ppuVar3[2];
        }
        else {
          appuStack_30[0] = ppuVar3;
          ppuVar3 = (undefined **)*ppuVar3;
        }
      }
      if ((appuStack_30[0] == lbl_83297038) || (param_1 < appuStack_30[0][3])) {
        ppuStack_28 = lbl_83297038;
        pppuVar4 = &ppuStack_28;
      }
      else {
        pppuVar4 = appuStack_30;
      }
      if (*pppuVar4 == lbl_83297038) {
        puVar2 = (undefined4 *)fn_8265C9E0(0x14);
        if (puVar2 == (undefined4 *)0x0) {
          uStack_24 = 0;
          ppuStack_28 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
          fn_82230040(&ppuStack_28);
        }
        *puVar2 = lbl_83297038;
        puVar2[1] = lbl_83297038;
        ppuVar3 = lbl_83297038;
        *(undefined1 *)(puVar2 + 4) = 0;
        *(undefined1 *)((int)puVar2 + 0x11) = 0;
        puVar2[2] = ppuVar3;
        if (puVar2 + 3 != (undefined4 *)0x0) {
          puVar2[3] = param_1;
        }
        fn_825B8B40(appuStack_30);
      }
      return 0;
    }
    if (uVar1 < 3) {
      if (*(char *)(param_1 + 4) == '\0') {
        sync(1);
        *(undefined1 *)(param_1 + 4) = 1;
      }
      fn_8251FA58(param_1[1]);
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else if (uVar1 != 3) {
      sync(1);
      goto code_r0x825b84b0;
    }
    *param_1 = 0;
  }
code_r0x825b84b0:
  fn_8265CA20(param_1);
  return 1;
}

