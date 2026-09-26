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
extern unsigned int *auStack_60;
extern unsigned int fStack_50;
extern int fn_82250A18();
extern int fn_823B65F8();
extern int fn_823B6A20();
extern unsigned int iStack_6c;
extern unsigned int lbl_821B9BC8;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_4c;
extern unsigned int uStack_64;
extern unsigned int uStack_68;


void fn_82453C20(double param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  longlong lVar5;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined **ppuStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  float fStack_50;
  undefined1 uStack_4c;
  
  iVar4 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar4 = fn_82250A18();
  }
  if (*(char *)(iVar4 + 4) != '\0') {
    piVar1 = *(int **)(param_2 + 0x40);
    uVar2 = piVar1[0x45];
    ppuStack_70 = &lbl_821B9BC8;
    lVar5 = (ulonglong)uVar2 - 4;
    puVar3 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    fStack_50 = (float)param_1;
    iStack_6c = (int)lVar5 - ((uVar2 - 5) + (uint)(lVar5 == 0));
    uStack_68 = param_3;
    uStack_64 = param_4;
    uStack_4c = param_6;
    iVar4 = fn_823B6A20(*(undefined4 *)(*piVar1 + 0x8c));
    if (iVar4 != 0) {
      fn_823B65F8(*(undefined4 *)(**(int **)(param_2 + 0x40) + 0x8c),&ppuStack_70);
    }
  }
  return;
}

