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
extern int fn_82ABE940();
extern int fn_82F63CA0();
extern int fn_82F68CC0();


void fn_82ACBA08(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 8) == *(int *)(iVar1 + 0xc)) {
    uVar5 = fn_82ABE940(iVar1,(*(int *)(iVar1 + 0xc) + 4) * 4);
    piVar4 = (int *)(uVar5 & 0xfffffffe);
    *(undefined4 *)(uVar5 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
    uVar3 = *(uint *)(param_1 + 4) & 0xfffffffe;
    piVar4[1] = *(int *)(uVar3 + 4);
    *(int **)(*(uint *)(uVar3 + 4) & 0xfffffffe) = piVar4 + 1;
    *piVar4 = uVar3 + 4;
    *(int **)(uVar3 + 4) = piVar4;
    uVar6 = (ulonglong)*(uint *)(*(int *)(param_1 + 4) + 8);
    if (*(uint *)(param_1 + 8) < uVar6) {
      uVar6 = uVar6 - *(uint *)(param_1 + 8);
      *(int *)(uVar5 + 8) = (int)uVar6;
      fn_82F68CC0(uVar5 + 0x10,
                   ((ulonglong)*(uint *)(param_1 + 8) + 4 & 0x3fffffff) * 4 +
                   (ulonglong)*(uint *)(param_1 + 4),(uVar6 & 0x3fffffff) << 2);
      *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
    }
    else {
      *(uint *)(param_1 + 4) = uVar5;
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  fn_82F63CA0((iVar2 + 5) * 4 + iVar1,(iVar2 + 4) * 4 + iVar1,
               *(int *)(iVar1 + 8) - iVar2 & 0x3fffffff);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(*(int *)(param_1 + 4) + 8) + 1;
  *(undefined4 *)((*(int *)(param_1 + 8) + 4) * 4 + *(int *)(param_1 + 4)) = param_2;
  return;
}

