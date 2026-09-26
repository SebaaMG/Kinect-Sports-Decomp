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
extern int fn_82CE5410();
extern int fn_82CE7EE0();
extern int fn_82D000A0();
extern int fn_82D00388();
extern int fn_82E14BC8();
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int lbl_8214B400;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_80;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_82E15D28(undefined4 *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_88;
  int iStack_84;
  uint uStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  
  *param_1 = &lbl_8214B400;
  fn_82D00388(param_1 + 1,0);
  iStack_88 = 0;
  iStack_84 = 0;
  uStack_80 = 0x80000000;
  fn_82E14BC8(param_2,&iStack_88);
  iVar4 = 0;
  if (0 < iStack_84) {
    iVar5 = 0;
    do {
      piVar1 = *(int **)(iVar5 + iStack_88);
      fn_82CE7EE0(&uStack_70);
      uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,&uStack_70);
      fn_82D000A0(param_1 + 1,uVar2,piVar1);
      iVar3 = fn_82CE5410();
      uStack_6c = 0;
      if ((uStack_68 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                  (*(int **)(iVar3 + 0xc),uStack_70,uStack_68 & 0x3fffffff,1);
      }
      iVar4 = iVar4 + 1;
      uStack_70 = 0;
      iVar5 = iVar5 + 4;
      uStack_68 = 0x80000000;
    } while (iVar4 < iStack_84);
  }
  iVar4 = fn_82CE5410();
  iStack_84 = 0;
  if ((uStack_80 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),iStack_88,uStack_80 & 0x3fffffff,4);
  }
  return param_1;
}

