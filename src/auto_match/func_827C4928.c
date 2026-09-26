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
extern int fn_827C3A38();
extern int fn_827C43E0();
extern unsigned int iStack_40;
extern unsigned int iStack_48;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_827C4928(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  uint uStack_44;
  int iStack_40;
  
  uVar1 = *(uint *)(param_1 + 0x178);
  iVar2 = *(int *)(param_1 + 0x198);
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar2 + 0x28) == 0)) &&
     (cVar4 = fn_827C43E0(), cVar4 == '\0')) {
    return 0;
  }
  iVar7 = 0;
  uStack_50 = **(undefined4 **)(param_1 + 0x18);
  uStack_4c = (*(undefined4 **)(param_1 + 0x18))[1];
  iVar5 = *(int *)(iVar2 + 0xc);
  uVar6 = (ulonglong)*(uint *)(iVar2 + 0x10);
  iStack_40 = param_1;
  if (0 < *(int *)(param_1 + 0x140)) {
    do {
      puVar3 = (ushort *)*param_2;
      if ((int)uVar6 < 1) {
        cVar4 = fn_827C3A38(&uStack_50,iVar5,uVar6,1);
        if (cVar4 == '\0') {
          return 0;
        }
        uVar6 = (ulonglong)uStack_44;
        iVar5 = iStack_48;
      }
      uVar6 = uVar6 - 1;
      if ((iVar5 >> ((uint)uVar6 & 0x3f) & 1U) != 0) {
        *puVar3 = *puVar3 | (ushort)(1 << (uVar1 & 0x3f));
      }
      iVar7 = iVar7 + 1;
      param_2 = param_2 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x140));
  }
  **(undefined4 **)(param_1 + 0x18) = uStack_50;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = uStack_4c;
  *(int *)(iVar2 + 0xc) = iVar5;
  *(int *)(iVar2 + 0x10) = (int)uVar6;
  *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  return 1;
}

