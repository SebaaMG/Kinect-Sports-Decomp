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
extern int fn_82C4E3B0();


void fn_830D8DB8(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  int iVar8;
  
  do {
    pbVar7 = *(byte **)((int)param_1 + 0xc);
    if (pbVar7 < (byte *)(*(int *)(param_1 + 2) - 4U)) {
      bVar1 = *pbVar7;
      bVar2 = pbVar7[1];
      bVar3 = pbVar7[2];
      bVar4 = pbVar7[3];
      bVar5 = pbVar7[4];
      bVar6 = pbVar7[5];
      iVar8 = *(int *)(param_1 + 1);
      *(byte **)((int)param_1 + 0xc) = pbVar7 + 6;
      *(int *)(param_1 + 1) = iVar8 + 0x30;
      *param_1 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3) *
                    0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 + (ulonglong)bVar6
                 << ((longlong)-iVar8 & 0x7fU)) + *param_1;
      return;
    }
    iVar8 = fn_82C4E3B0(param_1);
  } while (iVar8 == 1);
  return;
}

