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
extern unsigned int *auStack_230;
extern unsigned int *auStack_240;
extern int fn_82CE5410();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;


void fn_82D2B688(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 in_r0;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [560];
  
  if (param_2 == 0) {
    return;
  }
  iVar3 = 0;
  if (0 < param_1[1]) {
    puVar5 = (uint *)*param_1;
    do {
      if ((*puVar5 <= param_2) && (param_2 <= *puVar5 + 0x9b0)) {
        uVar1 = ((uint *)*param_1)[iVar3];
        iVar4 = *(int *)(uVar1 + 0xa04) + -1;
        *(int *)(uVar1 + 0xa04) = iVar4;
        if (iVar4 != 0) {
          return;
        }
        uVar2 = *(undefined4 *)(iVar3 * 4 + *param_1);
        iVar4 = fn_82CE5410();
        (**(code **)(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),uVar2,0xa08);
        iVar4 = param_1[1] + -1;
        param_1[1] = iVar4;
        if (iVar4 == iVar3) {
          return;
        }
        *(undefined4 *)(*param_1 + iVar3 * 4) = *(undefined4 *)(iVar4 * 4 + *param_1);
        return;
      }
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar3 < param_1[1]);
  }
  fn_82CEE578(auStack_240,auStack_230,0x200);
  fn_82CEDB38(auStack_240,0xffffffff82134614);
  iVar3 = (**(code **)(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,3,0xffffffff90355365,auStack_230,0xffffffff821345b8,0xa3);
  if (iVar3 != 0) {
    trapWord(0x1f,in_r0,0x16);
  }
                    /* WARNING: Subroutine does not return */
  fn_82CED958(auStack_240);
}

