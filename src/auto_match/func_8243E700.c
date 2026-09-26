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
extern int fn_8243E578();
extern int fn_8243E640();


longlong fn_8243E700(int param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar4;
  longlong lVar3;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  
  puVar4 = (uint *)fn_8243E578();
  if (puVar4 == (uint *)0x0) {
    lVar3 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    lVar3 = 0;
    uVar7 = 0;
    uVar1 = (*(int *)(param_1 + 8) - iVar2) / 0x5c;
    if (uVar1 != 0) {
      uVar6 = (ulonglong)*puVar4;
      iVar8 = 0;
      do {
        if (*(int *)(iVar8 + iVar2) != (int)uVar6) {
          if (param_3 == 0) {
            iVar5 = fn_8243E640(param_1);
            if (iVar5 != 0) goto LAB_8243e78c;
          }
          else if (puVar4[0x11] < *(uint *)(iVar8 + iVar2 + 0x44)) {
LAB_8243e78c:
            lVar3 = lVar3 + 1;
          }
        }
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + 0x5c;
      } while (uVar7 < uVar1);
    }
    lVar3 = lVar3 + 1;
  }
  return lVar3;
}

