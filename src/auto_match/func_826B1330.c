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
extern int fn_826824B0();
extern int fn_826B0E90();
extern int fn_826C3378();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


int fn_826B1330(undefined8 param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  byte bStack_40;
  int iStack_38;
  int iStack_34;
  byte bStack_30;
  
  iStack_50 = *param_2;
  *(int *)(iStack_50 + 8) = *(int *)(iStack_50 + 8) + 1;
  puVar2 = (undefined4 *)fn_826B0E90(param_1,&iStack_50);
  if (puVar2 == (undefined4 *)0x0) {
    iVar5 = 0;
  }
  else {
    piVar3 = puVar2 + 1;
    if (puVar2[1] == 0) {
      piVar3 = (int *)(*(code *)*puVar2)(&iStack_38,param_1);
      bStack_40 = 0;
      iStack_48 = *piVar3;
      if (iStack_48 != 0) {
        puVar6 = (uint *)(iStack_48 + 8);
        uVar1 = *puVar6;
        *puVar6 = uVar1 + 1;
        *puVar6 = uVar1 + 1 & 0x8fffffff;
      }
      iStack_44 = 0;
      if (piVar3[1] != 0) {
        fn_826C3378(&iStack_48,piVar3[1],*(byte *)(piVar3 + 2) & 1);
      }
      if (((bStack_30 & 2) == 0) && (iStack_38 != 0)) {
        fn_826824B0();
      }
      iStack_38 = 0;
      if (((bStack_30 & 1) == 0) && (iStack_34 != 0)) {
        fn_826824B0();
      }
      iStack_4c = *param_2;
      iStack_34 = 0;
      *(int *)(iStack_4c + 8) = *(int *)(iStack_4c + 8) + 1;
      iVar4 = fn_826B0E90(param_1,&iStack_4c);
      iVar5 = iStack_48;
      piVar3 = (int *)(iVar4 + 4);
      if (iStack_48 != 0) {
        puVar6 = (uint *)(iStack_48 + 8);
        uVar1 = *puVar6;
        *puVar6 = uVar1 + 1;
        *puVar6 = uVar1 + 1 & 0x8fffffff;
      }
      if (*piVar3 != 0) {
        fn_826824B0();
      }
      *piVar3 = iVar5;
      if (((bStack_40 & 2) == 0) && (iStack_48 != 0)) {
        fn_826824B0();
      }
      iStack_48 = 0;
      if (((bStack_40 & 1) == 0) && (iStack_44 != 0)) {
        fn_826824B0();
      }
    }
    iVar5 = *piVar3;
  }
  return iVar5;
}

