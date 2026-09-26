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
extern int fn_8269B718();


void fn_82717350(int *param_1)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  uVar1 = param_1[0x23];
  lVar3 = (**(code **)(*param_1 + 0x40))();
  if ((lVar3 != 0) && (uVar5 = 0, param_1[0x2a] != 0)) {
    iVar6 = 0;
    do {
      uVar4 = *(uint *)(iVar6 + param_1[0x29]);
      if (uVar4 != 0) {
        piVar7 = (int *)(-(uint)((*(byte *)(uVar4 + 0x66) & 0x80) != 0) & uVar4);
        if (piVar7 != (int *)0x0) {
          if (((uint)param_1[0x23] >> 2 & 1) == 0) {
            bVar2 = false;
            if ((uVar1 >> 2 & 1) != 0) goto LAB_827173d4;
          }
          else {
LAB_827173d4:
            bVar2 = true;
          }
          if (bVar2) {
            uVar4 = piVar7[0x23] | 4;
          }
          else {
            uVar4 = piVar7[0x23] & 0xfffffffb;
          }
          piVar7[0x23] = uVar4;
          (**(code **)(*piVar7 + 0x10c))(piVar7);
          fn_8269B718(piVar7,lVar3);
        }
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar5 < (uint)param_1[0x2a]);
  }
  return;
}

