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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D07808();
extern int fn_82D07980();
extern int fn_82D07CB0();
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_82D07F70(byte *param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_50;
  uint uStack_4c;
  uint uStack_48;
  int iStack_44;
  
  bVar1 = param_1[0x14];
  if (bVar1 == 0) {
    fn_82D07808(*param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_2);
  }
  else if (bVar1 == 1) {
    if ((2 < *param_1) && (*param_1 < 5)) {
      uVar3 = *(uint *)(param_1 + 8);
      iStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0x80000000;
      piVar4 = (int *)fn_82CE5410();
      uStack_48 = uVar3 | 0x80000000;
      iStack_50 = *piVar4;
      *piVar4 = (uVar3 * 2 + 0x7f & 0xffffff80) + iStack_50;
      iStack_44 = iStack_50;
      fn_82D07CB0(*param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0,
                    &iStack_50);
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        iVar7 = 0;
        do {
          uVar2 = *(ushort *)(iVar7 + iStack_50);
          iVar5 = fn_82CE5410();
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),param_2,4);
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 2;
          *(uint *)(param_2[1] * 4 + *param_2) = (uint)uVar2;
          param_2[1] = param_2[1] + 1;
        } while (iVar6 < *(int *)(param_1 + 8));
      }
      iVar6 = iStack_44;
      uStack_4c = -(uint)(iStack_50 != iStack_44) & uStack_4c;
      piVar4 = (int *)fn_82CE5410();
      *piVar4 = iVar6;
      iVar6 = fn_82CE5410();
      uStack_4c = 0;
      if ((uStack_48 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),iStack_50,uStack_48 & 0x3fffffff,2);
      }
    }
  }
  else if (((bVar1 < 3) && (bVar1 = *param_1, 2 < bVar1)) && (bVar1 < 5)) {
    fn_82D07980(bVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0,param_2);
  }
  return;
}

