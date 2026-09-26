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
extern unsigned int *auStack_4c;
extern unsigned int *auStack_70;
extern int fn_82230040();
extern int fn_822959F8();
extern int fn_82297DB0();
extern int fn_82299368();
extern int fn_8265C9E0();
extern unsigned int iStack_50;
extern unsigned int lbl_82002B04;
extern unsigned int uStack_74;


undefined4 * fn_82299140(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *apuStack_80 [2];
  undefined **ppuStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [32];
  int iStack_50;
  undefined1 auStack_4c [76];
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar3[1] + 0x2d) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar2[3] < *param_2) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
        puVar3 = puVar2;
      }
      puVar2 = puVar1;
    } while (*(char *)((int)puVar1 + 0x2d) == '\0');
  }
  if ((puVar3 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (int)puVar3[3])) {
    fn_82297DB0(auStack_70,0,0);
    iStack_50 = *param_2;
    fn_822959F8(auStack_4c,auStack_70);
    puVar2 = (undefined4 *)fn_8265C9E0(0x30);
    if (puVar2 == (undefined4 *)0x0) {
      uStack_74 = 0;
      ppuStack_78 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_78);
    }
    *puVar2 = *(undefined4 *)(param_1 + 4);
    puVar2[1] = *(undefined4 *)(param_1 + 4);
    puVar2[2] = *(undefined4 *)(param_1 + 4);
    *(undefined1 *)(puVar2 + 0xb) = 0;
    *(undefined1 *)((int)puVar2 + 0x2d) = 0;
    if (puVar2 + 3 != (int *)0x0) {
      puVar2[3] = iStack_50;
      fn_822959F8(puVar2 + 4,auStack_4c);
    }
    fn_82299368(apuStack_80,param_1,puVar3,puVar2);
    fn_82297DB0(auStack_4c,1,0);
    fn_82297DB0(auStack_70,1,0);
    puVar3 = apuStack_80[0];
  }
  return puVar3 + 4;
}

