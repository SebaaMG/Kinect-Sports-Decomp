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
extern unsigned int *auStack_38;
extern int fn_82683F88();
extern int fn_8268ACE8();
extern int fn_826CD8A8();
extern int fn_826D2840();


void fn_826D5FD0(int param_1,uint *param_2,ulonglong param_3)

{
  char cVar1;
  char cVar3;
  int iVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  int iVar8;
  uint *puStack_40;
  undefined4 *puStack_3c;
  undefined4 auStack_38 [14];
  
  iVar8 = param_1 + 0x14;
  puStack_40 = (uint *)0x0;
  cVar3 = fn_826CD8A8(iVar8,param_2,&puStack_40);
  if ((cVar3 == '\x01') && ((param_3 & 0xffffffff) != 0)) {
    fn_82683F88(param_3 + 0xc,0xffffffff8200c458,*(undefined4 *)(param_1 + 0x1c),
                      ((ulonglong)*param_2 & 0xfffffffc) + 8,puStack_40);
  }
  iVar2 = fn_8268ACE8(param_2);
  if (iVar2 != 0) {
    pcVar6 = (char *)((*param_2 & 0xfffffffc) + 8);
    if (*pcVar6 == '_') {
      pcVar4 = "_up";
      pcVar5 = pcVar6;
      do {
        cVar3 = *pcVar5;
        cVar1 = *pcVar4;
        if (cVar3 == '\0') break;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar3 == cVar1);
      if (cVar3 == cVar1) {
        bVar7 = *(byte *)(param_1 + 0x34) | 1;
      }
      else {
        pcVar4 = "_down";
        pcVar5 = pcVar6;
        do {
          cVar3 = *pcVar5;
          cVar1 = *pcVar4;
          if (cVar3 == '\0') break;
          pcVar5 = pcVar5 + 1;
          pcVar4 = pcVar4 + 1;
        } while (cVar3 == cVar1);
        if (cVar3 == cVar1) {
          bVar7 = *(byte *)(param_1 + 0x34) | 2;
        }
        else {
          pcVar5 = "_over";
          do {
            cVar3 = *pcVar6;
            cVar1 = *pcVar5;
            if (cVar3 == '\0') break;
            pcVar6 = pcVar6 + 1;
            pcVar5 = pcVar5 + 1;
          } while (cVar3 == cVar1);
          if (cVar3 != cVar1) goto LAB_826d6128;
          bVar7 = *(byte *)(param_1 + 0x34) | 4;
        }
      }
      *(byte *)(param_1 + 0x34) = bVar7;
    }
  }
LAB_826d6128:
  auStack_38[0] = *(undefined4 *)(param_1 + 0x1c);
  puStack_3c = auStack_38;
  puStack_40 = param_2;
  fn_826D2840(iVar8,iVar8,&puStack_40);
  return;
}

