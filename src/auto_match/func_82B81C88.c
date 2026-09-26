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
extern int fn_82ABE190();


longlong fn_82B81C88(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  uint uVar9;
  
  iVar1 = *(int *)(param_2 + 4);
  lVar7 = 0;
  do {
    if (iVar1 == 0) {
LAB_82b81cd0:
      if ((*(uint *)(param_2 + 8) & 0x3f80) == 0x3700) {
        lVar7 = 0;
      }
      else {
        uVar2 = *(uint *)(param_2 + 8) >> 0x13 & 7;
        piVar8 = (int *)(param_2 + 0x2c);
        for (uVar9 = 0; uVar9 < uVar2; uVar9 = uVar9 + 1) {
          iVar1 = *piVar8;
          cVar3 = fn_82ABE190(iVar1);
          if ((cVar3 != '\0') && ((*(uint *)(*(int *)(iVar1 + 0xc) + 8) & 0x3f80) != 0x3e00)) {
            piVar5 = (int *)(param_2 + 0x2c);
            for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
              iVar6 = *piVar5;
              if (iVar6 == iVar1) goto LAB_82b81d70;
              if (*(int *)(iVar6 + 0xc) == *(int *)(iVar1 + 0xc)) goto LAB_82b81d68;
              piVar5 = piVar5 + 1;
            }
            iVar6 = 0;
LAB_82b81d68:
            if (iVar6 == iVar1) {
LAB_82b81d70:
              lVar7 = lVar7 + 1;
            }
          }
          piVar8 = piVar8 + 1;
        }
      }
      return lVar7;
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      cVar3 = fn_82ABE190(iVar1);
      if (cVar3 != '\0') {
        lVar7 = -1;
        goto LAB_82b81cd0;
      }
    }
    iVar1 = *(int *)(iVar1 + 8);
  } while( true );
}

