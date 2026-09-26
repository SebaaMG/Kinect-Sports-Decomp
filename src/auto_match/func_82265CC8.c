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
extern unsigned int fStack_2c;
extern int fn_822843E0();
extern int fn_82284448();
extern unsigned int lbl_82191F78;
extern unsigned int lbl_821CC160;


void fn_82265CC8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int *piVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_30 [4];
  float fStack_2c;
  
  if ((*(int *)(param_1 + 0x50c) != 2) && (*(int *)(param_1 + 0x624) != 0)) {
    iVar1 = *(int *)(param_1 + 0x520);
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0xdc) + 0x50U & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    fStack_2c = fStack_2c + lbl_82191F78;
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x51c) == 0) {
        piVar5 = (int *)(iVar1 + 0x24);
        uVar6 = 0;
        do {
          if (*piVar5 == 0) {
            *(undefined4 *)((int)uVar6 * 0x234 + iVar1 + 0x24) = 1;
            goto LAB_82265d64;
          }
          uVar6 = uVar6 + 1;
          piVar5 = piVar5 + 0x8d;
        } while ((uVar6 & 0xffffffff) < 6);
        uVar6 = 0;
LAB_82265d64:
        uVar2 = *(uint *)(param_1 + 0x44);
        *(int *)(param_1 + 0x540) = (int)uVar6;
        fn_822843E0((double)lbl_821CC160,*(undefined4 *)(param_1 + 0x520),
                          ((ulonglong)uVar2 +
                          ((longlong)((int)uVar2 >> 1) +
                           (ulonglong)((int)uVar2 < 0 && (uVar2 & 1) != 0) & 0x7fffffff) * -2) *
                          0x18 + -0x7de6c2e8,param_1 + 0x5a4,(longlong)((int)uVar2 >> 1),uVar6);
        *(undefined4 *)(param_1 + 0x51c) = 1;
      }
      fn_82284448(*(undefined4 *)(param_1 + 0x520),auStack_30,*(undefined4 *)(param_1 + 0x540)
                       );
    }
  }
  return;
}

