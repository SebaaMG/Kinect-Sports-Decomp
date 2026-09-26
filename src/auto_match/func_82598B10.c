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
extern int fn_825A2410();
extern int fn_82F63CA0();
extern unsigned int lbl_821C7ADC;


void fn_82598B10(int param_1,undefined4 param_2)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  
  puVar3 = *(ushort **)(param_1 + 0x8cc);
  puVar9 = (undefined4 *)(param_1 + 0x8cc);
  iVar10 = 0;
  for (uVar7 = *(uint *)(puVar3 + 2);
      (uVar7 < *(uint *)(puVar3 + 4) && (*(int *)(uVar7 + 0x2c) < 1)); uVar7 = uVar7 + 0x34) {
    iVar10 = iVar10 + 1;
  }
  uVar7 = (uint)LZCOUNT((*(int *)(puVar3 + 4) - *(int *)(puVar3 + 2)) / (int)(uint)*puVar3 - iVar10)
          >> 5;
  if ((*(int *)(param_1 + 0x8d0) != 0) && (uVar7 != 0)) {
    *(undefined4 *)((*(int *)(puVar3 + 4) - (uint)*puVar3) + 0x24) = 0;
  }
  puVar3 = (ushort *)*puVar9;
  iVar4 = *(int *)(puVar3 + 4);
  iVar5 = *(int *)(puVar3 + 2);
  uVar2 = *puVar3;
  puVar6 = (undefined4 *)fn_825A2410(puVar9);
  if (iVar10 != (iVar4 - iVar5) / (int)(uint)uVar2) {
    puVar3 = (ushort *)*puVar9;
    uVar2 = *puVar3;
    puVar6 = (undefined4 *)((uint)uVar2 * iVar10 + *(int *)(puVar3 + 2));
    fn_82F63CA0((uint)uVar2 + (int)puVar6,puVar6,
                 (*(int *)(puVar3 + 4) - (iVar10 + 1) * (uint)uVar2) - *(int *)(puVar3 + 2));
  }
  *puVar6 = param_2;
  pcVar8 = (char *)(puVar6 + 1);
  do {
    if (puVar6 + 9 <= pcVar8) break;
    cVar1 = (&lbl_821C7ADC)[(int)pcVar8 - (int)(puVar6 + 1)];
    *pcVar8 = cVar1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (pcVar8 == (char *)(puVar6 + 9)) {
    pcVar8[-1] = '\0';
  }
  puVar6[9] = uVar7;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  *(int *)(param_1 + 0x8d0) = *(int *)(param_1 + 0x8d0) + 1;
  return;
}

