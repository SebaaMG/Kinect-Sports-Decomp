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
extern unsigned int *auStack_50;
extern int fn_828F0170();
extern unsigned int uStack_4c;


int fn_829037B8(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_50 [4];
  uint uStack_4c;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar9 = 0;
  uVar10 = 0xffffffff;
  if ((iVar3 == 0) || (*(int *)(iVar3 + 4) != 4)) {
    iVar9 = 0;
  }
  else {
    for (iVar3 = *(int *)(iVar3 + 0x28); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      iVar4 = *(int *)(iVar3 + 8);
      if (((iVar4 != 0) && (*(int *)(iVar4 + 4) == 6)) && (*(int *)(iVar4 + 0x10) == 2)) {
        pcVar7 = *(char **)(*(int *)(iVar4 + 0x14) + 0x18);
        pcVar6 = param_2;
        do {
          cVar1 = *pcVar7;
          cVar2 = *pcVar6;
          if (cVar1 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        if (((cVar1 == cVar2) && (iVar4 = *(int *)(iVar4 + 0x18), *(int *)(iVar4 + 0x4c) != 0)) &&
           ((*(uint *)(iVar4 + 0x20) & 2) == 0)) {
          uVar8 = 0;
          if ((*(int *)(iVar4 + 0x24) != 0) &&
             (iVar5 = fn_828F0170(*(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x18),0,auStack_50)
             , uVar8 = uStack_4c, iVar5 < 0)) {
            uVar8 = 0xffffffff;
          }
          if ((((uVar8 & 0xffff0000) == 0) ||
              ((uVar8 & 0xffff0000) == (*(uint *)(param_1 + 0x10) & 0xffff0000))) &&
             ((((uVar8 & 0xffff) == 0 || ((uVar8 & 0xffff) == (uint)*(ushort *)(param_1 + 0x12))) &&
              ((uVar10 == 0xffffffff || (uVar10 < uVar8)))))) {
            uVar10 = uVar8;
            iVar9 = iVar4;
          }
        }
      }
    }
  }
  return iVar9;
}

