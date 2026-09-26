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
extern int fn_82639380();
extern int fn_82639528();
extern int fn_826397C8();
extern int fn_8263CBB0();
extern unsigned int lbl_821954CC;
extern unsigned int uStack_4c;


void fn_82543440(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uStack_4c;
  
  fVar5 = lbl_821954CC;
  if (*param_3 != 0) {
    piVar8 = param_3 + 2;
    iVar1 = *piVar8;
    iVar2 = *param_1;
    iVar6 = (iVar1 + 0x30) * 0x18;
    iVar4 = *(int *)((uint)*(ushort *)(param_3 + 3) * 4 + **(int **)(param_2 + 4));
    *(uint *)(iVar6 + iVar2) = (param_3[4] & 7U) << 10 | *(uint *)(iVar6 + iVar2) & 0xffffe3ff;
    *(ulonglong *)(iVar2 + 0x18) =
         0x8000000000000000U >> (iVar1 + 0x20U & 0x7f) | *(ulonglong *)(iVar2 + 0x18);
    iVar1 = *param_1;
    iVar2 = *piVar8;
    iVar6 = (iVar2 + 0x30) * 0x18;
    *(uint *)(iVar6 + iVar1) = (param_3[5] & 7U) << 0xd | *(uint *)(iVar6 + iVar1) & 0xffff1fff;
    *(ulonglong *)(iVar1 + 0x18) =
         0x8000000000000000U >> (iVar2 + 0x20U & 0x7f) | *(ulonglong *)(iVar1 + 0x18);
    iVar1 = *param_1;
    iVar2 = *piVar8;
    iVar6 = (iVar2 + 0x30) * 0x18 + iVar1;
    uStack_4c = (uint)(longlong)((float)param_3[6] * fVar5);
    *(uint *)(iVar6 + 0x10) = (uStack_4c & 0x3ff) << 0xc | *(uint *)(iVar6 + 0x10) & 0xffc00fff;
    *(ulonglong *)(iVar1 + 0x18) =
         0x8000000000000000U >> (iVar2 + 0x20U & 0x7f) | *(ulonglong *)(iVar1 + 0x18);
    if ((uint)param_3[7] < 2) {
      fn_82639380(*param_1,*piVar8,1);
    }
    else {
      fn_826397C8();
      fn_82639380(*param_1,*piVar8,4);
    }
    fn_82639528(*param_1,*piVar8);
    iVar1 = *piVar8;
    if (*(int *)(iVar4 + 0x1c) == 4) {
      uVar7 = (uint)*(byte *)(*(int *)(*(int *)param_3[1] + *(int *)(param_2 + 4) + 8) + iVar1);
      uVar3 = *(undefined4 *)
               ((-(uint)(uVar7 < *(uint *)(iVar4 + 0x38)) & uVar7) * 4 + *(int *)(iVar4 + 0x34));
    }
    else {
      uVar3 = *(undefined4 *)(iVar4 + 0x34);
    }
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(*param_1,iVar1,uVar3,0x8000000000000000 >> (iVar1 + 0x20U & 0x7f));
  }
  return;
}

