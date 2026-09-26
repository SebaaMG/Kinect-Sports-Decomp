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
extern int fn_82695128();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_826C59F8();
extern int fn_826FFD88();
extern unsigned int iStack_40;


void fn_826C5E00(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar6;
  undefined8 uVar5;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  int iStack_40;
  undefined4 *puStack_3c;
  undefined4 *apuStack_38 [14];
  
  piVar6 = (int *)fn_826C59F8();
  if ((piVar6 != (int *)0x0) && (0 < *(int *)(param_1 + 0x1c))) {
    uVar11 = 0;
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar3 = *(undefined4 *)(param_1 + 0x18);
      uVar5 = fn_826957D0(param_1,1);
      fn_82696D38(&iStack_40,uVar5,uVar3,0xffffffffffffffff,0);
      fn_82695128(apuStack_38,&iStack_40);
      lVar7 = (ulonglong)*(uint *)(iStack_40 + 8) - 1;
      *(int *)(iStack_40 + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(iStack_40);
      }
      pcVar8 = "get";
      pcVar10 = (char *)*apuStack_38[0];
      pcVar9 = pcVar10;
      do {
        cVar1 = *pcVar9;
        cVar2 = *pcVar8;
        if (cVar1 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar11 = 1;
      }
      else {
        pcVar9 = "post";
        do {
          cVar1 = *pcVar10;
          cVar2 = *pcVar9;
          if (cVar1 == '\0') break;
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          uVar11 = 2;
        }
      }
      uVar4 = apuStack_38[0][2];
      apuStack_38[0][2] = (int)((ulonglong)uVar4 - 1);
      if ((ulonglong)uVar4 - 1 == 0) {
        fn_826944C8();
      }
    }
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar5 = fn_826957D0(param_1,0);
    fn_82696D38(&puStack_3c,uVar5,uVar3,0xffffffffffffffff,0);
    uVar3 = *puStack_3c;
    uVar5 = (**(code **)(*piVar6 + 0x40))(piVar6);
    fn_826FFD88(uVar5,piVar6,uVar3,uVar11);
    uVar4 = puStack_3c[2];
    puStack_3c[2] = (int)((ulonglong)uVar4 - 1);
    if ((ulonglong)uVar4 - 1 == 0) {
      fn_826944C8(puStack_3c);
    }
  }
  return;
}

