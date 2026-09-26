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


uint fn_8299B3D0(int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6,
                  undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  uVar4 = 0;
  *param_7 = 0;
  if (param_3 < param_4) {
    piVar7 = (int *)(param_3 * 4 + param_2);
    do {
      iVar1 = *piVar7;
      if ((iVar1 != 0) && (uVar5 = 0, *(int *)(iVar1 + 4) != 0)) {
        iVar6 = 0;
        do {
          iVar2 = *(int *)(iVar6 + *(int *)(iVar1 + 8));
          iVar3 = *(int *)(iVar2 * 4 + *(int *)(param_1 + 0x14));
          if ((iVar2 == param_5) || (*(int *)(iVar3 + 0x38) == param_5)) {
            *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_6 + 0xc);
            *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(param_6 + 0x10);
            *param_7 = 1;
            uVar4 = param_3;
          }
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar5 < *(uint *)(iVar1 + 4));
      }
      param_3 = param_3 + 1;
      piVar7 = piVar7 + 1;
    } while (param_3 < param_4);
  }
  return uVar4;
}

