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
extern int fn_82522838();
extern int fn_82522BC8();
extern int fn_82522D98();
extern int fn_82A1EFC0();
extern int fn_82F63CA0();
extern unsigned int lbl_821C8578;
extern unsigned int lbl_832767CC;


void fn_825BA3D8(int *param_1,uint param_2,ushort param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(8);
  }
  puVar1 = (uint *)*param_1;
  uVar5 = 0;
  puVar6 = puVar1 + 2;
  if (*puVar1 != 0) {
    do {
      if (param_3 < *(ushort *)((int)puVar6 + 6)) break;
      uVar5 = uVar5 + 1;
      puVar6 = (uint *)(*puVar6 + (int)puVar6);
    } while (uVar5 < *puVar1);
  }
  uVar5 = puVar1[1];
  iVar3 = (param_2 & 0xffff) * 4;
  iVar2 = *(int *)(&lbl_821C8578 + iVar3);
  if (lbl_832767CC == 0) {
    fn_82522838();
  }
  iVar4 = fn_82522BC8(lbl_832767CC,puVar1,uVar5 + iVar2);
  iVar7 = ((int)puVar6 - (int)puVar1) + iVar4;
  if (*(int *)(iVar4 + 4) != (int)puVar6 - (int)puVar1) {
    fn_82F63CA0(iVar2 + iVar7,iVar7);
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(iVar7,0,*(undefined4 *)(&lbl_821C8578 + iVar3));
}

