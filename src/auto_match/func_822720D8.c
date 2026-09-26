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
extern int fn_82271780();
extern int fn_82271B78();
extern int fn_82272938();
extern int fn_82279C58();
extern unsigned int lbl_8326B394;


int fn_822720D8(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_50 [80];
  
  iVar7 = param_1[0x28];
  if (param_1[0x26] != 0) {
    piVar6 = (int *)param_1[0x2a];
    param_1[3] = 1;
    param_1[0x2d] = param_1[0x2e];
    piVar1 = piVar6;
    do {
      if (piVar1 == (int *)*piVar6) {
        piVar1 = (int *)piVar6[1];
        break;
      }
      piVar1 = (int *)piVar1[1];
    } while (piVar1[2] != param_1[0x2e]);
    if (piVar1[3] != 0) {
      iVar2 = piVar1[0xc];
      iVar3 = param_1[0x2f];
      uVar5 = fn_82279C58(auStack_50);
      fn_82271B78(param_1,uVar5,iVar3,1,iVar2);
    }
    param_1[0x31] = 1;
    param_1[0x34] = 1;
    param_1[0x30] = 1;
    if ((piVar1[0x42f] == 0) || (piVar1[0xc] == 0)) {
      if (*param_1 != 0) {
        if (param_1[0x36] != 0) {
          param_1[0x36] = 0;
          *(undefined4 *)(*param_1 + 0x1a4) = lbl_8326B394;
        }
        param_1[0x37] = 0;
      }
    }
    else {
      fn_82272938(param_1,piVar1[0x42f],piVar1[2]);
    }
  }
  fn_82271780(param_1,param_1[0x2d]);
  piVar6 = (int *)param_1[0x2a];
  if (*(int *)(piVar6[1] + 8) == param_1[0x2d]) {
    if (*(int *)(piVar6[1] + 0x10b4) == 0) {
      return iVar7;
    }
    piVar1 = (int *)*piVar6;
    bVar4 = false;
    if (piVar6 != piVar1) {
      do {
        piVar6 = (int *)piVar6[1];
        if (piVar6[0x42d] == 0) {
          bVar4 = true;
        }
      } while (piVar6 != piVar1);
      if (bVar4) {
        iVar7 = 5;
        goto LAB_8227224c;
      }
    }
    iVar7 = 3;
  }
  else {
    iVar7 = 4;
LAB_8227224c:
    param_1[0x25] = 1;
  }
  return iVar7;
}

