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
extern unsigned int *auStack_44;
extern int fn_82230040();
extern int fn_82319688();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


undefined4 * fn_82318F38(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *apuStack_50 [2];
  undefined **ppuStack_48;
  uint auStack_44 [3];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  puVar6 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar6[1] + 0x25) == '\0') {
    puVar3 = (undefined4 *)puVar6[1];
    do {
      if ((uint)puVar3[3] < *param_2) {
        puVar1 = (undefined4 *)puVar3[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar3;
        puVar6 = puVar3;
      }
      puVar3 = puVar1;
    } while (*(char *)((int)puVar1 + 0x25) == '\0');
  }
  if ((puVar6 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar6[3])) {
    uVar2 = *param_2;
    auStack_44[1] = 0;
    auStack_44[2] = lbl_821CA460;
    uStack_38 = lbl_821CC160;
    uStack_34 = lbl_821CA460;
    uStack_30 = lbl_821CA460;
    puVar3 = (undefined4 *)fn_8265C9E0(0x28);
    if (puVar3 == (undefined4 *)0x0) {
      auStack_44[0] = 0;
      ppuStack_48 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_48);
    }
    puVar5 = puVar3 + 3;
    *puVar3 = *(undefined4 *)(param_1 + 4);
    puVar3[1] = *(undefined4 *)(param_1 + 4);
    puVar3[2] = *(undefined4 *)(param_1 + 4);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)((int)puVar3 + 0x25) = 0;
    if (puVar5 != (uint *)0x0) {
      *puVar5 = uVar2;
      puVar4 = auStack_44;
      lVar7 = 5;
      do {
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
        *puVar5 = *puVar4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    fn_82319688(apuStack_50,param_1,puVar6);
    puVar6 = apuStack_50[0];
  }
  return puVar6 + 4;
}

