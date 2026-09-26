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
extern int fn_82359698();
extern int fn_8236B118();
extern int fn_8236B578();
extern int fn_823E3920();
extern int fn_823E4440();


void fn_823DF4C8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar4 = fn_8236B578(iVar1);
  if (iVar4 != 0) {
    if (*(int *)(iVar1 + 0x1390) == 4) {
      *(undefined4 *)(iVar1 + 0xd80) = *(undefined4 *)(iVar1 + 0x1430);
      puVar2 = (undefined4 *)(iVar1 + 0x1440U & 0xfffffff0);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (undefined4 *)(iVar1 + 0xd30U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      fn_8236B118(iVar1,iVar1 + 0x1430);
      fn_823E4440(iVar1,iVar1 + 0x1430);
      uVar5 = 4;
    }
    else {
      if (*(int *)(iVar1 + 0x1390) != 8) {
        return;
      }
      *(undefined4 *)(iVar1 + 0xd80) = *(undefined4 *)(iVar1 + 0x13a0);
      puVar2 = (undefined4 *)(iVar1 + 0x13b0U & 0xfffffff0);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (undefined4 *)(iVar1 + 0xd30U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      fn_8236B118(iVar1,iVar1 + 0x13a0);
      fn_823E3920(iVar1,iVar1 + 0x13a0);
      uVar5 = 8;
    }
    fn_82359698(iVar1,uVar5);
  }
  return;
}

