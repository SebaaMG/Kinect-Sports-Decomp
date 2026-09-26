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


undefined8 fn_829BBC60(int param_1)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  
  iVar6 = *(int *)(param_1 + 0x1b0);
  uVar8 = 0;
  if ((*(int *)(param_1 + 0xe0) == 0) || (*(int *)(param_1 + 0xa4) == 0)) {
LAB_829bbdf0:
    uVar8 = 0;
  }
  else {
    if (*(int *)(iVar6 + 0x70) == 0) {
      uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))
                        (param_1,1,
                         ((ulonglong)*(uint *)(param_1 + 0x24) +
                          ((ulonglong)*(uint *)(param_1 + 0x24) & 0x7fffffff) * 2 & 0x1fffffff) << 3
                        );
      *(undefined4 *)(iVar6 + 0x70) = uVar2;
    }
    iVar4 = 0;
    iVar6 = *(int *)(iVar6 + 0x70);
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar5 = 0;
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0xdc) + 0x4c);
      do {
        psVar1 = (short *)*puVar3;
        if (((((psVar1 == (short *)0x0) || (*psVar1 == 0)) || (psVar1[1] == 0)) ||
            ((psVar1[8] == 0 || (psVar1[0x10] == 0)))) ||
           ((psVar1[9] == 0 ||
            ((psVar1[2] == 0 || (piVar7 = (int *)(*(int *)(param_1 + 0xa4) + iVar5), *piVar7 < 0))))
           )) goto LAB_829bbdf0;
        *(int *)(iVar6 + 4) = piVar7[1];
        if (piVar7[1] != 0) {
          uVar8 = 1;
        }
        *(int *)(iVar6 + 8) = piVar7[2];
        if (piVar7[2] != 0) {
          uVar8 = 1;
        }
        *(int *)(iVar6 + 0xc) = piVar7[3];
        if (piVar7[3] != 0) {
          uVar8 = 1;
        }
        *(int *)(iVar6 + 0x10) = piVar7[4];
        if (piVar7[4] != 0) {
          uVar8 = 1;
        }
        *(int *)(iVar6 + 0x14) = piVar7[5];
        if (piVar7[5] != 0) {
          uVar8 = 1;
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x18;
        iVar5 = iVar5 + 0x100;
        puVar3 = puVar3 + 0x15;
      } while (iVar4 < *(int *)(param_1 + 0x24));
    }
  }
  return uVar8;
}

