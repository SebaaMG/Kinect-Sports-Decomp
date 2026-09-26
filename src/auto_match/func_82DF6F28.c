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
extern unsigned int *auStack_48;
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CFC050();
extern int fn_82DF6CD0();
extern unsigned int iStack_4c;
extern unsigned int uStack_50;


undefined8 fn_82DF6F28(char *param_1,int param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uStack_50;
  int iStack_4c;
  undefined1 auStack_48 [72];
  
  iVar3 = (**(code **)(**(int **)(param_2 + 8) + 0x34))();
  if ((iVar3 == 0) && (*(short *)(*(int *)(*(int *)(param_2 + 8) + 0x3c) + 4) != 0)) {
    uStack_50 = 0;
    iStack_4c = -1;
    iVar3 = fn_82DF6CD0(param_2,1,param_3,&iStack_4c,&uStack_50,auStack_48,param_4 + 0xf4);
    if (iVar3 == 0) {
      *(char *)(param_4 + 0x19) = (char)uStack_50;
      if (iStack_4c != 0) {
        fn_82CFC050(param_4 + 0x74,param_2);
      }
      iVar3 = *(int *)(param_2 + 8);
      iVar8 = *(int *)(iVar3 + 0x24);
      iVar4 = fn_82CE5410();
      if ((int)(*(uint *)(param_4 + 0x70) & 0x3fffffff) < iVar8) {
        iVar7 = (*(uint *)(param_4 + 0x70) & 0x3fffffff) << 1;
        if (iVar7 <= iVar8) {
          iVar7 = iVar8;
        }
        fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),(int *)(param_4 + 0x68),iVar7,1);
      }
      *(int *)(param_4 + 0x6c) = iVar8;
      iVar8 = 0;
      if (0 < *(int *)(param_4 + 0x6c)) {
        do {
          *(undefined1 *)(*(int *)(param_4 + 0x68) + iVar8) =
               *(undefined1 *)(*(int *)(iVar3 + 0x20) + iVar8);
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(param_4 + 0x6c));
      }
      iVar8 = *(int *)(iVar3 + 0x3c);
      uVar11 = (uint)*(byte *)(iVar8 + 10) * (uint)*(ushort *)(iVar8 + 4);
      iVar4 = fn_82CE5410();
      if ((*(uint *)(param_4 + 0x58) & 0x3fffffff) < uVar11) {
        uVar9 = (*(uint *)(param_4 + 0x58) & 0x3fffffff) << 1;
        if (uVar9 <= uVar11) {
          uVar9 = uVar11;
        }
        fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),(undefined4 *)(param_4 + 0x50),uVar9,1);
      }
      *(uint *)(param_4 + 0x54) = uVar11;
      fn_82CFC050(*(undefined4 *)(param_4 + 0x50),
                   (uint)*(ushort *)(iVar8 + 6) * 0x20 + iVar8 + 0x30,
                   (longlong)(int)(uint)*(byte *)(iVar8 + 10) *
                   (longlong)(int)(uint)*(ushort *)(iVar8 + 4));
      uVar2 = *(ushort *)(iVar8 + 4);
      iVar4 = fn_82CE5410();
      if ((*(uint *)(param_4 + 100) & 0x3fffffff) < (uint)uVar2) {
        uVar11 = (*(uint *)(param_4 + 100) & 0x3fffffff) << 1;
        if (uVar11 <= uVar2) {
          uVar11 = (uint)uVar2;
        }
        fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),(undefined4 *)(param_4 + 0x5c),uVar11,0x20);
      }
      *(uint *)(param_4 + 0x60) = (uint)uVar2;
      fn_82CFC050(*(undefined4 *)(param_4 + 0x5c),iVar8 + 0x30,
                   (ulonglong)*(ushort *)(iVar8 + 4) << 5);
      puVar6 = (undefined8 *)(param_4 + 0x18);
      lVar12 = 6;
      puVar10 = (undefined8 *)(*(int *)(iVar3 + 0x3c) + -8);
      do {
        puVar10 = puVar10 + 1;
        puVar6 = puVar6 + 1;
        *puVar6 = *puVar10;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      iVar3 = *(int *)(param_2 + 0x10);
      if (*(char *)(iVar3 + 0x18) == '\x01') {
        iVar3 = *(char *)(iVar3 + 0x10) + iVar3;
      }
      else {
        iVar3 = 0;
      }
      iVar8 = *(int *)(param_2 + 0x14);
      if (*(char *)(iVar8 + 0x18) == '\x01') {
        iVar8 = *(char *)(iVar8 + 0x10) + iVar8;
      }
      else {
        iVar8 = 0;
      }
      cVar1 = *param_1;
      *(char *)(param_4 + 0x18) = cVar1;
      if (cVar1 != '\0') {
        uVar5 = (**(code **)(param_1 + 4))();
        *(undefined4 *)(param_4 + 0x10) = uVar5;
        uVar5 = (**(code **)(param_1 + 4))(iVar8);
        *(undefined4 *)(param_4 + 0x14) = uVar5;
        return 0;
      }
      *(int *)(param_4 + 8) = iVar3;
      *(int *)(param_4 + 0xc) = iVar8;
      fn_82CE4040();
      fn_82CE4040(*(undefined4 *)(param_4 + 0xc));
      return 0;
    }
  }
  return 1;
}

