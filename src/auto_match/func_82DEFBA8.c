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
extern int fn_82D89E30();
extern int fn_82D89E78();


undefined1 * fn_82DEFBA8(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  char *pcVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_50 [80];
  
  if (*(char *)(param_3 + 0x18) == '\x01') {
    param_3 = *(char *)(param_3 + 0x10) + param_3;
  }
  else {
    param_3 = 0;
  }
  if (*(char *)(param_4 + 0x18) == '\x01') {
    param_4 = *(char *)(param_4 + 0x10) + param_4;
  }
  else {
    param_4 = 0;
  }
  iVar7 = *(int *)(param_2 + 0x2c);
  if ((iVar7 == 0) ||
     (pcVar3 = (char *)(**(code **)(*(int *)(iVar7 + 8) + 4))(auStack_50,iVar7 + 8), *pcVar3 != '\0'
     )) {
    if ((param_3 != 0) && (param_4 != 0)) {
      uVar1 = fn_82D89E30(param_4);
      uVar2 = fn_82D89E30(param_3);
      iVar7 = param_4;
      if ((((~(uVar2 ^ uVar1) & 0xffffffff) >> 0x1f) + (ulonglong)(uVar2 <= uVar1) & 1) == 0) {
        iVar7 = param_3;
        param_3 = param_4;
      }
      iVar4 = fn_82D89E30(iVar7);
      lVar8 = 0;
      if (0 < iVar4) {
        do {
          iVar5 = fn_82D89E78(iVar7,lVar8);
          if (((iVar5 != 0) &&
              (iVar6 = (**(code **)(**(int **)(iVar5 + 0xc) + 0x20))(), iVar6 != 0xb)) &&
             ((*(int *)(iVar5 + 0x14) == param_3 || (*(int *)(iVar5 + 0x18) == param_3))))
          goto LAB_82defc30;
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < iVar4);
      }
    }
    *param_1 = 1;
  }
  else {
LAB_82defc30:
    *param_1 = 0;
  }
  return param_1;
}

