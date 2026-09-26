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
extern int fn_825089A0();
extern int fn_82889B80();
extern int fn_82889C00();
extern int fn_82889EE0();
extern int fn_8288A0F8();
extern int fn_82CE0A80();
extern int fn_82CE0BB8();
extern int fn_82F63EC8();
extern unsigned int iStack_5c;
extern unsigned int iStack_6c;
extern unsigned int lbl_83213E94;
extern unsigned int lbl_83213EC0;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_80;


undefined8 fn_8288A178(undefined4 param_1,int param_2,ulonglong param_3,undefined4 *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  uint *puVar6;
  undefined1 uStack_80;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  uVar2 = fn_82CE0A80();
  if ((int)uVar2 == 0) {
    iStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    iStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    piVar3 = (int *)fn_825089A0();
    uStack_48 = (**(code **)(*piVar3 + 0xc))();
    uStack_70 = 0;
    uStack_4c = param_1;
    if ((param_3 & 0xffffffff) != 0) {
      puVar6 = (uint *)(param_2 + -8);
      do {
        puVar1 = puVar6 + 3;
        puVar6 = puVar6 + 2;
        fn_82889C00(&iStack_6c,uStack_68,(ulonglong)*puVar1,
                      (ulonglong)*puVar6 + (ulonglong)*puVar1,uStack_80);
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    if ((lbl_83213EC0 & 1) == 0) {
      lbl_83213EC0 = lbl_83213EC0 | 1;
      fn_82889EE0(0xffffffff83213e94);
      fn_82F63EC8(0xffffffff83140920);
    }
    if ((lbl_83213E94 != '\0') && (iVar4 = fn_8288A0F8(), *(int *)(iVar4 + 8) != 0)) {
      iVar4 = fn_8288A0F8();
      cVar5 = (**(code **)(**(int **)(iVar4 + 8) + 4))(*(int **)(iVar4 + 8),&uStack_70);
      if (cVar5 != '\0') {
        *param_4 = 0;
        fn_82CE0BB8(0x2733);
        fn_82889B80(&uStack_70);
        return 0xffffffffffffffff;
      }
    }
    iVar4 = iStack_5c;
    if (iStack_5c != 0) {
      piVar3 = (int *)fn_825089A0();
      (**(code **)(*piVar3 + 0x28))(piVar3,iVar4);
    }
    iVar4 = iStack_6c;
    iStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    if (iStack_6c != 0) {
      piVar3 = (int *)fn_825089A0();
      (**(code **)(*piVar3 + 0x28))(piVar3,iVar4);
    }
  }
  return uVar2;
}

