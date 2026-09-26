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
extern unsigned int *auStack_40;
extern int fn_82A9A428();
extern int fn_82A9D3D8();
extern int fn_82A9ECB8();


int fn_82A9F800(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 auStack_40 [16];
  
  piVar2 = (int *)(param_1 + 0x90);
  iVar4 = *(int *)(param_1 + 0x90);
  if (-1 < iVar4) {
    iVar4 = *(int *)(param_1 + 0x6c);
    if (*(uint *)(iVar4 + 4) <= param_2) {
      uVar3 = param_2 + 1;
      if (*(uint *)(iVar4 + 8) < uVar3) {
        fn_82A9A428(iVar4,uVar3,piVar2);
      }
      *(uint *)(iVar4 + 4) = uVar3;
      if (*piVar2 < 0) {
        return *piVar2;
      }
    }
    puVar5 = (undefined4 *)(param_2 * 0x14 + **(int **)(param_1 + 0x6c));
    uVar1 = fn_82A9ECB8(param_1,*(undefined4 *)(*(int *)(param_3 + 0x14) + 0x18));
    *puVar5 = uVar1;
    puVar5[1] = *(undefined4 *)(param_3 + 0x28);
    iVar4 = *(int *)(*(int *)(param_3 + 0x18) + 0x2c);
    if (iVar4 != 0) {
      do {
        auStack_40[0] = *(undefined4 *)(*(int *)(iVar4 + 8) + 0x28);
        fn_82A9D3D8(puVar5 + 2,auStack_40,piVar2);
        if (*piVar2 < 0) {
          return *piVar2;
        }
        iVar4 = *(int *)(iVar4 + 0xc);
      } while (iVar4 != 0);
    }
    iVar4 = *piVar2;
  }
  return iVar4;
}

