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
extern unsigned int lbl_8218EE24;
extern unsigned int lbl_8218EFB4;
extern unsigned int lbl_831C1198;
extern unsigned int lbl_831C14C8;


void fn_8255BDB8(int param_1,undefined8 param_2,int *param_3,int *param_4,uint param_5)

{
  longlong lVar1;
  ushort *puVar2;
  uint uVar3;
  int *piVar4;
  
  if (param_3 != (int *)0x0) {
    puVar2 = &lbl_831C14C8;
    lVar1 = 0x33;
    do {
      for (piVar4 = (int *)(-(uint)(*param_3 != 0) & (uint)(param_3 + 2)); piVar4 != (int *)0x0;
          piVar4 = (int *)(-(uint)((uint)((*piVar4 + (int)piVar4) - (int)param_3) < (uint)param_3[1]
                                  ) & *piVar4 + (int)piVar4)) {
        if (*(ushort *)(piVar4 + 1) == *puVar2) {
          if (param_5 == 0) {
            if ((*(char *)(piVar4 + 4) != '\0') || (piVar4[3] == 0)) {
LAB_8255be54:
              if (*(code **)(&lbl_831C1198 + (uint)*(ushort *)(piVar4 + 1) * 0x10) != (code *)0x0) {
                (**(code **)(&lbl_831C1198 + (uint)*(ushort *)(piVar4 + 1) * 0x10))
                          (piVar4,param_2,0);
              }
            }
          }
          else if (((piVar4[3] & param_5) != 0) && (*(char *)(piVar4 + 4) == '\0'))
          goto LAB_8255be54;
        }
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 4;
    } while (lVar1 != 0);
  }
  if ((param_4 != (int *)0x0) &&
     (piVar4 = (int *)(-(uint)(*param_4 != 0) & (uint)(param_4 + 2)), piVar4 != (int *)0x0)) {
    do {
      puVar2 = &lbl_8218EE24;
      if (**(char **)(*(int *)(param_1 + 8) + 0xd48) == '\0') {
        puVar2 = &lbl_8218EFB4;
      }
      for (uVar3 = 0;
          uVar3 < (-(uint)(**(char **)(*(int *)(param_1 + 8) + 0xd48) != '\0') & 0xfffffff6) + 0x10;
          uVar3 = uVar3 + 1) {
        if (*(ushort *)(piVar4 + 1) == *puVar2) {
          if (param_5 == 0) {
            if ((*(char *)(piVar4 + 4) != '\0') || (piVar4[3] == 0)) {
LAB_8255bf64:
              if (*(code **)(&lbl_831C1198 + (uint)*(ushort *)(piVar4 + 1) * 0x10) != (code *)0x0) {
                (**(code **)(&lbl_831C1198 + (uint)*(ushort *)(piVar4 + 1) * 0x10))
                          (piVar4,param_2,0);
              }
            }
          }
          else if (((piVar4[3] & param_5) != 0) && (*(char *)(piVar4 + 4) == '\0'))
          goto LAB_8255bf64;
        }
        puVar2 = puVar2 + 1;
      }
      piVar4 = (int *)(-(uint)((uint)((*piVar4 + (int)piVar4) - (int)param_4) < (uint)param_4[1]) &
                      *piVar4 + (int)piVar4);
    } while (piVar4 != (int *)0x0);
  }
  return;
}

