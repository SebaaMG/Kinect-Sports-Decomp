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


void fn_82DBAE30(int param_1,int param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uStack_30;
  
  do {
    uStack_30 = (uint)((ulonglong)*(undefined8 *)((param_2 + param_3 >> 1) * 8 + param_1) >> 0x20);
    iVar2 = param_3;
    iVar7 = param_2;
    do {
      puVar5 = (uint *)(iVar7 * 8 + param_1);
      uVar1 = *puVar5;
      while (uVar1 < uStack_30) {
        puVar5 = puVar5 + 2;
        iVar7 = iVar7 + 1;
        uVar1 = *puVar5;
      }
      puVar5 = (uint *)(iVar2 * 8 + param_1);
      uVar1 = *puVar5;
      while (uStack_30 < uVar1) {
        puVar5 = puVar5 + -2;
        iVar2 = iVar2 + -1;
        uVar1 = *puVar5;
      }
      if (iVar2 < iVar7) break;
      if (iVar2 != iVar7) {
        puVar6 = (undefined8 *)(iVar7 * 8 + param_1);
        puVar4 = (undefined8 *)(iVar2 * 8 + param_1);
        uVar3 = *puVar4;
        *(undefined4 *)puVar4 = *(undefined4 *)puVar6;
        *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)((int)puVar6 + 4);
        *puVar6 = uVar3;
      }
      iVar2 = iVar2 + -1;
      iVar7 = iVar7 + 1;
    } while (iVar7 <= iVar2);
    if (param_2 < iVar2) {
      fn_82DBAE30(param_1,param_2,iVar2,param_4);
    }
    param_2 = iVar7;
    if (param_3 <= iVar7) {
      return;
    }
  } while( true );
}

