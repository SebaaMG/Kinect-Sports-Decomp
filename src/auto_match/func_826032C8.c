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
extern unsigned int *auStack_c0;
extern int fn_825A2410();
extern int fn_825A4E80();
extern int fn_82CE4040();
extern int fn_82CED0A0();
extern int fn_82CED1A0();
extern int fn_82CED218();
extern int fn_82E0B980();
extern int fn_82E0C7A0();
extern int fn_82E0C868();
extern int fn_82E0D7E8();
extern int fn_82E10A30();
extern int fn_82E12AC8();
extern unsigned int lbl_8323FDE4;
extern unsigned int uStack_d0;


void fn_826032C8(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar5;
  undefined8 uVar4;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined1 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [176];
  
  puVar5 = (undefined4 *)fn_825A4E80();
  if (puVar5 != (undefined4 *)0x0) {
    if (puVar5[1] != 0) {
      fn_82CED1A0(auStack_c0,*puVar5,puVar5[1],uStack_d0);
      fn_82E0B980(auStack_b0);
      uVar4 = fn_82CED0A0(auStack_c0);
      fn_82E0D7E8(auStack_b0,uVar4);
      fn_82E10A30(auStack_b0,lbl_8323FDE4);
      uVar6 = fn_82E12AC8(auStack_b0,0xffffffff821ca7a4);
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      uVar4 = fn_82E0C868(auStack_b0);
      fn_82CE4040();
      fn_82CE4040(uVar4);
      puVar7 = (undefined4 *)fn_825A2410(param_1 + 0x14);
      *puVar7 = (int)uVar4;
      fn_82E0C7A0(auStack_b0);
      fn_82CED218(auStack_c0);
    }
    if (puVar5[3] != 0) {
      fn_82CED1A0(auStack_c0,puVar5[2],puVar5[3],uStack_d0);
      fn_82E0B980(auStack_b0);
      uVar4 = fn_82CED0A0(auStack_c0);
      fn_82E0D7E8(auStack_b0,uVar4);
      uVar6 = fn_82E12AC8(auStack_b0,0xffffffff821ca7ec);
      *(undefined4 *)(param_1 + 0x18) = uVar6;
      uVar4 = fn_82E0C868(auStack_b0);
      fn_82CE4040();
      fn_82CE4040(uVar4);
      puVar5 = (undefined4 *)fn_825A2410(param_1 + 0x14);
      *puVar5 = (int)uVar4;
      if (*(int *)(param_1 + 0xc) == 3) {
        iVar8 = 0;
        iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0xc);
        if (0 < iVar1) {
          piVar9 = *(int **)(*(int *)(param_1 + 0x18) + 8);
          do {
            iVar10 = 0;
            iVar2 = *(int *)(*piVar9 + 0x7c);
            if (0 < iVar2) {
              iVar11 = 0;
              do {
                if (*(int *)(iVar11 + *(int *)(*piVar9 + 0x78)) == 0x2001) {
                  bVar3 = true;
                  goto LAB_8260345c;
                }
                iVar10 = iVar10 + 1;
                iVar11 = iVar11 + 0x10;
              } while (iVar10 < iVar2);
            }
            bVar3 = false;
LAB_8260345c:
            if (bVar3) {
              *(undefined4 *)(param_1 + 0xc) = 5;
              break;
            }
            iVar8 = iVar8 + 1;
            piVar9 = piVar9 + 1;
          } while (iVar8 < iVar1);
        }
      }
      fn_82E0C7A0(auStack_b0);
      fn_82CED218(auStack_c0);
    }
  }
  return;
}

