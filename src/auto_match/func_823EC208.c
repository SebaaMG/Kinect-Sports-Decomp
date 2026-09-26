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
extern unsigned int *auStack_118;
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f8;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_82392C68();
extern int fn_823D1138();
extern int fn_823F8588();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B7954;
extern unsigned int uStack_108;
extern unsigned int uStack_120;
extern unsigned int uStack_154;
extern unsigned int uStack_15c;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


void fn_823EC208(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  code *pcStack_160;
  undefined4 uStack_15c;
  undefined **ppuStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [16];
  undefined4 *puStack_140;
  undefined1 auStack_130 [16];
  undefined4 uStack_120;
  undefined1 auStack_118 [16];
  undefined4 uStack_108;
  int aiStack_100 [2];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [32];
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [176];
  
  uStack_b8 = *(undefined4 *)(param_1 + 4);
  uStack_15c = 0;
  pcStack_160 = fn_823D1138;
  uStack_c0 = 0x823d113800000000;
  fn_82F68CC0(auStack_b0,param_2,0x80);
  puVar3 = (undefined4 *)fn_8265C9E0(0xa0);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &lbl_821B7954;
    fn_82F68CC0(puVar3 + 4,&uStack_c0,0x90);
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(param_2 + 0x70);
    puVar4 = *(undefined4 **)(iVar1 + 0xa7c);
    puVar5 = (undefined4 *)(*(undefined4 **)(iVar1 + 0xa7c))[1];
    while (*(char *)((int)puVar5 + 0x49) == '\0') {
      if ((int)puVar5[4] < iVar2) {
        puVar5 = (undefined4 *)puVar5[2];
      }
      else {
        puVar4 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
      }
    }
    puStack_140 = puVar3;
    if ((puVar4 == *(undefined4 **)(iVar1 + 0xa7c)) || (iVar2 < (int)puVar4[4])) {
      uStack_120 = 0;
      uStack_108 = 0;
      aiStack_100[0] = iVar2;
      fn_82392C68(auStack_f8,auStack_130);
      fn_82392C68(auStack_e0,auStack_118);
      puVar4 = (undefined4 *)fn_823F8588(&pcStack_160,iVar1 + 0xa78,puVar4,aiStack_100);
      puVar4 = (undefined4 *)*puVar4;
      fn_82359C18(auStack_e0);
      fn_82359C18(auStack_f8);
      fn_82359C18(auStack_118);
      fn_82359C18(auStack_130);
    }
    fn_8227CB30(puVar4 + 0xc,auStack_150);
    fn_82359C18(auStack_150);
    return;
  }
  uStack_154 = 0;
  ppuStack_158 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_158);
}

