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
extern unsigned int *auStack_54;
extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82C1EAB8();
extern int fn_82F691F0();
extern unsigned int iStack_5c;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


undefined8 fn_82C1F818(int param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  uint uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 auStack_54 [21];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar5 = param_2 - 0x18;
  auStack_54[0] = 0;
  uStack_60 = 0;
  uStack_58 = (undefined4)uVar5;
  iStack_5c = 0;
  uVar4 = (**(code **)(*piVar1 + 0xc))(*piVar1,uVar5);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  iVar2 = piVar1[1];
  if (*(short *)(iVar2 + 0x3e) < 1) {
    if (*(int *)(iVar2 + 0x78) == 0) {
      uVar4 = fn_82C10AD0(piVar1[0x38],0xb,0x10,iVar2 + 0x78);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      puVar6 = *(undefined4 **)(piVar1[1] + 0x78);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
    }
    puVar6 = (undefined4 *)(*(int *)(piVar1[1] + 0x78) + 4);
    if (*(int *)(*(int *)(piVar1[1] + 0x78) + 4) == 0) {
      uVar4 = fn_82C10AD0(piVar1[0x38],0xb,8,puVar6);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      puVar3 = (undefined4 *)*puVar6;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar6 = (undefined4 *)*puVar6;
      if ((uVar5 & 0xffffffff) < 4) {
        uVar4 = 0xffffffff8050000c;
      }
      else {
        uVar4 = fn_82C1EAB8(param_1,&iStack_5c,auStack_54,&uStack_60,&uStack_58);
        iVar2 = iStack_5c;
        if (-1 < (int)uVar4) {
          if (iStack_5c == 0) {
            *puVar6 = 0;
            *(short *)(piVar1[1] + 0x3e) = *(short *)(piVar1[1] + 0x3e) + 1;
            uVar5 = (uVar5 - uStack_60) - 4;
            if (uVar5 == 0) {
              return uVar4;
            }
            uVar4 = (**(code **)(*piVar1 + 0x14))(*piVar1,uVar5);
            if (-1 < (int)uVar4) {
              *(ulonglong *)(piVar1 + 2) = (uVar5 & 0xffffffff) + *(longlong *)(piVar1 + 2);
              return uVar4;
            }
          }
          else {
            uVar4 = fn_82C10AD0(piVar1[0x38],0xb,iStack_5c,puVar6 + 1);
            if (-1 < (int)uVar4) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(puVar6[1],0,iVar2);
            }
          }
        }
      }
      if (puVar6 == (undefined4 *)0x0) {
        return uVar4;
      }
      if (puVar6[1] == 0) {
        return uVar4;
      }
      fn_82C10B28(piVar1[0x38],0xb,puVar6 + 1);
      return uVar4;
    }
  }
  return 0xffffffff8050000c;
}

