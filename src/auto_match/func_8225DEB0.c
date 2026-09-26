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
extern int fn_8225E870();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_34;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_8225DEB0(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *apuStack_40 [2];
  undefined **ppuStack_38;
  undefined4 uStack_34;
  
  apuStack_40[0] = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)apuStack_40[0][1] + 0x19) == '\0') {
    puVar3 = (undefined4 *)apuStack_40[0][1];
    do {
      if ((uint)puVar3[3] < *param_2) {
        puVar1 = (undefined4 *)puVar3[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar3;
        apuStack_40[0] = puVar3;
      }
      puVar3 = puVar1;
    } while (*(char *)((int)puVar1 + 0x19) == '\0');
  }
  if (apuStack_40[0] != *(undefined4 **)(param_1 + 4)) {
    if ((uint)apuStack_40[0][3] <= *param_2) goto LAB_8225df88;
  }
  uVar2 = *param_2;
  puVar3 = (undefined4 *)fn_8265C9E0(0x1c);
  if (puVar3 == (undefined4 *)0x0) {
    uStack_34 = 0;
    ppuStack_38 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_38);
  }
  *puVar3 = *(undefined4 *)(param_1 + 4);
  puVar3[1] = *(undefined4 *)(param_1 + 4);
  puVar3[2] = *(undefined4 *)(param_1 + 4);
  *(undefined1 *)(puVar3 + 6) = 0;
  *(undefined1 *)((int)puVar3 + 0x19) = 0;
  if (puVar3 + 3 != (uint *)0x0) {
    puVar3[3] = uVar2;
    *(undefined8 *)(puVar3 + 4) = 0;
  }
  fn_8225E870(apuStack_40,param_1,apuStack_40[0]);
  apuStack_40[0] = (undefined4 *)0x0;
LAB_8225df88:
  return apuStack_40[0] + 4;
}

