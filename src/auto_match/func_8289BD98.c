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
extern int fn_82897BD0();
extern int fn_82898430();
extern int fn_828999E8();
extern int fn_8289BBE8();


longlong fn_8289BD98(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar6;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_40 [4];
  undefined4 *puStack_3c;
  undefined4 *apuStack_38 [14];
  
  if ((((*(int **)(param_1 + 0x20) != (int *)0x0) &&
       (iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(), iVar3 != 0)) ||
      ((*(int **)(param_1 + 0x20) != (int *)0x0 &&
       (iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(), iVar3 != 0)))) &&
     ((cVar6 = fn_82898430(param_1,param_2), cVar6 != '\0' && (*(char *)(param_2 + 0x26) == '\0'))
     )) {
    uVar4 = fn_82897BD0(param_2);
    puVar7 = (undefined4 *)(*(undefined4 **)(param_1 + 0x48))[1];
    cVar6 = *(char *)((int)puVar7 + 0x1d);
    apuStack_38[0] = *(undefined4 **)(param_1 + 0x48);
    while (cVar6 == '\0') {
      if ((uint)puVar7[3] < uVar4) {
        puVar5 = (undefined4 *)puVar7[2];
        puVar7 = apuStack_38[0];
      }
      else {
        puVar5 = (undefined4 *)*puVar7;
      }
      apuStack_38[0] = puVar7;
      puVar7 = puVar5;
      cVar6 = *(char *)((int)puVar5 + 0x1d);
    }
    uVar4 = fn_82897BD0(param_2);
    puStack_3c = *(undefined4 **)(param_1 + 0x48);
    cVar6 = *(char *)((int)puStack_3c[1] + 0x1d);
    puVar7 = (undefined4 *)puStack_3c[1];
    while (cVar6 == '\0') {
      if (uVar4 < (uint)puVar7[3]) {
        puVar5 = (undefined4 *)*puVar7;
        puStack_3c = puVar7;
      }
      else {
        puVar5 = (undefined4 *)puVar7[2];
      }
      puVar7 = puVar5;
      cVar6 = *(char *)((int)puVar5 + 0x1d);
    }
    fn_8289BBE8(param_1 + 0x44,apuStack_38,&puStack_3c,auStack_40);
    uVar4 = fn_82897BD0(param_2);
    puVar7 = (undefined4 *)(*(undefined4 **)(param_1 + 0x48))[1];
    cVar6 = *(char *)((int)puVar7 + 0x1d);
    puVar5 = *(undefined4 **)(param_1 + 0x48);
    while (cVar6 == '\0') {
      if ((uint)puVar7[3] < uVar4) {
        puVar1 = (undefined4 *)puVar7[2];
        puVar7 = puVar5;
      }
      else {
        puVar1 = (undefined4 *)*puVar7;
      }
      puVar5 = puVar7;
      puVar7 = puVar1;
      cVar6 = *(char *)((int)puVar1 + 0x1d);
    }
    uVar4 = fn_82897BD0(param_2);
    puVar7 = *(undefined4 **)(param_1 + 0x48);
    cVar6 = *(char *)((int)puVar7[1] + 0x1d);
    puVar1 = (undefined4 *)puVar7[1];
    while (cVar6 == '\0') {
      if (uVar4 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar7 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
      cVar6 = *(char *)((int)puVar2 + 0x1d);
    }
    puVar5 = (undefined4 *)fn_828999E8(apuStack_38,puVar5,puVar7,param_1);
    if (((undefined4 *)*puVar5 != puVar7) &&
       (uVar8 = (ulonglong)(uint)((undefined4 *)*puVar5)[6], uVar8 != 0)) {
      return uVar8 - 0x50;
    }
  }
  return 0;
}

