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
extern unsigned int *auStack_68;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_ac;
extern unsigned int *auStack_b0;
extern int fn_82230040();
extern int fn_82230300();
extern int fn_822378A0();
extern int fn_82515E60();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_70;
extern unsigned int uStack_b4;


undefined4 * fn_82515798(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *apuStack_c0 [2];
  undefined **ppuStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [60];
  uint uStack_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [104];
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar3[1] + 0x49) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar2[3] < *param_2) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
        puVar3 = puVar2;
      }
      puVar2 = puVar1;
    } while (*(char *)((int)puVar1 + 0x49) == '\0');
  }
  if ((puVar3 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar3[3])) {
    fn_82230300(auStack_ac,0,0);
    uStack_70 = *param_2;
    fn_822378A0(auStack_6c,auStack_b0);
    puVar2 = (undefined4 *)fn_8265C9E0(0x4c);
    if (puVar2 == (undefined4 *)0x0) {
      uStack_b4 = 0;
      ppuStack_b8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_b8);
    }
    *puVar2 = *(undefined4 *)(param_1 + 4);
    puVar2[1] = *(undefined4 *)(param_1 + 4);
    puVar2[2] = *(undefined4 *)(param_1 + 4);
    *(undefined1 *)(puVar2 + 0x12) = 0;
    *(undefined1 *)((int)puVar2 + 0x49) = 0;
    if (puVar2 + 3 != (uint *)0x0) {
      puVar2[3] = uStack_70;
      fn_822378A0(puVar2 + 4,auStack_6c);
    }
    fn_82515E60(apuStack_c0,param_1,puVar3,puVar2);
    fn_82230300(auStack_68,1,0);
    fn_82230300(auStack_ac,1,0);
    puVar3 = apuStack_c0[0];
  }
  return puVar3 + 4;
}

