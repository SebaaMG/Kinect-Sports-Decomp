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
extern unsigned int fStack_3c;
extern unsigned int lbl_821AAD20;


void fn_82D12320(int param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  double dVar7;
  float fStack_3c;
  
  dVar7 = (double)lbl_821AAD20;
  do {
    fStack_3c = (float)*(undefined8 *)((param_2 + param_3 >> 1) * 8 + param_1);
    iVar1 = param_3;
    iVar6 = param_2;
    do {
      for (pfVar3 = (float *)(iVar6 * 8 + param_1 + 4); dVar7 < (double)(*pfVar3 - fStack_3c);
          pfVar3 = pfVar3 + 2) {
        iVar6 = iVar6 + 1;
      }
      for (pfVar3 = (float *)(iVar1 * 8 + param_1 + 4); dVar7 < (double)(fStack_3c - *pfVar3);
          pfVar3 = pfVar3 + -2) {
        iVar1 = iVar1 + -1;
      }
      if (iVar1 < iVar6) break;
      if (iVar1 != iVar6) {
        puVar5 = (undefined8 *)(iVar6 * 8 + param_1);
        puVar4 = (undefined8 *)(iVar1 * 8 + param_1);
        uVar2 = *puVar4;
        *(undefined4 *)puVar4 = *(undefined4 *)puVar5;
        *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)((int)puVar5 + 4);
        *puVar5 = uVar2;
      }
      iVar1 = iVar1 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar1);
    if (param_2 < iVar1) {
      fn_82D12320(param_1,param_2,iVar1,param_4);
    }
    param_2 = iVar6;
    if (param_3 <= iVar6) {
      return;
    }
  } while( true );
}

