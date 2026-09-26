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
extern int fn_826BCD88();
extern int fn_82790148();
extern int fn_827901D8();
extern int fn_82791560();


void fn_82791A60(int param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  short *psVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)(param_1 + 8);
  *param_2 = *(undefined4 *)(param_1 + 8);
  bVar3 = false;
  *param_3 = 0;
  psVar5 = *(short **)(param_1 + 8);
  if (psVar5 < *(short **)(param_1 + 0x10)) {
    do {
      uVar1 = *(uint *)(param_1 + 0x14);
      if ((((uVar1 == 0x3d) || (uVar1 == 0x3e)) || (uVar1 == 0x3c)) ||
         ((uVar1 == 0x2f || (iVar4 = fn_826BCD88(0xffffffff820094c8,uVar1 & 0xffff), iVar4 != 0))))
      break;
      if ((*(char *)(param_1 + 0x18) == '\0') || (bVar2 = true, *psVar5 != 0x26)) {
        bVar2 = false;
      }
      if (bVar2) {
        if (!bVar3) {
          *(undefined4 *)(param_1 + 0x24) = 0;
          fn_82790148(param_1,*param_2,*param_3);
          bVar3 = true;
        }
        fn_827901D8(param_1,*(undefined4 *)(param_1 + 0x14));
      }
      else {
        iVar4 = *(int *)(param_1 + 0xc) - (int)psVar5 >> 1;
        if (bVar3) {
          fn_82790148(param_1,*puVar6,iVar4);
        }
        else {
          *param_3 = iVar4 + *param_3;
        }
      }
      fn_82791560(puVar6);
      psVar5 = (short *)*puVar6;
    } while (psVar5 < *(short **)(param_1 + 0x10));
  }
  if (bVar3) {
    *param_2 = *(undefined4 *)(param_1 + 0x1c);
    *param_3 = *(int *)(param_1 + 0x24);
  }
  return;
}

