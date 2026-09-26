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
extern int fn_8267B648();
extern int fn_8267BC00();
extern int fn_826912E0();
extern int fn_826913D8();
extern int fn_82692630();
extern int fn_82F68CC0();


int fn_8267C0B8(longlong param_1,char *param_2,undefined4 param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar9;
  undefined8 uVar8;
  int iVar10;
  char *pcVar11;
  ulonglong uVar12;
  
  RtlEnterCriticalSection(param_1 + 0x2c4);
  RtlLeaveCriticalSection(param_1 + 0x2c4);
  pcVar11 = param_2;
  do {
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar6 = (uint)(pcVar11 + (0x2a7 - (int)param_2)) & 0xfffffff0;
  lVar7 = fn_826912E0(param_1 + 0x118,uVar6);
  if (lVar7 != 0) {
    uVar12 = 0;
    if ((*param_4 & 2) != 0) {
      uVar12 = 0x10;
    }
    if ((*param_4 & 4) == 0) {
      uVar12 = uVar12 | 0x20;
    }
    iVar9 = fn_8267BC00(lVar7);
    if (lVar7 + 0x70 == 0) {
      iVar10 = 0;
    }
    else {
      uVar2 = param_4[4];
      uVar3 = param_4[3];
      uVar4 = param_4[2];
      uVar5 = param_4[1];
      uVar8 = fn_8267B648(param_1,param_4[7]);
      iVar10 = fn_82692630(lVar7 + 0x70,uVar8,iVar9,uVar12,uVar5,uVar4,uVar3,uVar2);
    }
    if (*(char *)(iVar10 + 0x1f6) != '\0') {
      *(uint *)(iVar9 + 8) = uVar6;
      *(undefined4 *)(iVar9 + 0xc) = 1;
      *(undefined4 *)(iVar9 + 0x14) = 0;
      fn_82F68CC0(iVar9 + 0x18,param_4,0x20);
      *(undefined4 *)(iVar9 + 0x38) = param_3;
      *(int *)(iVar9 + 0x3c) = (int)(lVar7 + 0x298);
      *(byte *)(iVar9 + 100) = ~(byte)*param_4 & 1;
      uVar6 = *param_4;
      *(int *)(iVar9 + 0x68) = iVar10;
      *(byte *)(iVar9 + 0x65) = (byte)((~(ulonglong)uVar6 & 0xffffffff) >> 4) & 1;
      pcVar11 = param_2;
      do {
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      fn_82F68CC0(lVar7 + 0x298,param_2,(int)pcVar11 - (int)param_2);
      return iVar9;
    }
    fn_826913D8(param_1 + 0x118,lVar7,uVar6);
  }
  return 0;
}

