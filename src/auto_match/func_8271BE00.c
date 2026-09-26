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
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();
extern int fn_826A7398();
extern int fn_826FFF98();
extern unsigned int lbl_82005710;


void fn_8271BE00(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar5;
  undefined8 uVar4;
  int iVar6;
  undefined4 *apuStack_30 [12];
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    puVar1 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar1);
    *puVar1 = 2;
    puVar1[4] = 0;
  }
  else {
    cVar5 = fn_82695468(param_1,0x1b);
    if (cVar5 == '\0') {
      fn_826954C0(param_1,0xffffffff8200ee50,0,0);
    }
    else {
      iVar6 = *(int *)(param_1 + 8) + -0x10;
      if (*(int *)(param_1 + 8) == 0) {
        iVar6 = 0;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,0);
      fn_82696D38(apuStack_30,uVar4,uVar2,0xffffffffffffffff,0);
      *(undefined8 *)(iVar6 + 0x30) = lbl_82005710;
      uVar2 = *apuStack_30[0];
      uVar4 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
      fn_826FFF98(uVar4,iVar6,uVar2,0);
      puVar1 = *(undefined1 **)(param_1 + 4);
      fn_826959C8(puVar1);
      *puVar1 = 2;
      puVar1[4] = 1;
      uVar3 = apuStack_30[0][2];
      apuStack_30[0][2] = (int)((ulonglong)uVar3 - 1);
      if ((ulonglong)uVar3 - 1 == 0) {
        fn_826944C8(apuStack_30[0]);
      }
    }
  }
  return;
}

