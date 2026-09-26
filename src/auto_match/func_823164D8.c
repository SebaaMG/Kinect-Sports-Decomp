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
extern unsigned int *auStack_110;
extern unsigned int *auStack_b0;
extern int fn_822B69A0();
extern int fn_822C4448();
extern int fn_824CD030();
extern unsigned int lbl_821962C0;
extern unsigned int lbl_821CC160;


/* WARNING: Removing unreachable block (ram,0x82316658) */
/* WARNING: Removing unreachable block (ram,0x82316664) */
/* WARNING: Removing unreachable block (ram,0x82316678) */
/* WARNING: Removing unreachable block (ram,0x82316680) */
/* WARNING: Removing unreachable block (ram,0x823166a0) */
/* WARNING: Removing unreachable block (ram,0x823166a4) */
/* WARNING: Removing unreachable block (ram,0x823168d0) */
/* WARNING: Removing unreachable block (ram,0x823166ac) */
/* WARNING: Removing unreachable block (ram,0x823166c4) */
/* WARNING: Removing unreachable block (ram,0x823168c4) */
/* WARNING: Removing unreachable block (ram,0x82316770) */
/* WARNING: Removing unreachable block (ram,0x82316780) */
/* WARNING: Removing unreachable block (ram,0x823167b8) */
/* WARNING: Removing unreachable block (ram,0x82316874) */
/* WARNING: Removing unreachable block (ram,0x82316888) */
/* WARNING: Removing unreachable block (ram,0x823167ec) */
/* WARNING: Removing unreachable block (ram,0x82316800) */
/* WARNING: Removing unreachable block (ram,0x82316810) */
/* WARNING: Removing unreachable block (ram,0x82316824) */
/* WARNING: Removing unreachable block (ram,0x82316838) */

void fn_823164D8(undefined8 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_110 [96];
  undefined1 auStack_b0 [176];
  
  iVar2 = *(int *)(*(int *)(param_2 + 0xc) + 0x24);
  iVar5 = fn_824CD030(iVar2);
  if (iVar5 != 0) {
    iVar5 = *(int *)(*(int *)(param_2 + 0x10) + 0xe10);
    if (*(char *)(iVar5 + 0xbb1) == '\0') {
      fVar1 = *(float *)(iVar5 + 0xb64);
    }
    else {
      fVar1 = *(float *)(iVar5 + 0xba4);
    }
    dVar6 = (double)fVar1;
    fn_822B69A0(auStack_110,*(undefined4 *)(param_2 + 0xc));
    puVar3 = (undefined4 *)((uint)(&lbl_821962C0 + in_r0) & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    if (*(int *)(iVar2 + 0xf4) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 0xf4) + 0x6c) = 0;
    }
    fn_822C4448(auStack_110,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),0,1
                     );
    (**(code **)(**(int **)(param_2 + 0x5d0) + 4))
              (param_1,ABS(dVar6),(double)lbl_821CC160,*(int **)(param_2 + 0x5d0),iVar2);
  }
  return;
}

