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
extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BC0088();
extern unsigned int lbl_820E0214;
extern unsigned int lbl_821AAD20;


undefined4 * fn_82BB6C20(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  iVar2 = param_1[5];
  uVar7 = 0;
  if (*(int *)(iVar2 + 4) != 0) {
    iVar5 = 0;
    do {
      if ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 4)) {
        piVar3 = (int *)(*(int *)(iVar2 + 8) + iVar5);
      }
      else {
        piVar3 = (int *)fn_82BC0088(iVar2,uVar7);
      }
      iVar2 = param_1[5];
      if (*(int *)(*piVar3 + 0x28) == param_2) {
        if ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 4)) {
          puVar4 = (undefined4 *)(*(int *)(iVar2 + 8) + (int)uVar7 * 4);
        }
        else {
          puVar4 = (undefined4 *)fn_82BC0088(iVar2,uVar7);
        }
        return (undefined4 *)*puVar4;
      }
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 4;
    } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 4));
  }
  uVar1 = *(undefined4 *)(*param_1 + 0x5b0);
  puVar4 = (undefined4 *)fn_82B7BD28(uVar1,0x48);
  puVar6 = puVar4 + 1;
  *puVar4 = uVar1;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1[5] + 4);
    puVar4[5] = lbl_821AAD20;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar6 = &lbl_820E0214;
    puVar4[8] = 0xffffffff;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = param_2;
    puVar4[0xc] = uVar1;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    *(undefined1 *)(puVar4 + 0xf) = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[4] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
  }
  *(undefined1 *)(puVar6 + 0xe) = 0;
  uVar1 = *(undefined4 *)(*param_1 + 0x5b0);
  puVar4 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar8 = puVar4 + 1;
  *puVar4 = uVar1;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar8,*(undefined4 *)(*param_1 + 0x5b0));
  }
  puVar6[0xd] = puVar8;
  uVar1 = *(undefined4 *)(*param_1 + 0x5b0);
  puVar4 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar8 = puVar4 + 1;
  *puVar4 = uVar1;
  puVar4 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    fn_82BA03B8(puVar8,*(undefined4 *)(*param_1 + 0x5b0));
    puVar4 = puVar8;
  }
  puVar6[0xc] = puVar4;
  puVar4 = (undefined4 *)fn_82BC0088(param_1[5],*(undefined4 *)(param_1[5] + 4));
  *puVar4 = puVar6;
  return puVar6;
}

