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
extern int fn_8249CC10();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_34;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_824A08E8(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_40 [8];
  undefined **ppuStack_38;
  undefined4 uStack_34;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x15) == '\0') {
    puVar3 = (undefined4 *)puVar4[1];
    do {
      if ((int)puVar3[3] < *param_2) {
        puVar1 = (undefined4 *)puVar3[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar3;
        puVar4 = puVar3;
      }
      puVar3 = puVar1;
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  if (puVar4 != *(undefined4 **)(param_1 + 4)) {
    if ((int)puVar4[3] <= *param_2) goto LAB_824a09c0;
  }
  iVar2 = *param_2;
  puVar3 = (undefined4 *)fn_8265C9E0(0x18);
  if (puVar3 == (undefined4 *)0x0) {
    uStack_34 = 0;
    ppuStack_38 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_38);
  }
  *puVar3 = *(undefined4 *)(param_1 + 4);
  puVar3[1] = *(undefined4 *)(param_1 + 4);
  puVar3[2] = *(undefined4 *)(param_1 + 4);
  *(undefined1 *)(puVar3 + 5) = 0;
  *(undefined1 *)((int)puVar3 + 0x15) = 0;
  if (puVar3 + 3 != (int *)0x0) {
    puVar3[3] = iVar2;
    puVar3[4] = 0;
  }
  fn_8249CC10(auStack_40,param_1,puVar4);
  puVar4 = (undefined4 *)0x0;
LAB_824a09c0:
  return puVar4 + 4;
}

