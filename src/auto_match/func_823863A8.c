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
extern unsigned int *auStack_40;
extern int fn_82230040();
extern int fn_82386ED0();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_83276560;
extern unsigned int uStack_38;
extern unsigned int uStack_44;


undefined4 * fn_823863A8(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int in_r0;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *apuStack_50 [2];
  undefined **ppuStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  iVar3 = lbl_83276560;
  puVar5 = *(undefined4 **)(lbl_83276560 + 4);
  if (*(char *)((int)puVar5[1] + 0x31) == '\0') {
    puVar4 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar4[4] < *param_1) {
        puVar1 = (undefined4 *)puVar4[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar4;
        puVar5 = puVar4;
      }
      puVar4 = puVar1;
    } while (*(char *)((int)puVar1 + 0x31) == '\0');
  }
  if (puVar5 != *(undefined4 **)(lbl_83276560 + 4)) {
    if ((uint)puVar5[4] <= *param_1) goto LAB_82386490;
  }
  uVar2 = *param_1;
  uStack_38 = 0;
  puVar4 = (undefined4 *)fn_8265C9E0(0x40);
  if (puVar4 == (undefined4 *)0x0) {
    uStack_44 = 0;
    ppuStack_48 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_48);
  }
  *puVar4 = *(undefined4 *)(iVar3 + 4);
  puVar4[1] = *(undefined4 *)(iVar3 + 4);
  puVar4[2] = *(undefined4 *)(iVar3 + 4);
  *(undefined1 *)(puVar4 + 0xc) = 0;
  *(undefined1 *)((int)puVar4 + 0x31) = 0;
  if (puVar4 + 4 != (uint *)0x0) {
    puVar4[4] = uVar2;
    puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar4 = (undefined4 *)((uint)(puVar4 + 8) & 0xfffffff0);
    *puVar4 = *puVar1;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
  }
  fn_82386ED0(apuStack_50,iVar3,puVar5);
  puVar5 = apuStack_50[0];
LAB_82386490:
  return puVar5 + 8;
}

