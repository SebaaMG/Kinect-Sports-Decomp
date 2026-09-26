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
extern unsigned int uStack_30;


void fn_83095D20(int param_1,int param_2,int param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  int iVar7;
  ushort uStack_30;
  
  do {
    uStack_30 = (ushort)((uint)*(undefined4 *)((param_2 + param_3 >> 1) * 4 + param_1) >> 0x10);
    iVar3 = param_3;
    iVar7 = param_2;
    do {
      puVar5 = (ushort *)(iVar7 * 4 + param_1);
      uVar1 = *puVar5;
      while (uVar1 < uStack_30) {
        puVar5 = puVar5 + 2;
        iVar7 = iVar7 + 1;
        uVar1 = *puVar5;
      }
      puVar5 = (ushort *)(iVar3 * 4 + param_1);
      uVar1 = *puVar5;
      while (uStack_30 < uVar1) {
        puVar5 = puVar5 + -2;
        iVar3 = iVar3 + -1;
        uVar1 = *puVar5;
      }
      if (iVar3 < iVar7) break;
      if (iVar3 != iVar7) {
        puVar6 = (undefined4 *)(iVar7 * 4 + param_1);
        puVar4 = (undefined4 *)(iVar3 * 4 + param_1);
        uVar2 = *puVar4;
        *(undefined2 *)puVar4 = *(undefined2 *)puVar6;
        *(undefined2 *)((int)puVar4 + 2) = *(undefined2 *)((int)puVar6 + 2);
        *puVar6 = uVar2;
      }
      iVar3 = iVar3 + -1;
      iVar7 = iVar7 + 1;
    } while (iVar7 <= iVar3);
    if (param_2 < iVar3) {
      fn_83095D20(param_1,param_2,iVar3,param_4);
    }
    param_2 = iVar7;
    if (param_3 <= iVar7) {
      return;
    }
  } while( true );
}

