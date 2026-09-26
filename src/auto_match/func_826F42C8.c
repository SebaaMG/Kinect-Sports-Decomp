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
extern int fn_8267B890();
extern int fn_82687270();
extern int fn_82687F98();
extern int fn_826D6828();
extern int fn_826F30F0();
extern int fn_82768968();


bool fn_826F42C8(undefined8 param_1,int *param_2,int *param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar5;
  char cVar7;
  int iVar6;
  ulonglong uVar4;
  uint uVar8;
  
  uVar8 = 0;
  if (*(int *)(param_4 + 0x4c) != 0) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(*(int *)(param_4 + 0x48) + iVar6);
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x1c) + 0xc) + 0x20) + 0x98);
      sync(1);
      while (iVar1 != 0) {
        piVar2 = *(int **)(iVar1 + 4);
        iVar5 = (**(code **)(*piVar2 + 0x38))(piVar2);
        if ((iVar5 != 0) && (cVar7 = fn_826D6828(param_2,piVar2), cVar7 != '\0')) {
          iVar6 = *(int *)(iVar3 + 0x1c);
          if ((*(char *)(iVar6 + 0x40) == '\0') || (*(uint *)(iVar6 + 0x1c) <= *(uint *)(iVar1 + 8))
             ) {
            fn_826F30F0(iVar6 + 0x18,param_3);
          }
          else {
            fn_82687F98(param_3,(ulonglong)*(uint *)(iVar6 + 0x20) +
                                      ((ulonglong)*(uint *)(iVar1 + 8) & 0x1fffffff) * 8);
          }
          return true;
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        sync(1);
      }
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar8 < *(uint *)(param_4 + 0x4c));
  }
  cVar7 = (**(code **)(*param_2 + 0x40))(param_2);
  if ((cVar7 == '\0') && (iVar6 = (**(code **)(*param_2 + 0x3c))(param_2), iVar6 != 0)) {
    param_2[5] = param_2[5] | 0x40;
  }
  if (*param_3 == 0) {
    uVar4 = fn_8267B890(param_5,0x2c,0);
    if ((uVar4 & 0xffffffff) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = fn_82768968(uVar4,param_2,param_3[1]);
    }
    if (*param_3 != 0) {
      fn_82687270();
    }
    *param_3 = iVar6;
  }
  return *param_3 != 0;
}

