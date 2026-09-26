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
extern int fn_822315A0();
extern int fn_8255BB98();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_83296158;
extern unsigned int lbl_8329615C;


undefined4 fn_8255BCC0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iStack_40;
  int iStack_3c;
  
  uVar6 = 0;
  piVar2 = &lbl_8329615C;
  lVar8 = 4;
  do {
    if (*piVar2 != 0) {
      uVar6 = uVar6 + 1;
    }
    piVar2 = piVar2 + -0xc;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      iVar3 = 0;
      puVar4 = &lbl_83296158;
      do {
        iVar5 = *(int *)(puVar4 + 4);
        if (iVar5 != 0) {
          iVar3 = iVar3 + 1;
        }
        if (iVar3 == uVar7 - 1) goto LAB_8255bd44;
        puVar4 = puVar4 + -0x30;
      } while (-0x7cd69f39 < (int)puVar4);
      iVar5 = 0;
LAB_8255bd44:
      iVar3 = *(int *)(iVar5 + 0xd48);
      fn_8255BB98(&iStack_40,iVar3);
      if ((iStack_40 != 0) && (*(int *)(iStack_40 + 4) == param_1)) {
        uVar1 = *(undefined4 *)(iVar3 + 0x14);
        if (iStack_3c == 0) {
          return uVar1;
        }
        fn_822315A0();
        return uVar1;
      }
      if (iStack_3c != 0) {
        fn_822315A0();
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  return 0;
}

