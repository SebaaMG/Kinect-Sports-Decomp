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
extern int fn_82519388();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_83276564;
extern unsigned int uStack_24;


undefined4 * fn_823865C8(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *apuStack_30 [2];
  undefined **ppuStack_28;
  undefined4 uStack_24;
  
  iVar3 = lbl_83276564;
  puVar5 = *(undefined4 **)(lbl_83276564 + 4);
  if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
    puVar4 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar4[3] < *param_1) {
        puVar1 = (undefined4 *)puVar4[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar4;
        puVar5 = puVar4;
      }
      puVar4 = puVar1;
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  if (puVar5 != *(undefined4 **)(lbl_83276564 + 4)) {
    if ((uint)puVar5[3] <= *param_1) goto LAB_8238669c;
  }
  uVar2 = *param_1;
  puVar4 = (undefined4 *)fn_8265C9E0(0x18);
  if (puVar4 == (undefined4 *)0x0) {
    uStack_24 = 0;
    ppuStack_28 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_28);
  }
  *puVar4 = *(undefined4 *)(iVar3 + 4);
  puVar4[1] = *(undefined4 *)(iVar3 + 4);
  puVar4[2] = *(undefined4 *)(iVar3 + 4);
  *(undefined1 *)(puVar4 + 5) = 0;
  *(undefined1 *)((int)puVar4 + 0x15) = 0;
  if (puVar4 + 3 != (uint *)0x0) {
    puVar4[3] = uVar2;
    *(undefined2 *)(puVar4 + 4) = 0;
  }
  fn_82519388(apuStack_30,iVar3,puVar5);
  puVar5 = apuStack_30[0];
LAB_8238669c:
  return puVar5 + 4;
}

