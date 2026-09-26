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
extern int fn_82275128();
extern int fn_82F6A548();
extern int fn_82F6A594();


void fn_82477F00(undefined8 param_1,double param_2,double param_3,double param_4)

{
  bool bVar1;
  int iVar3;
  undefined8 uVar2;
  double dVar4;
  
  dVar4 = (double)fn_82F6A548();
  iVar3 = fn_82275128();
  iVar3 = *(int *)(*(int *)(iVar3 + 8) * 4 + iVar3);
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + 0x40) == '\0') {
LAB_82477f58:
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (*(char *)(iVar3 + 0x42) == '\0') goto LAB_82477f58;
    }
    if ((((bVar1) && (dVar4 < (double)*(float *)(iVar3 + 0x24))) &&
        ((double)*(float *)(iVar3 + 0x24) < param_2)) &&
       ((param_3 < (double)*(float *)(iVar3 + 0x28) &&
        (uVar2 = 1, (double)*(float *)(iVar3 + 0x28) < param_4)))) goto LAB_82477f94;
  }
  uVar2 = 0;
LAB_82477f94:
  fn_82F6A594(uVar2);
  return;
}

