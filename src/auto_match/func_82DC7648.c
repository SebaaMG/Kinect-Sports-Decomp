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
extern int fn_82DC73A8();
extern int fn_82DC74A8();
extern int fn_82DC7568();


int fn_82DC7648(int param_1,undefined1 *param_2)

{
  ushort uVar1;
  uint uVar3;
  int iVar4;
  undefined8 uVar2;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar8 = (uint)uVar1;
  iVar4 = param_1;
  if (*(ushort *)(param_1 + 6) <= uVar1) {
    if (uVar1 < 3) {
      uVar8 = 2;
    }
    uVar3 = uVar8 << 1;
    if ((uint)*(ushort *)(param_1 + 0xc) <= uVar8 << 1) {
      uVar3 = (uint)*(ushort *)(param_1 + 0xc);
    }
    iVar4 = fn_82DC74A8(uVar3,*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9));
    fn_82DC7568(iVar4,param_1);
    uVar2 = fn_82DC73A8(*(undefined2 *)(param_1 + 2));
    iVar5 = fn_82CE5410();
    (**(code **)(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10),param_1,uVar2);
    *param_2 = 1;
  }
  *(ushort *)(iVar4 + 4) = uVar1 + 1;
  lVar6 = (longlong)((int)(uint)*(byte *)(iVar4 + 10) >> 2);
  if (-1 < lVar6 + -1) {
    puVar7 = (undefined4 *)
             ((uint)*(byte *)(iVar4 + 10) * (int)(short)uVar1 + (uint)*(ushort *)(iVar4 + 6) * 0x20
              + iVar4 + 0x2c);
    for (; lVar6 != 0; lVar6 = lVar6 + -1) {
      puVar7 = puVar7 + 1;
      *puVar7 = 0;
    }
  }
  return iVar4;
}

