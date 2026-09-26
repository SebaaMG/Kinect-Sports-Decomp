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
extern unsigned int *auStack_60;
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826FDF58();
extern int fn_8278D3F0();
extern int fn_8278E7B0();
extern int fn_8278FDC8();
extern int fn_82791FD0();
extern int fn_82793650();


int fn_8279B6A8(int param_1)

{
  undefined4 uVar1;
  int iVar3;
  uint uVar4;
  undefined8 uVar2;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined2 uVar9;
  int iVar10;
  undefined1 auStack_60 [96];
  
  iVar10 = param_1 + 0x4c;
  iVar3 = fn_82791FD0(iVar10);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar3 + 4);
  if (*(uint *)(param_1 + 0x1c) != 0) {
    iVar3 = fn_8278FDC8((ulonglong)*(uint *)(param_1 + 0x1c) + 0x14);
    if (iVar3 != 0) {
      uVar4 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x30);
      uVar8 = *(int *)(*(int *)(param_1 + 0x30) + 0x1c) + *(int *)(param_1 + 0x70);
      if (uVar4 <= uVar8) {
        if ((uVar8 == uVar4) &&
           (uVar4 = fn_8278FDC8(*(int *)(param_1 + 0x1c) + 0x14),
           *(uint *)(param_1 + 0x28) < uVar4)) {
          iVar3 = fn_82791FD0(iVar10);
          *(int *)(param_1 + 0x70) = *(int *)(iVar3 + 4) + *(int *)(param_1 + 0x28);
          *(undefined2 *)(param_1 + 0x74) =
               *(undefined2 *)
                (*(int *)(param_1 + 0x28) * 2 + *(int *)(*(int *)(param_1 + 0x1c) + 0x14));
          uVar2 = fn_82793650(*(int *)(param_1 + 0x1c) + 0x14);
          puVar5 = (undefined4 *)fn_82791FD0(iVar10);
          uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10);
          uVar2 = fn_8278D3F0(auStack_60,*puVar5,uVar2);
          iVar3 = fn_8278E7B0(uVar1,uVar2);
          if (*(int *)(param_1 + 0x6c) != 0) {
            fn_8267C4F0();
          }
          *(int *)(param_1 + 0x6c) = iVar3;
          fn_826FDF58(auStack_60);
          goto LAB_8279b850;
        }
        iVar3 = fn_82791FD0(iVar10);
        iVar6 = fn_8278FDC8((ulonglong)*(uint *)(param_1 + 0x1c) + 0x14);
        *(int *)(param_1 + 0x70) = *(int *)(iVar3 + 4) + iVar6;
      }
    }
  }
  piVar7 = (int *)fn_82791FD0(iVar10);
  if (*piVar7 != 0) {
    fn_8267C4C8();
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    fn_8267C4F0();
  }
  *(int *)(param_1 + 0x6c) = *piVar7;
  if (((*(byte *)(*(int *)(param_1 + 0x2c) + 0x13d) & 0x10) == 0) ||
     (iVar3 = fn_82791FD0(iVar10), *(short *)(iVar3 + 8) == 0)) {
    iVar3 = fn_82791FD0(iVar10);
    uVar9 = *(undefined2 *)(iVar3 + 8);
  }
  else {
    uVar9 = 0x2a;
  }
  *(undefined2 *)(param_1 + 0x74) = uVar9;
LAB_8279b850:
  return param_1 + 0x6c;
}

