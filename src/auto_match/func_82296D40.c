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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_8265CA60();
extern int fn_82F85C08();
extern unsigned int uStack_4c;


undefined2 * fn_82296D40(char *param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 auStack_48 [18];
  
  uStack_4c = 0;
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar7 = (int)pcVar6 - (int)param_1;
  lVar8 = 0;
  iVar5 = iVar7;
  pcVar6 = param_1;
  while ((iVar5 != 0 &&
         (iVar3 = fn_82F85C08(auStack_50,pcVar6,iVar5,&uStack_4c,param_2), 0 < iVar3))) {
    iVar5 = iVar5 - iVar3;
    pcVar6 = pcVar6 + iVar3;
    lVar8 = lVar8 + 1;
  }
  uVar9 = lVar8 + 1;
  lVar8 = (uVar9 & 0x7fffffff) << 1;
  if (0x7fffffff < (uVar9 & 0xffffffff)) {
    lVar8 = -1;
  }
  puVar4 = (undefined2 *)fn_8265CA60(lVar8);
  auStack_48[0] = 0;
  uVar2 = uVar9 & 0xffffffff;
  puVar10 = puVar4;
  while ((uVar2 != 0 && (iVar5 = fn_82F85C08(puVar10,param_1,iVar7,auStack_48,param_2), 0 < iVar5))
        ) {
    uVar9 = uVar9 - 1;
    param_1 = param_1 + iVar5;
    puVar10 = puVar10 + 1;
    uVar2 = uVar9;
  }
  *puVar10 = 0;
  return puVar4;
}

