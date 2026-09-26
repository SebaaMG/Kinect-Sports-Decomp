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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern int fn_825A2410();
extern int fn_825A4ED0();
extern int fn_82CE4040();
extern int fn_82CEBB58();
extern int fn_82CEBB90();
extern int fn_82CEBC18();
extern int fn_82E0A1C0();
extern int fn_82E0B980();
extern int fn_82E0C7A0();
extern int fn_82E0C868();
extern int fn_82E0D7E8();
extern int fn_82E10A30();
extern int fn_82E12AC8();
extern unsigned int lbl_8323FDE4;


void fn_825A4F20(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar3;
  undefined4 *puVar7;
  int iVar8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [176];
  
  piVar4 = (int *)fn_825A4ED0();
  if (piVar4 != (int *)0x0) {
    fn_82E0B980(auStack_b0);
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      iVar1 = piVar4[1];
      iVar8 = piVar4[2];
      iVar2 = piVar4[4];
      *(undefined4 *)(param_1 + 0xc) = 3;
      fn_82CEBB90(auStack_d0,iVar6,iVar1,2);
      pcVar5 = (char *)fn_82CEBB58(auStack_e0,auStack_d0);
      if ((*pcVar5 != '\0') && (iVar6 = fn_82E0D7E8(auStack_b0,auStack_d0), iVar6 == 0)) {
        fn_82E10A30(auStack_b0,lbl_8323FDE4);
        uVar3 = fn_82E0A1C0(auStack_b0);
        iVar6 = fn_82E12AC8(auStack_b0,uVar3);
        if (0 < *(int *)(*(int *)(iVar6 + 0x34) + 0xb8)) {
          iVar1 = *(int *)(*(int *)(iVar6 + 0x34) + 0xb4);
          *(int *)(iVar1 + 0x18) = iVar2;
          *(int *)(iVar1 + 0x40) = iVar8;
          if (piVar4[7] == 0) {
            iVar8 = 0;
            *(undefined2 *)(iVar1 + 10) = 1;
            *(undefined4 *)(iVar1 + 0xc) = 0;
            *(undefined2 *)(iVar1 + 8) = 0;
            *(undefined2 *)(iVar1 + 2) = 0;
          }
          else {
            *(short *)(iVar1 + 10) = (short)piVar4[8];
            *(int *)(iVar1 + 0xc) = piVar4[7];
            iVar8 = piVar4[6];
            *(undefined2 *)(iVar1 + 8) = 1;
            *(undefined2 *)(iVar1 + 2) = 0xc;
          }
          *(undefined1 *)(iVar1 + 1) = 1;
          *(int *)(iVar1 + 4) = iVar8;
        }
        uVar3 = fn_82E0C868(auStack_b0);
        fn_82CE4040();
        fn_82CE4040(uVar3);
        puVar7 = (undefined4 *)fn_825A2410(param_1 + 0x14);
        *puVar7 = (int)uVar3;
        *(int *)(param_1 + 8) = iVar6;
      }
      fn_82CEBC18(auStack_d0);
    }
    fn_82E0C7A0(auStack_b0);
  }
  return;
}

