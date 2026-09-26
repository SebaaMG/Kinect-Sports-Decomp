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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_83015740();
extern int fn_8301E4B8();
extern int fn_830251B0();
extern int fn_830251D0();
extern unsigned int lbl_83264300;
extern unsigned int uStack_44;


void fn_83024E30(int param_1)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  double dVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined4 in_register_000103f0;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  if (*(int *)(param_1 + 0x74) != 1) {
    dVar6 = (double)fn_830251B0(param_1 + 0x70);
    *(float *)(param_1 + 0x14) = (float)dVar6;
    dVar6 = (double)fn_8301E4B8();
    *(float *)(param_1 + 4) = (float)dVar6;
    dVar6 = (double)fn_830251D0(param_1 + 0x70);
    *(float *)(param_1 + 0x18) = (float)dVar6;
    dVar6 = (double)fn_8301E4B8();
    *(float *)(param_1 + 0x10) = (float)dVar6;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
    *(float *)(param_1 + 0xc) = (float)dVar6;
    if (*(int *)(param_1 + 0x16c) != 0) {
      iVar2 = fn_83015740(auStack_40,lbl_83264300);
      puVar3 = (undefined4 *)(param_1 + 0x14c);
      puVar4 = (undefined4 *)(iVar2 + -4);
      lVar5 = 6;
      do {
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
      return;
    }
    puVar4 = &uStack_44;
    puVar3 = (undefined4 *)(param_1 + 0x14c);
    altv300_21(in_vs32,in_vs39);
    lVar5 = 6;
    puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f0;
    puVar1[2] = in_register_000103f0;
    puVar1[3] = in_register_000103f0;
    puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f0;
    puVar1[2] = in_register_000103f0;
    puVar1[3] = in_register_000103f0;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
  return;
}

