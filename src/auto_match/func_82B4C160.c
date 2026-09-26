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
extern int fn_82AA6648();
extern int fn_82ABE870();
extern int fn_82AF8780();
extern int fn_82F63CA0();


void fn_82B4C160(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  lVar5 = (ulonglong)*(uint *)(param_1[1] + 8) - 1;
  *(int *)(param_1[1] + 8) = (int)lVar5;
  if (lVar5 == 0) {
    if ((param_1[2] != 0) ||
       (bVar4 = true,
       param_1[1] != (-(uint)((*(uint *)(*param_1 + 4) & 1) == 0) & *(uint *)(*param_1 + 4)))) {
      bVar4 = false;
    }
    if (bVar4) {
      iVar7 = 0;
      iVar6 = 0;
    }
    else {
      fn_82AF8780(param_1);
      iVar6 = param_1[1];
      iVar7 = param_1[2];
      fn_82ABE870(param_1);
    }
    puVar3 = (uint *)(param_1[1] & 0xfffffffe);
    *(uint *)(puVar3[1] & 0xfffffffe) = *puVar3;
    *(uint *)(*puVar3 & 0xfffffffe) = puVar3[1];
    iVar1 = param_1[1];
    fn_82AA6648(iVar1,iVar1,((ulonglong)*(uint *)(iVar1 + 0xc) + 2 & 0x1fffffff) << 3);
    if (bVar4) {
      uVar2 = *(uint *)(*param_1 + 4);
      param_1[2] = 0;
      param_1[1] = -(uint)((uVar2 & 1) == 0) & uVar2;
    }
    else {
      param_1[1] = iVar6;
      param_1[2] = iVar7;
    }
    return;
  }
  iVar6 = param_1[1];
  iVar7 = param_1[2];
  fn_82F63CA0((iVar7 + 2) * 8 + iVar6,(iVar7 + 3) * 8 + iVar6,
               *(int *)(iVar6 + 8) - iVar7 & 0x1fffffff);
  return;
}

