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
extern int fn_82BC6DC0();
extern int fn_82BC7368();


void fn_82BC4F30(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x5b0);
  puVar3 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar6 = puVar3 + 1;
  *puVar3 = uVar1;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar6,*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x5b0));
  }
  iVar2 = *(int *)(param_1 + 0xc);
  while (*(int *)(*(int *)(iVar2 + param_2 * 4) * 4 + iVar2) != 0) {
    piVar4 = (int *)fn_82BC0088(puVar6,puVar6[1]);
    *piVar4 = param_2;
    iVar2 = *(int *)(param_1 + 0xc);
    param_2 = *(int *)(iVar2 + param_2 * 4);
  }
  while (puVar6[1] != 0) {
    iVar5 = fn_82BC7368(puVar6);
    iVar5 = iVar5 * 4;
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + iVar5) * 4;
    if (*(uint *)(*(int *)(*(int *)(param_1 + 0x10) + iVar2) * 4 + *(int *)(param_1 + 4)) <
        *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + iVar5) * 4 + *(int *)(param_1 + 4))) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar5) =
           *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar2);
    }
    *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar5) =
         *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2);
  }
  fn_82BC6DC0(puVar6,1);
  return;
}

