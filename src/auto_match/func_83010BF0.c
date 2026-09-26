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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82FA5190();
extern int fn_8300F848();
extern int fn_83010770();
extern int fn_83019E38();
extern unsigned int lbl_831BC768;
extern unsigned int uStack_80;


void fn_83010BF0(int param_1,ulonglong param_2,int param_3,char param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char cVar8;
  int iVar7;
  undefined8 uStack_80;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x70); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar7 = puVar1[2];
    iVar2 = *(int *)(iVar7 + 8);
    if (((((param_2 & 0xffffffff) == 0) ||
         (cVar8 = fn_83010770(param_1,param_2,*(undefined4 *)(iVar2 + 0x10)), cVar8 != '\0'))
        && ((uVar5 = *(uint *)(iVar2 + 0x14) >> 8, (uVar5 & 0xff000) != 0x3000 || (param_4 != '\0'))
           )) && (((param_3 == 0 || (param_3 == *(int *)(iVar7 + 0x34))) && (uVar5 != 0x50100)))) {
      *(int *)(iVar7 + 0x30) = *(int *)(iVar7 + 0x30) + 1;
    }
  }
  puVar3 = *(undefined4 **)(param_1 + 0x50);
  puVar1 = (undefined4 *)0x0;
  while (puVar6 = puVar3, puVar6 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar6[2];
    iVar7 = puVar3[2];
    if (((((param_2 & 0xffffffff) == 0) ||
         (cVar8 = fn_83010770(param_1,param_2,*(undefined4 *)(iVar7 + 0x10)), cVar8 != '\0'))
        && ((uVar5 = *(uint *)(iVar7 + 0x14) >> 8, (uVar5 & 0xff000) != 0x3000 || (param_4 != '\0'))
           )) && (((param_3 == 0 || (param_3 == puVar3[0xd])) && (uVar5 != 0x50100)))) {
      uVar4 = *(undefined4 *)(iVar7 + 0x10);
      uStack_80 = CONCAT44(puVar3,(((U64)(uStack_80) >> 32) & 0xFFFFFFFF));
      puVar3[5] = *(undefined4 *)(param_1 + 0x90);
      puVar3[0xc] = 0;
      iVar7 = fn_83019E38(param_1 + 0x70,uVar4,&uStack_80);
      if (iVar7 != 1) {
        fn_8300F848(param_1,puVar3,0);
        (**(code **)(*(int *)puVar3[2] + 8))();
        uVar4 = lbl_831BC768;
        (**(code **)*puVar3)(puVar3,0);
        fn_82FA5190(uVar4,puVar3);
      }
      puStack_78 = (undefined4 *)*puVar6;
      if (puVar6 == *(undefined4 **)(param_1 + 0x50)) {
        *(undefined4 **)(param_1 + 0x50) = puStack_78;
      }
      else {
        *puVar1 = puStack_78;
      }
      if (puVar6 == *(undefined4 **)(param_1 + 0x54)) {
        *(undefined4 **)(param_1 + 0x54) = puVar1;
      }
      uStack_80 = CONCAT44(puStack_78,puVar1);
      *puVar6 = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 **)(param_1 + 0x58) = puVar6;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
      puVar3 = puStack_78;
      puStack_74 = puVar1;
    }
    else {
      puVar3 = (undefined4 *)*puVar6;
      puVar1 = puVar6;
    }
  }
  return;
}

