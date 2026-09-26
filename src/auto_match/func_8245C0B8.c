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
extern int fn_82522FF0();


undefined8 fn_8245C0B8(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  double dVar6;
  
  if ((*(int *)(param_1 + 0x588) != 0) || (*(int *)(param_1 + 0x584) != 0)) {
    if ((*(int *)(param_1 + 0x58c) == 0) || (bVar1 = true, *(int *)(param_1 + 0x574) == 0)) {
      bVar1 = false;
    }
    if (((*(int *)(param_1 + 0xc4) != 0) || (*(int *)(param_1 + 0x584) != 0)) ||
       (bVar2 = false, bVar1)) {
      bVar2 = true;
    }
    if (*(int *)(param_1 + 0x574) == 0) {
      bVar1 = false;
      iVar5 = 0;
      puVar4 = (undefined4 *)(param_1 + 0x568);
      do {
        iVar3 = (**(code **)(*(int *)*puVar4 + 0xc))();
        if (iVar3 != 0) {
          bVar1 = true;
          break;
        }
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar5 < 2);
      dVar6 = (double)fn_82522FF0();
      if (((!bVar1) || (dVar6 - *(double *)(param_1 + 0x688) < *(double *)(param_1 + 0x680))) &&
         ((!bVar2 && (*(int *)(param_1 + 0x6a4) == 3)))) {
        return 0;
      }
    }
    if (*(int *)(param_1 + 0x57c) != 0) {
      return 1;
    }
  }
  return 0;
}

