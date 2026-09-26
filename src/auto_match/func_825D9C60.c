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
extern int fn_8255DEA0();
extern int fn_8255E320();
extern int fn_82592430();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_825D9C60(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [64];
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xb80)) {
    puVar5 = (uint *)(param_1 + 0xb58);
    do {
      iVar1 = *(int *)(param_1 + 0x4c);
      fn_8255DEA0(param_1,puVar5[3],auStack_40);
      fn_8255E320(param_1,puVar5[3],&uStack_50);
      puVar5 = puVar5 + 2;
      puVar2 = (undefined4 *)((uint)(auStack_40 + (int)in_r0) & 0xfffffff0);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      iVar4 = iVar4 + 1;
      iVar1 = *(int *)(*(int *)(*(int *)((((int)*puVar5 >> 8 & 0xffU) + 0x1ff) * 4 + iVar1) + 4) +
                      (*puVar5 & 0xff) * 4);
      puVar3 = (undefined4 *)(iVar1 + 0x30U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      *(undefined4 *)(iVar1 + 0x94) = uStack_50;
      *(undefined4 *)(iVar1 + 0x98) = uStack_4c;
      *(undefined4 *)(iVar1 + 0x9c) = uStack_48;
    } while (iVar4 < *(int *)(param_1 + 0xb80));
  }
  fn_82592430(param_1,param_2);
  return;
}

