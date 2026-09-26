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
extern int fn_82FF6060();
extern int fn_8301A5D0();


undefined1 fn_82FB4E60(int param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined4 *puVar7;
  char cVar9;
  int iVar8;
  undefined1 uVar10;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x54);
      (puVar1 != (undefined4 *)0x0 && (puVar1[1] != *(int *)(*(int *)(param_1 + 0x74) + 4)));
      puVar1 = (undefined4 *)*puVar1) {
  }
  puVar1 = (undefined4 *)*puVar1;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      uVar10 = 0;
      if ((int *)param_4[1] != (int *)*param_4) {
        puVar3 = *(undefined4 **)(param_1 + 0x54);
        puVar1 = (undefined4 *)0x0;
        while ((puVar7 = puVar3, puVar7 != (undefined4 *)0x0 && (puVar7[1] != *(int *)*param_4))) {
          puVar1 = puVar7;
          puVar3 = (undefined4 *)*puVar7;
        }
        uVar10 = *(undefined1 *)(puVar7[1] + 0x50);
        do {
          puVar3 = (undefined4 *)*puVar7;
          fn_82FF6060((undefined4 *)(param_1 + 0x54),puVar7,puVar1);
          puVar7 = puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0x58) + 4);
      if (iVar4 != *(int *)(*(int *)(param_1 + 0x74) + 4)) {
        iVar8 = (**(code **)(**(int **)(iVar4 + 0x1c) + 0x18))();
        *param_2 = iVar8;
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(iVar8 + 4);
        }
        param_2[1] = iVar8;
        *param_3 = *(undefined4 *)(iVar4 + 0x48);
      }
      return uVar10;
    }
    if ((*(byte *)(*(int *)(puVar1[1] + 0x1c) + 0x34) & 0x80) == 0) {
      cVar9 = (**(code **)(**(int **)(puVar1[1] + 0x40) + 0x28))();
      bVar6 = true;
      if (cVar9 == '\0') goto LAB_82fb4ef4;
    }
    else {
LAB_82fb4ef4:
      bVar6 = false;
    }
    if (bVar6) {
      uVar2 = puVar1[1];
      uVar5 = param_4[1] - *param_4 >> 2;
      if ((((uint)param_4[2] <= uVar5) && (cVar9 = fn_8301A5D0(param_4,8), cVar9 == '\0')) ||
         ((uint)param_4[2] <= uVar5)) goto LAB_82fb4f64;
      puVar3 = (undefined4 *)param_4[1];
      param_4[1] = (int)(puVar3 + 1);
      if (puVar3 == (undefined4 *)0x0) goto LAB_82fb4f64;
      *puVar3 = uVar2;
    }
    else {
LAB_82fb4f64:
      param_4[1] = *param_4;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

