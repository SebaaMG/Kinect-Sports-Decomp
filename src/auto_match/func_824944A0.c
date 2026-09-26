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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_822315A0();
extern int fn_8223AAC0();
extern U64 storeWordConditionalIndexed();


undefined4 * fn_824944A0(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char in_RESERVE;
  byte in_cr0;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    piVar1 = *(int **)(*param_2 + 0x60);
    uVar9 = ZEXT48(piVar1);
    iVar2 = *(int *)(*param_2 + 0x5c);
    if (uVar9 != 0) {
      do {
        puVar6 = (uint *)(uVar9 + 8);
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,uVar9 + 8);
          *puVar6 = uVar3;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    uVar8 = 0;
    iVar7 = 0;
    if (uVar9 != 0) {
      cVar4 = fn_8223AAC0(uVar9);
      in_cr0 = (cVar4 == '\0') << 1;
      if (cVar4 != '\0') {
        uVar8 = uVar9;
        iVar7 = iVar2;
      }
    }
    iVar2 = *param_4;
    if (uVar8 != 0) {
      fn_822315A0(uVar8);
    }
    if (uVar9 != 0) {
      do {
        puVar6 = (uint *)(uVar9 + 8);
        lVar5 = (ulonglong)*puVar6 - 1;
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(lVar5,0,uVar9 + 8);
          *puVar6 = uVar3;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if ((int)lVar5 == 0) {
        (**(code **)(*piVar1 + 4))(uVar9);
      }
    }
    in_cr0 = (iVar7 != iVar2) << 1;
    if (iVar7 == iVar2) break;
  }
  *param_1 = param_2;
  return param_1;
}

