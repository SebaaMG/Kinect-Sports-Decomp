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
extern unsigned int *auStack_70;
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_826962C8();
extern int fn_82696330();
extern int fn_82696B20();
extern int fn_82696D38();
extern int fn_826A73B0();
extern int fn_826C3768();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;


void fn_826BF938(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 auStack_70 [4];
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  byte bStack_60;
  int iStack_58;
  int iStack_54;
  byte bStack_50;
  int iStack_48;
  int iStack_44;
  byte bStack_40;
  undefined1 auStack_30 [48];
  
  if (*(int *)(param_1 + 0x1c) < 2) {
    puVar2 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar2);
    *puVar2 = 2;
    puVar2[4] = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    fn_82696D38(&iStack_6c,uVar4,uVar1,0xffffffffffffffff,0);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,1);
    fn_82696B20(&iStack_58,uVar4,uVar1);
    if (iStack_58 == 0) {
      puVar2 = *(undefined1 **)(param_1 + 4);
      fn_826959C8(puVar2);
      puVar2[4] = 0;
      *puVar2 = 2;
    }
    else {
      bStack_60 = 0;
      iStack_68 = 0;
      iStack_64 = 0;
      if (2 < *(int *)(param_1 + 0x1c)) {
        pcVar5 = (char *)fn_826957D0(param_1,2);
        if ((*pcVar5 == '\b') || (bVar3 = false, *pcVar5 == '\v')) {
          bVar3 = true;
        }
        if (bVar3) {
          uVar1 = *(undefined4 *)(param_1 + 0x18);
          uVar4 = fn_826957D0(param_1,2);
          uVar4 = fn_82696B20(&iStack_48,uVar4,uVar1);
          fn_826C3768(&iStack_68,uVar4);
          if (((bStack_40 & 2) == 0) && (iStack_48 != 0)) {
            fn_826824B0();
          }
          iStack_48 = 0;
          if (((bStack_40 & 1) == 0) && (iStack_44 != 0)) {
            fn_826824B0();
          }
          iStack_44 = 0;
        }
      }
      uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288);
      uVar4 = fn_826A73B0();
      fn_826962C8(auStack_30,&iStack_58,&iStack_68,uVar1,uVar4);
      auStack_70[0] = 0;
      (**(code **)(**(int **)(param_1 + 8) + 0x28))
                (*(int **)(param_1 + 8),(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,&iStack_6c,
                 auStack_30,auStack_70);
      puVar2 = *(undefined1 **)(param_1 + 4);
      fn_826959C8(puVar2);
      *puVar2 = 2;
      puVar2[4] = 1;
      fn_82696330(auStack_30);
      if (((bStack_60 & 2) == 0) && (iStack_68 != 0)) {
        fn_826824B0();
      }
      iStack_68 = 0;
      if (((bStack_60 & 1) == 0) && (iStack_64 != 0)) {
        fn_826824B0();
      }
      iStack_64 = 0;
    }
    if (((bStack_50 & 2) == 0) && (iStack_58 != 0)) {
      fn_826824B0();
    }
    iStack_58 = 0;
    if (((bStack_50 & 1) == 0) && (iStack_54 != 0)) {
      fn_826824B0();
    }
    iStack_54 = 0;
    lVar6 = (ulonglong)*(uint *)(iStack_6c + 8) - 1;
    *(int *)(iStack_6c + 8) = (int)lVar6;
    if (lVar6 == 0) {
      fn_826944C8(iStack_6c);
    }
  }
  return;
}

