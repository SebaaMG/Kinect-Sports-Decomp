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
extern unsigned int *auStack_44;
extern unsigned int *auStack_70;
extern int fn_82250928();
extern int fn_82359C18();
extern int fn_823B7FF8();
extern int fn_823B9060();
extern int fn_823BABB0();
extern int fn_8265CA20();
extern int fn_82F63108();
extern unsigned int lbl_821B5CB8;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_8c;


void fn_823B78E0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *apuStack_a0 [4];
  undefined **ppuStack_90;
  undefined4 uStack_8c;
  undefined ***pppuStack_80;
  undefined1 auStack_70 [16];
  int *piStack_60;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 auStack_44 [17];
  
  pppuStack_80 = &ppuStack_90;
  puVar1 = *(undefined4 **)(param_1 + 0x60);
  ppuStack_90 = &lbl_821B5CB8;
  puVar2 = (undefined4 *)*puVar1;
  uStack_8c = param_2;
  piStack_60 = (int *)(*(code *)lbl_821B5CB8)(&ppuStack_90,auStack_70);
  apuStack_a0[0] = puVar2;
  while( true ) {
    puVar2 = apuStack_a0[0];
    if (apuStack_a0[0] == puVar1) break;
    uStack_50 = apuStack_a0[0][3];
    uStack_4c = apuStack_a0[0][4];
    uStack_48 = apuStack_a0[0][5];
    fn_823BABB0(auStack_44,apuStack_a0[0] + 6);
    if (piStack_60 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    cVar3 = (**(code **)(*piStack_60 + 4))(piStack_60,&uStack_50);
    fn_823B9060(auStack_44);
    fn_8265CA20(auStack_44[0]);
    auStack_44[0] = 0;
    if (cVar3 != '\0') break;
    fn_82250928(apuStack_a0);
  }
  fn_82359C18(auStack_70);
  fn_82359C18(&ppuStack_90);
  if (puVar2 != *(undefined4 **)(param_1 + 0x60)) {
    fn_823B7FF8(apuStack_a0,param_1 + 0x5c,puVar2);
  }
  return;
}

