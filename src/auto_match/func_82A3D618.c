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


void fn_82A3D618(int param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  
  sVar5 = (short)param_2;
  sVar4 = sVar5 << 1;
  sVar2 = *(short *)((sVar5 + 0x4ce) * 2 + param_1);
  if (sVar4 <= *(short *)(param_1 + 0x251c)) {
    bVar1 = sVar4 < *(short *)(param_1 + 0x251c);
    do {
      iVar6 = (int)sVar4;
      if ((bVar1) &&
         (*(ushort *)(*(short *)((iVar6 + 0x4cf) * 2 + param_1) * 2 + *(int *)(param_1 + 0x990)) <
          *(ushort *)(*(short *)((iVar6 + 0x4ce) * 2 + param_1) * 2 + *(int *)(param_1 + 0x990)))) {
        iVar6 = (int)(short)(sVar4 + 1);
      }
      sVar7 = (short)iVar6;
      sVar3 = *(short *)((sVar7 + 0x4ce) * 2 + param_1);
      sVar5 = (short)param_2;
      if (*(ushort *)(sVar2 * 2 + *(int *)(param_1 + 0x990)) <=
          *(ushort *)(sVar3 * 2 + *(int *)(param_1 + 0x990))) break;
      sVar4 = sVar7 << 1;
      *(short *)(((short)param_2 + 0x4ce) * 2 + param_1) = sVar3;
      bVar1 = sVar4 < *(short *)(param_1 + 0x251c);
      sVar5 = sVar7;
      param_2 = iVar6;
    } while (sVar4 <= *(short *)(param_1 + 0x251c));
  }
  *(short *)((sVar5 + 0x4ce) * 2 + param_1) = sVar2;
  return;
}

