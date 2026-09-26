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
extern unsigned int *auStack_58;
extern int fn_82949650();
extern int fn_82963318();
extern unsigned int iStack_60;
extern unsigned int uStack_5c;


void fn_82949AB0(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 auStack_58 [22];
  
  puVar1 = *(uint **)(param_1 + 0x104);
  uVar2 = *puVar1;
  uVar3 = puVar1[3];
  uVar4 = puVar1[4];
  fn_82963318(puVar1,0,&iStack_60);
  fn_82963318(*(undefined4 *)(param_1 + 0x104),1,&uStack_5c);
  fn_82963318(*(undefined4 *)(param_1 + 0x104),2,auStack_58);
  bVar5 = false;
  if (param_4 != 0) {
    uVar6 = 0;
    piVar7 = &iStack_60;
    do {
      if (bVar5) break;
      if ((*piVar7 != 0) && (uVar8 = 0, (uVar2 & 0xfffff) != 0)) {
        iVar9 = 0;
        iVar10 = 0;
        do {
          if ((*(uint *)(*(int *)(*(int *)(*piVar7 + iVar10) * 4 + *(int *)(param_1 + 0x14)) + iVar9
                        ) & 0x1000000) != 0) {
            bVar5 = true;
            break;
          }
          uVar8 = uVar8 + 1;
          iVar10 = iVar10 + 4;
          iVar9 = iVar9 + 0x80;
        } while (uVar8 < (uVar2 & 0xfffff));
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar6 < 3);
  }
  fn_82949650(param_1,param_2,param_3,uVar4,uVar3,iStack_60,uStack_5c,auStack_58[0]);
  return;
}

