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
extern unsigned int *auStack_50;
extern float fRam831d1028;
extern int fn_82271B78();
extern int fn_82271C18();
extern int fn_82272938();
extern int fn_82279C58();
extern unsigned int lbl_8326B394;


int fn_82272608(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_50 [80];
  
  iVar6 = param_1[0x28];
  iVar1 = *(int *)(param_1[0x2a] + 4);
  if (param_1[0x26] != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0x30);
      iVar3 = param_1[0x2f];
      uVar4 = fn_82279C58(auStack_50);
      fn_82271B78(param_1,uVar4,iVar3 == 0,0,uVar2);
    }
    param_1[0x30] = 1;
    bVar7 = false;
    param_1[0x31] = 1;
    param_1[0x34] = 1;
    if (*(int *)(iVar1 + 0xc) != 0) {
      bVar7 = *(int *)(*(int *)(iVar1 + 0xc) + 0x14) != 0;
    }
    fn_82271C18(param_1,3,*(undefined4 *)(iVar1 + 8),bVar7);
  }
  if (fRam831d1028 <= (float)param_1[0x1a]) {
    if ((*(int *)(iVar1 + 0x10bc) == 0) || (*(int *)(iVar1 + 0x30) == 0)) {
      if (*param_1 != 0) {
        if (param_1[0x36] != 0) {
          param_1[0x36] = 0;
          *(undefined4 *)(*param_1 + 0x1a4) = lbl_8326B394;
        }
        param_1[0x37] = 0;
      }
    }
    else {
      fn_82272938(param_1,*(int *)(iVar1 + 0x10bc),*(undefined4 *)(iVar1 + 8));
    }
  }
  piVar5 = *(int **)(param_1[0x13] + 0xc);
  do {
    if (piVar5 == *(int **)(param_1[0x13] + 0x10)) {
      bVar7 = false;
LAB_8227274c:
      if (!bVar7) {
        iVar6 = 2;
        param_1[0x14] = 0;
      }
      return iVar6;
    }
    if (*piVar5 == param_1[0x14]) {
      bVar7 = true;
      goto LAB_8227274c;
    }
    piVar5 = piVar5 + 1;
  } while( true );
}

