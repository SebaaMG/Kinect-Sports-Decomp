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
extern unsigned int *auStack_50;
extern int fn_82230040();
extern int fn_825505D0();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_54;


undefined4 * fn_8254F830(int param_1,float *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  undefined4 *apuStack_60 [2];
  undefined **ppuStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar3[1] + 0x29) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      if (*param_2 <= (float)puVar2[3]) {
        puVar1 = (undefined4 *)*puVar2;
        puVar3 = puVar2;
      }
      else {
        puVar1 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar1;
    } while (*(char *)((int)puVar1 + 0x29) == '\0');
  }
  if ((puVar3 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (float)puVar3[3])) {
    dVar4 = (double)*param_2;
    uStack_48 = 0;
    uStack_40 = 0;
    puVar2 = (undefined4 *)fn_8265C9E0(0x2c);
    if (puVar2 == (undefined4 *)0x0) {
      uStack_54 = 0;
      ppuStack_58 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_58);
    }
    *puVar2 = *(undefined4 *)(param_1 + 4);
    puVar2[1] = *(undefined4 *)(param_1 + 4);
    puVar2[2] = *(undefined4 *)(param_1 + 4);
    *(undefined1 *)(puVar2 + 10) = 0;
    *(undefined1 *)((int)puVar2 + 0x29) = 0;
    if ((float *)(puVar2 + 3) != (float *)0x0) {
      puVar2[3] = (float)dVar4;
      fn_82F68CC0(puVar2 + 4,auStack_50,0x18);
    }
    fn_825505D0(apuStack_60,param_1,puVar3,puVar2);
    puVar3 = apuStack_60[0];
  }
  return puVar3 + 4;
}

