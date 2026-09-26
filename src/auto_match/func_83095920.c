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
extern unsigned int uStack_2e;
extern unsigned int uStack_30;


void fn_83095920(int param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  ushort uStack_30;
  ushort uStack_2e;
  
  do {
    uVar1 = *(undefined4 *)((param_2 + param_3 >> 1) * 4 + param_1);
    uStack_30 = (ushort)((uint)uVar1 >> 0x10);
    uStack_2e = (ushort)uVar1;
    iVar3 = param_3;
    iVar7 = param_2;
    do {
      puVar4 = (ushort *)(iVar7 * 4 + param_1);
      while( true ) {
        if ((*puVar4 < uStack_30) || ((*puVar4 == uStack_30 && (puVar4[1] < uStack_2e)))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) break;
        iVar7 = iVar7 + 1;
        puVar4 = puVar4 + 2;
      }
      puVar4 = (ushort *)(iVar3 * 4 + param_1);
      while( true ) {
        if ((uStack_30 < *puVar4) || ((uStack_30 == *puVar4 && (uStack_2e < puVar4[1])))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) break;
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + -2;
      }
      if (iVar3 < iVar7) break;
      if (iVar3 != iVar7) {
        puVar6 = (undefined4 *)(iVar7 * 4 + param_1);
        puVar5 = (undefined4 *)(iVar3 * 4 + param_1);
        uVar1 = *puVar5;
        *(undefined2 *)puVar5 = *(undefined2 *)puVar6;
        *(undefined2 *)((int)puVar5 + 2) = *(undefined2 *)((int)puVar6 + 2);
        *puVar6 = uVar1;
      }
      iVar3 = iVar3 + -1;
      iVar7 = iVar7 + 1;
    } while (iVar7 <= iVar3);
    if (param_2 < iVar3) {
      fn_83095920(param_1,param_2,iVar3,param_4);
    }
    param_2 = iVar7;
    if (param_3 <= iVar7) {
      return;
    }
  } while( true );
}

