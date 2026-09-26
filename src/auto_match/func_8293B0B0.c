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
extern int fn_82937A60();


ulonglong fn_8293B0B0(undefined8 param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  bool bVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (param_2 == 0) {
LAB_8293b0d0:
    uVar6 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x70);
    uVar6 = 0;
    bVar8 = false;
    while (iVar3 != 0) {
      piVar5 = (int *)(iVar3 + 8);
      iVar3 = *(int *)(iVar3 + 0xc);
      pcVar4 = *(char **)(*(int *)(*piVar5 + 8) + 0x18);
      pcVar10 = pcVar4;
      pcVar9 = param_3;
      do {
        cVar1 = *pcVar10;
        cVar2 = *pcVar9;
        if (cVar1 == '\0') break;
        pcVar10 = pcVar10 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        if ((uVar6 & 0xffffffff) != 0) {
          uVar7 = 0xffffffff82031908;
LAB_8293b198:
          fn_82937A60(param_1,uVar7,param_3);
          goto LAB_8293b0d0;
        }
        uVar6 = (ulonglong)*(uint *)(*piVar5 + 0xc);
        if (uVar6 == 0) {
          uVar7 = 0xffffffff820319e8;
          goto LAB_8293b198;
        }
        uVar6 = uVar6 + 0x10;
      }
      else if (param_4 != 0) {
        fn_82937A60(param_1,0xffffffff82032814,pcVar4,param_3);
        bVar8 = true;
      }
    }
    uVar6 = -(ulonglong)!bVar8 & uVar6;
  }
  return uVar6;
}

