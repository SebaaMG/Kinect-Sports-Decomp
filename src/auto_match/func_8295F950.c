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
extern unsigned int *auStack_48;
extern int fn_8295D318();
extern int fn_82963318();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


void fn_8295F950(int param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [18];
  
  puVar1 = *(uint **)(param_1 + 0x104);
  uVar2 = *puVar1;
  uVar3 = puVar1[3];
  uVar4 = puVar1[4];
  uVar5 = uVar2 & 0xfffff;
  fn_82963318(puVar1,0,&iStack_50);
  fn_82963318(*(undefined4 *)(param_1 + 0x104),1,&uStack_4c);
  fn_82963318(*(undefined4 *)(param_1 + 0x104),2,auStack_48);
  bVar6 = false;
  if (param_3 != 0) {
    uVar7 = 0;
    piVar8 = &iStack_50;
    do {
      if (bVar6) break;
      if ((*piVar8 != 0) && (uVar9 = 0, (uVar2 & 0xfffff) != 0)) {
        iVar10 = 0;
        iVar11 = 0;
        do {
          if ((*(uint *)(*(int *)(*(int *)(*piVar8 + iVar11) * 4 + *(int *)(param_1 + 0x14)) +
                        iVar10) & 0x1000000) != 0) {
            bVar6 = true;
            break;
          }
          uVar9 = uVar9 + 1;
          iVar11 = iVar11 + 4;
          iVar10 = iVar10 + 0x80;
        } while (uVar9 < uVar5);
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar7 < 3);
  }
  fn_8295D318(param_1,param_2,uVar4,uVar3,iStack_50,uStack_4c,auStack_48[0],uVar5);
  return;
}

