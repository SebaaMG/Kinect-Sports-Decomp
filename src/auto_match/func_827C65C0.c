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
extern unsigned int *auStack_68;
extern int fn_827C62D8();
extern int fn_827C64D0();
extern int fn_82F68CC0();
extern unsigned int iStack_50;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined8 fn_827C65C0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  int aiStack_60 [4];
  int iStack_50;
  
  iVar1 = *(int *)(param_1 + 0x15c);
  uStack_70 = **(undefined4 **)(param_1 + 0x18);
  uStack_6c = (*(undefined4 **)(param_1 + 0x18))[1];
  fn_82F68CC0(auStack_68,iVar1 + 0xc,0x18);
  iStack_50 = param_1;
  if (((*(int *)(param_1 + 0xbc) != 0) && (*(int *)(iVar1 + 0x24) == 0)) &&
     (cVar4 = fn_827C64D0(&uStack_70,*(undefined4 *)(iVar1 + 0x28)), cVar4 == '\0')) {
    return 0;
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x100)) {
    puVar7 = (undefined4 *)(param_2 + -4);
    piVar6 = (int *)(param_1 + 0x104);
    do {
      iVar2 = *piVar6;
      iVar3 = *(int *)((iVar2 + 0x3a) * 4 + param_1);
      cVar4 = fn_827C62D8(&uStack_70,puVar7[1],aiStack_60[iVar2],
                            *(undefined4 *)((*(int *)(iVar3 + 0x14) + 0xb) * 4 + iVar1),
                            *(undefined4 *)((*(int *)(iVar3 + 0x18) + 0xf) * 4 + iVar1));
      if (cVar4 == '\0') {
        return 0;
      }
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + 1;
      iVar3 = *(int *)(param_1 + 0x100);
      piVar6 = piVar6 + 1;
      aiStack_60[iVar2] = (int)*(short *)*puVar7;
    } while (iVar5 < iVar3);
  }
  **(undefined4 **)(param_1 + 0x18) = uStack_70;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = uStack_6c;
  fn_82F68CC0(iVar1 + 0xc,auStack_68,0x18);
  if (*(int *)(param_1 + 0xbc) != 0) {
    if (*(int *)(iVar1 + 0x24) == 0) {
      *(int *)(iVar1 + 0x24) = *(int *)(param_1 + 0xbc);
      *(uint *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + 1U & 7;
    }
    *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
  }
  return 1;
}

