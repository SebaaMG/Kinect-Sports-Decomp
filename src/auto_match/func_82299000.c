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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_60;
extern int fn_82230040();
extern int fn_822959F8();
extern int fn_82297DB0();
extern int fn_82299368();
extern int fn_8265C9E0();
extern unsigned int iStack_40;
extern unsigned int lbl_82002B04;
extern unsigned int uStack_64;


undefined4 * fn_82299000(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *apuStack_70 [2];
  undefined **ppuStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [32];
  int iStack_40;
  undefined1 auStack_3c [60];
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x2d) == '\0') {
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
    } while (*(char *)((int)puVar1 + 0x2d) == '\0');
  }
  if ((puVar4 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (int)puVar4[3])) {
    iVar2 = *param_2;
    fn_82297DB0(auStack_60,0,0);
    iStack_40 = iVar2;
    fn_822959F8(auStack_3c,auStack_60);
    puVar3 = (undefined4 *)fn_8265C9E0(0x30);
    if (puVar3 == (undefined4 *)0x0) {
      uStack_64 = 0;
      ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_68);
    }
    *puVar3 = *(undefined4 *)(param_1 + 4);
    puVar3[1] = *(undefined4 *)(param_1 + 4);
    puVar3[2] = *(undefined4 *)(param_1 + 4);
    *(undefined1 *)(puVar3 + 0xb) = 0;
    *(undefined1 *)((int)puVar3 + 0x2d) = 0;
    if (puVar3 + 3 != (int *)0x0) {
      puVar3[3] = iStack_40;
      fn_822959F8(puVar3 + 4,auStack_3c);
    }
    fn_82299368(apuStack_70,param_1,puVar4,puVar3);
    fn_82297DB0(auStack_3c,1,0);
    fn_82297DB0(auStack_60,1,0);
    puVar4 = apuStack_70[0];
  }
  return puVar4 + 4;
}

