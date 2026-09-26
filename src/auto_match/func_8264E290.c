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
#define ZEXT48(x) ((U64)((U32)(x)))


void fn_8264E290(int param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  
  iVar2 = *(int *)(param_1 + 4);
  do {
    puVar3 = (uint *)*param_2;
    puVar9 = param_2 + 1;
    if (puVar9 < puVar3) {
      iVar5 = iVar2 + -1;
      param_2 = param_2 + 3;
      do {
        uVar6 = 0;
        puVar4 = (uint *)*puVar9;
        puVar8 = (uint *)(iVar5 * 0x10 + param_1 + 0xc);
        iVar7 = iVar5;
        do {
          uVar6 = uVar6 << 2;
          if ((((puVar8[-1] < (*(ushort *)((int)param_2 + -2) + 1) * 8) &&
               ((uint)*(ushort *)(param_2 + -1) << 3 < puVar8[1])) &&
              (*puVar8 < ((ushort)*param_2 + 1) * 8)) && ((uint)*(ushort *)param_2 << 3 < puVar8[2])
             ) {
            uVar6 = uVar6 | 3;
          }
          bVar1 = iVar7 != 0;
          iVar7 = iVar7 + -1;
          puVar8 = puVar8 + -4;
        } while (bVar1);
        *puVar4 = uVar6;
        dataCacheBlockFlush(((ulonglong)((uint)puVar4 >> 0x14) + 0x200 & 0x1000) +
                            (ZEXT48(puVar4) & 0x1fffffff) + -0x40000000);
        puVar9 = puVar9 + 4;
        param_2 = param_2 + 4;
      } while (puVar9 < puVar3);
    }
    param_2 = (uint *)*puVar9;
  } while (param_2 != (uint *)0xc0000000);
  return;
}

